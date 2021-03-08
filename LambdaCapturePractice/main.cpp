#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
using namespace std;
//todo fix the fucking 0 guesses left thing and your booooolin.
int main() {
    int start; //Squareroot of first number in range
    int howMany; //Amount of numbers to generate
    std::vector<int> myVector; //Holds numbers
    std::cout << "Start where?" << std::endl;
    cin >> start;

    cout << "How many?" << endl;
    cin >> howMany;

    for(int i = 0; i < howMany; ++i) {
        myVector.push_back(pow((start + i), 2));
    }

    //Generate rand number between, 2-4
    int randInt;
    srand(time(NULL));
    randInt = 2;//rand() % 4 + 2;

    //To each element, multiply by randInt
    std::for_each(myVector.begin(),myVector.end(),[=](int &n){n*=randInt;});
    cout << "I generated " << howMany << " square numbers. Do you know what each number is after multiplying it by " << randInt << "?" << endl;
    std::for_each(myVector.begin(),myVector.end(),[=](int &n){cout << n << endl;});
    int usrNum;
    int dist1;
    int dist2;
    bool fouledOut = false;
    do {
        cin >> usrNum;
        std::vector<int>::iterator found{std::find(myVector.begin(), myVector.end(), usrNum)};
        if(found == myVector.end()){
            fouledOut = true;
            //Finds closest element to the user input
            auto iter = std::min_element(myVector.begin(), myVector.end(), [&] (auto &a, auto &b){
                dist1 = std::abs(a - usrNum);
                dist2 = std::abs(b - usrNum);
               return (dist1 < dist2);
            });
            //Check if the number in the list is further than 4 away
           if((std::abs(*iter - usrNum)) < 4) {
               cout << usrNum << " is wrong! Try " << *iter << " next time." << endl;
                break;
           } else {
               cout << usrNum << " is wrong!" << endl;
               break;
           }
        } else { //If the number is found, delete from list
            myVector.erase(found);
            cout << "Nice! " << myVector.size() << " number(s) left." << endl;
        }
    } while (!myVector.empty());
    if(!fouledOut) {
        cout << "Nice you found all the number, good job!" << endl;
    }
    return 0;
}

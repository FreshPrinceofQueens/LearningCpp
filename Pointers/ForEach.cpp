//
// Created by Tayo Oduyemi on 2020-12-14.
//
#include <string>
#include <iostream>

using namespace std;
string names[8] {"Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly"};

int main() {
    string name;
    cout << "Enter a name: ";
    cin >> name;
    bool nameFound = false;
    for(auto element : names) {
        if(element == name) {
            cout << name << " was found!" << endl;
            nameFound = true;
            break;
        }
    }
    if(!nameFound) {
        cout << name << " not found!" << endl;
    }
}
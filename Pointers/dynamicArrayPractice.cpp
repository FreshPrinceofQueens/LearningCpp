//
// Created by Temitayo Oduyemi on 2020-12-08.
//
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int length;
    cout << "How many names do you want to enter?" << endl;
    cin >> length;
    cin.ignore();
    string *names{new string[length]};
    for(int i = 0; i < length; ++i) {
        string name;
        cout << "Enter the name: ";
        getline(cin, name);
        names[i] = name;
        cout << '\n';
    }
    std::sort(names, names + length);
    for(int  i = 0; i < length; ++i) {
        cout << names[i] << endl;
    }
    delete[] names;
}
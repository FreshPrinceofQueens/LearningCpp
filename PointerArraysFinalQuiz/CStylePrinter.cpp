//
// Created by Tayo Oduyemi on 2020-12-15.
//
#include <iostream>
using namespace std;
void printCStyleString(char *cString) {
    while(*cString != '\0') {
        cout << *cString;
        ++cString;
    }

        cout << *cString;
        ++cString;
}

int main() {
    char hello[] = "Hello World!";
    printCStyleString(hello);
}
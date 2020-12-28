//
// Created by Tayo Oduyemi on 2020-12-27.
//
#include <iostream>
#include <string>
using namespace std;
void getBinaryRepresentation(int n) {
    if(n < 0) {
        unsigned int n = n;
    }
    if(n == 0) {
        cout << 1;
        return;
    } else if(n <= 1) {
        cout << 0;
        return;
    }
    else if(n % 2 == 1) {
        getBinaryRepresentation(n / 2);
        cout << "1";

    } else if(n % 2 == 0) {
        getBinaryRepresentation(n / 2);
        cout <<  "0";
    }

}
//This is a streamlined version given as solution to the learncpp quiz
//Author: Alex
void simplifiedGetBinaryRepresentation( unsigned int n) {

    if(n > 1) {
        simplifiedGetBinaryRepresentation(n / 2);
    }
    cout << n % 2;
}
/*
else {
return remainder += std::to_string(std::stoi(getBinaryRepresentation(n / 2)));
}*/
int main() {
    simplifiedGetBinaryRepresentation(-15);
}
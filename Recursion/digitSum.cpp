//
// Created by Tayo Oduyemi on 2020-12-27.
//
#include <iostream>
using namespace std;
int digitSum(int n) {
    if(n %  10  == n) {
        return n;
    } else {
        return digitSum(n / 10) + n % 10;
    }

}
/*
int main() {
    cout << digitSum(93427) << endl;
} */
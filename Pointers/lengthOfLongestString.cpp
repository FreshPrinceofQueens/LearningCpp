//
// Created by Temitayo Oduyemi  on 2020-12-07.
//
#include <iostream>
#include <string>

using namespace std;
int lengthOfLongestSubstring(string s) {
    bool character[127] {};
    string subStr = "";
    int max = 0;
    for(int i = 0; i < size(s); ++i) {
        cout << subStr << endl;
        cout << "Current index: " << i << endl;
        for(int j = 0; j < 127; ++j) {
            if(s.size() == 1) {
                return 1;
            }
            if((int)s[i] == j && character[j] == false) {
                subStr += s[i];
                character[j] = true;
                if(subStr.size() > max)
                    max = subStr.size();
            } else if((int)s[i] == j && character[j] == true) {
                if(subStr.size() > max)
                    max = subStr.size();
                subStr = "";
                for(int k = 0; k < 127; ++k) {
                    character[k] = false;
                }
                i--;
                break;
            }
        }
    }
    return max;
}
/*
int main() {
   int length =  lengthOfLongestSubstring("pwwkew");
   cout << length << endl;
}*/
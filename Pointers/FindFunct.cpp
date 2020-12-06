//
// Created by Tayo Oduyemi on 2020-12-05.
//

#include <iostream>
#include <iterator>
int *find(int *begin, int *end, int target) {
    while (begin != end) {
        if(*begin == target) {
            return begin;
        }
        ++begin;
    }
    return end;
}
int main() {
    int arr[]{ 2, 5, 4, 10, 8, 20, 16, 40 };

    // Search for the first element with value 20.
    int *found{ find(std::begin(arr), std::end(arr), 80) };

    // If an element with value 20 was found, print it.
    if (found != std::end(arr))
    {
        std::cout << *found << '\n';
    }

    return 0;
    return 0;
}
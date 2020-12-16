//
// Created by Tayo Oduyemi on 2020-12-15.
//

#include <iostream>
#include <array>
#include <algorithm>
#include <numeric>
#include <iterator>
using namespace std;
enum PLAYER_ITEMS {
    POTIONS,
    TORCHES,
    ARROWS
};

std::array<int, 3> items = {2,5,10};
int countTotalItems(const std::array<int, 3> &itemArr) {
    return std::reduce(itemArr.begin(), itemArr.end());

}
/*
int main() {
    cout << "The player has a total of " << countTotalItems(items) << " items in their inventory\n" << items[TORCHES] << " of which are torches" << endl;
}*/
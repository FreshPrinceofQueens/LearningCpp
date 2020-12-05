#include <iostream>

using namespace std;

float highTemp[365]{0.0};
namespace  animals {
    enum ANIMALS {
        CHICKEN,
        DOG,
        CAT,
        ELEPHANT,
        DUCK,
        SNAKE,
        MAX_ANIMALS
    };
}
int animalsList[animals::MAX_ANIMALS] {2, 4, 4, 4, 2, 0};
/* int main() {
    for(int i = 0; i < size(highTemp); ++i) {
        cout << highTemp[i] << endl;
    }
    cout << "An elephant has " << animalsList[animals::ELEPHANT] << " legs";
    return 0;
} */
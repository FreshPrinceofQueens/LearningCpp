#include <iostream>
int factorial(int n ) {
     if(n == 0) {
         return 1;
     }
     return factorial(n - 1) * n;
}
/*
int main() {
    for(int count = 0; count < 7; ++count)
        std::cout << factorial(count) << std::endl;
    return 0;
} */

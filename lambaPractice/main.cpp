#include <iostream>
#include <string>
#include <array>
using namespace std;
struct Student {
    string name;
    int points;
};
std::array<Student, 8> arr{
        { { "Albert", 3 },
                { "Ben", 5 },
                { "Christine", 2 },
                { "Dan", 8 }, // Dan has the most points (8).
                { "Enchilada", 4 },
                { "Francis", 1 },
                { "Greg", 3 },
                { "Hagrid", 5 } }
};
/*
int main() {
    Student *max_student = std::max_element(arr.begin(), arr.end(), [] (const Student &a, const Student &b) {return a.points < b.points;});
    std::cout << max_student->name << " is the best student" << std::endl;
    return 0;
}*/

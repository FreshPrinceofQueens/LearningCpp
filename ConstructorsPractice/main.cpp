#include <iostream>
#include <string>
#include <cstdint>
using namespace std;

class Ball {
private:
    string m_color{"black"};
    double m_radius{};

public:
    Ball(string color = "black", double radius = 10) {
        m_color = color;
        m_radius = radius;
    }
    Ball(double radius) {
        m_color = "black";
        m_radius = radius;
    }

    void print() {
        cout << "Colour: " << m_color << ", Radius: " << m_radius << endl;
    }
};
class RGBA {
private:
    uint_fast8_t m_red;
    uint_fast8_t m_blue;
    uint_fast8_t m_green;
    uint_fast8_t m_alpha;

public:
    RGBA(uint_fast8_t red=0, uint_fast8_t blue=0, uint_fast8_t green=0, uint_fast8_t alpha=255)
            : m_red{red}, m_blue{blue}, m_green{green}, m_alpha{alpha} {
    }
    void print() {
        cout << "r=" << (int) m_red << " g=" << (int)m_green << " b=" << (int)m_blue << " a=" << (int)m_alpha << endl;
    }
};
int main() {

    Ball def{};
    def.print();

    Ball blue{ "blue" };
    blue.print();

    Ball twenty{ 20.0 };
    twenty.print();

    Ball blueTwenty{ "blue", 20.0 };
    blueTwenty.print();


    RGBA teal{ 0, 127, 127 };
    teal.print();
    return 0;
}

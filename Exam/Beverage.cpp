//
// Created by Tayo Oduyemi on 2020-12-15.
//

#include <vector>
#include <string>
#include "Beverage.h"
#include <stdio.h>

using namespace std;



float Point::getX() {
    return this->x;
};

float Point::getY() {
    return this->y;
}

Point::Point(float x, float y) : x(x), y(y) {};

//Outline
Outline::Outline(const float xValues[], const float yValues[], const int size) {
    if (size < 0){
        throw BadOutline("Invalid Number of Points!");
    }
    Point** arrayOfPoints = new Point *[size];
    for (int i = 0; i < size; i++) {
        Point *temp = new Point(xValues[i], yValues[i]);
        arrayOfPoints[i] = temp;
    }
};
Outline::~Outline() {
    for(int i = 0; i < size; ++i) {
        delete arrayOfPoints[i];
    }
    delete[] arrayOfPoints;
}
Outline::Outline(const Outline &outline) {
    size = outline.size;
    for(int i = 0; i < size; ++i) {
        arrayOfPoints[i] = outline.arrayOfPoints[i];
    }
}
Point* Outline::getPoint(int index) {
    if (index > size) {
        throw BadOutline("Index out of bounds");
    }
    return arrayOfPoints[index];

}

int Outline::getSize() const {
    return size;
};

BadPoint::BadPoint(const string& m) : message(m) {}
string& BadPoint::what()  {
    return message;
}

BadOutline::BadOutline(const string& m) : message(m) {}
string& BadOutline::what()  {
    return message;
}
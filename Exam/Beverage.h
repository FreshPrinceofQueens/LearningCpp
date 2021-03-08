//
// Created by Tayo Oduyemi on 2020-12-15.
//

#ifndef EXAM_BEVERAGE_H
#define EXAM_BEVERAGE_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Point {
public:
    float getX();
    float getY();

private:
public:
    Point(float x, float y);

private:
    float x;
    float y;

};

class Outline {
public:
    Outline(const float xValues[], const float yValues[], const int size);
    Outline(const Outline &outline);//copy constructor
    ~Outline();//destructor
    Point* getPoint(int index);

private:
    int size;
public:
    int getSize() const;

private:
    Point **arrayOfPoints;
};

//Exception Classes
//exception is 0,0 to 200, 200
class BadPoint {
public:
    BadPoint(const string&);
    string &what();
private:
    string message;
};

class BadOutline {
public:
    BadOutline(const string&);
    string &what();
private:
    string message;
};

#endif //EXAM_BEVERAGE_H

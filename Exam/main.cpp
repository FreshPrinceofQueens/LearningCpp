#include <iostream>
#include "Beverage.h"
#include <string>
using namespace std;
void showPoint(Point p) {
    cout << "(" << p.getX() << "," << p.getY() << ")" << endl;
} // end showPoint

void ShowOutline(Outline& out){
    cout << "Contents of outline;" << endl;
    for (int i = 0; i<out.getSize(); i++){
        showPoint(*out.getPoint(i));
    }
} // end showoutline

int main() {
    Point p(5.0f, 6.0f);
    cout << "Legal point: ";
    showPoint(p);
    cout << "Illegal point: ";
    try {
        Point pbad(-10.0f, 300.0f);

    }catch (BadPoint& bp){
        cout << bp.what() << endl;
    }


    float xVals[] = {2.0f, 4.0f, 4.0f, 1.0f};
    float yVals[] = {7.0f, 8.0f, 3.0f, 2.0f};

    Outline out(xVals, yVals, 4);
    cout << "Legal Outline: ";
    //showOutline(out);
    cout << "Illegal index: ";
    try {
        showPoint(out.getPoint(100));
    } catch (BadOutline& bo){
        cout << bo.what() << endl;
    }
    cout << "Illegal Outline:" ;
    try {
        Outline outBad(xVals, yVals, -10);
    }catch (BadOutline& bo) {
        cout << bo.what() << endl;
    }

    cout << "Another Illegal Outline: ";
    float yBadVals[] = {70.f, -10.0f, 3.0f, 2.0f};
    try {
        Outline outBad(xVals, yBadVals, 4);
    }catch (BadPoint& bp){
        cout << bp.what() << endl;
    }catch (BadOutline& bo) {
        cout << bo.what() << endl;
    }
    return 0;
}

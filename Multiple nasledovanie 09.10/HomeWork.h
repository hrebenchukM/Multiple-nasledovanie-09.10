#pragma once
#include <iostream>
using namespace std;


class Figura {
public:
    virtual void Print() const = 0;
};


class Square : public Figura {
protected:
    double side;  

public:
    Square(double side) : side(side) {}

    void Print() const  {
      cout << "Square: Side " << side << endl;
    }
};

class Circle : public Figura {
protected:
    double radius;  

public:
    Circle(double radius) : radius(radius) {}

    void Print() const  {
        cout << "Circle: Radius " << radius << endl;
    }
};

class CircleInscribedInASquare : public Square, public Circle {
public:
    CircleInscribedInASquare(double side) : Square(side), Circle(side / 2.0) {}

    void Print() const  {
        Square::Print();
        Circle::Print();
    }
};



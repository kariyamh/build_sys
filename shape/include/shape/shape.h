#ifndef SHAPE_H
#define SHAPE_H


/// @brief Base class
class Shape {
public:
    virtual double area() = 0;
};

class Rectangle : public Shape {
public:
    Rectangle(double iWidth, double iHeight);
    virtual double area();
private:
    double width;
    double height;
};

class Triangle: public Shape {
public:
    Triangle(double iWidth, double iHeight);
    virtual double area();
private:
    double width;
    double height;
};

#endif
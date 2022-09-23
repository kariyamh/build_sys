#include "build_sys/shape.h"

Rectangle::Rectangle(double iWidth, double iHeight) : 
        width(iWidth), height(iHeight)  {   }

double Rectangle::area() {
    return width * height;
}

Triangle::Triangle(double iWidth, double iHeight) :
        width(iWidth), height(iHeight)  {   }

double Triangle::area() {
    return 0.5 * width * height;
}
#include <iostream>
#include "build_sys/shape.h"


int main() {
	std::cout << "Hello, World" << std::endl;

	Shape* rec = new Rectangle(1.0, 2.0);
	std::cout << "Rectangle Size: " << rec->area() << std::endl;

}

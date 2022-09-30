#include "shape/msg.h"
#include <string>

std::string IntMsg::getType() {
    return TYPE;
}

void IntMsg::setData(int i) {
    data = i;
}

int IntMsg::getData() {
    return data;
}

std::string DblMsg::getType() {
    return TYPE;
}

void DblMsg::setData(double d) {
    data = d;
}

double DblMsg::getData() {
    return data;
}
//
// Created by Iryna Zinko on 9/29/21.
//

#include <iostream>
#include <cmath>

#include "Circle.h"
#include "Shape.h"

using namespace std;
const int PI = 3.14;

Circle::Circle(int _radius) : Shape(_radius) {
    areaC = new double(0);
    prmtrC = new double(0);
}

Circle::~Circle(void) {
    delete areaC;
    delete prmtrC;
}

double Circle::area() {

    *areaC = PI * pow(*radius, 2);

    return *areaC;
}

double Circle::perimetry() {


    *prmtrC = (2 * *radius * PI);

    return *prmtrC;
}

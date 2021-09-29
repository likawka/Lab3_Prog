//
// Created by Iryna Zinko on 9/29/21.
//
#include <iostream>
#include <cmath>

#include "Ellipse.h"
#include "Circle.h"


using namespace std;
const int PI = 3.14;

Ellipse::Ellipse(int _radius, int _radiusR) : Shape(_radius) {
    areaE = new double(0);
    prmtrE = new double(0);
    radiusR = new int(_radiusR);
}

Ellipse::~Ellipse(void) {
    delete areaE;
    delete prmtrE;
}

double Ellipse::area() {

    *areaE = PI * *radius * *radiusR;
    return *areaE;
}

double Ellipse::perimetry() {

    *prmtrE = 4 * ((PI * *radiusR * *radius + pow((*radiusR - *radius), 2)) / (*radiusR + *radius));

    return *prmtrE;
}

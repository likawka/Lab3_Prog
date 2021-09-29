//
// Created by Iryna Zinko on 9/29/21.
//
#include <iostream>
#include <cmath>

#include "Ring.h"
#include "Circle.h"


using namespace std;
const int PI = 3.14;

Ring::Ring(int _radius, int _radiusR) : Shape(_radius) {
    areaR = new double(0);
    prmtrR = new double(0);
    areaSm = new double(0);
    areaBg = new double(0);
    radiusR = new int(_radiusR);


}

Ring::~Ring(void) {
    delete areaR;
    delete prmtrR;
    delete areaSm;
    delete areaBg;
}

double Ring::area() {
    *areaSm = PI * pow(*radius, 2);
    *areaBg = PI * pow(*radiusR, 2);

    *areaR = *areaBg - *areaSm;

    return *areaR;
}

double Ring::perimetry() {

    *prmtrR = (2 * *radiusR * PI);

    return *prmtrR;
}

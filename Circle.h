//
// Created by Iryna Zinko on 9/29/21.
//


#pragma once

#include <iostream>

#include "Shape.h"

using namespace std;

class Circle : virtual public Shape {

private:
    double *areaC;
    double *prmtrC;
public:

    Circle(int _radius);

    ~Circle(void);

    double area() override;

    double perimetry() override;

};

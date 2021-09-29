//
// Created by Iryna Zinko on 9/29/21.
//

#pragma once

#include "Shape.h"



class Ellipse : virtual public Shape {

private:
    double *areaE;
    double *prmtrE;
    int *radiusR;

public:

    Ellipse(int _radius, int _radiusR);

    ~Ellipse(void);

    double area()override;

    double perimetry()override;

};







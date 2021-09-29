//
// Created by Iryna Zinko on 9/29/21.
//

#pragma once

#include "Shape.h"


class Ring : virtual public Shape {

private:
    double *areaR;
    double *prmtrR;
    int *radiusR;
    double *areaSm;
    double *areaBg;

public:

    Ring(int _radius, int _radiusR);

    ~Ring(void);

    double area() override;

    double perimetry() override;


};




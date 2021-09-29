//
// Created by Iryna Zinko on 9/29/21.
//

#pragma once

#include "Ring.h"



class Ellipse : virtual public Ring {

private:
    double *areaE;
    double *prmtrE;
    int *radiusR;
public:

    Ellipse(int _radius);

    ~Ellipse(void);

    double area()override;

    double perimetry()override;

};







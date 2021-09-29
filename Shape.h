//
// Created by Iryna Zinko on 9/29/21.
//

#pragma once


class Shape {

protected:
    int *radius;

public:

    Shape(int radius_);

    Shape(const Shape &shape);

    ~Shape(void);

    int getShape();

    void SetRadius(int radiusS);

    virtual double area() = 0;

    virtual double perimetry() = 0;

};



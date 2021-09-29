//
// Created by Iryna Zinko on 9/29/21.
//

#pragma once


class Ring {

protected:
    int *radius;

public:

    Ring(int radius_);

    Ring(const Ring &ring);

    ~Ring(void);

    int getRing();

    void SetRadius(int radiusS);

    virtual double area() = 0;
    virtual double perimetry() = 0;

};



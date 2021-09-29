//
// Created by Iryna Zinko on 9/29/21.
//
#include <iostream>
#include "Shape.h"

Shape::Shape(int radius_) {
    radius = new int(radius_);

}

Shape::Shape(const Shape &shape) {
    radius = new int(*shape.radius);
}

Shape::~Shape(void) {
    delete radius;
}

int Shape::getShape() {
    return *radius;
}

void Shape::SetRadius(int radiusS) {
    *this->radius = radiusS;
}
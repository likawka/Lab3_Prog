//
// Created by Iryna Zinko on 9/29/21.
//
#include <iostream>
#include "Ring.h"

Ring::Ring(int radius_) {
    radius = new int(radius_);

}

Ring::Ring(const Ring &ring) {
    radius = new int(*ring.radius);
}

Ring::~Ring(void) {
    delete radius;
}

int Ring::getRing() {
    return *radius;
}

void Ring::SetRadius(int radiusS) {
    *this->radius = radiusS;
}
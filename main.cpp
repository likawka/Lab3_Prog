#include <iostream>
#include "Ring.h"
#include "Ellipse.h"
#include "Circle.h"

using namespace std;

void res(Ring* ring)
{
    cout << endl;
    cout << "\t \t \t \t \t ?????????: " << endl;
    cout << "Площа: " << ring->area() << endl;
    cout << endl;
    cout << "Периметр: " << ring->perimetry() << endl;
}


int main() {
    setlocale(LC_ALL, "ukr");
    Ring* ring;

    int radius(0) , radiusR(0);

    cout << "Введіть основний радіус кільця: ";
    cin >> radius;
    Ring rg(radius);
    ring = &rg;

    cout << "\t \t \t \t \t Результати: " << endl;
    res(ring);


    cout << "Введіть більший радіус еліпса: ";
    cin >> radiusR;


    return 0;

}
#include <iostream>
#include "Shape.h"
#include "Ellipse.h"
#include "Circle.h"
#include "Ring.h"

using namespace std;

void res(Shape *shape) {
    cout << "\t \t \t \t \t Результати: " << endl;
    cout << "Площа: " << shape->area() << endl;
    cout << endl;
    cout << "Периметр: " << shape->perimetry() << endl;
    cout << endl;
}


int main() {

    setlocale(LC_ALL, "ukr");
    char *yn = new char(0);

    cout << endl;
    cout << "====================================================" << endl;
    cout << " Laboratory work №3, Var. 4" << endl;
    cout << " The program was made by Iryna Zinko " << endl;
    cout << endl;

    do {
        Shape *shape;

        int radius(0), radiusR(0);

        cout << "====================================================" << endl;
        cout << "Введіть основний радіус фігури: ";
        cin >> radius;
        cout << "Введіть великий радіус фігури: ";
        cin >> radiusR;
        cout << "====================================================" << endl;


        Circle cc(radius);
        shape = &cc;

        cout << "\t \t \t \t \t Коло: " << endl;
        res(shape);
        cout << "====================================================" << endl;


        Ellipse el(radius, radiusR);
        shape = &el;


        cout << "\t \t \t \t \t Еліпс: " << endl;
        res(shape);
        cout << "====================================================" << endl;


        Ring rg(radius, radiusR);
        shape = &rg;

        cout << "\t \t \t \t \t Кільце: " << endl;
        res(shape);
        cout << "====================================================" << endl;


        cout << "====================================================" << endl;
        cout << "Бажаєте продовжити? Введіть y:   " << endl;
        cin >> *yn;
        cout << "====================================================" << endl;

    } while (*yn == 'y');


    return 0;

}
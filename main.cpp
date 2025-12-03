#include <iostream>
#include "ShapeClass.h"
#include "RectangleClass.h"
#include "CircleClass.h"
#include "LineClass.h"
using namespace std;

int main()
{
    Rectangle r(Point(1,2),Point(4,5));
    r.draw();

    Circle c(Point(3,4));
    c.draw();

    Line l(Point(1,2),Point(4,5));
    l.draw();

    Shape* arr[3];
    arr[0]=&c;
    arr[1]=&r;
    arr[2]=&l;

    for(int i=0;i<3;i++)
    {
        arr[i]->draw();
    }

    cout << "Hello world!" << endl;
    return 0;
}


#include "CircleClass.h"
#include <iostream>
using namespace std;

// const
Circle::Circle(Point CirclePoint)  // Call the parent (GeoShape) constructor first and give it base + height
{
    this->circlePoint=CirclePoint;
    cout<<"Circle is Created"<<endl;
}

void Circle::draw()
{
    cout<<"Circle Point is "<<"("<< circlePoint.getX()<< ","<< circlePoint.getY()<<")"<<endl;
}

// dest
Circle::~Circle()
{
    cout<<"Circle is dead"<<endl;
}



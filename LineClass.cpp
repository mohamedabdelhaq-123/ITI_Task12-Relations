

#include "LineClass.h"
#include <iostream>
using namespace std;

// const
Line::Line(Point firstPoint,Point secondPoint)
{
    this->firstPoint=firstPoint;
    this->secondPoint=secondPoint;
    cout<<"Line is Created"<<endl;
}

void Line::draw()
{
    cout<<"Point 1 is "<<"("<< firstPoint.getX()<< ","<< firstPoint.getY()<<")"<<"Point 2 is "<<"("<< secondPoint.getX()<< ","<< secondPoint.getY()<<")" <<endl;
}

// dest
Line::~Line()
{
    cout<<"Line is dead"<<endl;
}

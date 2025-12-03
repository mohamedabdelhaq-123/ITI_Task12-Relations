

#include "RectangleClass.h"
#include <iostream>
using namespace std;

// const
Rectangle::Rectangle(Point topLeft,Point bottomRight)
{
    this->bottomRight=bottomRight;
    this->topLeft=topLeft;
    cout<<"Rectangle is Created"<<endl;
}

void Rectangle::draw()
{
    cout<<"Point 1 is "<<"("<< topLeft.getX()<< ","<< topLeft.getY()<<")"<<"Point 2 is "<<"("<< bottomRight.getX()<< ","<< bottomRight.getY()<<")" <<endl;
}

// dest
Rectangle::~Rectangle()
{
    cout<<"Rectangle is dead"<<endl;
}


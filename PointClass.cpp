#include <iostream>
#include "PointClass.h"
using namespace std;

Point::Point()
{
    cout<<"Default const."<<endl;
}

Point::Point(int x,int y)
{
    this->x=x;
    this->y=y;
    cout<<"Point Created"<<endl;
}

Point::~Point()
{
    cout<<"Point Died"<<endl;
}


int Point::getX(void)
{
    return x;
}

int Point::getY(void)
{
    return y;
}



#ifndef RECTANGLECLASS_H_INCLUDED
#define RECTANGLECLASS_H_INCLUDED

#include "ShapeClass.h"
#include "PointClass.h"
class Rectangle: public Shape{
    private:

     Point topLeft;
     Point bottomRight;

    public:
    // const
    Rectangle(Point topLeft,Point bottomRight);

    void draw(void)override;
    // dest
    ~Rectangle();
};



#endif // TRIANGLECLASS_H_INCLUDED


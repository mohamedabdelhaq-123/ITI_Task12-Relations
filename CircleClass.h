#ifndef CIRCLECLASS_H_INCLUDED
#define CIRCLECLASS_H_INCLUDED

#include "ShapeClass.h"
#include "PointClass.h"

class Circle: public Shape{
    private:

     Point circlePoint;

    public:
    // const
    Circle(Point circlePoint);

    void draw(void)override;
    // dest
    ~Circle();
};


#endif // TRIANGLECLASS_H_INCLUDED


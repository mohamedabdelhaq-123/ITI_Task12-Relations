#ifndef LINECLASS_H_INCLUDED
#define LINECLASS_H_INCLUDED

#include "ShapeClass.h"
#include "PointClass.h"
class Line: public Shape{
    private:

     Point firstPoint;
     Point secondPoint;

    public:
    // const
    Line(Point firstPoint,Point secondPoint);

    void draw(void)override;
    // dest
    ~Line();
};



#endif // TRIANGLECLASS_H_INCLUDED



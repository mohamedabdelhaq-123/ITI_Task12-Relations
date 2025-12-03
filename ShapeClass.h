#ifndef SHAPECLASS_H_INCLUDED
#define SHAPECLASS_H_INCLUDED


class Shape{        // can't create object from shape due to virtual function

    public:
    // const
    Shape();

    virtual void draw(void)=0;  // pure virtual function

    // dest
    ~Shape();
};



#endif // TRIANGLECLASS_H_INCLUDED


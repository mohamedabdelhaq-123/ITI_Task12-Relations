#ifndef POINTCLASS_H_INCLUDED
#define POINTCLASS_H_INCLUDED


class Point{

    private:
    int x;
    int y;

    public:
    // const
    Point();
    Point(int x, int y);

    int getX(void);
    int getY(void);

    // dest
    ~Point();
};



#endif // TRIANGLECLASS_H_INCLUDED



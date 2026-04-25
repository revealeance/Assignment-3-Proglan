#ifndef POINT2D_HPP
#define POINT2D_HPP

class Point2D {
private:
    float _x;
    float _y;
    float _z;

public:
    Point2D();
    Point2D(float x, float y, float z);

    float GetX() const;
    float GetY() const;
    float GetZ() const;

    void SetX(float x);
    void SetY(float y);
    void SetZ(float z);

    float distance(const Point2D& other) const;

    Point2D operator+(const Point2D inp);
    Point2D operator-(const Point2D inp);
    Point2D operator*(const Point2D inp);
};

#endif
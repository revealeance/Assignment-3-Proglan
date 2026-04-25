#include <iostream>
#include <math.h>
#include "include/point2d.hpp"

Point2D::Point2D() : _x(0), _y(0), _z(0) { }

Point2D::Point2D(float x, float y, float z) : _x(x), _y(y), _z(z) { }

float Point2D::GetX() const {
    return _x;
}

float Point2D::GetY() const {
    return _y;
}

float Point2D::GetZ() const {
    return _z;
}

void Point2D::SetX(float x) {
    _x = x;
}

void Point2D::SetY(float y) {
    _y = y;
}

void Point2D::SetZ(float z) {
    _z = z;
}

float Point2D::distance(const Point2D& other) const {
    float dx = _x - other._x;
    float dy = _y - other._y;
    float dz = _z - other._z;

    float result = sqrt(dx*dx + dy*dy + dz*dz);
    return result;
}

Point2D Point2D::operator+(const Point2D inp) 
{
    Point2D out;

    out.SetX(this->_x + inp.GetX());
    out.SetY(this->_y + inp.GetY());
    out.SetZ(this->_z + inp.GetZ());

    return out;
}

Point2D Point2D::operator-(const Point2D inp) 
{
    Point2D out;

    out.SetX(this->_x - inp.GetX());
    out.SetY(this->_y - inp.GetY());
    out.SetZ(this->_z - inp.GetZ());

    return out;
}

Point2D Point2D::operator*(const Point2D inp) 
{
    Point2D out;

    out.SetX(this->_x * inp.GetX());
    out.SetY(this->_y * inp.GetY());
    out.SetZ(this->_z * inp.GetZ());

    return out;
}
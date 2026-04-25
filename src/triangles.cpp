/* 
Anda diminta untuk mengimplementasikan class dengan nama Triangle 
yang didalamnya memuat 3 data dalam class Point2D yang telah diimplementasikan

Tujuan dari program adalah menentukan apakah suatua Triangle adalah 
sama kaki, sama sisi, siku-siku, dan sembarang

Input:
    vector dari suatu Triangle (dengan banyak sebesar 3*N) --> N = total Triangle

Output
    print setiap line dengan "sama kaki", "sama sisi", "siku-siku", atau "sembarang"


Silahkan gunakan teori dan implementasi yang telah diajarkan dikelas
*/

#include "include/triangle.hpp"
#include <cmath>

using namespace geom;

Triangle::Triangle() { }

Triangle::Triangle(Point2D a, Point2D b, Point2D c) {
    p1 = a;
    p2 = b;
    p3 = c;
}

float Triangle::sideA() const {
    return p1.distance(p2);
}

float Triangle::sideB() const {
    return p2.distance(p3);
}

float Triangle::sideC() const {
    return p3.distance(p1);
}

std::string Triangle::getType() const {
    float s1 = sideA();
    float s2 = sideB();
    float s3 = sideC();

    float eps = 0.0001;

    float a = s1, b = s2, c = s3;

    if (a > b) std::swap(a, b);
    if (b > c) std::swap(b, c);
    if (a > b) std::swap(a, b);

    if (a + b <= c + eps) {
        return "sembarang";
    }

    if (fabs(a - c) < eps) {
        return "sama sisi";
    }

    if (fabs(a*a + b*b - c*c) < eps) {
        return "siku-siku";
    }

    if (fabs(a - b) < eps || fabs(b - c) < eps) {
        return "sama kaki";
    }

    return "sembarang";
}
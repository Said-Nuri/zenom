#pragma once
#include <math.h>
class Vector3D
{
public:
	Vector3D();
	~Vector3D();
	Vector3D(double, double, double);
	Vector3D add(const Vector3D &);
	Vector3D subtraction(const Vector3D &);
	Vector3D multiply(const double);
	Vector3D cross(const Vector3D &);
	Vector3D normalize();
	Vector3D operator+(const Vector3D&);
	Vector3D operator-(const Vector3D&);
	Vector3D operator*(const double);
	double dot(const Vector3D &);
	double length();
	double X, Y, Z;
};

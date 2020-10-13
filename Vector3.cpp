#include "Vector3.h"

Vector3::Vector3(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

Vector3 Vector3::operator*(float value)
{
	return Vector3(x * value, y * value, z * value);
}
#include "Library.h"

//*************** 2D Vector *************************
Vector2D::Vector2D(){};

ostream& operator<<(ostream& os, const Vector2D& v)
{
	os << v.x << "," << v.y << endl;
	return os;
}

Vector2D::Vector2D(float a_x, float a_y)
{
	x = a_x;
	y = a_y;
}

Vector2D Vector2D::operator+(Vector2D &other)
{
	Vector2D temp;
	temp.x = x + other.x;
	temp.y = y + other.y;
	return temp;
}

Vector2D Vector2D::operator-(Vector2D &other)
{
	Vector2D temp;
	temp.x = x - other.x;
	temp.y = y - other.y;
	return temp;
}

void Vector2D::operator+=(Vector2D &other)
{
	x = x + other.x;
	y = y + other.y;
}

void Vector2D::operator-=(Vector2D &other)
{
	x = x - other.x;
	y = y - other.y;
}

void Vector2D::operator=(Vector2D &other)
{
	x = other.x;
	y = other.y;
}

bool Vector2D::operator==(Vector2D &other)
{
	return x == other.x && y == other.y;
}

void Vector2D::Scale(float num)
{
	x *= num;
	y *= num;
}

Vector2D Perp(Vector2D v)
{
	Vector2D temp;
	temp.x = -1 * v.y;
	temp.y = v.x;
	return temp;
}

Vector2D ::~Vector2D(){};
//******************************************************



//****************** 3D Vector**************************
Vector3D::Vector3D(){};

ostream& operator<<(ostream& os, const Vector3D& v)
{
	os << v.x << "," << v.y << "," << v.z << endl;
	return os;
}

Vector3D::Vector3D(float a_x, float a_y, float a_z)
{
	x = a_x;
	y = a_y;
	z = a_z;
}

Vector3D Vector3D::operator+(Vector3D &other)
{
	Vector3D temp;
	temp.x = x + other.x;
	temp.y = y + other.y;
	temp.z = z + other.z;
	return temp;
}

Vector3D Vector3D::operator-(Vector3D &other)
{
	Vector3D temp;
	temp.x = x - other.x;
	temp.y = y - other.y;
	temp.z = z - other.z;
	return temp;
}

void Vector3D::operator+=(Vector3D &other)
{
	x = x + other.x;
	y = y + other.y;
	z = z + other.z;
}

void Vector3D::operator-=(Vector3D &other)
{
	x = x - other.x;
	y = y - other.y;
	z = z - other.z;
}

void Vector3D::operator=(Vector3D &other)
{
	x = other.x;
	y = other.y;
	z = other.z;
}

bool Vector3D::operator==(Vector3D &other)
{
	return x == other.x && y == other.y && z == other.z;
}

void Vector3D::Scale(float num)
{
	x *= num;
	y *= num;
	z *= num;
}

Vector3D ::~Vector3D(){};

//********************************************************



// **********************Other Maths****************************

float DotProduct(Vector2D a, Vector2D b)
{
	return (a.x * b.x) + (a.y * b.y);
}

float DotProduct(Vector3D a, Vector3D b)
{
	return (a.x * b.x) + (a.y * b.y) + (a.z * b.z);
}

float Magnitude(Vector2D v)
{
	float c = sqrt((v.x * v.x) + (v.y * v.y));
	return c;
}

float Magnitude(Vector3D v)
{
	float c = sqrt((v.x * v.x) + (v.y * v.y) + (v.z * v.z));
	return c;
}

Vector2D Normalize(Vector2D v)
{
	Vector2D temp;
	temp.x = v.x / Magnitude(v);
	temp.y = v.y / Magnitude(v);
	return temp;
}

Vector3D Normalize(Vector3D v)
{
	Vector3D temp;
	temp.x = v.x / Magnitude(v);
	temp.y = v.y / Magnitude(v);
	temp.z = v.z / Magnitude(v);
	return temp;
}

float GetAngle(Vector2D a, Vector2D b)
{
	return acos(DotProduct(Normalize(a), Normalize(b)));
}
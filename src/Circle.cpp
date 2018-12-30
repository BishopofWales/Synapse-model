#include "Circle.h"
Circle::Circle(float radius, float xPos, float yPos)
{
    _radius = radius;
    _xPos = xPos;
    _yPos = yPos;
}
float Circle::getX()
{
    return _xPos;
}
float Circle::getY()
{
    return _yPos;
}
float Circle::getRadius()
{
    return _radius;
}
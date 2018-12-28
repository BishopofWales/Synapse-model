#include "Raycast.h"
#define PI 3.14159265

using namespace std;

bool circleRayCol(float radius, float circ_x, float circ_y, float rayStart_x, float rayStart_y, float rayAngle)
{
    //Calculate the slope of the ray line.
    float raySlope = sin(rayAngle) / cos(rayAngle);
    //Calculate the origin of the ray line.
    float rayOrigin = getOrigin(rayStart_x, rayStart_y, raySlope);

    //Calculate normal of ray angle
    float normal = rayAngle + PI / 2;
    //Calculate the slope of the normal line from the ray to the circle.
    float normalSlope = sin(normal) / cos(normal);
    //Calculate the y-origin of the normal line from the ray to the circle.
    float normalOrigin = getOrigin(circ_x, circ_y, normalSlope);

    //Find where the two lines collide
    float col_y = ylineCol(raySlope, normalSlope, rayOrigin, normalOrigin);
    float col_x = (col_y - normalOrigin) / normalSlope;

    //compare distance from origin to colision to the radius of the circle AND make sure the collision occurs along the ray, not behind it.
    return pow(col_x - circ_x, 2) + pow(col_y - circ_y, 2) < pow(radius, 2) && ((cos(rayAngle) > 0) == (circ_x > rayStart_x));
}
float ylineCol(float m1, float m2, float b1, float b2)
{
    return (m1 * b2 - m2 * b1) / (m1 - m2);
}
float getOrigin(float x, float y, float m)
{
    return (y - m * x);
}
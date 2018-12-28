#ifndef RAYCAST_H_
#define RAYCAST_H_
#include <math.h>

float ylineCol(float m1, float m2, float b1, float b2);
float getOrigin(float x, float y, float m);
bool circleRayCol(float radius, float circ_x, float circ_y, float rayStart_x, float rayStart_y, float rayAngle);

#endif /* RAYCAST_H_ */
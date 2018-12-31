#include <iostream>
#include "C.h"
#include "Raycast.h"
#include "Lizard.h"
#include <math.h>

using namespace std;
const float Lizard::LIN_SPD = 5.0;        // m/s
const float Lizard::ANG_SPD = M_PI / 2.0; //rad/s
Lizard::Lizard(float xPos, float yPos, float rotation)
{
    _lizBrain = new Brain();
    _xPos = xPos;
    _yPos = yPos;
    _rotation = rotation;
}
void Lizard::proccessInput(const std::array<Circle *, C::MAX_GEOM> &worldGeom, int size, long time)
{
    //First we check if we see any geometry and stimulate the eye neuron if we do.
    for (int i = 0; i < size; i++)
    {
        if (circleRayCol(worldGeom.at(i)->getRadius(), worldGeom.at(i)->getX(), worldGeom.at(i)->getY(), _xPos, _yPos, _rotation))
        {
            // cout << "Can see food:" << i << "\n";
            _lizBrain->stimulateNeur(EYE_NEUR, time);
        }
    }
    //Next we check to see if the muscle neurons have fired and move the creature accordingly.
    if (_lizBrain->readNeur(LEFT_NEUR))
    {
        _rotation -= LIN_SPD;
    }
    if (_lizBrain->readNeur(RIGHT_NEUR))
    {
        _rotation += LIN_SPD;
    }
    if (_lizBrain->readNeur(FORWARD_NEUR))
    {
        _xPos += cos(_rotation) * LIN_SPD;
        _yPos += sin(_rotation) * LIN_SPD;
    }
}
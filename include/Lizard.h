#ifndef LIZARD_H
#define LIZARD_H
#define _USE_MATH_DEFINES
#include "Brain.h"
#include "Circle.h"

class Lizard
{
private:
  static const float LIN_SPD; // m/s
  static const float ANG_SPD; // rad/s
  Brain *_lizBrain;
  float _xPos;
  float _yPos;
  float _rotation;
  //static const int INI_CON = 5;

  //std::array<Neuron *, NUM_NEUR> _neurons;

public:
  Lizard(float xPos, float yPos, float rotation);
  //void stimulateNeur(int neurIndex, long time);
  void proccessInput(const std::array<Circle *, C::MAX_GEOM> &worldGeom, int size);
};
#endif
#ifndef LIZARD_H
#define LIZARD_H
#define _USE_MATH_DEFINES
#include "Brain.h"
#include "Circle.h"
#include "C.h"

class Lizard
{
private:
  static const float LIN_SPD; // m/s
  static const float ANG_SPD; // rad/s
  static const int EYE_NEUR = 50;
  static const int LEFT_NEUR = 51;
  static const int RIGHT_NEUR = 52;
  static const int FORWARD_NEUR = 53;

  Brain *_lizBrain;
  float _xPos;
  float _yPos;
  float _rotation;
  //static const int INI_CON = 5;

  //std::array<Neuron *, NUM_NEUR> _neurons;

public:
  Lizard(float xPos, float yPos, float rotation);
  //void stimulateNeur(int neurIndex, long time);
  void proccessInput(const std::array<Circle *, C::MAX_GEOM> &worldGeom, int size, long time);
};
#endif
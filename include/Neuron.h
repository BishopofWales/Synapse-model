#ifndef NEURON_H
#define NEURON_H
#include <iostream>
#include <math.h>
#include <algorithm>
#include <array>
class Neuron
{
private:
  static const double FALL_OFF;
  static const double PULSE_POWER;
  static const double ACTION_POT;
  static const int MAX_CON = 30;
  std::array<Neuron *, MAX_CON> _cons;
  double _polarL;
  long _lastStimmed;
  int _numCons;

public:
  Neuron();
  void stimulate(long time);
  void release(long time);
  bool addConnection(Neuron *);
};
#endif
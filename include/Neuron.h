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
  static const int MAX_CON = 20;
  std::array<Neuron *, MAX_CON> _cons;
  int _conCount;
  double _stimLevel;
  long _lastStimmed;

public:
  Neuron(long time);
  void stimulate(long time);
  void release(long time);
};
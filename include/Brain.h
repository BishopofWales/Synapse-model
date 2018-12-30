#ifndef BRAIN_H
#define BRAIN_H
#include <iostream>
#include <math.h>
#include <algorithm>
#include <array>
#include "Neuron.h"
class Brain
{
  private:
    static const int NUM_NEUR = 20;
    static const int INI_CON = 5;

    std::array<Neuron *, NUM_NEUR> _neurons;

  public:
    Brain();
    void stimulateNeur(int neurIndex, long time);
    double readNeur(int neurIndex);
};
#endif
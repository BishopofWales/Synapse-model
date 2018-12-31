#ifndef GRADER_H
#define GRADER_H
#include <iostream>
#include <math.h>
#include <algorithm>
#include <array>
#include "Lizard.h"
class Grader
{
  private:
    static const int NUM_NEUR = 20;
    static const int INI_CON = 5;

    std::array<Lizard *, NUM_NEUR> _neurons;

  public:
    Grader();
    void stimulateNeur(int neurIndex, long time);
    double readNeur(int neurIndex);
};
#endif
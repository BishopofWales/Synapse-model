#ifndef GRADER_H
#define GRADER_H
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
};
#endif
#ifndef GRADER_H
#define GRADER_H
#include <array>
#include "Lizard.h"
class Grader
{
private:
  std::array<Lizard *, C::CLASS_SIZE> _lizards;

public:
  Grader();
  void getResults(std::array<Lizard *, C::CLASS_SIZE> *);
};
#endif
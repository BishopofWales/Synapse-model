#ifndef GRADER_H
#define GRADER_H
#include <array>
#include "Lizard.h"
class Grader
{
private:
  std::array<Lizard *, 10> _lizards;

public:
  Grader();
};
#endif
#include <iostream>
#include <time.h>

#include "Raycast.h"
#include "Neuron.h"
#include "Brain.h"
#include "C.h"
#include "Circle.h"
#include "Lizard.h"
#define PI 3.14159265

int main()
{
    std::srand(time(NULL));
    //std::cout << "Bool for circle col:" << circleRayCol(10, 20, 0, 0, 0, PI / 7 + PI) << "\n";
    std::array<Circle *, C::MAX_GEOM> geom;
    geom.at(0) = new Circle(10, 20, 0);
    Lizard *newLiz = new Lizard(0.0, 0.0, 0.0 + PI / 4);
    newLiz->proccessInput(geom, 1);
    //Brain *brain = new Brain();
}
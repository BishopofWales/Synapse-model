#include <iostream>
#include <time.h>

#include "Raycast.h"
#include "Neuron.h"
#include "Brain.h"
#define PI 3.14159265

int main()
{
    std::srand(time(NULL));
    std::cout << "Testing, world!\n";
    std::cout << "Bool for circle col:" << circleRayCol(10, 20, 0, 0, 0, PI / 7 + PI) << "\n";
    Brain brain;
}
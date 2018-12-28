#include <iostream>
#include "Raycast.h"
#include "Neuron.h"
#define PI 3.14159265

int main()
{
    std::cout << "Hello, world!\n";
    std::cout << "Bool for circle col:" << circleRayCol(10, 20, 0, 0, 0, PI / 7 + PI) << "\n";
    Neuron neur(10);
}
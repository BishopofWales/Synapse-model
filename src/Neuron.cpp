#include <iostream>
#include "Neuron.h"

using namespace std;

const double Neuron::PULSE_POWER = 10.0;
const double Neuron::ACTION_POT = 25.0;
const double Neuron::FALL_OFF = 1.0;

Neuron::Neuron(long time)
{
    std::cout << "Time is " << time << "\n";
    _stimLevel = 0;
    _lastStimmed = 0;
}

void Neuron::stimulate(long time)
{
    //First we calculate the falloff since the last time the neuron was touched.
    _stimLevel = max(0.0, (time - _lastStimmed) * FALL_OFF);
    //Next we add the pulse to the neuron
    _stimLevel += PULSE_POWER;
    if (_stimLevel > ACTION_POT)
    {
        release(time);
    }
}
void Neuron::release(long time)
{
    //Stim reset goes before, in order to support cyclical stimulation
    _stimLevel = 0;
    for (const auto &childNeur : _cons)
    {
        //Stimulate neurons here.
        childNeur->stimulate(time);
    }
}
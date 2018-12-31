#include <iostream>
#include "Neuron.h"
#include <math.h>
#include <algorithm>

using namespace std;

const double Neuron::PULSE_POWER = 10.0;
const double Neuron::ACTION_POT = 25.0;
const double Neuron::FALL_OFF = 1.0;

Neuron::Neuron()
{
    _polarL = 0;
    _lastStimmed = 0;
    _numCons = 0;
}

void Neuron::stimulate(long time)
{
    //First we calculate the falloff since the last time the neuron was touched.
    _polarL = max(0.0, (time - _lastStimmed) * FALL_OFF);
    //Next we add the pulse to the neuron
    _polarL += PULSE_POWER;
    if (_polarL > ACTION_POT)
    {
        release(time);
    }
}
double Neuron::getPol()
{
    return _polarL;
}
void Neuron::release(long time)
{

    for (int i = 0; i < _numCons; i++)
    {
        //Stimulate neurons here.
        _cons.at(i)->stimulate(time);
    }
    //Stim reset goes after, in order to prevent cyclical stimulation
    _polarL = 0;
}
bool Neuron::addConnection(Neuron *newCon)
{
    //cout << "_numcons:" << _numCons << "    " << this << "\n";
    _cons.at(_numCons) = newCon;
    _numCons++;
    return true;
}
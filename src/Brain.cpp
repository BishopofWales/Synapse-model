#include <iostream>
#include "Brain.h"

using namespace std;

Brain::Brain()
{
    //First we intitate all the neurons
    for (int i = 0; i < NUM_NEUR; i++)
    {
        Neuron *newNeuron = new Neuron();
        _neurons.at(i) = newNeuron;
    }
    //Next we randomly assign connections
    for (int i = 0; i < NUM_NEUR; i++)
    {
        for (int k = 0; k < INI_CON; k++)
        {
            //cout << "k: " << k << "\n";
            //cout << "i: " << i << "\n";
            _neurons.at(i)->addConnection(_neurons.at(rand() % NUM_NEUR));
        }
    }
}
void Brain::stimulateNeur(int neurIndex, long time)
{
    _neurons.at(neurIndex)->release(time);
}
double Brain::readNeur(int neurIndex)
{
    return _neurons.at(neurIndex)->getPol();
}
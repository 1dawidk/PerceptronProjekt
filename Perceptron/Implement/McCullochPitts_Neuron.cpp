#include "McCullochPitts_Neuron.h"

void McCullochPitts_Neuron::activation(double in) {

}

Neuron *McCullochPitts_Neuron::getInstance() {
    return new McCullochPitts_Neuron;
}

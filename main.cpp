#include <iostream>
#include "Perceptron/Perceptron.h"
#include "Perceptron/Implement/McCullochPitts_Neuron.h"

int main() {
    /**####### Simple usage #######**/

    //Create Perceptron object
    Perceptron *perceptron= new Perceptron();

    //Set net settings
    perceptron->setParam(Perceptron::ParamKey::L_DIR, "path/to/learn_data");//Set directory with learn data
    perceptron->setParam(Perceptron::ParamKey::T_DIR, "path/to/test_data"); //Set directory with test data
    perceptron->setParam(Perceptron::ParamKey::STRUCT, "5, 2, 1"); //Set nlayers structure
    perceptron->setNeuronTemplate(new McCullochPitts_Neuron);

    //Create defined perceptron
    perceptron->create();

    perceptron->cleanup();
}
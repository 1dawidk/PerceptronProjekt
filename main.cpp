#include <iostream>
#include "Perceptron/Perceptron.h"

int main() {
    /**####### Simple usage #######**/

    //Create Perceptron object
    Perceptron *perceptron= new Perceptron();

    //Set net settings
    perceptron->setParam(Perceptron::ParamKey::L_DIR, "path/to/learn_data");//Set directory with learn data
    perceptron->setParam(Perceptron::ParamKey::T_DIR, "path/to/test_data"); //Set directory with test data
    perceptron->setParam(Perceptron::ParamKey::LAYERS_NO, "5"); //Set number of hidden layers
}
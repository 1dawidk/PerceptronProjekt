#include "Perceptron.h"

void Perceptron::setParam(Perceptron::ParamKey key, const string &value) {
    settings[key]= value;
}

void Perceptron::create() {
    int lNo= stoi(settings[LAYERS_NO]);

    net= new vector<Neuron*>[lNo];
}

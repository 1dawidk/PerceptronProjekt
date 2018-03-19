#ifndef PERCEPTRONPROJEKT_PERCEPTRON_H
#define PERCEPTRONPROJEKT_PERCEPTRON_H

#include <vector>
#include <string>
#include <iostream>
#include "Neuron.h"
#include "NetLayer.h"

using namespace std;

class Perceptron {
public:
    enum ParamKey{
        T_DIR,
        L_DIR,
        STRUCT
    };

    void create();
    void cleanup();


    void learn();
    void test();
    void setParam(ParamKey key, const string &value);
    void setNeuronTemplate(Neuron *t);
private:
    vector<NetLayer*> net;
    string settings[3];
    Neuron* t;

};


#endif //PERCEPTRONPROJEKT_PERCEPTRON_H

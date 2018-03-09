#ifndef PERCEPTRONPROJEKT_PERCEPTRON_H
#define PERCEPTRONPROJEKT_PERCEPTRON_H

#include <vector>
#include <string>
#include "Neuron.h"
#include "PerceptronSettings.h

using namespace std;

class Perceptron {
public:
    void create();
    void learn();
    void test();
    void setParam(ParamKey key, const string &value);

    enum ParamKey{
        T_DIR,
        L_DIR,
        LAYERS_NO
    };
private:
    vector<Neuron*> *net;
    string settings[2];
};


#endif //PERCEPTRONPROJEKT_PERCEPTRON_H

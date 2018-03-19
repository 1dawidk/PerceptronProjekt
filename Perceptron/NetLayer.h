#ifndef PERCEPTRONPROJEKT_NETLAYER_H
#define PERCEPTRONPROJEKT_NETLAYER_H

#include <vector>
#include "Neuron.h"

using namespace std;

class NetLayer {
public:
    NetLayer(int size, Neuron *t);
    ~NetLayer();
    Neuron* get(int i);
    int getSize();
private:
    int size;
    vector<Neuron*> n;
};


#endif //PERCEPTRONPROJEKT_NETLAYER_H

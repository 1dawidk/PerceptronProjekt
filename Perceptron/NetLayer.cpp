#include <iostream>
#include "NetLayer.h"

NetLayer::NetLayer(int size, Neuron *t) {
    this->size= size;

    for(int i=0; i<size; i++){
        n.push_back(t->getInstance());
    }
}

NetLayer::~NetLayer() {
    cout << "NetLayer delete()" << endl;
    for(int i=0; i<size; i++){
        delete n[i];
    }
}

Neuron *NetLayer::get(int i) {
    return n[i];
}

int NetLayer::getSize() {
    return size;
}

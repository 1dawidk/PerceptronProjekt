#include <iostream>
#include "Neuron.h"

void Neuron::testInput() {
    double sum=0;

    for(int i=0; i<input.size(); i++){
        sum+= ws[i]*input[i]->getOutput();
    }

    activation(sum);
}

Neuron::~Neuron() {
    cout << "Empty neuron destructor" << endl;
}

double Neuron::getOutput() {
    return o;
}

void Neuron::popInput() {
    if(!input.empty()){
        input.pop_back();
        ws.pop_back();
    }
}

void Neuron::removeInput(int i) {
    if(input.size()>i){
        input.erase(input.begin()+i);
        ws.erase(ws.begin()+i);
    }
}

void Neuron::setInputWeight(int i, double w) {
    if(ws.size()>i){
        ws[i]=w;
    }
}

void Neuron::attach(Neuron *neuron, double w) {
    input.push_back(neuron);
    ws.push_back(w);
}

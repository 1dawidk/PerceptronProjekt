#ifndef PERCEPTRONPROJEKT_NEURON_H
#define PERCEPTRONPROJEKT_NEURON_H

#include <vector>

using namespace std;

class Neuron {
public:
    void testInput();
    virtual double getOutput();
    virtual Neuron* getInstance()=0;
    ~Neuron();

    void attach(Neuron* neuron, double w);
    void setInputWeight(int i, double w);
    void removeInput(int i);
    void popInput();
private:
    virtual void activation(double in)=0;
    vector<Neuron*> input;          //Neurons attached to my Axon
    vector<double> ws;              //Weights for each attached neuron

    double o;
};


#endif //PERCEPTRONPROJEKT_NEURON_H

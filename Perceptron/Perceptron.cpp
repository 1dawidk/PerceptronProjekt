#include "Perceptron.h"

void Perceptron::setParam(Perceptron::ParamKey key, const string &value) {
    settings[key]= value;
}

void Perceptron::create() {
    int lNo;

    //Create net structure
    cout << "Net structure: " << endl;
    unsigned long lastPos=0;
    unsigned long pos=0;
    string subStr;
    do {
        pos= settings[Perceptron::ParamKey::STRUCT].find(',', pos+1);
        subStr= settings[Perceptron::ParamKey::STRUCT].substr(lastPos, pos-lastPos);
        net.push_back(new NetLayer(stoi(subStr), t));
        cout << subStr;
        if(pos!=string::npos)
            cout << " -> ";

        lastPos= pos+2;
    } while(pos!=string::npos);
    cout << endl;

    //Create random connections

}

void Perceptron::cleanup() {
    for(int i=0; i<net.size(); i++){
        delete net[i];
    }
}

void Perceptron::setNeuronTemplate(Neuron *t) {
    this->t= t;
}

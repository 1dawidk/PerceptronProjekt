#ifndef PERCEPTRONPROJEKT_MCCULLOCHPITTS_NEURON_H
#define PERCEPTRONPROJEKT_MCCULLOCHPITTS_NEURON_H

#include "../Neuron.h"

class McCullochPitts_Neuron : public Neuron {
public:
    Neuron *getInstance() override;

private:
    void activation(double in) override;
};


#endif //PERCEPTRONPROJEKT_MCCULLOCHPITTS_NEURON_H

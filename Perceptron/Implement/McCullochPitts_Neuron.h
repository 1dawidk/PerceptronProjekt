#ifndef PERCEPTRONPROJEKT_MCCULLOCHPITTS_NEURON_H
#define PERCEPTRONPROJEKT_MCCULLOCHPITTS_NEURON_H

#include "../Neuron.h"

class McCullochPitts_Neuron : public Neuron {
    void activation(double in) override;
};


#endif //PERCEPTRONPROJEKT_MCCULLOCHPITTS_NEURON_H

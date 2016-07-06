/*
 * OutputLayer.h
 *
 *  Created on: Jun 22, 2016
 *      Author: trabucco
 */

#ifndef OUTPUTLAYER_H_
#define OUTPUTLAYER_H_

#include "HiddenLayer.h"
#include "Neuron.h"
#include "PassiveNeuron.h"

class OutputLayer: public Layer {
public:
	bool debug;
	int currentLayerNeurons;
	int previousLayerNeurons;
	OutputLayer(int w, int d, bool db);
	virtual ~OutputLayer();
	vector<double> feedforward(vector<double> input);
	vector<double> backpropagate(vector<double> error, double learningRate, vector<Neuron *> previousLayer);
};

#endif /* OUTPUTLAYER_H_ */
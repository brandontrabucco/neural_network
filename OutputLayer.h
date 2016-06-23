/*
 * OutputLayer.h
 *
 *  Created on: Jun 22, 2016
 *      Author: trabucco
 */

#ifndef OUTPUTLAYER_H_
#define OUTPUTLAYER_H_

#include "HiddenLayer.h"

class OutputLayer: public Layer {
public:
	bool debug;
	int width;
	OutputLayer(int w, bool d);
	virtual ~OutputLayer();
	vector<double> feedforward(vector<double> input);
	vector<double> backpropagate(vector<double> error, double learningRate);
};

#endif /* OUTPUTLAYER_H_ */

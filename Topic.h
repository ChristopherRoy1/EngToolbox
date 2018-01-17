/*
 * Topic.h
 *
 *  Created on: 2018-01-17
 *      Author: roysirch
 */

#ifndef TOPIC_H_
#define TOPIC_H_

#include <vector>
#include "Equation.h"
using namespace std;

class Topic {
public:
	Topic();
	virtual ~Topic();
private:
	vector<Equation> equations;
};

#endif /* TOPIC_H_ */

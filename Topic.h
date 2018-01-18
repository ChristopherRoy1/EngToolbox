/*
 * Topic.h
 *
 *  Created on: 2018-01-17
 *      Author: roysirch
 */

#ifndef TOPIC_H_
#define TOPIC_H_

#include <vector>
#include <unordered_map>
#include "Equation.h"
using namespace std;

class Topic {
public:
	Topic();
	virtual ~Topic();
	void addEquation();
	Equation removeEquation();



private:
	unordered_map<Equation,Equation> equations;

};

#endif /* TOPIC_H_ */

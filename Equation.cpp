/*
 * Equation.cpp
 *
 *  Author: Christopher Roy
 */

#include "Equation.h"

using namespace std;

Equation::Equation(string name, string returntype, vector<Value> constants, vector<Value> variables) {
    this->name = name;
    this->numConstants=constants.size();
    this->numVars = variables.size();
    this->returntype = returntype;
}

Equation::~Equation() {
	// TODO Auto-generated destructor stub
}

string Equation::getName(){
    return name;
}

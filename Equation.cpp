/*
 * Equation.cpp
 *
 *  Author: Christopher Roy
 */

#include "Equation.h"

using namespace std;

Equation::Equation(string name, string returntype) {
    
    this->name = name;
      
    this->returntype = returntype;
}

Equation::~Equation() {
	// TODO Auto-generated destructor stub
}

string Equation::getName(){
    return name;
}

string Equation::getReturnType(){
    return returntype;
}


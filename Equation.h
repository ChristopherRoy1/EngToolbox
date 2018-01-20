/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Equation.h
 * Author: Christopher Roy
 */

#ifndef EQUATION_H
#define EQUATION_H

#include <string>
#include <vector>
#include <unordered_map>
#include "Value.h"

using namespace std;
class Equation {
    
public:
    //Constructors
    Equation(string name, string returntype, vector<Value> constants, vector<Value> variables);
    
    //Functions
    string getName();
    string getReturnType();
    vector<Value> getConstants();    
    vector<Value> execute(vector<Value> input);
    
    //Destructor
    virtual ~Equation();
    
private:    
    //Vectors
    vector<Value> constants;
    vector<Value> variables;
    
    string returntype;
    string name;
    int numVars;
    int numConstants;

};

#endif /* EQUATION_H */


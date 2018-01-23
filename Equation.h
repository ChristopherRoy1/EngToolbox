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


using namespace std;
class Equation {
    
public:
    //Constructors
    Equation(string name, string returntype);
    
    //Functions
    string getName();
    string getReturnType();
    
    
    //Destructor
    virtual ~Equation();
    
private:    
    //Vectors
    string returntype;
    string name;
    int numVars;
    int numConstants;

};

#endif /* EQUATION_H */


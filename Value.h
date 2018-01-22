/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Value.h
 * Author: Christopher Roy
 *
 * 
 */

#ifndef VALUE_H
#define VALUE_H

#include <string>
using namespace std;



class Value {
public:
    Value();
    Value(const Value& orig);
    virtual ~Value();
    Value add(Value v1, Value v2);
private:
    string name;
    int numFunctions;
    
};        
        


#endif /* VALUE_H */


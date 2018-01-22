/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Value.h"


Value::Value(){
    
}

Value::Value(const Value& orig){
    
}

Value Value::operator+(const Value& other){
    Value result;    
    result.value = this->value + other.value;
    result.unit = this->unit;    
    return result;
}

Value Value::operator-(const Value& other){
    Value result;    
    result.value = this->value - other.value;
    result.unit = this->unit;    
    return result;
}
Value Value::operator*(const Value& other){
    Value result;    
    result.value = this->value * other.value;
    result.unit = this->unit + other.unit;    
    return result;
}

Value Value::operator/(const Value& other){
    Value result;  
    
    
        result.value = this->value / other.value;
        result.unit = this->unit + other.unit;    
        return result;
    
    
    
}



Value::~Value(){
    
}
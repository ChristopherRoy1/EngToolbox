/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Subject.h
 * Author: Elizabeth Roy
 *
 * Created on January 21, 2018, 8:24 PM
 */

#ifndef SUBJECT_H
#define SUBJECT_H

#include <string>
class Subject {
public:
    Subject();
    Subject(const Subject& orig);
    virtual ~Subject();
private:
    string name;
    int numFunctions;
    
};

#endif /* SUBJECT_H */


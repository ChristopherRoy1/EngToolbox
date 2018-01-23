/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Stress.cpp
 * Author: Christopher Roy
 * 
 * Created on January 21, 2018, 8:23 PM
 */

#include "Stress.h"
#include "Value.h"

Stress::Stress() {
}

Stress::Stress(const Stress& orig) {
}

Value normalAxialStress(Value force, Value area){
    Value stress = force/ area;    
    return stress;    
}

Value longitudinalBendingStress(Value bendingMoment, Value distanceFromNeutralAxis, Value momInertia){
    Value stress = (bendingMoment*distanceFromNeutralAxis)/momInertia;
    return stress;
}

Value torsionalShearStress(Value twistingMoment, Value distanceFromCenter, Value polarMomInertia){
    Value stress = (twistingMoment*distanceFromCenter)/polarMomInertia;
    return stress;
}

Value pureShearStress(Value firstMoment, Value shearForce, Value momOfInertia, Value widthOfBeam){
    Value stress = (firstMoment * shearForce)/(momOfInertia * widthOfBeam);
    return stress;
}





Stress::~Stress() {
}


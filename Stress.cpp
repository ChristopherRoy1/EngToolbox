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



#include <boost/units/io.hpp>
#include <boost/units/systems/si.hpp>
#include <boost/units/systems/si/io.hpp>



#include <boost/units/quantity.hpp>
#include <boost/units/physical_dimensions/stress.hpp>
#include <boost/units/physical_dimensions/moment_of_inertia.hpp>


#include <boost/units/systems/si.hpp>

using namespace boost::units;

Stress::Stress() {
}

Stress::Stress(const Stress& orig) {
}

template<class System,class Y>
quantity<unit<stress_dimension,System>,Y> 
normalForce(quantity<unit<force_dimension,System>,Y> normalForce,
     quantity<unit<area_dimension,System>,Y> area)
{
    return normalForce/area;
}

template<class System,class Y>
quantity<unit<stress_dimension,System>,Y> 
longitudinalBendingStress(quantity<unit<energy_dimension,System>,Y> M,
     quantity<unit<length_dimension,System>,Y> c, quantity<unit<moment_of_inertia_dimension, System>, Y> I)
{
    //  M = bending moment at cross section
    //  c = distance from neutral axis
    //  I = moment of inertia 
    return (M*c)/I;
}


template<class System,class Y>
quantity<unit<stress_dimension,System>,Y> 
torsionalShearStress(quantity<unit<energy_dimension,System>,Y> M,
     quantity<unit<length_dimension,System>,Y> c, quantity<unit<moment_of_inertia_dimension, System>, Y> I)
{
    
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


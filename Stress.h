/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Stress.h
 * Author: Christopher Roy
 *
 * Created on January 21, 2018, 8:23 PM
 */

#ifndef STRESS_H
#define STRESS_H

#include <boost/units/systems/si.hpp>

#include <boost/units/quantity.hpp>
#include <boost/units/physical_dimensions/stress.hpp>
#include <boost/units/physical_dimensions/moment_of_inertia.hpp>



class Stress {
public:
    Stress();
    Stress(const Stress& orig);
    virtual ~Stress();
        
       
private:

};

#endif /* STRESS_H */


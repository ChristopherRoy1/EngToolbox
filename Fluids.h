/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Fluids.h
 * Author: Elizabeth Roy
 *
 * Created on January 22, 2018, 11:53 PM
 */

#ifndef FLUIDS_H
#define FLUIDS_H

#include <boost/units/systems/si.hpp>

#include <boost/units/quantity.hpp>
#include <boost/units/physical_dimensions/stress.hpp>
#include <boost/units/physical_dimensions/velocity.hpp>
#include <boost/units/systems/detail/constants.hpp>


class Fluids {
public:
    Fluids();
    Fluids(const Fluids& orig);
    virtual ~Fluids();
private:

};

#endif /* FLUIDS_H */


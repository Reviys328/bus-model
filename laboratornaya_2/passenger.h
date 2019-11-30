//
// Created by poiza on 11/9/19.
//

#ifndef LABORATORNAYA_2_PASSENGER_H
#define LABORATORNAYA_2_PASSENGER_H

#include <iostream>
#include <string>
#include "man.h"
#include "route.h"

class passenger : public man{

private:
    std::string neededLocation;

public:
    passenger(std::string name, std::string neededLocation);
    std::string get_neededLocation(){
        return neededLocation;
    }
};


#endif //LABORATORNAYA_2_PASSENGER_H

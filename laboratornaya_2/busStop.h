//
// Created by poiza on 11/9/19.
//

#ifndef LABORATORNAYA_2_BUSSTOP_H
#define LABORATORNAYA_2_BUSSTOP_H

#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include "passenger.h"


class passenger;
class busStop {

private:
    std::string busStopName;
    std::vector<passenger*> passengers;

public:
    busStop(std::string newBusStopName)
        :busStopName(std::move(newBusStopName)){
    }
    ~busStop(){
        passengers.clear();
        busStopName.clear();
    }
    std::string get_Name(){
        return busStopName;
    }
    passenger* getFirstPassenger(){
        if(!passengers.empty())
            return passengers.front();
        else return nullptr;
    }
    void addPassenger(passenger* passenger);
    void deletePassenger(passenger* passenger);
    friend std::ostream& operator<< (std::ostream &out,  busStop *busStop);
};



#endif //LABORATORNAYA_2_BUSSTOP_H

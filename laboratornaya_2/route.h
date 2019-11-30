//
// Created by poiza on 11/9/19.
//

#ifndef LABORATORNAYA_2_ROUTE_H
#define LABORATORNAYA_2_ROUTE_H

#include <iostream>
#include <string>
#include <vector>
#include "busStop.h"


class busStop;
class route {
    friend class bus;
    std::vector<busStop*> busStops;
public:
    ~route(){busStops.clear();}
    void addBusStop(busStop* busStop){
        busStops.push_back(busStop);
    }
    friend std::ostream& operator<< (std::ostream &out, const route &route);
    bool direction(std::string currentLocation, std::string neededLocation, bool flag);
};


#endif //LABORATORNAYA_2_ROUTE_H

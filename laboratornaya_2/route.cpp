//
// Created by poiza on 11/9/19.
//

#include <iostream>
#include <string>
#include "route.h"


std::ostream& operator<< (std::ostream &out, const route &route){
    unsigned int length = route.busStops.size();
    if (!length){
        out<<"route is empty\n";
        return out;
    }
    out<<"route includes : ";
    for (unsigned int count = 0; count < length; ++count)
        out << route.busStops[count]->get_Name() << ' ';
    out<<'\n';
    for (std::vector<busStop*>::const_iterator iter = route.busStops.begin();
    iter != route.busStops.end(); iter++)
        out<<(*iter);
    return out;
}

bool route::direction(std::string currentLocation, std::string neededLocation, bool flag) {
    if (busStops.empty()){
        std::cout<<"route is empty\n";
        return false;
    }
    else if (flag){
        auto buf = busStops.begin();
        while ((*buf)->get_Name() != currentLocation)
            buf++;
        for (buf; buf != busStops.end(); buf++)
            if ((*buf)->get_Name() == neededLocation) return true;
        }
        else{
            auto buf = busStops.rbegin();
            while ((*buf)->get_Name() != currentLocation)
                buf++;
            for(buf; buf !=busStops.rend(); buf++)
                if ((*buf)->get_Name() == neededLocation) return true;
        }
        return false;
    }


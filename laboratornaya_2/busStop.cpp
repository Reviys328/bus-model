//
// Created by poiza on 11/9/19.
//

#include "busStop.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

void busStop::addPassenger(passenger *passenger) {
    passengers.push_back(passenger);
}
std::ostream& operator<< (std::ostream &out, busStop *busStop){
    unsigned int length = busStop->passengers.size();
    if (!length){
        out<<"busStop "<<busStop->get_Name()<<" is empty\n";
        return out;
    }
    out<<"busStop "<<busStop->busStopName<< " includes : ";
    for (unsigned int count = 0; count < length; ++count)
        out << busStop->passengers[count]->getName() << ' ';
    out<<'\n';
    return out;
}
void busStop::deletePassenger(passenger*  passenger_buf){
    std::vector<passenger*>::iterator buf = passengers.begin();
    while (*buf != passenger_buf)
        buf++;
    passengers.erase(buf);
}



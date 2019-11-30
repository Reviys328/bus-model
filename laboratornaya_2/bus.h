//
// Created by poiza on 11/10/19.
//

#ifndef LABORATORNAYA_2_BUS_H
#define LABORATORNAYA_2_BUS_H

#include <iostream>
#include "route.h"
#include "busStop.h"
#include "passenger.h"

class bus {

private:

    passenger *passengers[4];//места в автобусе
    busStop *currentLocation;
    bool check_stop();
    void riding(route &route, bool flag);

public:
    bus();
    void startRoute(route &route);
};

#endif //LABORATORNAYA_2_BUS_H

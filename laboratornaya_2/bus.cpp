//
// Created by poiza on 11/10/19.
//

#include "bus.h"

bus::bus()
:currentLocation(nullptr){
    for(auto & passenger : passengers)
        passenger = nullptr;
}

bool bus::check_stop() {
    for(auto & passenger : passengers)
        if (passenger == nullptr) return true;
            else
                if (passenger->get_neededLocation() == currentLocation->get_Name())
                    return true;
    return false;
}

void bus::startRoute(route& route) {
    std::cout<<"The bus start the route\n";
    for (int i=0;i<route.busStops.size()-1;i++) {
        currentLocation = route.busStops[i];
        riding(route, true);
    }
    for (int i = route.busStops.size()-1; i >= 0; i-- ) {
        currentLocation = route.busStops[i];
        riding(route, false);
    }
    std::cout<<"The bus end the route\n";
    //std::cout<<"repeat the root? 1 - yes, 0 - no\n";
    //int x;
    //std::cin>>x;
    //if (x) startRoute(route);
}

void bus::riding(route& route, bool flag) {
    if (check_stop()) {
    std::cout << "The bus has stopped at:" << currentLocation->get_Name() << std::endl;
        for (auto & passenger : passengers)//пассажиры выходят
            if (passenger != nullptr)
                if (passenger->get_neededLocation() == currentLocation->get_Name()) {
                    std::cout << passenger->getName() << " got out of the bus\n";
                    class passenger *buf = passenger;
                    passenger = nullptr;
                    delete buf;
                    //currentLocation->addPassenger(buf);
                }
    //пассажиры заходят
        passenger* buf = currentLocation->getFirstPassenger();
        while((buf != nullptr) && route.direction(currentLocation->get_Name(),buf->get_neededLocation(), flag)){
            for (auto & passenger : passengers){
                if (passenger == nullptr){
                    std::cout<<buf->getName()<<" got in the bus\n";
                    passenger = buf;
                    break;
                }
            }
            currentLocation->deletePassenger(buf);
            buf = currentLocation->getFirstPassenger();
        }
    std::cout << "The bus leave the busStop: " << currentLocation->get_Name() << std::endl;
    }
    else
        std::cout<<"bus went past the busStop: "
            <<currentLocation->get_Name()<<std::endl;

}


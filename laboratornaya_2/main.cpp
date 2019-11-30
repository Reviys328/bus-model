#include <iostream>
#include "passenger.h"
#include "busStop.h"
#include "route.h"
#include "bus.h"

int main() {
    route route;
    busStop bs_1("dimitrova");
    busStop bs_2("evropa");
    busStop bs_3("leninskiy");
    auto* p_1 = new passenger("Ivan","leninskiy");
    auto* p_2 = new passenger("Roman","dimitrova");
    auto* p_3 = new passenger("Anton","dimitrova");
    auto* p_4 = new passenger("Masha", "dimitrova");
    bs_1.addPassenger(p_1);
    bs_2.addPassenger(p_2);
    bs_3.addPassenger(p_3);
    bs_3.addPassenger(p_4);
    route.addBusStop(&bs_1);
    route.addBusStop(&bs_2);
    route.addBusStop(&bs_3);
    std::cout<<route;
    bus bus;
    bus.startRoute(route);
    return 0;
}
//
// Created by poiza on 11/9/19.
//
#include <iostream>
#include <string>
#include "passenger.h"

passenger::passenger(std::string name, std::string neededLocation)
    :man(name), neededLocation(neededLocation) {
    sayHi();
}
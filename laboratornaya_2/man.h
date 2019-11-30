//
// Created by poiza on 11/9/19.
//

#ifndef LABORATORNAYA_2_MAN_H
#define LABORATORNAYA_2_MAN_H

#include <iostream>
#include <string>

class man{

protected:
    std::string name;

public:
    man(std::string name = "Ivan")
        :name(name) {
    }
    void sayHi(){
        std::cout<<name<<" say: Hi!\n";
    }
    std::string getName(){
        return name;
    }
};

#endif //LABORATORNAYA_2_MAN_H

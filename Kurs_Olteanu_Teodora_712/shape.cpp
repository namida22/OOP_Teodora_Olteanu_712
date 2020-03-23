//
// Created by Teo on 23.03.2020.
//

#include "shape.h"
#include <string>
///#include <utility>
shape::shape(string Name, float Flache){
    name=std::move(Name);
    flache=Flache;
}
//Getters
string shape::getName(){
    return name;
}

float shape::getFlache(){
    return flache;
}

//Setters

void shape::setName(string Name){
    name=std::move(Name);
}

void shape::setFlache(float Flache) {
    flache = Flache;
}

string shape::stringg() {
    string str;
    str = str + name +" "+ to_string(flache);
    return str;
}
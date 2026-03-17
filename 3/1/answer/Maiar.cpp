#include "Maiar.hpp"
#include <iostream>

Maiar::Maiar(string name, int hp, int power) : Creature(name, hp), Power(power) {
    
}

void Maiar:: describe() const {
    cout << "Maiar ["<< this->getName() <<"] | HP: "<< this->getHp() <<" | Power: "<< getPower() <<"\n";
    
}

int Maiar::getPower() const { 
    return this->Power; 

}
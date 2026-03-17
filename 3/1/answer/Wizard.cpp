#include "Wizard.hpp"

Wizard::Wizard(string name, int hp, int power, string staffName) : Maiar(name, hp, power), staffName(staffName) { }

Wizard::~Wizard() {}

void Wizard:: describe() const {
    cout << "Wizard ["<< this->getName() <<"] | HP: "<< this->getHp() <<" | Staff: "<< this->staffName <<"\n";
}
 
void Wizard:: cast() const {
    cout << this->getName() << " channels "<< this->Power <<" power through "<< this->staffName << "!\n";
}

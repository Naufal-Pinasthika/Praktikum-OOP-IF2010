#include "Balrog.hpp"

Balrog::Balrog(const string name, int hp, int power, const string whipName) : Maiar(name, hp, power), whipName(whipName) { }

Balrog::~Balrog() {}

void Balrog:: describe() const {
    cout << "Balrog ["<< this->getName() <<"] | HP: "<< this->getHp() <<" | Power: "<< this->Power <<" | Whip: "<< this->whipName <<"\n";
}
 
void Balrog:: rage() const {
    cout << this->getName() << " cracks "<< this->whipName <<" with "<< this->Power << " power!\n";
}

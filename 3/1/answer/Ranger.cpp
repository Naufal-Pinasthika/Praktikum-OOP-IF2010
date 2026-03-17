#include "Ranger.hpp"

Ranger::Ranger(string name, int hp, int grace, int arrows) : Elf(name, hp, grace), arrows(arrows) { }

Ranger::~Ranger() { }

void Ranger:: describe() const {
    cout << "Ranger ["<< this->name <<"] | HP: "<< this->hp <<" | Grace: "<< getGrace() <<" | Arrows: "<< this->arrows <<"\n";

}
void Ranger:: shoot() {
    this->arrows--;
    cout << this->name << " draws an arrow (grace: "<< getGrace() <<") and fires! Arrows left: "<< this->arrows <<"\n";
}

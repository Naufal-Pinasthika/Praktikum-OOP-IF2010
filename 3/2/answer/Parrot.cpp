#include "Parrot.hpp"

Parrot::Parrot(string name, int age, int vocabulary) : Pet(name, age), vocabulary(vocabulary) {
        cout << "[PARROT] "<< this->name <<" entered knowing "<< this->vocabulary << " words\n";

}

Parrot::~Parrot() {
    cout << "[PARROT] "<< this->name <<" squawks goodbye\n";

}

void Parrot:: makeSound() const {
    cout << "[SOUND] "<< this->name <<": Squawk! I know " << this->vocabulary << " words!\n";

};
void Parrot:: play() {
    this->vocabulary++;
    this->happiness += 10;
    cout << "[PLAY] "<< this->name <<" learns a new word! Vocabulary: " << this->vocabulary <<", Happiness: "<< this->happiness << "\n";   

};

void Parrot:: feed() {
    this->happiness += 3;
        cout << "[FEED] "<< this->name <<" eats seeds! Happiness: " << this->happiness << "\n";

};
#include "Dog.hpp"

Dog::Dog(string name, int age, bool trained) : Pet(name, age), trained(trained) {
    if (this->trained) {
        cout << "[DOG] "<< this->name <<" entered as trained dog\n";
    } else {
        cout << "[DOG] "<< this->name <<" entered as untrained dog\n";
    }
}

Dog::~Dog() {
    cout << "[DOG] "<< this->name <<" barks goodbye\n";

}

void Dog:: makeSound() const {
    cout << "[SOUND] "<< this->name <<": Woof!\n";

};
void Dog:: play() {
    if (this->trained) {
        this->happiness += 25;
        cout << "[PLAY] "<< this->name <<" fetches the ball! Happiness: " << this->happiness << "\n";

    } else {
        this->happiness += 10;
        cout << "[PLAY] "<< this->name <<" runs around! Happiness: " << this->happiness << "\n";

    }
};
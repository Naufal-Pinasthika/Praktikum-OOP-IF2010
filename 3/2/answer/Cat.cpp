#include "Cat.hpp"

Cat::Cat(string name, int age, bool indoor) : Pet(name, age), indoor(indoor) {
    if (this->indoor) {
        cout << "[CAT] "<< this->name <<" entered as indoor cat\n";
    } else {
        cout << "[CAT] "<< this->name <<" entered as outdoor cat\n";
    }
}

Cat::~Cat() {
    cout << "[CAT] "<< this->name <<" meows goodbye\n";

}

void Cat:: makeSound() const {
    cout << "[SOUND] "<< this->name <<": Meow!\n";

};
void Cat:: play() {
    if (this->indoor) {
        this->happiness += 15;
        cout << "[PLAY] "<< this->name <<" plays with yarn! Happiness: " << this->happiness << "\n";

    } else {
        this->happiness += 20;
        cout << "[PLAY] "<< this->name <<" chases mice! Happiness: " << this->happiness << "\n";

    }
};
void Cat:: feed() {
    this->happiness += 8;
        cout << "[FEED] "<< this->name <<" eats fish! Happiness: " << this->happiness << "\n";

};

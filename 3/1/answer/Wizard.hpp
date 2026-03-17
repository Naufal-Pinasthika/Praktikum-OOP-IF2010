#ifndef WIZARD_HPP
#define WIZARD_HPP

#include "Maiar.hpp"
#include <iostream>

class Wizard : private Maiar {
private:
    string staffName;

public:
    Wizard(string name, int hp, int power, string staffName);
    ~Wizard();

    void describe() const override;
    void cast() const;
};

#endif

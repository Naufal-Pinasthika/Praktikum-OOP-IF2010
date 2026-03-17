#pragma once

#include <string>
#include "Creature.hpp"
using namespace std;

class Maiar : protected Creature {
protected:
    Maiar(string name, int hp, int power);
    int Power;

public:
    int getPower()   const;
    virtual void describe() const;
    virtual ~Maiar() = default;
};
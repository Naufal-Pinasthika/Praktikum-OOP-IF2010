#ifndef ELF_HPP
#define ELF_HPP

#include "Creature.hpp"
#include <iostream>

class Elf : public Creature {
private:
    int grace;

public:
    Elf(string name, int hp, int grace);
    ~Elf();

    void describe() const override;
    int getGrace() const;
};

#endif
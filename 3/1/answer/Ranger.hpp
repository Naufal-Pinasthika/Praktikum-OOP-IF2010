#ifndef RANGER_HPP
#define RANGER_HPP

#include "Elf.hpp"
#include <iostream>

class Ranger : public Elf {
private:
    int arrows;

public:
    Ranger(string name, int hp, int grace, int arrows);
    ~Ranger();

    void describe() const override;
    void shoot();
};

#endif
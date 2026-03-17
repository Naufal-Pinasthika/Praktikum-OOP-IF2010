#ifndef BALROG_HPP
#define BALROG_HPP

#include "Maiar.hpp"
#include <iostream>

class Balrog : public Maiar {
private:
    string whipName;

public:
    Balrog(const string name, int hp, int power, const string whipName);
    ~Balrog();

    void describe() const override;
    void rage() const;
};

#endif

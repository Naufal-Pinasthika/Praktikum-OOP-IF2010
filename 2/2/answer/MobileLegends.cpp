#include <iostream>
#include "Layla.hpp"
#include "Tigreal.hpp"

using namespace std;

int main() {
    Layla *layla = new Layla(10, 1000);
    layla->useSkill();

    Layla *layla2 = new Layla(*layla);

    layla->heal(5);

    Layla *layla3 = new Layla(50, 200);
    layla3->moveTo(15,30);

    *layla3 = *layla;

    Tigreal *tigreal = new Tigreal(200, 10);
    tigreal->moveTo(5,15);
    tigreal->taunt(10);

    Tigreal *tigreal2 = new Tigreal(*tigreal);

    Tigreal *tigreal3 = new Tigreal(400, 20);
    tigreal3->sacredHammer();

    Tigreal *tigreal4 = new Tigreal(*tigreal3);

    tigreal->useSkill();
    tigreal3->useSkill();

    Tigreal *tigreal5 = new Tigreal(300, 15);

    tigreal5->moveTo(10, 20);

    Tigreal *tigreal6 = new Tigreal(*tigreal5);

    tigreal6->taunt(5);

    delete tigreal6;
    delete layla;
    delete layla2;
    delete layla3;

    delete tigreal5;
    delete tigreal4;
    delete tigreal3;
    delete tigreal2;
    delete tigreal;


}
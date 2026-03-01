#include "Paper.hpp"

int main() {
    Paper *a = new Paper('A');
    Paper b = Paper('B');
    Paper c = Paper('C');
    
    Paper d = Paper(c);

    a->fold();
    b.fold();
    c.fold();

    c.glue();
    // c->fold();
    delete a;
    c.setName('X');
    d.fold();
    d.glue();
    // d.fold();


    // ~d;
    // delete c;
    // delete b;
}
#include "Clickable.h"

Clickable::Clickable()
{
    //ctor
}

Clickable::~Clickable()
{
    //dtor
}

bool Clickable::clicked(int x, int y)
{
    if ((x >= get_x()) && (x <= get_x() + get_size_x()) && (y >= get_y()) && (y <= get_y() + get_size_y()))
        execute();
}

void Clickable::execute()
{
    for(auto x : observers)
        x.notify();
}

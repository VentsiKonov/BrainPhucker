#pragma once
#include <iostream>
#include "position.h"


class Object
{
    Position coords;
    char symbol;
public:
    Object();

    Position getPosition() const;
    void setPosition(Position newCoords);
};

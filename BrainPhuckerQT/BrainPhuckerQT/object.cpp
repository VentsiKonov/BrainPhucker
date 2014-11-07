#include "object.h"

Object::Object(){
    coords.horPosition = 0;
    coords.vertPosition = 0;
    symbol = ' ';
}

Position Object :: getPosition() const{
    return coords;
}

void Object :: setPosition(Position newCoords){
    coords = newCoords;
}

char Object :: getSymbol() const{
    return symbol;
}

void Object :: setSymbol(char newSymbol){
    symbol = newSymbol;
}

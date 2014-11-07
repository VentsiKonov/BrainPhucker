#include "object.h"

Object::Object(){
    ;
}

Position Object :: getPosition() const{
    return coords;
}

void Object :: setPosition(Position newCoords){
    coords = newCoords;
}

#include "Field.h"

#include <iostream>
using std::cout;
using std::endl;

class Field {
public:
	void Clear();
	//void Draw(Object& obj);
private:
	Field();
	Field(const Field&);
	void operator=(const Field&);

};
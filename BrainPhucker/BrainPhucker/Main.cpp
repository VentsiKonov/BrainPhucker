#include "Console\console.h"

// Your code HERE!!
// BrainPhuck

int main(int argc, char **argv) {
	Console c;
	c.SetBGColor(5);
	for (size_t i = 0; i < 25; i++) {
		c.SetCursorPosition(i, i);
		c.Write(2);
	}
	return 0;
}
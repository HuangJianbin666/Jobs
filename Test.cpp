#include "Elephant.h"
#include "Fridge.h"
int main() {
	Elephant elephant;
	Fridge fridge;
	fridge.open();
	fridge.putElephant();
	fridge.close();
	return 0;
}
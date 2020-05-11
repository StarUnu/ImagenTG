#include <iostream>
#include "BMP.h"

int main() {
	BMP bmp9("poesia.bmp");
	bmp9.crear_forma(0, 0, 50, 30, 0, 255, 0, 0);
	bmp9.crear_forma(0, 0, 100, 20, 0, 255, 0, 0);
	bmp9.write("poesia_rectangulo.bmp");
}

#include <iostream>

#define PRINT_VARIABLE(x) std::cout << #x << ": " << x << std::endl;

extern "C" float add101(float a)
{
	return 101.0+a;
}

int main(int argc, char **argv) {
    std::cout << "Hello, world!" << std::endl;
    double cheese = 0.12345;
    PRINT_VARIABLE(cheese);
    return 0;
}

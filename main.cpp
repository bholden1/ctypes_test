#include <iostream>

extern "C" float add101(float a)
{
	return 101.0+a;
}

int main(int argc, char **argv) {
    std::cout << "Hello, world!" << std::endl;
    return 0;
}

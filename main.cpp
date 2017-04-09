#include <iostream>

void f() {
	std::cout << "hello git!" << std::endl;
}

int main() {
	std::cout << "this is a git test" << std::endl;
	int i = 0;
	while (i < 10) {
		f();
		++i;	
	}
	return 0;
}

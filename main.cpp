#include <cstdlib>
#include <iostream>

#include "loadhandler.h"

int main(int argc, char** argv) {
	try {	
		std::unique_ptr<Loadhandler> lh(new Loadhandler());	
	} catch (...) {
	
	}
	return EXIT_SUCCESS;
}

#include "Application.h"

namespace Chico {

	Application::Application(){}

	Application::~Application(){}

	void Application::Run() {
		 int count = 0;
		 bool run = true;
		while (run) {
			count++;
			if (count == 5) {
				run = false;
			}
			std::cout << "muies" << count << std::endl;
			std::cin.get();
		};
		std::cin.get();
	}
}
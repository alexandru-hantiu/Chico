#pragma once

#include <iostream>


#ifdef CHC_PLATFORM_WINDOWS

extern Chico::Application* Chico::CreateApplication();
int main(int argc, char** argv) {

	printf("Chico Enginge Started\n");

	auto app = Chico::CreateApplication();
	app->Run();

	delete app;
}
#endif
#pragma once

#include <iostream>


#ifdef CHC_PLATFORM_WINDOWS

extern Chico::Application* Chico::CreateApplication();
int main(int argc, char** argv) 
{

	Chico::Log::Init();
	CHC_CORE_WARN("Initialised Log!");
	CHC_CORE_CRITICAL("Initialised Log!");



	auto app = Chico::CreateApplication();
	app->Run();

	delete app;
}
#endif
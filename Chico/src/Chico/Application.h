#pragma once

#include "Core.h"
#include <iostream>
namespace Chico {


	class CHICO_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
		
	};

	//  To be defined in client
	Application* CreateApplication();

}


#include "Application.h"

#include "Chico/Events/ApplicationEvent.h"
#include "Chico/Log.h"

namespace Chico {

	Application::Application(){}

	Application::~Application(){}

	void Application::Run() 
	{
		WindowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategoryApplication))
		{
			CHC_TRACE(e);
		}
		if (e.IsInCategory(EventCategoryInput))
		{
			CHC_TRACE(e);
		}

		while (true);
	}
}
#include <Chico.h>

class Sandbox : public Chico::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Chico::Application* Chico::CreateApplication()
{
	return new Sandbox();
}
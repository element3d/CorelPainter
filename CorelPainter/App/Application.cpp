#include "Application.h"
#include "Main.h"


Application::Application(const std::string& applicationName, e3::EE3OS os, e3::EE3Target target, e3::Size2i windowSize, e3::Size2i resolution) 
	: ApplicationBase(applicationName, os, target, windowSize, resolution)
{
	PushElement(new Main());
}

void Application::OnResize(float width, float height)
{

}

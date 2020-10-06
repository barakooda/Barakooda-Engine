#pragma once

#ifdef BK_PLATFORM_WINDOWS

extern Barakooda::Application* Barakooda::CreateApplication();

int main(int argc,char** argv) 
{
	printf("Barakooda Engine");
	auto app = Barakooda::CreateApplication();
	app->Run();
	delete app;
}

#endif
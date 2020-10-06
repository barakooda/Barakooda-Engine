#pragma once
#include "Core.h"
namespace Barakooda
{

	class BARAKOODA_API Application
	{
	

	
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be defined in client
	Application* CreateApplication();

}


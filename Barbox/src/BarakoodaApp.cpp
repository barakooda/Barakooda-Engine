#include "Barakooda.h"

class BarakBox : public Barakooda::Application
{
public:
	BarakBox() 
	{

	}

	~BarakBox()
	{

	}
};

Barakooda::Application* Barakooda::CreateApplication()
{
	return new BarakBox();
}
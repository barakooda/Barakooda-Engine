#pragma once

#ifdef BK_PLATFORM_WINDOWS
	#ifdef BK_BUILD_DLL
		#define BARAKOODA_API __declspec(dllexport)
	
	#else
		#define BARAKOODA_API __declspec(dllimport)
	#endif
#else
	#error Barakooda only support Windows!
#endif
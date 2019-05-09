#pragma once

#ifdef SAMPLENATIVE_EXPORTS
	#define SAMPLENATIVE_API __declspec(dllexport)
#else
	#define SAMPLENATIVE_API __declspec(dllimport)
#endif

extern "C" {
	SAMPLENATIVE_API int AddInt(int& i);
}
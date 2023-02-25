#pragma once

#ifdef CHC_PLATFORM_WINDOWS
#ifdef CHC_BUILD_DLL
#define CHICO_API _declspec(dllexport)
#else
#define CHICO_API _declspec(dllimport)
#endif
#else
#error Chico only supports Windows!
#endif

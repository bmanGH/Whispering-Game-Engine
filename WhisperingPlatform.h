
#ifndef __WHISPERING_PLATFORM_H__
#define __WHISPERING_PLATFORM_H__

// compiler-set define to assign the engine build target
//#define _WHISPERING_STATIC_LIB
//#define _WHISPERING_SHARED_LIB

// find current compiler
#if defined(__GNUC__)
#	define _WHISPERING_COMPILER_GNUC
#elif defined(_MSC_VER)
#	define _WHISPERING_COMPILER_MSC
#endif

// symbol visibility and call convention
#if defined(_WHISPERING_COMPILER_GNUC)
#	define WEXPORT __attribute__ ((visibility("default")))
#	define WPRIVATE __attribute__ ((visibility("hidden")))
#	define WCALL
#elif defined(_WHISPERING_COMPILER_MSC)
#	ifdef _WHISPERING_SHARED_LIB
#		define WEXPORT __declspec(dllexport)
#	else
#		define WEXPORT __declspec(dllimport)
#	endif
#	define WPRIVATE
#	define WCALL
#else
#	define WEXPORT
#	define WPRIVATE
#	define WCALL
#endif

// find current platform
#if defined(__APPLE_CC__)
#	if defined(__IPHONE_OS_VERSION_MAX_ALLOWED) || \
		defined(__IPHONE_OS_VERSION_MIN_REQUIRED__) || \
		defined(__IPHONE_OS_VERSION_MIN_REQUIRED)
#		define _WHISPERING_PLATFORM_IOS
#	else
#		define _WHISPERING_PLATFORM_OSX
#	endif
#elif defined(_ANDROID_)
#	define _WHISPERING_PLATFORM_ANDROID
#endif

// set platform environment
#ifdef _WHISPERING_PLATFORM_IOS
typedef unsigned char WUINT8;
typedef unsigned short WUINT16;
typedef unsigned int WUINT32;
typedef unsigned long long WUINT64;
typedef float WREAL;
#endif

#endif

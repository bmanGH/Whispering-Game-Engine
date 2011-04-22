
#ifndef __WHISPERING_COMMON_H__
#define __WHISPERING_COMMON_H__

#include "stdio.h"
#include "stdlib.h"
#include <assert.h>

// Whispering version
#define WHISPERING_VERSION_MAJOR 0
#define WHISPERING_VERSION_MINOR 1
#define WHISPERING_VERSION_SUFFIX "develop"

#include "WhisperingPlatform.h"
#include "WhisperingConfig.h"

#define Wlog(...) printf(__VA_ARGS__)

#ifdef _WDEBUG
#define Wassert(X, MSG) \
	if (!(X)) \
	{ \
		Wlog("Error! Assert '%s' failed on line %d in file '%s': %s", \
			#X, __LINE__, __FILE__, MSG); \
		exit(1); \
	}
#else
#define Wassert(X, MSG) do {} while(0)
#endif

#endif

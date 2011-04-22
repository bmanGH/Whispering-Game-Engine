
#ifndef __WHISPERING_H__
#define __WHISPERING_H__

#include "WhisperingCommon.h"
#include "WhisperingEngineSystem.h"

#if defined(_WHISPERING_PLATFORM_IOS)
#include "WhisperingRendererContextIOS.h"
#include "WhisperingRendererGLES1.h"
#elif defined(_WHISPERING_PLATFORM_ANDROID)
#include "WhisperingRendererGLES1.h"
#endif

#include "WhisperingTextureManager.h"

#endif

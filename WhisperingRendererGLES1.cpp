/*
 *  WhisperingRendererGLES1.cpp
 *  Whispering
 *
 *  Created by bman on 11/18/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#include "WhisperingRendererGLES1.h"
#include "WhisperingCommon.h"

namespace Whispering {
	
	RendererGLES1::RendererGLES1 () {
#ifdef _WHISPERING_PLATFORM_IOS
		_internalContext = [[EAGLContext alloc] initWithAPI:kEAGLRenderingAPIOpenGLES1];
		Wassert(!_internalContext, "failed to create EAGLContext");
#endif
	}
	
	RendererGLES1::~RendererGLES1 () {
	}
	
	RendererAPI RendererGLES1::getRendererAPI () {
		return kGLES1;
	}
	
#ifdef _WHISPERING_PLATFORM_IOS
	EAGLContext* RendererGLES1::getInternalContext () {
		return _internalContext;
	}
#endif
	
}

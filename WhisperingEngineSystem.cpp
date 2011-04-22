/*
 *  WhisperingEngineSystem.cpp
 *  Whispering
 *
 *  Created by jerry lin on 11/16/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#include "WhisperingEngineSystem.h"
#include "WhisperingCommon.h"

namespace Whispering {
	
	template<> EngineSystem* Singleton<EngineSystem>::_gSingleton = NULL;
	
	EngineSystem& EngineSystem::getSingleton () {
		assert(_gSingleton);
		return *_gSingleton;
	}
	
	EngineSystem* EngineSystem::getSingletonPtr () {
		return _gSingleton;
	}
	
	EngineSystem::EngineSystem () {
		assert(!_gSingleton);
		_gSingleton = (this);
	}
	
	EngineSystem::EngineSystem (Renderer *renderer) {
		assert(renderer);
		_renderer = renderer;
		
		assert(!_gSingleton);
		_gSingleton = (this);
	}
	
	EngineSystem::~EngineSystem () {
		assert(_gSingleton);
		_gSingleton = NULL;
	}
	
	Renderer& EngineSystem::GetRenderer () {
		return *_renderer;
	}
	
	Renderer* EngineSystem::GetRendererPtr () {
		return _renderer;
	}
	
}

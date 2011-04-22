/*
 *  WhisperingEngineSystem.h
 *  Whispering
 *
 *  Created by jerry lin on 11/16/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef __WHISPERING_ENGINE_SYSTEM_H__
#define __WHISPERING_ENGINE_SYSTEM_H__

#include "WhisperingSingleton.h"
#include "WhisperingRenderer.h"

namespace Whispering {
	
	class EngineSystem : public Singleton<EngineSystem> {
		
	private:
		
		
	protected:
		Renderer *_renderer;
		
	public:		
		/*
		 Why do we do this? Well, it's because the Singleton
		 implementation is in a .h file, which means it gets compiled
		 into anybody who includes it. This is needed for the
		 Singleton template to work, but we actually only want it
		 compiled into the implementation of the class based on the
		 Singleton, not all of them. If we don't change this, we get
		 link errors when trying to use the Singleton-based class from
		 an outside dll.
		 */
		static EngineSystem& getSingleton ();
		static EngineSystem* getSingletonPtr ();
		
		EngineSystem ();
		EngineSystem (Renderer *renderer);
		~EngineSystem ();
		
		Renderer& GetRenderer ();
		Renderer* GetRendererPtr ();
		
	};
	
}

#endif

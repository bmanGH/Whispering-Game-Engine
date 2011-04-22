/*
 *  WhisperingSingleton.h
 *  Whispering
 *
 *  Created by jerry lin on 11/16/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef __WHISPERING_SINGLETOM_H__
#define __WHISPERING_SINGLETOM_H__

#include "WhisperingCommon.h"

namespace Whispering {
	
	template <typename T>
	class Singleton {
		
	private:
		Singleton (const Singleton<T>&);
		Singleton& operator= (const Singleton<T>&);
		
	protected:
		static T* _gSingleton;
		
		Singleton () {
			assert(!_gSingleton);
			_gSingleton = static_cast<T*>(this);
		}
		
		virtual ~Singleton () {
			assert(_gSingleton);
			_gSingleton = NULL;
		}
		
	public:		
		static T& getSingleton () {
			assert(_gSingleton);
			return *_gSingleton;
		}
		
		static T* getSingletonPtr () {
			return _gSingleton;
		}
		
	};
	
}

#endif

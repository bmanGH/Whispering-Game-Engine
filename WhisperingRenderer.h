
#ifndef __WHISPERING_RENDERER_H__
#define __WHISPERING_RENDERER_H__

#include "WhisperingPlatform.h"

namespace Whispering {
	
	enum RendererAPI {
#if defined(_WHISPERING_PLATFORM_IOS) || defined(_WHISPERING_PLATFORM_ANDROID)
		kGLES1,
		kGLES2,
#endif
		NUM_RendererAPI
	};
	
	class RendererContext;
	
	class Renderer {
		
	protected:
		Renderer () {}
		virtual ~Renderer () {}
		
	public:
		virtual RendererAPI getRendererAPI () = 0;
		
	};

}

#endif

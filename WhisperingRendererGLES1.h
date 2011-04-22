
#ifndef __WHISPERING_RENDERER_GLES1_H__
#define __WHISPERING_RENDERER_GLES1_H__

#include "WhisperingRenderer.h"

#ifdef _WHISPERING_PLATFORM_IOS
#import <OpenGLES/EAGL.h>
#import <OpenGLES/ES1/gl.h>
#import <OpenGLES/ES1/glext.h>
#endif

namespace Whispering {
	
	class RendererGLES1 : public Renderer {
		
	protected:
#ifdef _WHISPERING_PLATFORM_IOS
		EAGLContext *_internalContext;
#endif
		
	public:
		RendererGLES1 ();
		virtual ~RendererGLES1 ();
		virtual RendererAPI getRendererAPI ();
		
#ifdef _WHISPERING_PLATFORM_IOS
		EAGLContext* getInternalContext ();
#endif
		
	};
	
}

#endif

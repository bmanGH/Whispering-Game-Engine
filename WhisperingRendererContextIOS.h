
#ifndef __WHISPERING_RENDERER_CONTEXT_IOS_H__
#define __WHISPERING_RENDERER_CONTEXT_IOS_H__

#include "WhisperingPlatform.h"
#ifndef _WHISPERING_PLATFORM_IOS
#error "Whispering::RendererContextIOS only use in IOS platform"
#endif
#include "WhisperingRendererContext.h"
#ifdef __OBJC__
#import <OpenGLES/EAGL.h>
#else
#error "Whispering::RendererContextIOS write by Objective-C language"
#endif
#import <OpenGLES/ES1/gl.h>
#import <OpenGLES/ES1/glext.h>
#import <OpenGLES/ES2/gl.h>
#import <OpenGLES/ES2/glext.h>

namespace Whispering {
	
	class RendererContextIOS : public RendererContext {
		
	private:
		EAGLContext *_internalContext;
		GLuint _renderFramebuffer;
		GLuint _colorRenderbuffer;
		
	public:
		RendererContextIOS (WPresentTargetHandle presentTarget, Renderer* renderer);
		virtual ~RendererContextIOS ();
		
		virtual bool present ();
		
		GLuint getRenderFramebuffer ();
		GLuint getColorRenderbuffer ();
		
	};
	
}

#endif


#ifndef __WHISPERING_RENDERER_CONTEXT_H__
#define __WHISPERING_RENDERER_CONTEXT_H__

#include "WhisperingPlatform.h"
#include "WhisperingRenderer.h"
#include "WhisperingReferenceCount.h"

#if defined(_WHISPERING_PLATFORM_IOS)
#import <QuartzCore/QuartzCore.h>
#import <OpenGLES/EAGL.h>
#	define WPresentTargetHandle CAEAGLLayer*
#endif

namespace Whispering {
	
	class RendererContext : public ReferenceCount {
		
	protected:
		RendererContext (WPresentTargetHandle presentTarget, Renderer* renderer) {}
		RendererContext () {}
		virtual ~RendererContext () {}
		
	public:
		virtual bool present ();
		
	};
	
}

#endif


#include "WhisperingRendererContextIOS.h"
#include "WhisperingCommon.h"
#import <QuartzCore/QuartzCore.h>

namespace Whispering {
	
	RendererContextIOS::RendererContextIOS (WPresentTargetHandle presentTarget, Renderer* renderer) {
	}
	
	RendererContextIOS::~RendererContextIOS () {
		[_internalContext release];
	}
	
	bool RendererContextIOS::present () {
		[EAGLContext setCurrentContext:_internalContext];
		glBindBuffer(GL_RENDERBUFFER, _colorRenderbuffer);
		return [_internalContext presentRenderbuffer:GL_RENDERBUFFER];
	}
		
	GLuint RendererContextIOS::getRenderFramebuffer () {
		return _renderFramebuffer;
	}
	
	GLuint RendererContextIOS::getColorRenderbuffer () {
		return _colorRenderbuffer;
	}
	
}

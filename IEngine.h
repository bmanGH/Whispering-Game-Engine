
#ifndef __IENGINE_H__
#define __IENGINE_H__

#include "IPipeline.h"


namespace Whispering {
	
	class IEngine {
		
	public:
		virtual void setRenderer (IRenderer renderer) = 0;
		virtual IRenderer getRenderer () = 0;
		
		virtual bool start () = 0;
		virtual bool pause (bool toPause) = 0;
		virtual bool shutdown () = 0;
		
	};
	
}
								  
#endif

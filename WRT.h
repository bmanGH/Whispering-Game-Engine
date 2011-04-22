
#ifndef __WRT_H__
#define __WRT_H__

#include "WhisperingReferenceCount.h"

namespace Whispering {

	class WRT : public ReferenceCount {
		
	protected:
		int _v;
		
	public:
		WRT ();
		~WRT ();
		int GetV();
		void SetV(int v);
	};
	
}

#endif

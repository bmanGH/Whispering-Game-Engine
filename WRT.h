/*
 *  WRT.h
 *  Whispering
 *
 *  Created by jerry lin on 11/17/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

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
 
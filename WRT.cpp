/*
 *  WRT.cpp
 *  Whispering
 *
 *  Created by jerry lin on 11/17/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#include "WRT.h"
#include "WhisperingCommon.h"

namespace Whispering {
	
	WRT::WRT () : ReferenceCount() {
		
	}
	
	WRT::~WRT () {
		Wlog("delete WRT");
	}
	
	int WRT::GetV () {
		return _v;
	}
	
	void WRT::SetV (int v) {
		_v = v;
	}
	
}

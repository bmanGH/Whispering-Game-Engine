
#include "WhisperingReferenceCount.h"
#include "WhisperingCommon.h"

namespace Whispering {
	
	ReferenceCount::ReferenceCount () :
		_refCount(1) {
	}
	
	ReferenceCount::~ReferenceCount () {
	}
	
	int ReferenceCount::getRefCount () {
		return _refCount;
	}
	
	void ReferenceCount::addRef () {
		_refCount++;
	}
	
	void ReferenceCount::removeRef () {
		_refCount--;
		Wassert(rc < 0, "reference count is less than zero");
		if (_refCount == 0)
			delete this;
	}
	
}


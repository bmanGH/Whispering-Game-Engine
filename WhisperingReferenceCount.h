
#ifndef __WHISPERING_REFERENCE_COUNT_H__
#define __WHISPERING_REFERENCE_COUNT_H__

namespace Whispering {
	
	class ReferenceCount {
		
	private:
		int _refCount;
	
	protected:		
		ReferenceCount ();
		virtual ~ReferenceCount ();
		
	public:
		int getRefCount ();		
		void addRef ();		
		void removeRef ();
		
	};
	
}

#endif

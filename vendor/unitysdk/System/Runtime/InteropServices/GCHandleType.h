#pragma once
#include "../../../unitysdk.h"

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int GCHandleType_TypeDefinitionIndex = 24685;

	class GCHandleType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Runtime::InteropServices::GCHandleType* Weak; // 0x0
		::System::Runtime::InteropServices::GCHandleType* WeakTrackResurrection; // 0x0
		::System::Runtime::InteropServices::GCHandleType* Normal; // 0x0
		::System::Runtime::InteropServices::GCHandleType* Pinned; // 0x0

	};
}


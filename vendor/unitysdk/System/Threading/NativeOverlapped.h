#pragma once
#include "../../unitysdk.h"

namespace System::Threading
{
	inline static constexpr unsigned int NativeOverlapped_TypeDefinitionIndex = 24054;

	class NativeOverlapped : public Il2CppObject
	{
	public:
		::System::Int32 InternalLow; // 0x10
		::System::Int32 InternalHigh; // 0x18
		::System::Int32 OffsetLow; // 0x20
		::System::Int32 OffsetHigh; // 0x24
		::System::Int32 EventHandle; // 0x28

	};
}


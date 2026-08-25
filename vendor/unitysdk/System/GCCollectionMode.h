#pragma once
#include "../unitysdk.h"

namespace System
{
	inline static constexpr unsigned int GCCollectionMode_TypeDefinitionIndex = 23933;

	class GCCollectionMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::GCCollectionMode* Default; // 0x0
		::System::GCCollectionMode* Forced; // 0x0
		::System::GCCollectionMode* Optimized; // 0x0

	};
}


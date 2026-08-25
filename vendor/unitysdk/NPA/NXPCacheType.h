#pragma once
#include "../unitysdk.h"

namespace NPA { class NXPCacheType; }

namespace NPA
{
	inline static constexpr unsigned int NXPCacheType_TypeDefinitionIndex = 25781;

	class NXPCacheType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::NXPCacheType* NoCache; // 0x0
		::NPA::NXPCacheType* MemoryCache; // 0x0
		::NPA::NXPCacheType* StorageCache; // 0x0

	};
}


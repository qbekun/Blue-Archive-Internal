#pragma once
#include "../unitysdk.h"

namespace MemoryPack { class GenerateType; }

namespace MemoryPack
{
	inline static constexpr unsigned int GenerateType_TypeDefinitionIndex = 35399;

	class GenerateType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MemoryPack::GenerateType* Object; // 0x0
		::MemoryPack::GenerateType* VersionTolerant; // 0x0
		::MemoryPack::GenerateType* CircularReference; // 0x0
		::MemoryPack::GenerateType* Collection; // 0x0
		::MemoryPack::GenerateType* NoGenerate; // 0x0

	};
}


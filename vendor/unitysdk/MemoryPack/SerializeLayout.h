#pragma once
#include "../unitysdk.h"

namespace MemoryPack { class SerializeLayout; }

namespace MemoryPack
{
	inline static constexpr unsigned int SerializeLayout_TypeDefinitionIndex = 35400;

	class SerializeLayout : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MemoryPack::SerializeLayout* Sequential; // 0x0
		::MemoryPack::SerializeLayout* Explicit; // 0x0

	};
}


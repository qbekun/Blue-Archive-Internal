#pragma once
#include "../unitysdk.h"

namespace MemoryPack { class StringEncoding; }

namespace MemoryPack
{
	inline static constexpr unsigned int StringEncoding_TypeDefinitionIndex = 35437;

	class StringEncoding : public Il2CppObject
	{
	public:
		::System::Byte value__; // 0x10
		::MemoryPack::StringEncoding* Utf16; // 0x0
		::MemoryPack::StringEncoding* Utf8; // 0x0

	};
}


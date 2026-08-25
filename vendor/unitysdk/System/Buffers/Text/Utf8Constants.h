#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_BUFFERS_TEXT_UTF8CONSTANTS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x92DD030)

namespace System::Buffers::Text
{
	inline static constexpr unsigned int Utf8Constants_TypeDefinitionIndex = 25214;

	class Utf8Constants : public Il2CppObject
	{
	public:
		::System::TimeSpan* s_nullUtcOffset; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8CONSTANTS_.CCTOR_OFFSET))(nullptr);
		}

	};
}


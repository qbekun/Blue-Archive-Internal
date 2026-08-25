#pragma once
#include "../../../unitysdk.h"

#define MONO_GLOBALIZATION_UNICODE_LEVEL2MAP_.CTOR_OFFSET UNITYSDK_OFFSET(0x91249C0)

namespace Mono::Globalization::Unicode
{
	inline static constexpr unsigned int Level2Map_TypeDefinitionIndex = 23604;

	class Level2Map : public Il2CppObject
	{
	public:
		::System::Byte Source; // 0x10
		::System::Byte Replace; // 0x11

		::System::Void .ctor(::System::Byte arg, ::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_LEVEL2MAP_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}


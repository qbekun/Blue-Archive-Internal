#pragma once
#include "../../../unitysdk.h"

#define MONO_GLOBALIZATION_UNICODE_TAILORINGINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x91247F0)

namespace Mono::Globalization::Unicode
{
	inline static constexpr unsigned int TailoringInfo_TypeDefinitionIndex = 23601;

	class TailoringInfo : public Il2CppObject
	{
	public:
		::System::Int32 LCID; // 0x10
		::System::Int32 TailoringIndex; // 0x14
		::System::Int32 TailoringCount; // 0x18
		::System::Boolean FrenchSort; // 0x1C

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_TAILORINGINFO_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}


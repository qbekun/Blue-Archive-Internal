#pragma once
#include "../../unitysdk.h"

#define SYSTEM_GLOBALIZATION_ERAINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x929B3F0)
#define SYSTEM_GLOBALIZATION_ERAINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x929B4D0)

namespace System::Globalization
{
	inline static constexpr unsigned int EraInfo_TypeDefinitionIndex = 24991;

	class EraInfo : public Il2CppObject
	{
	public:
		::System::Int32 era; // 0x10
		::System::Int64 ticks; // 0x18
		::System::Int32 yearOffset; // 0x20
		::System::Int32 minEraYear; // 0x24
		::System::Int32 maxEraYear; // 0x28
		::System::String* eraName; // 0x30
		::System::String* abbrevEraName; // 0x38
		::System::String* englishEraName; // 0x40

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_ERAINFO_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_ERAINFO_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, arg, str, str, str, nullptr);
		}

	};
}


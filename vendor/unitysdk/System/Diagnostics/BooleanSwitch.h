#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DIAGNOSTICS_BOOLEANSWITCH_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AFDEA0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int BooleanSwitch_TypeDefinitionIndex = 29238;

	class BooleanSwitch : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_BOOLEANSWITCH_.CTOR_OFFSET))(str, str, nullptr);
		}

	};
}


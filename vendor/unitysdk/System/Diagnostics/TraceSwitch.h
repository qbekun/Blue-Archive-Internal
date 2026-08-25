#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DIAGNOSTICS_TRACESWITCH_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B01390)

namespace System::Diagnostics
{
	inline static constexpr unsigned int TraceSwitch_TypeDefinitionIndex = 29251;

	class TraceSwitch : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACESWITCH_.CTOR_OFFSET))(str, str, nullptr);
		}

	};
}


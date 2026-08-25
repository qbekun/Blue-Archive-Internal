#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_MANUALRESETEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x93D7640)

namespace System::Threading
{
	inline static constexpr unsigned int ManualResetEvent_TypeDefinitionIndex = 24040;

	class ManualResetEvent : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENT_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}


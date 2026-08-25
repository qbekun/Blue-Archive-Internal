#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_AUTORESETEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x93D7460)

namespace System::Threading
{
	inline static constexpr unsigned int AutoResetEvent_TypeDefinitionIndex = 24035;

	class AutoResetEvent : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_AUTORESETEVENT_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}


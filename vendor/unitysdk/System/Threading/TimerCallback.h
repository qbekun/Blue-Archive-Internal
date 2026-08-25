#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_TIMERCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x93EDA70)
#define SYSTEM_THREADING_TIMERCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x93EDB80)

namespace System::Threading
{
	inline static constexpr unsigned int TimerCallback_TypeDefinitionIndex = 24127;

	class TimerCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMERCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMERCALLBACK_INVOKE_OFFSET))(arg, nullptr);
		}

	};
}


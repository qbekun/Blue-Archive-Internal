#pragma once
#include "../../unitysdk.h"

#define SYSTEM_TIMERS_ELAPSEDEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AD8580)
#define SYSTEM_TIMERS_ELAPSEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x9AD8690)

namespace System::Timers
{
	inline static constexpr unsigned int ElapsedEventHandler_TypeDefinitionIndex = 29199;

	class ElapsedEventHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_ELAPSEDEVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg, ::System::Timers::ElapsedEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Timers::ElapsedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_ELAPSEDEVENTHANDLER_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}


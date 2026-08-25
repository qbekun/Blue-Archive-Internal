#pragma once
#include "../../unitysdk.h"

#define SYSTEM_TIMERS_ELAPSEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AD9620)

namespace System::Timers
{
	inline static constexpr unsigned int ElapsedEventArgs_TypeDefinitionIndex = 29202;

	class ElapsedEventArgs : public Il2CppObject
	{
	public:
		::System::DateTime* time; // 0x10

		::System::Void .ctor(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_ELAPSEDEVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}


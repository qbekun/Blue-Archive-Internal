#pragma once
#include "../../unitysdk.h"

#define SYSTEM_TIMERS_TIMERSDESCRIPTIONATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AD9680)
#define SYSTEM_TIMERS_TIMERSDESCRIPTIONATTRIBUTE_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x9AD96E0)

namespace System::Timers
{
	inline static constexpr unsigned int TimersDescriptionAttribute_TypeDefinitionIndex = 29201;

	class TimersDescriptionAttribute : public Il2CppObject
	{
	public:
		::System::Boolean replaced; // 0x18

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMERSDESCRIPTIONATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_Description()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMERS_TIMERSDESCRIPTIONATTRIBUTE_GET_DESCRIPTION_OFFSET))(nullptr);
		}

	};
}


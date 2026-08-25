#pragma once
#include "../unitysdk.h"

#define MXTIMELINE_INTCLAMPTIMELINEPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0xE02EF0)

namespace MXTimeline
{
	inline static constexpr unsigned int IntClampTimelineParameter_TypeDefinitionIndex = 10233;

	class IntClampTimelineParameter : public Il2CppObject
	{
	public:
		::System::Boolean overrideState; // 0x10
		::System::Int32 value; // 0x14
		::System::Int32 min; // 0x18
		::System::Int32 max; // 0x1C

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_INTCLAMPTIMELINEPARAMETER_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}


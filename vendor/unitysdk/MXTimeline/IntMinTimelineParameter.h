#pragma once
#include "../unitysdk.h"

#define MXTIMELINE_INTMINTIMELINEPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0xE02ED0)

namespace MXTimeline
{
	inline static constexpr unsigned int IntMinTimelineParameter_TypeDefinitionIndex = 10231;

	class IntMinTimelineParameter : public Il2CppObject
	{
	public:
		::System::Boolean overrideState; // 0x10
		::System::Int32 value; // 0x14
		::System::Int32 min; // 0x18

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_INTMINTIMELINEPARAMETER_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}


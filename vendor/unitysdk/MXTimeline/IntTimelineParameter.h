#pragma once
#include "../unitysdk.h"

#define MXTIMELINE_INTTIMELINEPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0xE02EC0)

namespace MXTimeline
{
	inline static constexpr unsigned int IntTimelineParameter_TypeDefinitionIndex = 10230;

	class IntTimelineParameter : public Il2CppObject
	{
	public:
		::System::Boolean overrideState; // 0x10
		::System::Int32 value; // 0x14

		::System::Void .ctor(::System::Int32 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_INTTIMELINEPARAMETER_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};
}


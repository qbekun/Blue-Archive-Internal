#pragma once
#include "../unitysdk.h"

#define MXTIMELINE_BOOLTIMELINEPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0xE02A50)

namespace MXTimeline
{
	inline static constexpr unsigned int BoolTimelineParameter_TypeDefinitionIndex = 10221;

	class BoolTimelineParameter : public Il2CppObject
	{
	public:
		::System::Boolean overrideState; // 0x10
		::System::Boolean value; // 0x11

		::System::Void .ctor(::System::Boolean arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_BOOLTIMELINEPARAMETER_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};
}


#pragma once
#include "../unitysdk.h"

#define MXTIMELINE_ENUMTIMELINEPARAMETER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MXTimeline
{
	inline static constexpr unsigned int EnumTimelineParameter`1_TypeDefinitionIndex = 10238;

	class EnumTimelineParameter`1 : public Il2CppObject
	{
	public:
		::System::Boolean overrideState; // 0x0
		Il2CppObject* value; // 0x0

		::System::Void .ctor(Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_ENUMTIMELINEPARAMETER`1_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};
}


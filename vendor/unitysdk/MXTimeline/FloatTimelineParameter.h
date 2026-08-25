#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class AnimationCurve; }

#define MXTIMELINE_FLOATTIMELINEPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0xE00F10)
#define MXTIMELINE_FLOATTIMELINEPARAMETER_VALUE_OFFSET UNITYSDK_OFFSET(0xE015C0)

namespace MXTimeline
{
	inline static constexpr unsigned int FloatTimelineParameter_TypeDefinitionIndex = 10222;

	class FloatTimelineParameter : public Il2CppObject
	{
	public:
		::System::Boolean overrideState; // 0x10
		::System::Single value; // 0x14
		::System::Boolean curve; // 0x18
		::UnityEngine::AnimationCurve* valueCurve; // 0x20

		::System::Void .ctor(::System::Single arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_FLOATTIMELINEPARAMETER_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single Value(::System::Single arg)
		{
			return ((::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_FLOATTIMELINEPARAMETER_VALUE_OFFSET))(arg, nullptr);
		}

	};
}


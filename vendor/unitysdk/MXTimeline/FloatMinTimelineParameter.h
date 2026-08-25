#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class AnimationCurve; }

#define MXTIMELINE_FLOATMINTIMELINEPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0xE02A60)
#define MXTIMELINE_FLOATMINTIMELINEPARAMETER_VALUE_OFFSET UNITYSDK_OFFSET(0xE02A90)

namespace MXTimeline
{
	inline static constexpr unsigned int FloatMinTimelineParameter_TypeDefinitionIndex = 10223;

	class FloatMinTimelineParameter : public Il2CppObject
	{
	public:
		::System::Boolean overrideState; // 0x10
		::System::Single value; // 0x14
		::System::Single min; // 0x18
		::System::Boolean curve; // 0x1C
		::UnityEngine::AnimationCurve* valueCurve; // 0x20

		::System::Void .ctor(::System::Single arg, ::System::Single arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_FLOATMINTIMELINEPARAMETER_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single Value(::System::Single arg)
		{
			return ((::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_FLOATMINTIMELINEPARAMETER_VALUE_OFFSET))(arg, nullptr);
		}

	};
}


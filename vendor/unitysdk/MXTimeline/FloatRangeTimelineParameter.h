#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine { class AnimationCurve; }

#define MXTIMELINE_FLOATRANGETIMELINEPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0xE02B90)
#define MXTIMELINE_FLOATRANGETIMELINEPARAMETER_VALUE_OFFSET UNITYSDK_OFFSET(0xE02BF0)

namespace MXTimeline
{
	inline static constexpr unsigned int FloatRangeTimelineParameter_TypeDefinitionIndex = 10226;

	class FloatRangeTimelineParameter : public Il2CppObject
	{
	public:
		::System::Boolean overrideState; // 0x10
		::UnityEngine::Vector2* value; // 0x14
		::System::Single min; // 0x1C
		::System::Single max; // 0x20
		::System::Boolean curve; // 0x24
		::UnityEngine::AnimationCurve* valueCurveMin; // 0x28
		::UnityEngine::AnimationCurve* valueCurveMax; // 0x30

		::System::Void .ctor(::System::Single arg, ::System::Single arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_FLOATRANGETIMELINEPARAMETER_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::UnityEngine::Vector2* Value(::System::Single arg)
		{
			return ((::UnityEngine::Vector2*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_FLOATRANGETIMELINEPARAMETER_VALUE_OFFSET))(arg, nullptr);
		}

	};
}


#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine { class AnimationCurve; }

#define MXTIMELINE_VECTOR2TIMELINEPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0xE00F30)
#define MXTIMELINE_VECTOR2TIMELINEPARAMETER_VALUE_OFFSET UNITYSDK_OFFSET(0xE015F0)

namespace MXTimeline
{
	inline static constexpr unsigned int Vector2TimelineParameter_TypeDefinitionIndex = 10229;

	class Vector2TimelineParameter : public Il2CppObject
	{
	public:
		::System::Boolean overrideState; // 0x10
		::UnityEngine::Vector2* value; // 0x14
		::System::Boolean curve; // 0x1C
		::UnityEngine::AnimationCurve* valueCurveX; // 0x20
		::UnityEngine::AnimationCurve* valueCurveY; // 0x28

		::System::Void .ctor(::UnityEngine::Vector2* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_VECTOR2TIMELINEPARAMETER_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* Value(::System::Single arg)
		{
			return ((::UnityEngine::Vector2*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_VECTOR2TIMELINEPARAMETER_VALUE_OFFSET))(arg, nullptr);
		}

	};
}


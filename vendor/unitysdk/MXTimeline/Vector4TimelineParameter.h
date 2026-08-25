#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector4; }
namespace UnityEngine { class AnimationCurve; }

#define MXTIMELINE_VECTOR4TIMELINEPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0xE02C70)
#define MXTIMELINE_VECTOR4TIMELINEPARAMETER_VALUE_OFFSET UNITYSDK_OFFSET(0xE02CE0)

namespace MXTimeline
{
	inline static constexpr unsigned int Vector4TimelineParameter_TypeDefinitionIndex = 10227;

	class Vector4TimelineParameter : public Il2CppObject
	{
	public:
		::System::Boolean overrideState; // 0x10
		::UnityEngine::Vector4* value; // 0x14
		::System::Boolean curve; // 0x24
		::UnityEngine::AnimationCurve* valueCurveX; // 0x28
		::UnityEngine::AnimationCurve* valueCurveY; // 0x30
		::UnityEngine::AnimationCurve* valueCurveZ; // 0x38
		::UnityEngine::AnimationCurve* valueCurveW; // 0x40

		::System::Void .ctor(::UnityEngine::Vector4* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector4*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_VECTOR4TIMELINEPARAMETER_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector4* Value(::System::Single arg)
		{
			return ((::UnityEngine::Vector4*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_VECTOR4TIMELINEPARAMETER_VALUE_OFFSET))(arg, nullptr);
		}

	};
}


#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class AnimationCurve; }

#define MXTIMELINE_VECTOR3TIMELINEPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0xE02DB0)
#define MXTIMELINE_VECTOR3TIMELINEPARAMETER_VALUE_OFFSET UNITYSDK_OFFSET(0xE02E10)

namespace MXTimeline
{
	inline static constexpr unsigned int Vector3TimelineParameter_TypeDefinitionIndex = 10228;

	class Vector3TimelineParameter : public Il2CppObject
	{
	public:
		::System::Boolean overrideState; // 0x10
		::UnityEngine::Vector3* value; // 0x14
		::System::Boolean curve; // 0x20
		::UnityEngine::AnimationCurve* valueCurveX; // 0x28
		::UnityEngine::AnimationCurve* valueCurveY; // 0x30
		::UnityEngine::AnimationCurve* valueCurveZ; // 0x38

		::System::Void .ctor(::UnityEngine::Vector3* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_VECTOR3TIMELINEPARAMETER_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector3* Value(::System::Single arg)
		{
			return ((::UnityEngine::Vector3*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_VECTOR3TIMELINEPARAMETER_VALUE_OFFSET))(arg, nullptr);
		}

	};
}


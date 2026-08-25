#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class AnimationCurve; }

#define UNITYENGINE_RENDERING_ANIMATIONCURVEPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE5280)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int AnimationCurveParameter_TypeDefinitionIndex = 34132;

	class AnimationCurveParameter : public ::System::Net::NetworkInformation::Win32_MIB_IFROW
	{
	public:
		::System::Void .ctor(::UnityEngine::AnimationCurve* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationCurve*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ANIMATIONCURVEPARAMETER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}


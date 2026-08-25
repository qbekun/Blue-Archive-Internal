#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class MotionBlurQuality; }

#define UNITYENGINE_RENDERING_UNIVERSAL_MOTIONBLURQUALITYPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA064730)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MotionBlurQualityParameter_TypeDefinitionIndex = 32684;

	class MotionBlurQualityParameter : public ::System::Net::Configuration::DefaultProxySectionInternal
	{
	public:
		::System::Void .ctor(::UnityEngine::Rendering::Universal::MotionBlurQuality* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::MotionBlurQuality*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MOTIONBLURQUALITYPARAMETER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}


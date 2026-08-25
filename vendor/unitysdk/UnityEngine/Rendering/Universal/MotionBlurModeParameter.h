#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class MotionBlurMode; }

#define UNITYENGINE_RENDERING_UNIVERSAL_MOTIONBLURMODEPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0646E0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MotionBlurModeParameter_TypeDefinitionIndex = 32683;

	class MotionBlurModeParameter : public ::System::Net::NetworkInformation::UnixIPGlobalPropertiesFactoryPal
	{
	public:
		::System::Void .ctor(::UnityEngine::Rendering::Universal::MotionBlurMode* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::MotionBlurMode*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MOTIONBLURMODEPARAMETER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}


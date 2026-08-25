#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class MotionBlurModeParameter; }
namespace UnityEngine::Rendering::Universal { class MotionBlurQualityParameter; }
namespace UnityEngine::Rendering { class ClampedFloatParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_MOTIONBLUR_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0xA064530)
#define UNITYENGINE_RENDERING_UNIVERSAL_MOTIONBLUR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA064540)
#define UNITYENGINE_RENDERING_UNIVERSAL_MOTIONBLUR_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xA064780)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MotionBlur_TypeDefinitionIndex = 32682;

	class MotionBlur : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::MotionBlurModeParameter* mode; // 0x30
		::UnityEngine::Rendering::Universal::MotionBlurQualityParameter* quality; // 0x38
		::UnityEngine::Rendering::ClampedFloatParameter* intensity; // 0x40
		::UnityEngine::Rendering::ClampedFloatParameter* clamp; // 0x48

		::System::Boolean IsTileCompatible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MOTIONBLUR_ISTILECOMPATIBLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MOTIONBLUR_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MOTIONBLUR_ISACTIVE_OFFSET))(nullptr);
		}

	};
}


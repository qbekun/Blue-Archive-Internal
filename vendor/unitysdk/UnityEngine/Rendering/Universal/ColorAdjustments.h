#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering { class FloatParameter; }
namespace UnityEngine::Rendering { class ClampedFloatParameter; }
namespace UnityEngine::Rendering { class ColorParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_COLORADJUSTMENTS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA062B00)
#define UNITYENGINE_RENDERING_UNIVERSAL_COLORADJUSTMENTS_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0xA062CE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_COLORADJUSTMENTS_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xA062CF0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ColorAdjustments_TypeDefinitionIndex = 32669;

	class ColorAdjustments : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::FloatParameter* postExposure; // 0x30
		::UnityEngine::Rendering::ClampedFloatParameter* contrast; // 0x38
		::UnityEngine::Rendering::ColorParameter* colorFilter; // 0x40
		::UnityEngine::Rendering::ClampedFloatParameter* hueShift; // 0x48
		::UnityEngine::Rendering::ClampedFloatParameter* saturation; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_COLORADJUSTMENTS_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsTileCompatible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_COLORADJUSTMENTS_ISTILECOMPATIBLE_OFFSET))(nullptr);
		}

		::System::Boolean IsActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_COLORADJUSTMENTS_ISACTIVE_OFFSET))(nullptr);
		}

	};
}


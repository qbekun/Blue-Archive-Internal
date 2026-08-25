#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class MXChromaticAberrationModeParameter; }
namespace UnityEngine::Rendering { class FloatParameter; }
namespace UnityEngine::Rendering { class ClampedFloatParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_MXCHROMATICABERRATION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA064CB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MXCHROMATICABERRATION_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0xA064E30)
#define UNITYENGINE_RENDERING_UNIVERSAL_MXCHROMATICABERRATION_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xA064E40)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MXChromaticAberration_TypeDefinitionIndex = 32691;

	class MXChromaticAberration : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::MXChromaticAberrationModeParameter* mode; // 0x30
		::UnityEngine::Rendering::FloatParameter* intensity; // 0x38
		::UnityEngine::Rendering::ClampedFloatParameter* direction; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MXCHROMATICABERRATION_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsTileCompatible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MXCHROMATICABERRATION_ISTILECOMPATIBLE_OFFSET))(nullptr);
		}

		::System::Boolean IsActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MXCHROMATICABERRATION_ISACTIVE_OFFSET))(nullptr);
		}

	};
}


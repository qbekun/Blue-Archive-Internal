#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering { class TextureCurveParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_COLORCURVES_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xA062DD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_COLORCURVES_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0xA062DE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_COLORCURVES_.CTOR_OFFSET UNITYSDK_OFFSET(0xA062DF0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ColorCurves_TypeDefinitionIndex = 32670;

	class ColorCurves : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::TextureCurveParameter* master; // 0x30
		::UnityEngine::Rendering::TextureCurveParameter* red; // 0x38
		::UnityEngine::Rendering::TextureCurveParameter* green; // 0x40
		::UnityEngine::Rendering::TextureCurveParameter* blue; // 0x48
		::UnityEngine::Rendering::TextureCurveParameter* hueVsHue; // 0x50
		::UnityEngine::Rendering::TextureCurveParameter* hueVsSat; // 0x58
		::UnityEngine::Rendering::TextureCurveParameter* satVsSat; // 0x60
		::UnityEngine::Rendering::TextureCurveParameter* lumVsSat; // 0x68

		::System::Boolean IsActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_COLORCURVES_ISACTIVE_OFFSET))(nullptr);
		}

		::System::Boolean IsTileCompatible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_COLORCURVES_ISTILECOMPATIBLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_COLORCURVES_.CTOR_OFFSET))(nullptr);
		}

	};
}


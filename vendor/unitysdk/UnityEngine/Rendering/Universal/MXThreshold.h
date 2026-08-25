#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering { class FloatParameter; }
namespace UnityEngine::Rendering { class ColorParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_MXTHRESHOLD_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xA065620)
#define UNITYENGINE_RENDERING_UNIVERSAL_MXTHRESHOLD_.CTOR_OFFSET UNITYSDK_OFFSET(0xA065660)
#define UNITYENGINE_RENDERING_UNIVERSAL_MXTHRESHOLD_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0xA0657E0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MXThreshold_TypeDefinitionIndex = 32698;

	class MXThreshold : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::FloatParameter* intensity; // 0x30
		::UnityEngine::Rendering::ColorParameter* colorA; // 0x38
		::UnityEngine::Rendering::ColorParameter* colorB; // 0x40
		::UnityEngine::Rendering::FloatParameter* min; // 0x48
		::UnityEngine::Rendering::FloatParameter* max; // 0x50

		::System::Boolean IsActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MXTHRESHOLD_ISACTIVE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MXTHRESHOLD_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsTileCompatible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MXTHRESHOLD_ISTILECOMPATIBLE_OFFSET))(nullptr);
		}

	};
}


#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering { class ClampedFloatParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_CHROMATICABERRATION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA062A20)
#define UNITYENGINE_RENDERING_UNIVERSAL_CHROMATICABERRATION_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0xA062AB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CHROMATICABERRATION_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xA062AC0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ChromaticAberration_TypeDefinitionIndex = 32668;

	class ChromaticAberration : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::ClampedFloatParameter* intensity; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CHROMATICABERRATION_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsTileCompatible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CHROMATICABERRATION_ISTILECOMPATIBLE_OFFSET))(nullptr);
		}

		::System::Boolean IsActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CHROMATICABERRATION_ISACTIVE_OFFSET))(nullptr);
		}

	};
}


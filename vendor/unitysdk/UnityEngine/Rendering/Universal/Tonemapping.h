#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class TonemappingModeParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_TONEMAPPING_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0xA0660B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_TONEMAPPING_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0660C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_TONEMAPPING_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xA0661A0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int Tonemapping_TypeDefinitionIndex = 32706;

	class Tonemapping : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::TonemappingModeParameter* mode; // 0x30

		::System::Boolean IsTileCompatible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TONEMAPPING_ISTILECOMPATIBLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TONEMAPPING_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TONEMAPPING_ISACTIVE_OFFSET))(nullptr);
		}

	};
}


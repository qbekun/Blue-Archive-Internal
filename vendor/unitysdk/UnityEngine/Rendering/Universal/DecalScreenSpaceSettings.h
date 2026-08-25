#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class DecalNormalBlend; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DECALSCREENSPACESETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0682A0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DecalScreenSpaceSettings_TypeDefinitionIndex = 32726;

	class DecalScreenSpaceSettings : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::DecalNormalBlend* normalBlend; // 0x10
		::System::Boolean useGBuffer; // 0x14

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALSCREENSPACESETTINGS_.CTOR_OFFSET))(nullptr);
		}

	};
}


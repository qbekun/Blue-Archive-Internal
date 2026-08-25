#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class DecalTechniqueOption; }
namespace UnityEngine::Rendering::Universal { class DBufferSettings; }
namespace UnityEngine::Rendering::Universal { class DecalScreenSpaceSettings; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DECALSETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0682B0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DecalSettings_TypeDefinitionIndex = 32727;

	class DecalSettings : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::DecalTechniqueOption* technique; // 0x10
		::System::Single maxDrawDistance; // 0x14
		::UnityEngine::Rendering::Universal::DBufferSettings* dBufferSettings; // 0x18
		::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* screenSpaceSettings; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALSETTINGS_.CTOR_OFFSET))(nullptr);
		}

	};
}


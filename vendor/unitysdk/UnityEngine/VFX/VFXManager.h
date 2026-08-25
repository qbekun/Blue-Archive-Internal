#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::VFX { class VFXCameraXRSettings; }

#define UNITYENGINE_VFX_VFXMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA4A7FB0)

namespace UnityEngine::VFX
{
	inline static constexpr unsigned int VFXManager_TypeDefinitionIndex = 37922;

	class VFXManager : public Il2CppObject
	{
	public:
		::UnityEngine::VFX::VFXCameraXRSettings* kDefaultCameraXRSettings; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}


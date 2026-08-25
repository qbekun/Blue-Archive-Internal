#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_CINEMACHINEUNIVERSALPIXELPERFECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9FF8DE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CINEMACHINEUNIVERSALPIXELPERFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FF8E40)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int CinemachineUniversalPixelPerfect_TypeDefinitionIndex = 32429;

	class CinemachineUniversalPixelPerfect : public Il2CppObject
	{
	public:
		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CINEMACHINEUNIVERSALPIXELPERFECT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CINEMACHINEUNIVERSALPIXELPERFECT_.CTOR_OFFSET))(nullptr);
		}

	};
}


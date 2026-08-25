#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Camera; }

#define NPA_NXPCAMERA_SETUICAMERA_OFFSET UNITYSDK_OFFSET(0x9BC10C0)
#define NPA_NXPCAMERA_GETUICAMERA_OFFSET UNITYSDK_OFFSET(0x9BC1110)

namespace NPA
{
	inline static constexpr unsigned int NXPCamera_TypeDefinitionIndex = 25565;

	class NXPCamera : public Il2CppObject
	{
	public:
		::UnityEngine::Camera* uiCamera; // 0x0

		::System::Void SetUiCamera(::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPCAMERA_SETUICAMERA_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Camera* GetUiCamera()
		{
			return (return (::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPCAMERA_GETUICAMERA_OFFSET))(nullptr);
		}

	};
}


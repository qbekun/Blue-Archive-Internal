#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Camera; }

#define CAMERAFOVSCALER_REFRESH_OFFSET UNITYSDK_OFFSET(0xE488C0)
#define CAMERAFOVSCALER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE48D10)
#define CAMERAFOVSCALER_.CTOR_OFFSET UNITYSDK_OFFSET(0xE48E50)

	inline static constexpr unsigned int CameraFovScaler_TypeDefinitionIndex = 734;

	class CameraFovScaler : public Il2CppObject
	{
	public:
		::System::Single mostNarrowAspectRatio; // 0x18
		::UnityEngine::Camera* currentCamera; // 0x20
		::System::Single fieldOfView; // 0x28

		::System::Void Refresh(::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERAFOVSCALER_REFRESH_OFFSET))(arg, nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERAFOVSCALER_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERAFOVSCALER_.CTOR_OFFSET))(nullptr);
		}

	};


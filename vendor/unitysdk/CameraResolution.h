#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Camera; }

#define CAMERARESOLUTION_UPDATERESOLUTION_OFFSET UNITYSDK_OFFSET(0x20AF7A0)
#define CAMERARESOLUTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x20AF8A0)
#define CAMERARESOLUTION_INIT_OFFSET UNITYSDK_OFFSET(0x20AF8B0)
#define CAMERARESOLUTION_AWAKE_OFFSET UNITYSDK_OFFSET(0x20AF970)
#define CAMERARESOLUTION_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x20AF9A0)

	inline static constexpr unsigned int CameraResolution_TypeDefinitionIndex = 3573;

	class CameraResolution : public Il2CppObject
	{
	public:
		::System::Single ReferenceResolutionRate; // 0x18
		::UnityEngine::Camera* cam; // 0x20
		::System::Single referenceFOV; // 0x28
		::System::Single rv; // 0x2C
		::System::Boolean OnAwake; // 0x30
		::System::Boolean OnUpdate; // 0x31
		::System::Boolean isInit; // 0x32

		::System::Void UpdateResolution()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERARESOLUTION_UPDATERESOLUTION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERARESOLUTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERARESOLUTION_INIT_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERARESOLUTION_AWAKE_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERARESOLUTION_LATEUPDATE_OFFSET))(nullptr);
		}

	};


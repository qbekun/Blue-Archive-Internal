#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Vector3; }

#define CAMERALOCATOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE4A090)
#define CAMERALOCATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xE4A3F0)
#define CAMERALOCATOR_LOADCAMERAINFO_OFFSET UNITYSDK_OFFSET(0xE4A130)
#define CAMERALOCATOR_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0xE4A480)
#define CAMERALOCATOR_APPLY_OFFSET UNITYSDK_OFFSET(0xE4A4C0)
#define CAMERALOCATOR_START_OFFSET UNITYSDK_OFFSET(0xE4A720)
#define CAMERALOCATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0xE4A730)

	inline static constexpr unsigned int CameraLocator_TypeDefinitionIndex = 739;

	class CameraLocator : public Il2CppObject
	{
	public:
		::UnityEngine::Camera* cam; // 0x18
		::UnityEngine::GameObject* lookTarget; // 0x20
		::System::Single angleHorAxis; // 0x28
		::System::Single angleVerAxis; // 0x2C
		::System::Single distance; // 0x30
		::UnityEngine::Vector3* cameraPosition; // 0x34
		::UnityEngine::Vector3* targetPosition; // 0x40
		::System::Boolean load; // 0x4C

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERALOCATOR_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERALOCATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void LoadCameraInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERALOCATOR_LOADCAMERAINFO_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERALOCATOR_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Void Apply()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERALOCATOR_APPLY_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERALOCATOR_START_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERALOCATOR_UPDATE_OFFSET))(nullptr);
		}

	};


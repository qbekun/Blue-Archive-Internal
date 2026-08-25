#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Plane; }
namespace UnityEngine { class Vector3; }

#define HEXACAMERATARGET_.CTOR_OFFSET UNITYSDK_OFFSET(0xE50F40)
#define HEXACAMERATARGET_UPDATE_OFFSET UNITYSDK_OFFSET(0xE50F50)
#define HEXACAMERATARGET_ONPCMONITORORDISPLAYCHANGED_OFFSET UNITYSDK_OFFSET(0xE51160)
#define HEXACAMERATARGET_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE51200)
#define HEXACAMERATARGET_START_OFFSET UNITYSDK_OFFSET(0xE51330)
#define HEXACAMERATARGET_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE51470)
#define HEXACAMERATARGET_ONSCREENCONFIGCHANGED_OFFSET UNITYSDK_OFFSET(0xE51670)

	inline static constexpr unsigned int HexaCameraTarget_TypeDefinitionIndex = 767;

	class HexaCameraTarget : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* hexaMapRoot; // 0x18
		::UnityEngine::Camera* hexaCamera; // 0x20
		::System::Single minDistanceFromHexaPlane; // 0x28
		::UnityEngine::Plane* hexaPlane; // 0x2C
		::UnityEngine::Vector3* cameraPosition; // 0x3C
		::UnityEngine::Vector3* initialCameraPosition; // 0x48
		::System::Boolean initialCameraPositionCaptured; // 0x54

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACAMERATARGET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACAMERATARGET_UPDATE_OFFSET))(nullptr);
		}

		::System::Void OnPCMonitorOrDisplayChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACAMERATARGET_ONPCMONITORORDISPLAYCHANGED_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACAMERATARGET_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACAMERATARGET_START_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACAMERATARGET_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnScreenConfigChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACAMERATARGET_ONSCREENCONFIGCHANGED_OFFSET))(nullptr);
		}

	};


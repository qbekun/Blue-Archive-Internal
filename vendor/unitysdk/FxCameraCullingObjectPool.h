#pragma once
#include "unitysdk.h"

class CameraFindType;
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Vector3; }

#define FXCAMERACULLINGOBJECTPOOL__UPDATEOBJECTPOOL_G__CHECKOUTOFSCREEN|12_0_OFFSET UNITYSDK_OFFSET(0x20B43B0)
#define FXCAMERACULLINGOBJECTPOOL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x20B4500)
#define FXCAMERACULLINGOBJECTPOOL_UPDATECAMERA_OFFSET UNITYSDK_OFFSET(0x20B4510)
#define FXCAMERACULLINGOBJECTPOOL_UPDATEOBJECTPOOL_OFFSET UNITYSDK_OFFSET(0x20B4540)
#define FXCAMERACULLINGOBJECTPOOL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20B49A0)
#define FXCAMERACULLINGOBJECTPOOL_.CTOR_OFFSET UNITYSDK_OFFSET(0x20B5590)
#define FXCAMERACULLINGOBJECTPOOL_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x20B5630)

	inline static constexpr unsigned int FxCameraCullingObjectPool_TypeDefinitionIndex = 3599;

	class FxCameraCullingObjectPool : public Il2CppObject
	{
	public:
		CameraFindType* targetCameraType; // 0x18
		::System::Single jumpBorder; // 0x1C
		::System::Single RailSize; // 0x20
		::System::Single RailOffsetX; // 0x24
		::UnityEngine::Camera* cam; // 0x28
		Il2CppObject* SlotInfoList; // 0x30
		::System::Single SavedOffsetLength; // 0x38

		::System::Boolean _UpdateObjectPool_g__CheckOutofScreen|12_0(::UnityEngine::Vector3* arg, <>c__DisplayClass12_0&* arg2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3*, <>c__DisplayClass12_0&*, ::PVOID))((::PBYTE)hIl2Cpp + FXCAMERACULLINGOBJECTPOOL__UPDATEOBJECTPOOL_G__CHECKOUTOFSCREEN|12_0_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXCAMERACULLINGOBJECTPOOL_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void UpdateCamera()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXCAMERACULLINGOBJECTPOOL_UPDATECAMERA_OFFSET))(nullptr);
		}

		::System::Void UpdateObjectPool()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXCAMERACULLINGOBJECTPOOL_UPDATEOBJECTPOOL_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXCAMERACULLINGOBJECTPOOL_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXCAMERACULLINGOBJECTPOOL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXCAMERACULLINGOBJECTPOOL_LATEUPDATE_OFFSET))(nullptr);
		}

	};


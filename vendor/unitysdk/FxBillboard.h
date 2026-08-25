#pragma once
#include "unitysdk.h"

class CameraFindType;
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define FXBILLBOARD_AWAKE_OFFSET UNITYSDK_OFFSET(0x20B4060)
#define FXBILLBOARD_SETTARGETCAMERA_OFFSET UNITYSDK_OFFSET(0x20B42E0)
#define FXBILLBOARD_LOOKATTARGET_OFFSET UNITYSDK_OFFSET(0x20B4140)
#define FXBILLBOARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x20B4380)
#define FXBILLBOARD_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x20B4390)
#define FXBILLBOARD_SETTARGETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x20B43A0)

	inline static constexpr unsigned int FxBillboard_TypeDefinitionIndex = 3595;

	class FxBillboard : public Il2CppObject
	{
	public:
		CameraFindType* cameraFindMode; // 0x18
		::UnityEngine::Camera* targetCamera; // 0x20
		::System::Boolean FixedY; // 0x28
		::UnityEngine::Transform* TargetTransform; // 0x30

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXBILLBOARD_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetTargetCamera(::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + FXBILLBOARD_SETTARGETCAMERA_OFFSET))(arg, nullptr);
		}

		::System::Void LookAtTarget()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXBILLBOARD_LOOKATTARGET_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXBILLBOARD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXBILLBOARD_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void SetTargetTransform(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + FXBILLBOARD_SETTARGETTRANSFORM_OFFSET))(arg, nullptr);
		}

	};


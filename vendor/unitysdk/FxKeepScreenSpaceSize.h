#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Camera; }
class CameraFindType;
class ResizeType;
namespace UnityEngine { class Vector3; }

#define FXKEEPSCREENSPACESIZE_GETFRUSTUMWIDTHANDHEIGHT_OFFSET UNITYSDK_OFFSET(0x20B8F80)
#define FXKEEPSCREENSPACESIZE_START_OFFSET UNITYSDK_OFFSET(0x20B9280)
#define FXKEEPSCREENSPACESIZE_GETFRUSTUMHEIGHT_OFFSET UNITYSDK_OFFSET(0x20B9640)
#define FXKEEPSCREENSPACESIZE_FINDCAMERA_OFFSET UNITYSDK_OFFSET(0x20B9860)
#define FXKEEPSCREENSPACESIZE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x20B9890)
#define FXKEEPSCREENSPACESIZE_REFRESHTRANSFORM_OFFSET UNITYSDK_OFFSET(0x20B9290)
#define FXKEEPSCREENSPACESIZE_GET_INITIALIZEONENABLE_OFFSET UNITYSDK_OFFSET(0x20B99A0)
#define FXKEEPSCREENSPACESIZE_.CTOR_OFFSET UNITYSDK_OFFSET(0x20B99B0)
#define FXKEEPSCREENSPACESIZE_SET_INITIALIZEONENABLE_OFFSET UNITYSDK_OFFSET(0x20B99C0)
#define FXKEEPSCREENSPACESIZE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20B99D0)
#define FXKEEPSCREENSPACESIZE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x20B99E0)

	inline static constexpr unsigned int FxKeepScreenSpaceSize_TypeDefinitionIndex = 3609;

	class FxKeepScreenSpaceSize : public Il2CppObject
	{
	public:
		::UnityEngine::Camera* Camera; // 0x18
		CameraFindType* FindCameraMode; // 0x20
		ResizeType* ResizeMode; // 0x24
		::System::Boolean ApplyCameraScale; // 0x28
		::System::Boolean _InitializeOnEnable_k__BackingField; // 0x29
		::System::Single halfDeg2Rad; // 0x0
		::UnityEngine::Vector3* relativeLocalScaleToFrustumHeight; // 0x2C

		::System::Void GetFrustumWidthAndHeight(float&* arg, float&* arg2, float&* arg3)
		{
			((::System::Void(*)(float&*, float&*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + FXKEEPSCREENSPACESIZE_GETFRUSTUMWIDTHANDHEIGHT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXKEEPSCREENSPACESIZE_START_OFFSET))(nullptr);
		}

		::System::Single GetFrustumHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FXKEEPSCREENSPACESIZE_GETFRUSTUMHEIGHT_OFFSET))(nullptr);
		}

		::System::Void FindCamera()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXKEEPSCREENSPACESIZE_FINDCAMERA_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXKEEPSCREENSPACESIZE_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void RefreshTransform()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXKEEPSCREENSPACESIZE_REFRESHTRANSFORM_OFFSET))(nullptr);
		}

		::System::Boolean get_InitializeOnEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FXKEEPSCREENSPACESIZE_GET_INITIALIZEONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXKEEPSCREENSPACESIZE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_InitializeOnEnable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FXKEEPSCREENSPACESIZE_SET_INITIALIZEONENABLE_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXKEEPSCREENSPACESIZE_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXKEEPSCREENSPACESIZE_LATEUPDATE_OFFSET))(nullptr);
		}

	};


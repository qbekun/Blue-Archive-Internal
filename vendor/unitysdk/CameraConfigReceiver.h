#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalCameraData; }
class ConfigHandles;
class CameraConfigData;

#define CAMERACONFIGRECEIVER_AWAKE_OFFSET UNITYSDK_OFFSET(0x20CF750)
#define CAMERACONFIGRECEIVER_SETCAMERACONFIGDATA_OFFSET UNITYSDK_OFFSET(0x20CFBE0)
#define CAMERACONFIGRECEIVER_RELEASECAMERACONFIGDATA_OFFSET UNITYSDK_OFFSET(0x20CFD80)
#define CAMERACONFIGRECEIVER_APPLYFIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x20CFE40)
#define CAMERACONFIGRECEIVER_APPLYCLIPPLANES_OFFSET UNITYSDK_OFFSET(0x20D0000)
#define CAMERACONFIGRECEIVER_APPLYPOSTPROCESS_OFFSET UNITYSDK_OFFSET(0x20D00F0)
#define CAMERACONFIGRECEIVER_APPLYPOSTPROCESS_OFFSET UNITYSDK_OFFSET(0x20D01D0)
#define CAMERACONFIGRECEIVER_REFRESHPOSTPROCESSFLAG_OFFSET UNITYSDK_OFFSET(0x20D0290)
#define CAMERACONFIGRECEIVER_.CTOR_OFFSET UNITYSDK_OFFSET(0x20D02E0)

	inline static constexpr unsigned int CameraConfigReceiver_TypeDefinitionIndex = 3698;

	class CameraConfigReceiver : public Il2CppObject
	{
	public:
		::UnityEngine::Camera* cam; // 0x18
		::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* cData; // 0x20
		::System::Boolean isInitialized; // 0x28
		Il2CppObject* clipPlaneStack; // 0x30
		Il2CppObject* fieldOfViewStack; // 0x38
		Il2CppObject* postProcessStack; // 0x40
		Il2CppObject* rendererStack; // 0x48

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERACONFIGRECEIVER_AWAKE_OFFSET))(nullptr);
		}

		ConfigHandles* SetCameraConfigData(CameraConfigData* arg)
		{
			return ((ConfigHandles*(*)(CameraConfigData*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERACONFIGRECEIVER_SETCAMERACONFIGDATA_OFFSET))(arg, nullptr);
		}

		::System::Void ReleaseCameraConfigData(ConfigHandles&* arg)
		{
			((::System::Void(*)(ConfigHandles&*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERACONFIGRECEIVER_RELEASECAMERACONFIGDATA_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyFieldOfView(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CAMERACONFIGRECEIVER_APPLYFIELDOFVIEW_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyClipPlanes(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERACONFIGRECEIVER_APPLYCLIPPLANES_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyPostProcess(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAMERACONFIGRECEIVER_APPLYPOSTPROCESS_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyPostProcess(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CAMERACONFIGRECEIVER_APPLYPOSTPROCESS_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshPostProcessFlag()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERACONFIGRECEIVER_REFRESHPOSTPROCESSFLAG_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERACONFIGRECEIVER_.CTOR_OFFSET))(nullptr);
		}

	};


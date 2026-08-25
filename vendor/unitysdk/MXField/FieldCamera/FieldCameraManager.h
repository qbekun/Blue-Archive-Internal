#pragma once
#include "../../unitysdk.h"

namespace Cinemachine { class CinemachineVirtualCamera; }
namespace UnityEngine { class Camera; }
class ShadowCoordModifier;
namespace Cinemachine { class CinemachineBrain; }
namespace Cinemachine { class CinemachineBlenderSettings; }
class CameraSettingsCache;
namespace MXField::Dispatch { class DispatchType; }
namespace UnityEngine { class MonoBehaviour; }

#define MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_APPLYFIELDSHADOWCOORDSCALER_OFFSET UNITYSDK_OFFSET(0xEE4680)
#define MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_SET_ARTLEVELCAMERA_OFFSET UNITYSDK_OFFSET(0xEE46A0)
#define MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_ONBLENDERLOADED_OFFSET UNITYSDK_OFFSET(0xEE46B0)
#define MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_HANDLEBATTLEEND_OFFSET UNITYSDK_OFFSET(0xEE49A0)
#define MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_SET_DEFAULTCAMERASETTINGS_OFFSET UNITYSDK_OFFSET(0xEE4A20)
#define MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_HANDLEBATTLEENTER_OFFSET UNITYSDK_OFFSET(0xEE4A30)
#define MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xEE4C80)
#define MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_RESTOREGAMECAMERA_OFFSET UNITYSDK_OFFSET(0xEE4AA0)
#define MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_GET_CINEMACHINEBRAIN_OFFSET UNITYSDK_OFFSET(0xEE4EA0)
#define MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_GET_SHADOWCOORDMODIFIER_OFFSET UNITYSDK_OFFSET(0xEE4EB0)
#define MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0xEE4EC0)
#define MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_GET_FIELDCAMERA_OFFSET UNITYSDK_OFFSET(0xEE4ED0)
#define MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_SET_BLENDERSETTINGS_OFFSET UNITYSDK_OFFSET(0xEE4EE0)
#define MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_GET_BLENDERSETTINGS_OFFSET UNITYSDK_OFFSET(0xEE4EF0)
#define MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_GETBLENDTIME_OFFSET UNITYSDK_OFFSET(0xEE4F00)
#define MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_SET_CINEMACHINEBRAIN_OFFSET UNITYSDK_OFFSET(0xEE50B0)
#define MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_SET_FIELDCAMERA_OFFSET UNITYSDK_OFFSET(0xEE50C0)
#define MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_SET_SHADOWCOORDMODIFIER_OFFSET UNITYSDK_OFFSET(0xEE50D0)
#define MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_GET_MODIFIERSCALECACHE_OFFSET UNITYSDK_OFFSET(0xEE50E0)
#define MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_GET_ARTLEVELCAMERA_OFFSET UNITYSDK_OFFSET(0xEE50F0)
#define MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_START_OFFSET UNITYSDK_OFFSET(0xEE5100)
#define MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_GET_BLENDERASSETPATH_OFFSET UNITYSDK_OFFSET(0xEE53A0)
#define MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_GET_DEFAULTCAMERASETTINGS_OFFSET UNITYSDK_OFFSET(0xEE55E0)
#define MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_SETARTLEVELCAMERATARGET_OFFSET UNITYSDK_OFFSET(0xEE55F0)
#define MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_SET_MODIFIERSCALECACHE_OFFSET UNITYSDK_OFFSET(0xEE56A0)
#define MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_SETARTLEVELCAMERA_OFFSET UNITYSDK_OFFSET(0xEE56B0)
#define MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0xEE53E0)
#define MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_INSTANTIATEARTLEVELCAMERA_OFFSET UNITYSDK_OFFSET(0xEE5730)
#define MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xEE57C0)

namespace MXField::FieldCamera
{
	inline static constexpr unsigned int FieldCameraManager_TypeDefinitionIndex = 11015;

	class FieldCameraManager : public Il2CppObject
	{
	public:
		::Cinemachine::CinemachineVirtualCamera* _ArtLevelCamera_k__BackingField; // 0x18
		::UnityEngine::Camera* _FieldCamera_k__BackingField; // 0x20
		ShadowCoordModifier* _ShadowCoordModifier_k__BackingField; // 0x28
		::Cinemachine::CinemachineBrain* _CinemachineBrain_k__BackingField; // 0x30
		::Cinemachine::CinemachineBlenderSettings* _BlenderSettings_k__BackingField; // 0x38
		::System::Single _ModifierScaleCache_k__BackingField; // 0x40
		CameraSettingsCache* _DefaultCameraSettings_k__BackingField; // 0x44

		::System::Void ApplyFieldShadowCoordScaler()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_APPLYFIELDSHADOWCOORDSCALER_OFFSET))(nullptr);
		}

		::System::Void set_ArtLevelCamera(::Cinemachine::CinemachineVirtualCamera* arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineVirtualCamera*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_SET_ARTLEVELCAMERA_OFFSET))(arg, nullptr);
		}

		::System::Void OnBlenderLoaded(::Cinemachine::CinemachineBlenderSettings* arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineBlenderSettings*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_ONBLENDERLOADED_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleBattleEnd(::MXField::Dispatch::DispatchType* arg)
		{
			return ((::System::Boolean(*)(::MXField::Dispatch::DispatchType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_HANDLEBATTLEEND_OFFSET))(arg, nullptr);
		}

		::System::Void set_DefaultCameraSettings(CameraSettingsCache* arg)
		{
			((::System::Void(*)(CameraSettingsCache*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_SET_DEFAULTCAMERASETTINGS_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleBattleEnter(::MXField::Dispatch::DispatchType* arg)
		{
			return ((::System::Boolean(*)(::MXField::Dispatch::DispatchType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_HANDLEBATTLEENTER_OFFSET))(arg, nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void RestoreGameCamera()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_RESTOREGAMECAMERA_OFFSET))(nullptr);
		}

		::Cinemachine::CinemachineBrain* get_CinemachineBrain()
		{
			return ((::Cinemachine::CinemachineBrain*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_GET_CINEMACHINEBRAIN_OFFSET))(nullptr);
		}

		ShadowCoordModifier* get_ShadowCoordModifier()
		{
			return ((ShadowCoordModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_GET_SHADOWCOORDMODIFIER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Camera* get_FieldCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_GET_FIELDCAMERA_OFFSET))(nullptr);
		}

		::System::Void set_BlenderSettings(::Cinemachine::CinemachineBlenderSettings* arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineBlenderSettings*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_SET_BLENDERSETTINGS_OFFSET))(arg, nullptr);
		}

		::Cinemachine::CinemachineBlenderSettings* get_BlenderSettings()
		{
			return ((::Cinemachine::CinemachineBlenderSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_GET_BLENDERSETTINGS_OFFSET))(nullptr);
		}

		::System::Single GetBlendTime(::Cinemachine::CinemachineVirtualCamera* arg, ::Cinemachine::CinemachineVirtualCamera* arg2)
		{
			return ((::System::Single(*)(::Cinemachine::CinemachineVirtualCamera*, ::Cinemachine::CinemachineVirtualCamera*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_GETBLENDTIME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_CinemachineBrain(::Cinemachine::CinemachineBrain* arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineBrain*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_SET_CINEMACHINEBRAIN_OFFSET))(arg, nullptr);
		}

		::System::Void set_FieldCamera(::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_SET_FIELDCAMERA_OFFSET))(arg, nullptr);
		}

		::System::Void set_ShadowCoordModifier(ShadowCoordModifier* arg)
		{
			((::System::Void(*)(ShadowCoordModifier*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_SET_SHADOWCOORDMODIFIER_OFFSET))(arg, nullptr);
		}

		::System::Single get_ModifierScaleCache()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_GET_MODIFIERSCALECACHE_OFFSET))(nullptr);
		}

		::Cinemachine::CinemachineVirtualCamera* get_ArtLevelCamera()
		{
			return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_GET_ARTLEVELCAMERA_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_START_OFFSET))(nullptr);
		}

		::System::String* get_BlenderAssetPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_GET_BLENDERASSETPATH_OFFSET))(nullptr);
		}

		CameraSettingsCache* get_DefaultCameraSettings()
		{
			return ((CameraSettingsCache*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_GET_DEFAULTCAMERASETTINGS_OFFSET))(nullptr);
		}

		::System::Void SetArtLevelCameraTarget(::UnityEngine::MonoBehaviour* arg)
		{
			((::System::Void(*)(::UnityEngine::MonoBehaviour*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_SETARTLEVELCAMERATARGET_OFFSET))(arg, nullptr);
		}

		::System::Void set_ModifierScaleCache(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_SET_MODIFIERSCALECACHE_OFFSET))(arg, nullptr);
		}

		::System::Void SetArtLevelCamera(::Cinemachine::CinemachineVirtualCamera* arg)
		{
			((::System::Void(*)(::Cinemachine::CinemachineVirtualCamera*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_SETARTLEVELCAMERA_OFFSET))(arg, nullptr);
		}

		::System::Void Subscribe()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_SUBSCRIBE_OFFSET))(nullptr);
		}

		::Cinemachine::CinemachineVirtualCamera* InstantiateArtLevelCamera()
		{
			return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_INSTANTIATEARTLEVELCAMERA_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDCAMERA_FIELDCAMERAMANAGER_ONDESTROY_OFFSET))(nullptr);
		}

	};
}


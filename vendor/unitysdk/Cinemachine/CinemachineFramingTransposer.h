#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace Cinemachine::Utility { class PositionPredictor; }
namespace UnityEngine { class Quaternion; }
namespace UnityEngine { class Bounds; }
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine { class Rect; }
namespace Cinemachine { class ICinemachineTargetGroup; }
namespace UnityEngine { class Vector3&; }
namespace Cinemachine { class CameraState&; }
namespace Cinemachine { class ICinemachineCamera; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Transform; }

#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_SET_HARDGUIDERECT_OFFSET UNITYSDK_OFFSET(0x28447F0)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_SET_SOFTGUIDERECT_OFFSET UNITYSDK_OFFSET(0x28449A0)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_SET_LASTBOUNDSMATRIX_OFFSET UNITYSDK_OFFSET(0x2844AD0)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x2844B00)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x2844BD0)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GETSCREENSPACEGROUPBOUNDINGBOX_OFFSET UNITYSDK_OFFSET(0x2844C30)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_MUTATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x2845370)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GET_BODYAPPLIESAFTERAIM_OFFSET UNITYSDK_OFFSET(0x2847480)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_SET_LASTBOUNDS_OFFSET UNITYSDK_OFFSET(0x2847490)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x28474B0)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_SCREENTOORTHO_OFFSET UNITYSDK_OFFSET(0x2847160)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GET_HARDGUIDERECT_OFFSET UNITYSDK_OFFSET(0x28473B0)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2847670)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GETTARGETHEIGHT_OFFSET UNITYSDK_OFFSET(0x2846F70)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GETMAXDAMPTIME_OFFSET UNITYSDK_OFFSET(0x2847790)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GET_SOFTGUIDERECT_OFFSET UNITYSDK_OFFSET(0x2847100)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GET_TRACKEDPOINT_OFFSET UNITYSDK_OFFSET(0x28477B0)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0x28477D0)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GET_LASTBOUNDSMATRIX_OFFSET UNITYSDK_OFFSET(0x28478C0)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GET_STAGE_OFFSET UNITYSDK_OFFSET(0x28478F0)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_ORTHOOFFSETTOSCREENBOUNDS_OFFSET UNITYSDK_OFFSET(0x2847260)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2847900)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GET_LASTBOUNDS_OFFSET UNITYSDK_OFFSET(0x2847970)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_SET_TRACKEDPOINT_OFFSET UNITYSDK_OFFSET(0x2847990)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_COMPUTEGROUPBOUNDS_OFFSET UNITYSDK_OFFSET(0x2846890)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineFramingTransposer_TypeDefinitionIndex = 34253;

	class CinemachineFramingTransposer : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* m_TrackedObjectOffset; // 0x20
		::System::Single m_LookaheadTime; // 0x2C
		::System::Single m_LookaheadSmoothing; // 0x30
		::System::Boolean m_LookaheadIgnoreY; // 0x34
		::System::Single m_XDamping; // 0x38
		::System::Single m_YDamping; // 0x3C
		::System::Single m_ZDamping; // 0x40
		::System::Boolean m_TargetMovementOnly; // 0x44
		::System::Single m_ScreenX; // 0x48
		::System::Single m_ScreenY; // 0x4C
		::System::Single m_CameraDistance; // 0x50
		::System::Single m_DeadZoneWidth; // 0x54
		::System::Single m_DeadZoneHeight; // 0x58
		::System::Single m_DeadZoneDepth; // 0x5C
		::System::Boolean m_UnlimitedSoftZone; // 0x60
		::System::Single m_SoftZoneWidth; // 0x64
		::System::Single m_SoftZoneHeight; // 0x68
		::System::Single m_BiasX; // 0x6C
		::System::Single m_BiasY; // 0x70
		::System::Boolean m_CenterOnActivate; // 0x74
		FramingMode* m_GroupFramingMode; // 0x78
		AdjustmentMode* m_AdjustmentMode; // 0x7C
		::System::Single m_GroupFramingSize; // 0x80
		::System::Single m_MaxDollyIn; // 0x84
		::System::Single m_MaxDollyOut; // 0x88
		::System::Single m_MinimumDistance; // 0x8C
		::System::Single m_MaximumDistance; // 0x90
		::System::Single m_MinimumFOV; // 0x94
		::System::Single m_MaximumFOV; // 0x98
		::System::Single m_MinimumOrthoSize; // 0x9C
		::System::Single m_MaximumOrthoSize; // 0xA0
		::System::Single kMinimumCameraDistance; // 0x0
		::System::Single kMinimumGroupSize; // 0x0
		::UnityEngine::Vector3* m_PreviousCameraPosition; // 0xA4
		::Cinemachine::Utility::PositionPredictor* m_Predictor; // 0xB0
		::UnityEngine::Vector3* _TrackedPoint_k__BackingField; // 0xB8
		::System::Boolean m_InheritingPosition; // 0xC4
		::System::Single m_prevFOV; // 0xC8
		::UnityEngine::Quaternion* m_prevRotation; // 0xCC
		::UnityEngine::Bounds* _LastBounds_k__BackingField; // 0xDC
		::UnityEngine::Matrix4x4* _LastBoundsMatrix_k__BackingField; // 0xF4

		::System::Void set_HardGuideRect(::UnityEngine::Rect* arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_SET_HARDGUIDERECT_OFFSET))(arg, nullptr);
		}

		::System::Void set_SoftGuideRect(::UnityEngine::Rect* arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_SET_SOFTGUIDERECT_OFFSET))(arg, nullptr);
		}

		::System::Void set_LastBoundsMatrix(::UnityEngine::Matrix4x4* arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_SET_LASTBOUNDSMATRIX_OFFSET))(arg, nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Void ForceCameraPosition(::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_FORCECAMERAPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Bounds* GetScreenSpaceGroupBoundingBox(::Cinemachine::ICinemachineTargetGroup* arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Quaternion* arg)
		{
			return (return (::UnityEngine::Bounds*(*)(::Cinemachine::ICinemachineTargetGroup*, ::UnityEngine::Vector3&*, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GETSCREENSPACEGROUPBOUNDINGBOX_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void MutateCameraState(::Cinemachine::CameraState&* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::CameraState&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_MUTATECAMERASTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_BodyAppliesAfterAim()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GET_BODYAPPLIESAFTERAIM_OFFSET))(nullptr);
		}

		::System::Void set_LastBounds(::UnityEngine::Bounds* arg)
		{
			((::System::Void(*)(::UnityEngine::Bounds*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_SET_LASTBOUNDS_OFFSET))(arg, nullptr);
		}

		::System::Boolean OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* arg, ::UnityEngine::Vector3* arg, ::System::Single arg, TransitionParams&* arg)
		{
			return (return (::System::Boolean(*)(::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3*, ::System::Single, TransitionParams&*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_ONTRANSITIONFROMCAMERA_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Rect* ScreenToOrtho(::UnityEngine::Rect* arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Rect*(*)(::UnityEngine::Rect*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_SCREENTOORTHO_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Rect* get_HardGuideRect()
		{
			return (return (::UnityEngine::Rect*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GET_HARDGUIDERECT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_.CTOR_OFFSET))(nullptr);
		}

		::System::Single GetTargetHeight(::UnityEngine::Vector2* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GETTARGETHEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Single GetMaxDampTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GETMAXDAMPTIME_OFFSET))(nullptr);
		}

		::UnityEngine::Rect* get_SoftGuideRect()
		{
			return (return (::UnityEngine::Rect*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GET_SOFTGUIDERECT_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_TrackedPoint()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GET_TRACKEDPOINT_OFFSET))(nullptr);
		}

		::System::Void OnTargetObjectWarped(::UnityEngine::Transform* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_ONTARGETOBJECTWARPED_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Matrix4x4* get_LastBoundsMatrix()
		{
			return (return (::UnityEngine::Matrix4x4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GET_LASTBOUNDSMATRIX_OFFSET))(nullptr);
		}

		Stage* get_Stage()
		{
			return (return (Stage*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GET_STAGE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* OrthoOffsetToScreenBounds(::UnityEngine::Vector3* arg, ::UnityEngine::Rect* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_ORTHOOFFSETTOSCREENBOUNDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GET_ISVALID_OFFSET))(nullptr);
		}

		::UnityEngine::Bounds* get_LastBounds()
		{
			return (return (::UnityEngine::Bounds*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GET_LASTBOUNDS_OFFSET))(nullptr);
		}

		::System::Void set_TrackedPoint(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_SET_TRACKEDPOINT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* ComputeGroupBounds(::Cinemachine::ICinemachineTargetGroup* arg, ::Cinemachine::CameraState&* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::Cinemachine::ICinemachineTargetGroup*, ::Cinemachine::CameraState&*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_COMPUTEGROUPBOUNDS_OFFSET))(arg, arg, nullptr);
		}

	};
}


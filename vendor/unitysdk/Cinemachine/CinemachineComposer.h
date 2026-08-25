#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Quaternion; }
namespace Cinemachine::Utility { class PositionPredictor; }
namespace UnityEngine { class Rect; }
namespace Cinemachine { class CameraState&; }
namespace UnityEngine { class Quaternion&; }
namespace UnityEngine { class Rect&; }
namespace UnityEngine { class Transform; }

#define CINEMACHINE_CINEMACHINECOMPOSER_GET_SOFTGUIDERECT_OFFSET UNITYSDK_OFFSET(0x28421E0)
#define CINEMACHINE_CINEMACHINECOMPOSER_PREPIPELINEMUTATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x2842240)
#define CINEMACHINE_CINEMACHINECOMPOSER_SET_SOFTGUIDERECT_OFFSET UNITYSDK_OFFSET(0x2842320)
#define CINEMACHINE_CINEMACHINECOMPOSER_ROTATETOSCREENBOUNDS_OFFSET UNITYSDK_OFFSET(0x2842450)
#define CINEMACHINE_CINEMACHINECOMPOSER_SET_TRACKEDPOINT_OFFSET UNITYSDK_OFFSET(0x2842900)
#define CINEMACHINE_CINEMACHINECOMPOSER_CLAMPVERTICALBOUNDS_OFFSET UNITYSDK_OFFSET(0x2842790)
#define CINEMACHINE_CINEMACHINECOMPOSER_GET_TRACKEDPOINT_OFFSET UNITYSDK_OFFSET(0x2842910)
#define CINEMACHINE_CINEMACHINECOMPOSER_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2842930)
#define CINEMACHINE_CINEMACHINECOMPOSER_SET_HARDGUIDERECT_OFFSET UNITYSDK_OFFSET(0x28429A0)
#define CINEMACHINE_CINEMACHINECOMPOSER_MUTATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x2842B50)
#define CINEMACHINE_CINEMACHINECOMPOSER_GET_HARDGUIDERECT_OFFSET UNITYSDK_OFFSET(0x28437A0)
#define CINEMACHINE_CINEMACHINECOMPOSER_GETLOOKATPOINTANDSETTRACKEDPOINT_OFFSET UNITYSDK_OFFSET(0x2843BB0)
#define CINEMACHINE_CINEMACHINECOMPOSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2843E10)
#define CINEMACHINE_CINEMACHINECOMPOSER_GETMAXDAMPTIME_OFFSET UNITYSDK_OFFSET(0x2843FB0)
#define CINEMACHINE_CINEMACHINECOMPOSER_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0x2843FC0)
#define CINEMACHINE_CINEMACHINECOMPOSER_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x28440D0)
#define CINEMACHINE_CINEMACHINECOMPOSER_GET_STAGE_OFFSET UNITYSDK_OFFSET(0x2844130)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineComposer_TypeDefinitionIndex = 34250;

	class CinemachineComposer : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* m_TrackedObjectOffset; // 0x20
		::System::Single m_LookaheadTime; // 0x2C
		::System::Single m_LookaheadSmoothing; // 0x30
		::System::Boolean m_LookaheadIgnoreY; // 0x34
		::System::Single m_HorizontalDamping; // 0x38
		::System::Single m_VerticalDamping; // 0x3C
		::System::Single m_ScreenX; // 0x40
		::System::Single m_ScreenY; // 0x44
		::System::Single m_DeadZoneWidth; // 0x48
		::System::Single m_DeadZoneHeight; // 0x4C
		::System::Single m_SoftZoneWidth; // 0x50
		::System::Single m_SoftZoneHeight; // 0x54
		::System::Single m_BiasX; // 0x58
		::System::Single m_BiasY; // 0x5C
		::System::Boolean m_CenterOnActivate; // 0x60
		::UnityEngine::Vector3* _TrackedPoint_k__BackingField; // 0x64
		::UnityEngine::Vector3* m_CameraPosPrevFrame; // 0x70
		::UnityEngine::Vector3* m_LookAtPrevFrame; // 0x7C
		::UnityEngine::Vector2* m_ScreenOffsetPrevFrame; // 0x88
		::UnityEngine::Quaternion* m_CameraOrientationPrevFrame; // 0x90
		::Cinemachine::Utility::PositionPredictor* m_Predictor; // 0xA0
		FovCache* mCache; // 0xA8

		::UnityEngine::Rect* get_SoftGuideRect()
		{
			return (return (::UnityEngine::Rect*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPOSER_GET_SOFTGUIDERECT_OFFSET))(nullptr);
		}

		::System::Void PrePipelineMutateCameraState(::Cinemachine::CameraState&* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::CameraState&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPOSER_PREPIPELINEMUTATECAMERASTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_SoftGuideRect(::UnityEngine::Rect* arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPOSER_SET_SOFTGUIDERECT_OFFSET))(arg, nullptr);
		}

		::System::Void RotateToScreenBounds(::Cinemachine::CameraState&* arg, ::UnityEngine::Rect* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion&* arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::CameraState&*, ::UnityEngine::Rect*, ::UnityEngine::Vector3*, ::UnityEngine::Quaternion&*, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPOSER_ROTATETOSCREENBOUNDS_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void set_TrackedPoint(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPOSER_SET_TRACKEDPOINT_OFFSET))(arg, nullptr);
		}

		::System::Boolean ClampVerticalBounds(::UnityEngine::Rect&* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rect&*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPOSER_CLAMPVERTICALBOUNDS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector3* get_TrackedPoint()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPOSER_GET_TRACKEDPOINT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPOSER_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Void set_HardGuideRect(::UnityEngine::Rect* arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPOSER_SET_HARDGUIDERECT_OFFSET))(arg, nullptr);
		}

		::System::Void MutateCameraState(::Cinemachine::CameraState&* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::CameraState&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPOSER_MUTATECAMERASTATE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rect* get_HardGuideRect()
		{
			return (return (::UnityEngine::Rect*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPOSER_GET_HARDGUIDERECT_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* GetLookAtPointAndSetTrackedPoint(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPOSER_GETLOOKATPOINTANDSETTRACKEDPOINT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPOSER_.CTOR_OFFSET))(nullptr);
		}

		::System::Single GetMaxDampTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPOSER_GETMAXDAMPTIME_OFFSET))(nullptr);
		}

		::System::Void OnTargetObjectWarped(::UnityEngine::Transform* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPOSER_ONTARGETOBJECTWARPED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ForceCameraPosition(::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPOSER_FORCECAMERAPOSITION_OFFSET))(arg, arg, nullptr);
		}

		Stage* get_Stage()
		{
			return (return (Stage*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPOSER_GET_STAGE_OFFSET))(nullptr);
		}

	};
}


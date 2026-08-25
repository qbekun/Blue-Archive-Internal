#pragma once
#include "../unitysdk.h"

namespace Cinemachine { class AxisState; }
namespace UnityEngine { class Vector2; }
namespace Cinemachine { class ICinemachineCamera; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }
namespace Cinemachine { class CameraState&; }

#define CINEMACHINE_CINEMACHINEPOV_GETRECENTERTARGET_OFFSET UNITYSDK_OFFSET(0x284D5A0)
#define CINEMACHINE_CINEMACHINEPOV_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x284D910)
#define CINEMACHINE_CINEMACHINEPOV_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x284D960)
#define CINEMACHINE_CINEMACHINEPOV_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x284D970)
#define CINEMACHINE_CINEMACHINEPOV_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x284E300)
#define CINEMACHINE_CINEMACHINEPOV_NORMALIZEANGLE_OFFSET UNITYSDK_OFFSET(0x284D8E0)
#define CINEMACHINE_CINEMACHINEPOV_GET_STAGE_OFFSET UNITYSDK_OFFSET(0x284E320)
#define CINEMACHINE_CINEMACHINEPOV_PREPIPELINEMUTATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x284E330)
#define CINEMACHINE_CINEMACHINEPOV_UPDATEINPUTAXISPROVIDER_OFFSET UNITYSDK_OFFSET(0x284E340)
#define CINEMACHINE_CINEMACHINEPOV_SETAXESFORROTATION_OFFSET UNITYSDK_OFFSET(0x284DB20)
#define CINEMACHINE_CINEMACHINEPOV_.CTOR_OFFSET UNITYSDK_OFFSET(0x284E430)
#define CINEMACHINE_CINEMACHINEPOV_MUTATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x284E750)
#define CINEMACHINE_CINEMACHINEPOV_ONENABLE_OFFSET UNITYSDK_OFFSET(0x284EB30)
#define CINEMACHINE_CINEMACHINEPOV_GET_REQUIRESUSERINPUT_OFFSET UNITYSDK_OFFSET(0x284EB40)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachinePOV_TypeDefinitionIndex = 34265;

	class CinemachinePOV : public Il2CppObject
	{
	public:
		RecenterTargetMode* m_RecenterTarget; // 0x20
		::Cinemachine::AxisState* m_VerticalAxis; // 0x28
		Recentering* m_VerticalRecentering; // 0x98
		::Cinemachine::AxisState* m_HorizontalAxis; // 0xB8
		Recentering* m_HorizontalRecentering; // 0x128
		::System::Boolean m_ApplyBeforeBody; // 0x144

		::UnityEngine::Vector2* GetRecenterTarget()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPOV_GETRECENTERTARGET_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPOV_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPOV_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Boolean OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* arg, ::UnityEngine::Vector3* arg, ::System::Single arg, TransitionParams&* arg)
		{
			return (return (::System::Boolean(*)(::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3*, ::System::Single, TransitionParams&*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPOV_ONTRANSITIONFROMCAMERA_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ForceCameraPosition(::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPOV_FORCECAMERAPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Single NormalizeAngle(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPOV_NORMALIZEANGLE_OFFSET))(arg, nullptr);
		}

		Stage* get_Stage()
		{
			return (return (Stage*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPOV_GET_STAGE_OFFSET))(nullptr);
		}

		::System::Void PrePipelineMutateCameraState(::Cinemachine::CameraState&* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::CameraState&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPOV_PREPIPELINEMUTATECAMERASTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UpdateInputAxisProvider()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPOV_UPDATEINPUTAXISPROVIDER_OFFSET))(nullptr);
		}

		::System::Void SetAxesForRotation(::UnityEngine::Quaternion* arg)
		{
			((::System::Void(*)(::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPOV_SETAXESFORROTATION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPOV_.CTOR_OFFSET))(nullptr);
		}

		::System::Void MutateCameraState(::Cinemachine::CameraState&* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::CameraState&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPOV_MUTATECAMERASTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPOV_ONENABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_RequiresUserInput()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPOV_GET_REQUIRESUSERINPUT_OFFSET))(nullptr);
		}

	};
}


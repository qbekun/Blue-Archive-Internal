#pragma once
#include "../unitysdk.h"

namespace Cinemachine { class CinemachinePathBase; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }
namespace Cinemachine { class CameraState&; }

#define CINEMACHINE_CINEMACHINETRACKEDDOLLY_GETMAXDAMPTIME_OFFSET UNITYSDK_OFFSET(0x284EDD0)
#define CINEMACHINE_CINEMACHINETRACKEDDOLLY_GETCAMERAORIENTATIONATPATHPOINT_OFFSET UNITYSDK_OFFSET(0x284EF00)
#define CINEMACHINE_CINEMACHINETRACKEDDOLLY_GET_STAGE_OFFSET UNITYSDK_OFFSET(0x284F230)
#define CINEMACHINE_CINEMACHINETRACKEDDOLLY_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x284F240)
#define CINEMACHINE_CINEMACHINETRACKEDDOLLY_.CTOR_OFFSET UNITYSDK_OFFSET(0x284F2B0)
#define CINEMACHINE_CINEMACHINETRACKEDDOLLY_MUTATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x284F3B0)
#define CINEMACHINE_CINEMACHINETRACKEDDOLLY_GET_ANGULARDAMPING_OFFSET UNITYSDK_OFFSET(0x284EE70)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineTrackedDolly_TypeDefinitionIndex = 34269;

	class CinemachineTrackedDolly : public Il2CppObject
	{
	public:
		::Cinemachine::CinemachinePathBase* m_Path; // 0x20
		::System::Single m_PathPosition; // 0x28
		PositionUnits* m_PositionUnits; // 0x2C
		::UnityEngine::Vector3* m_PathOffset; // 0x30
		::System::Single m_XDamping; // 0x3C
		::System::Single m_YDamping; // 0x40
		::System::Single m_ZDamping; // 0x44
		CameraUpMode* m_CameraUp; // 0x48
		::System::Single m_PitchDamping; // 0x4C
		::System::Single m_YawDamping; // 0x50
		::System::Single m_RollDamping; // 0x54
		AutoDolly* m_AutoDolly; // 0x58
		::System::Single m_PreviousPathPosition; // 0x68
		::UnityEngine::Quaternion* m_PreviousOrientation; // 0x6C
		::UnityEngine::Vector3* m_PreviousCameraPosition; // 0x7C

		::System::Single GetMaxDampTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRACKEDDOLLY_GETMAXDAMPTIME_OFFSET))(nullptr);
		}

		::UnityEngine::Quaternion* GetCameraOrientationAtPathPoint(::UnityEngine::Quaternion* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::UnityEngine::Quaternion*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRACKEDDOLLY_GETCAMERAORIENTATIONATPATHPOINT_OFFSET))(arg, arg, nullptr);
		}

		Stage* get_Stage()
		{
			return (return (Stage*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRACKEDDOLLY_GET_STAGE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRACKEDDOLLY_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRACKEDDOLLY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void MutateCameraState(::Cinemachine::CameraState&* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::CameraState&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRACKEDDOLLY_MUTATECAMERASTATE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector3* get_AngularDamping()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRACKEDDOLLY_GET_ANGULARDAMPING_OFFSET))(nullptr);
		}

	};
}


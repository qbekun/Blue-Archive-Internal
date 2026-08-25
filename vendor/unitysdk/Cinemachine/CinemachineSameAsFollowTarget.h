#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Quaternion; }
namespace Cinemachine { class CameraState&; }

#define CINEMACHINE_CINEMACHINESAMEASFOLLOWTARGET_GETMAXDAMPTIME_OFFSET UNITYSDK_OFFSET(0x284EB50)
#define CINEMACHINE_CINEMACHINESAMEASFOLLOWTARGET_GET_STAGE_OFFSET UNITYSDK_OFFSET(0x284EB60)
#define CINEMACHINE_CINEMACHINESAMEASFOLLOWTARGET_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x284EB70)
#define CINEMACHINE_CINEMACHINESAMEASFOLLOWTARGET_.CTOR_OFFSET UNITYSDK_OFFSET(0x284EBE0)
#define CINEMACHINE_CINEMACHINESAMEASFOLLOWTARGET_MUTATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x284EC30)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineSameAsFollowTarget_TypeDefinitionIndex = 34266;

	class CinemachineSameAsFollowTarget : public Il2CppObject
	{
	public:
		::System::Single m_Damping; // 0x20
		::UnityEngine::Quaternion* m_PreviousReferenceOrientation; // 0x24

		::System::Single GetMaxDampTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESAMEASFOLLOWTARGET_GETMAXDAMPTIME_OFFSET))(nullptr);
		}

		Stage* get_Stage()
		{
			return (return (Stage*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESAMEASFOLLOWTARGET_GET_STAGE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESAMEASFOLLOWTARGET_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESAMEASFOLLOWTARGET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void MutateCameraState(::Cinemachine::CameraState&* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::CameraState&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESAMEASFOLLOWTARGET_MUTATECAMERASTATE_OFFSET))(arg, arg, nullptr);
		}

	};
}


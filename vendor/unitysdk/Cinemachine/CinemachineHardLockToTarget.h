#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace Cinemachine { class CameraState&; }

#define CINEMACHINE_CINEMACHINEHARDLOCKTOTARGET_GET_STAGE_OFFSET UNITYSDK_OFFSET(0x28492A0)
#define CINEMACHINE_CINEMACHINEHARDLOCKTOTARGET_MUTATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x28492B0)
#define CINEMACHINE_CINEMACHINEHARDLOCKTOTARGET_.CTOR_OFFSET UNITYSDK_OFFSET(0x28493F0)
#define CINEMACHINE_CINEMACHINEHARDLOCKTOTARGET_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2849400)
#define CINEMACHINE_CINEMACHINEHARDLOCKTOTARGET_GETMAXDAMPTIME_OFFSET UNITYSDK_OFFSET(0x2849470)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineHardLockToTarget_TypeDefinitionIndex = 34257;

	class CinemachineHardLockToTarget : public Il2CppObject
	{
	public:
		::System::Single m_Damping; // 0x20
		::UnityEngine::Vector3* m_PreviousTargetPosition; // 0x24

		Stage* get_Stage()
		{
			return (return (Stage*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEHARDLOCKTOTARGET_GET_STAGE_OFFSET))(nullptr);
		}

		::System::Void MutateCameraState(::Cinemachine::CameraState&* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::CameraState&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEHARDLOCKTOTARGET_MUTATECAMERASTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEHARDLOCKTOTARGET_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEHARDLOCKTOTARGET_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Single GetMaxDampTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEHARDLOCKTOTARGET_GETMAXDAMPTIME_OFFSET))(nullptr);
		}

	};
}


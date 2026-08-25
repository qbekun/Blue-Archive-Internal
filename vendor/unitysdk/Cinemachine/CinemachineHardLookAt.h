#pragma once
#include "../unitysdk.h"

namespace Cinemachine { class CameraState&; }

#define CINEMACHINE_CINEMACHINEHARDLOOKAT_MUTATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x2849480)
#define CINEMACHINE_CINEMACHINEHARDLOOKAT_.CTOR_OFFSET UNITYSDK_OFFSET(0x28497F0)
#define CINEMACHINE_CINEMACHINEHARDLOOKAT_GET_STAGE_OFFSET UNITYSDK_OFFSET(0x2849800)
#define CINEMACHINE_CINEMACHINEHARDLOOKAT_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2849810)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineHardLookAt_TypeDefinitionIndex = 34258;

	class CinemachineHardLookAt : public Il2CppObject
	{
	public:
		::System::Void MutateCameraState(::Cinemachine::CameraState&* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::CameraState&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEHARDLOOKAT_MUTATECAMERASTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEHARDLOOKAT_.CTOR_OFFSET))(nullptr);
		}

		Stage* get_Stage()
		{
			return (return (Stage*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEHARDLOOKAT_GET_STAGE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEHARDLOOKAT_GET_ISVALID_OFFSET))(nullptr);
		}

	};
}


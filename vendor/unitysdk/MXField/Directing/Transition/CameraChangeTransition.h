#pragma once
#include "../../../unitysdk.h"

namespace Cinemachine { class CinemachineVirtualCamera; }

#define MXFIELD_DIRECTING_TRANSITION_CAMERACHANGETRANSITION_SET_BLENDTIME_OFFSET UNITYSDK_OFFSET(0xECD190)
#define MXFIELD_DIRECTING_TRANSITION_CAMERACHANGETRANSITION_GET_BLENDTIME_OFFSET UNITYSDK_OFFSET(0xECD1A0)
#define MXFIELD_DIRECTING_TRANSITION_CAMERACHANGETRANSITION_EXECUTE_OFFSET UNITYSDK_OFFSET(0xECD1B0)
#define MXFIELD_DIRECTING_TRANSITION_CAMERACHANGETRANSITION_GET_TOCAMERA_OFFSET UNITYSDK_OFFSET(0xECD300)
#define MXFIELD_DIRECTING_TRANSITION_CAMERACHANGETRANSITION_COEXECUTE_OFFSET UNITYSDK_OFFSET(0xECD260)
#define MXFIELD_DIRECTING_TRANSITION_CAMERACHANGETRANSITION_.CTOR_OFFSET UNITYSDK_OFFSET(0xECD330)
#define MXFIELD_DIRECTING_TRANSITION_CAMERACHANGETRANSITION_GET_FROMCAMERA_OFFSET UNITYSDK_OFFSET(0xECD380)

namespace MXField::Directing::Transition
{
	inline static constexpr unsigned int CameraChangeTransition_TypeDefinitionIndex = 10915;

	class CameraChangeTransition : public Il2CppObject
	{
	public:
		::Cinemachine::CinemachineVirtualCamera* _FromCamera_k__BackingField; // 0x10
		::Cinemachine::CinemachineVirtualCamera* _ToCamera_k__BackingField; // 0x18
		::System::Single _BlendTime_k__BackingField; // 0x20

		::System::Void set_BlendTime(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_TRANSITION_CAMERACHANGETRANSITION_SET_BLENDTIME_OFFSET))(arg, nullptr);
		}

		::System::Single get_BlendTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_TRANSITION_CAMERACHANGETRANSITION_GET_BLENDTIME_OFFSET))(nullptr);
		}

		::System::Void Execute(::System::Action* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_TRANSITION_CAMERACHANGETRANSITION_EXECUTE_OFFSET))(arg, arg2, nullptr);
		}

		::Cinemachine::CinemachineVirtualCamera* get_ToCamera()
		{
			return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_TRANSITION_CAMERACHANGETRANSITION_GET_TOCAMERA_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoExecute(::System::Action* arg, ::System::Action* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_TRANSITION_CAMERACHANGETRANSITION_COEXECUTE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::Cinemachine::CinemachineVirtualCamera* arg, ::Cinemachine::CinemachineVirtualCamera* arg2)
		{
			((::System::Void(*)(::Cinemachine::CinemachineVirtualCamera*, ::Cinemachine::CinemachineVirtualCamera*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_TRANSITION_CAMERACHANGETRANSITION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::Cinemachine::CinemachineVirtualCamera* get_FromCamera()
		{
			return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_TRANSITION_CAMERACHANGETRANSITION_GET_FROMCAMERA_OFFSET))(nullptr);
		}

	};
}


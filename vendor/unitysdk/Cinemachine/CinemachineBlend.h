#pragma once
#include "../unitysdk.h"

namespace Cinemachine { class ICinemachineCamera; }
namespace UnityEngine { class AnimationCurve; }
namespace Cinemachine { class CameraState; }
namespace UnityEngine { class Vector3; }

#define CINEMACHINE_CINEMACHINEBLEND_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x28551F0)
#define CINEMACHINE_CINEMACHINEBLEND_GET_BLENDWEIGHT_OFFSET UNITYSDK_OFFSET(0x2855300)
#define CINEMACHINE_CINEMACHINEBLEND_GET_STATE_OFFSET UNITYSDK_OFFSET(0x28553C0)
#define CINEMACHINE_CINEMACHINEBLEND_USES_OFFSET UNITYSDK_OFFSET(0x2855830)
#define CINEMACHINE_CINEMACHINEBLEND_UPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x2855940)
#define CINEMACHINE_CINEMACHINEBLEND_.CTOR_OFFSET UNITYSDK_OFFSET(0x2855BA0)
#define CINEMACHINE_CINEMACHINEBLEND_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x2855C30)
#define CINEMACHINE_CINEMACHINEBLEND_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0x28553A0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineBlend_TypeDefinitionIndex = 34280;

	class CinemachineBlend : public Il2CppObject
	{
	public:
		::Cinemachine::ICinemachineCamera* CamA; // 0x10
		::Cinemachine::ICinemachineCamera* CamB; // 0x18
		::UnityEngine::AnimationCurve* BlendCurve; // 0x20
		::System::Single TimeInBlend; // 0x28
		::System::Single Duration; // 0x2C

		::System::Boolean get_IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLEND_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Single get_BlendWeight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLEND_GET_BLENDWEIGHT_OFFSET))(nullptr);
		}

		::Cinemachine::CameraState* get_State()
		{
			return (return (::Cinemachine::CameraState*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLEND_GET_STATE_OFFSET))(nullptr);
		}

		::System::Boolean Uses(::Cinemachine::ICinemachineCamera* arg)
		{
			return (return (::System::Boolean(*)(::Cinemachine::ICinemachineCamera*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLEND_USES_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateCameraState(::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLEND_UPDATECAMERASTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::Cinemachine::ICinemachineCamera* arg, ::Cinemachine::ICinemachineCamera* arg, ::UnityEngine::AnimationCurve* arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::Cinemachine::ICinemachineCamera*, ::Cinemachine::ICinemachineCamera*, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLEND_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::String* get_Description()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLEND_GET_DESCRIPTION_OFFSET))(nullptr);
		}

		::System::Boolean get_IsComplete()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLEND_GET_ISCOMPLETE_OFFSET))(nullptr);
		}

	};
}


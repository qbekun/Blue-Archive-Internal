#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Vector3&; }
namespace UnityEngine { class Quaternion&; }

#define CINEMACHINE_CINEMACHINEFIXEDSIGNAL_AXISDURATION_OFFSET UNITYSDK_OFFSET(0x2867D20)
#define CINEMACHINE_CINEMACHINEFIXEDSIGNAL_AXISVALUE_OFFSET UNITYSDK_OFFSET(0x2867DF0)
#define CINEMACHINE_CINEMACHINEFIXEDSIGNAL_GET_SIGNALDURATION_OFFSET UNITYSDK_OFFSET(0x2867E40)
#define CINEMACHINE_CINEMACHINEFIXEDSIGNAL_GETSIGNAL_OFFSET UNITYSDK_OFFSET(0x2867E90)
#define CINEMACHINE_CINEMACHINEFIXEDSIGNAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x2867FA0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineFixedSignal_TypeDefinitionIndex = 34353;

	class CinemachineFixedSignal : public Il2CppObject
	{
	public:
		::UnityEngine::AnimationCurve* m_XCurve; // 0x18
		::UnityEngine::AnimationCurve* m_YCurve; // 0x20
		::UnityEngine::AnimationCurve* m_ZCurve; // 0x28

		::System::Single AxisDuration(::UnityEngine::AnimationCurve* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::AnimationCurve*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFIXEDSIGNAL_AXISDURATION_OFFSET))(arg, nullptr);
		}

		::System::Single AxisValue(::UnityEngine::AnimationCurve* arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFIXEDSIGNAL_AXISVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Single get_SignalDuration()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFIXEDSIGNAL_GET_SIGNALDURATION_OFFSET))(nullptr);
		}

		::System::Void GetSignal(::System::Single arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Quaternion&* arg)
		{
			((::System::Void(*)(::System::Single, ::UnityEngine::Vector3&*, ::UnityEngine::Quaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFIXEDSIGNAL_GETSIGNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFIXEDSIGNAL_.CTOR_OFFSET))(nullptr);
		}

	};
}


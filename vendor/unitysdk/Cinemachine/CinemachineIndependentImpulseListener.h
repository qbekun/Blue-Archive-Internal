#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }

#define CINEMACHINE_CINEMACHINEINDEPENDENTIMPULSELISTENER_UPDATE_OFFSET UNITYSDK_OFFSET(0x286C620)
#define CINEMACHINE_CINEMACHINEINDEPENDENTIMPULSELISTENER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x286C7C0)
#define CINEMACHINE_CINEMACHINEINDEPENDENTIMPULSELISTENER_RESET_OFFSET UNITYSDK_OFFSET(0x286CDA0)
#define CINEMACHINE_CINEMACHINEINDEPENDENTIMPULSELISTENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x286CDF0)
#define CINEMACHINE_CINEMACHINEINDEPENDENTIMPULSELISTENER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x286CE00)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineIndependentImpulseListener_TypeDefinitionIndex = 34371;

	class CinemachineIndependentImpulseListener : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* impulsePosLastFrame; // 0x18
		::UnityEngine::Quaternion* impulseRotLastFrame; // 0x24
		::System::Int32 m_ChannelMask; // 0x34
		::System::Single m_Gain; // 0x38
		::System::Boolean m_Use2DDistance; // 0x3C
		::System::Boolean m_UseLocalSpace; // 0x3D
		ImpulseReaction* m_ReactionSettings; // 0x40

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEINDEPENDENTIMPULSELISTENER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEINDEPENDENTIMPULSELISTENER_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEINDEPENDENTIMPULSELISTENER_RESET_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEINDEPENDENTIMPULSELISTENER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEINDEPENDENTIMPULSELISTENER_ONENABLE_OFFSET))(nullptr);
		}

	};
}


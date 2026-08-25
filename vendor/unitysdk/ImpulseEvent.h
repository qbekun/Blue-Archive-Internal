#pragma once
#include "unitysdk.h"

namespace Cinemachine { class ISignalSource6D; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector3&; }
namespace UnityEngine { class Quaternion&; }

#define IMPULSEEVENT_GET_EXPIRED_OFFSET UNITYSDK_OFFSET(0x286B520)
#define IMPULSEEVENT_CANCEL_OFFSET UNITYSDK_OFFSET(0x286BEE0)
#define IMPULSEEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x286AFA0)
#define IMPULSEEVENT_DISTANCEDECAY_OFFSET UNITYSDK_OFFSET(0x286BF30)
#define IMPULSEEVENT_GETDECAYEDSIGNAL_OFFSET UNITYSDK_OFFSET(0x286B690)
#define IMPULSEEVENT_CLEAR_OFFSET UNITYSDK_OFFSET(0x286B2A0)

	inline static constexpr unsigned int ImpulseEvent_TypeDefinitionIndex = 34368;

	class ImpulseEvent : public Il2CppObject
	{
	public:
		::System::Single m_StartTime; // 0x10
		EnvelopeDefinition* m_Envelope; // 0x18
		::Cinemachine::ISignalSource6D* m_SignalSource; // 0x38
		::UnityEngine::Vector3* m_Position; // 0x40
		::System::Single m_Radius; // 0x4C
		DirectionMode* m_DirectionMode; // 0x50
		::System::Int32 m_Channel; // 0x54
		DissipationMode* m_DissipationMode; // 0x58
		::System::Single m_DissipationDistance; // 0x5C
		::System::Single m_CustomDissipation; // 0x60
		::System::Single m_PropagationSpeed; // 0x64

		::System::Boolean get_Expired()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IMPULSEEVENT_GET_EXPIRED_OFFSET))(nullptr);
		}

		::System::Void Cancel(::System::Single arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + IMPULSEEVENT_CANCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMPULSEEVENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Single DistanceDecay(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + IMPULSEEVENT_DISTANCEDECAY_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetDecayedSignal(::UnityEngine::Vector3* arg, ::System::Boolean arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Quaternion&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector3*, ::System::Boolean, ::UnityEngine::Vector3&*, ::UnityEngine::Quaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + IMPULSEEVENT_GETDECAYEDSIGNAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMPULSEEVENT_CLEAR_OFFSET))(nullptr);
		}

	};


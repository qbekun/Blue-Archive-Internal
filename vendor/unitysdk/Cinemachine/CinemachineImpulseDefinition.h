#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class AnimationCurve; }
namespace Cinemachine { class SignalSourceAsset; }
namespace UnityEngine { class Vector3; }

#define CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_GET_IMPULSECURVE_OFFSET UNITYSDK_OFFSET(0x2867FC0)
#define CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x2868110)
#define CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x2868200)
#define CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_GETSTANDARDCURVE_OFFSET UNITYSDK_OFFSET(0x2868090)
#define CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_CREATESTANDARDSHAPES_OFFSET UNITYSDK_OFFSET(0x28682E0)
#define CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_CREATEEVENT_OFFSET UNITYSDK_OFFSET(0x2869320)
#define CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_LEGACYCREATEANDRETURNEVENT_OFFSET UNITYSDK_OFFSET(0x2869580)
#define CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_CREATEANDRETURNEVENT_OFFSET UNITYSDK_OFFSET(0x2869360)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineImpulseDefinition_TypeDefinitionIndex = 34360;

	class CinemachineImpulseDefinition : public Il2CppObject
	{
	public:
		::System::Int32 m_ImpulseChannel; // 0x10
		ImpulseShapes* m_ImpulseShape; // 0x14
		::UnityEngine::AnimationCurve* m_CustomImpulseShape; // 0x18
		::System::Single m_ImpulseDuration; // 0x20
		ImpulseTypes* m_ImpulseType; // 0x24
		::System::Single m_DissipationRate; // 0x28
		::Cinemachine::SignalSourceAsset* m_RawSignal; // 0x30
		::System::Single m_AmplitudeGain; // 0x38
		::System::Single m_FrequencyGain; // 0x3C
		RepeatMode* m_RepeatMode; // 0x40
		::System::Boolean m_Randomize; // 0x44
		EnvelopeDefinition* m_TimeEnvelope; // 0x48
		::System::Single m_ImpactRadius; // 0x68
		DirectionMode* m_DirectionMode; // 0x6C
		DissipationMode* m_DissipationMode; // 0x70
		::System::Single m_DissipationDistance; // 0x74
		::System::Single m_PropagationSpeed; // 0x78
		::Il2CppArray<::System::Object*>* sStandardShapes; // 0x0

		::UnityEngine::AnimationCurve* get_ImpulseCurve()
		{
			return (return (::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_GET_IMPULSECURVE_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::AnimationCurve* GetStandardCurve(ImpulseShapes* arg)
		{
			return (return (::UnityEngine::AnimationCurve*(*)(ImpulseShapes*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_GETSTANDARDCURVE_OFFSET))(arg, nullptr);
		}

		::System::Void CreateStandardShapes()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_CREATESTANDARDSHAPES_OFFSET))(nullptr);
		}

		::System::Void CreateEvent(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_CREATEEVENT_OFFSET))(arg, arg, nullptr);
		}

		ImpulseEvent* LegacyCreateAndReturnEvent(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (ImpulseEvent*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_LEGACYCREATEANDRETURNEVENT_OFFSET))(arg, arg, nullptr);
		}

		ImpulseEvent* CreateAndReturnEvent(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (ImpulseEvent*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEDEFINITION_CREATEANDRETURNEVENT_OFFSET))(arg, arg, nullptr);
		}

	};
}


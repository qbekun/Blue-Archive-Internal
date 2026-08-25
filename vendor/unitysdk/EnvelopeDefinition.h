#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AnimationCurve; }

#define ENVELOPEDEFINITION_VALIDATE_OFFSET UNITYSDK_OFFSET(0x286BCC0)
#define ENVELOPEDEFINITION_DEFAULT_OFFSET UNITYSDK_OFFSET(0x286BCE0)
#define ENVELOPEDEFINITION_CHANGESTOPTIME_OFFSET UNITYSDK_OFFSET(0x286BD10)
#define ENVELOPEDEFINITION_GETVALUEAT_OFFSET UNITYSDK_OFFSET(0x286BD50)
#define ENVELOPEDEFINITION_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x2869D30)
#define ENVELOPEDEFINITION_CLEAR_OFFSET UNITYSDK_OFFSET(0x286BE90)

	inline static constexpr unsigned int EnvelopeDefinition_TypeDefinitionIndex = 34365;

	class EnvelopeDefinition : public Il2CppObject
	{
	public:
		::UnityEngine::AnimationCurve* m_AttackShape; // 0x10
		::UnityEngine::AnimationCurve* m_DecayShape; // 0x18
		::System::Single m_AttackTime; // 0x20
		::System::Single m_SustainTime; // 0x24
		::System::Single m_DecayTime; // 0x28
		::System::Boolean m_ScaleWithImpact; // 0x2C
		::System::Boolean m_HoldForever; // 0x2D

		::System::Void Validate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVELOPEDEFINITION_VALIDATE_OFFSET))(nullptr);
		}

		EnvelopeDefinition* Default()
		{
			return (return (EnvelopeDefinition*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVELOPEDEFINITION_DEFAULT_OFFSET))(nullptr);
		}

		::System::Void ChangeStopTime(::System::Single arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ENVELOPEDEFINITION_CHANGESTOPTIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Single GetValueAt(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ENVELOPEDEFINITION_GETVALUEAT_OFFSET))(arg, nullptr);
		}

		::System::Single get_Duration()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVELOPEDEFINITION_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVELOPEDEFINITION_CLEAR_OFFSET))(nullptr);
		}

	};


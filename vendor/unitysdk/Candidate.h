#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCPlayer; }

#define CANDIDATE_GET_CONDITIONCHANGEDACTION_OFFSET UNITYSDK_OFFSET(0xD948D0)
#define CANDIDATE_GET_CONDITIONMET_OFFSET UNITYSDK_OFFSET(0xD948E0)
#define CANDIDATE_SET_CONDITIONMET_OFFSET UNITYSDK_OFFSET(0xD94120)
#define CANDIDATE_SET_CONDITIONCHANGEDACTION_OFFSET UNITYSDK_OFFSET(0xD948F0)
#define CANDIDATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xD94710)

	inline static constexpr unsigned int Candidate_TypeDefinitionIndex = 9728;

	class Candidate : public Il2CppObject
	{
	public:
		::MXUnderCover::UCPlayer* Player; // 0x10
		::System::Boolean conditionMet; // 0x18
		Il2CppObject* _conditionChangedAction_k__BackingField; // 0x20

		Il2CppObject* get_conditionChangedAction()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CANDIDATE_GET_CONDITIONCHANGEDACTION_OFFSET))(nullptr);
		}

		::System::Boolean get_ConditionMet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CANDIDATE_GET_CONDITIONMET_OFFSET))(nullptr);
		}

		::System::Void set_ConditionMet(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CANDIDATE_SET_CONDITIONMET_OFFSET))(arg, nullptr);
		}

		::System::Void set_conditionChangedAction(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CANDIDATE_SET_CONDITIONCHANGEDACTION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MXUnderCover::UCPlayer* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MXUnderCover::UCPlayer*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CANDIDATE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};


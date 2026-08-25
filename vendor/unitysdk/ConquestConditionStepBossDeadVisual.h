#pragma once
#include "unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestConditionStepBossDead; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCondition; }

#define CONQUESTCONDITIONSTEPBOSSDEADVISUAL_GETCONDITION_OFFSET UNITYSDK_OFFSET(0x1ADD650)
#define CONQUESTCONDITIONSTEPBOSSDEADVISUAL_SETCONDITION_OFFSET UNITYSDK_OFFSET(0x1ADD660)
#define CONQUESTCONDITIONSTEPBOSSDEADVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1ADD720)

	inline static constexpr unsigned int ConquestConditionStepBossDeadVisual_TypeDefinitionIndex = 1469;

	class ConquestConditionStepBossDeadVisual : public Il2CppObject
	{
	public:
		::MX::Conquest::ConquestTileMapEvent::ConquestConditionStepBossDead* StepBossDead; // 0x18
		::System::Int32 Step; // 0x20

		::MX::Conquest::ConquestTileMapEvent::ConquestCondition* GetCondition()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONDITIONSTEPBOSSDEADVISUAL_GETCONDITION_OFFSET))(nullptr);
		}

		::System::Void SetCondition(::MX::Conquest::ConquestTileMapEvent::ConquestCondition* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTileMapEvent::ConquestCondition*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONDITIONSTEPBOSSDEADVISUAL_SETCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONDITIONSTEPBOSSDEADVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};


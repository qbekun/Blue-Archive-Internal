#pragma once
#include "unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestConditionDeadUnitLeader; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCondition; }

#define CONQUESTCONDITIONDEADUNITLEADERVISUAL_GETCONDITION_OFFSET UNITYSDK_OFFSET(0x1ADD500)
#define CONQUESTCONDITIONDEADUNITLEADERVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1ADD510)
#define CONQUESTCONDITIONDEADUNITLEADERVISUAL_SETCONDITION_OFFSET UNITYSDK_OFFSET(0x1ADD590)

	inline static constexpr unsigned int ConquestConditionDeadUnitLeaderVisual_TypeDefinitionIndex = 1468;

	class ConquestConditionDeadUnitLeaderVisual : public Il2CppObject
	{
	public:
		::MX::Conquest::ConquestTileMapEvent::ConquestConditionDeadUnitLeader* DeadUnitLeader; // 0x18

		::MX::Conquest::ConquestTileMapEvent::ConquestCondition* GetCondition()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONDITIONDEADUNITLEADERVISUAL_GETCONDITION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONDITIONDEADUNITLEADERVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCondition(::MX::Conquest::ConquestTileMapEvent::ConquestCondition* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTileMapEvent::ConquestCondition*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONDITIONDEADUNITLEADERVISUAL_SETCONDITION_OFFSET))(arg, nullptr);
		}

	};


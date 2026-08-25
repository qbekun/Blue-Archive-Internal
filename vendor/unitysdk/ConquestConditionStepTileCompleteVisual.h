#pragma once
#include "unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestConditionStepTileComplete; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCondition; }

#define CONQUESTCONDITIONSTEPTILECOMPLETEVISUAL_GETCONDITION_OFFSET UNITYSDK_OFFSET(0x1ADD8D0)
#define CONQUESTCONDITIONSTEPTILECOMPLETEVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1ADD8E0)
#define CONQUESTCONDITIONSTEPTILECOMPLETEVISUAL_SETCONDITION_OFFSET UNITYSDK_OFFSET(0x1ADD950)

	inline static constexpr unsigned int ConquestConditionStepTileCompleteVisual_TypeDefinitionIndex = 1471;

	class ConquestConditionStepTileCompleteVisual : public Il2CppObject
	{
	public:
		::MX::Conquest::ConquestTileMapEvent::ConquestConditionStepTileComplete* StepTileComplete; // 0x18
		::System::Int32 Step; // 0x20

		::MX::Conquest::ConquestTileMapEvent::ConquestCondition* GetCondition()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONDITIONSTEPTILECOMPLETEVISUAL_GETCONDITION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONDITIONSTEPTILECOMPLETEVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCondition(::MX::Conquest::ConquestTileMapEvent::ConquestCondition* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTileMapEvent::ConquestCondition*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONDITIONSTEPTILECOMPLETEVISUAL_SETCONDITION_OFFSET))(arg, nullptr);
		}

	};


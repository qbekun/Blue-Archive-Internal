#pragma once
#include "unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestConditionStepOpen; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCondition; }

#define CONQUESTCONDITIONSTEPOPENVISUAL_SETCONDITION_OFFSET UNITYSDK_OFFSET(0x1ADD790)
#define CONQUESTCONDITIONSTEPOPENVISUAL_GETCONDITION_OFFSET UNITYSDK_OFFSET(0x1ADD850)
#define CONQUESTCONDITIONSTEPOPENVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1ADD860)

	inline static constexpr unsigned int ConquestConditionStepOpenVisual_TypeDefinitionIndex = 1470;

	class ConquestConditionStepOpenVisual : public Il2CppObject
	{
	public:
		::MX::Conquest::ConquestTileMapEvent::ConquestConditionStepOpen* StepOpen; // 0x18
		::System::Int32 Step; // 0x20

		::System::Void SetCondition(::MX::Conquest::ConquestTileMapEvent::ConquestCondition* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTileMapEvent::ConquestCondition*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONDITIONSTEPOPENVISUAL_SETCONDITION_OFFSET))(arg, nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestCondition* GetCondition()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONDITIONSTEPOPENVISUAL_GETCONDITION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONDITIONSTEPOPENVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};


#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int ConditionalBGMInfo_TypeDefinitionIndex = 10601;

	class ConditionalBGMInfo : public Il2CppObject
	{
	public:
		::System::Int64 ConditionalBGMId; // 0x10
		::System::Int64 ConditionalBGMQuestId; // 0x18
		::System::Int64 BeginConditionalBGMScenarioGroupId; // 0x20
		::System::Int64 BeginConditionalBGMInteractionGroupId; // 0x28
		::System::Int64 EndConditionalBGMScenarioGroupId; // 0x30
		::System::Int64 EndConditionalBGMInteractionGroupId; // 0x38

	};


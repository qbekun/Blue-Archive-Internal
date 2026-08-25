#pragma once
#include "unitysdk.h"

namespace MX::MinigameCCG::AI { class CCGAIThinkContext; }
namespace MX::MinigameCCG::AI { class CCGAIThinkRule; }

	inline static constexpr unsigned int CCGAIRuleContext_TypeDefinitionIndex = 20437;

	class CCGAIRuleContext : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::AI::CCGAIThinkContext* context; // 0x10
		::MX::MinigameCCG::AI::CCGAIThinkRule* rule; // 0x18
		::System::Int32 priority; // 0x20

	};


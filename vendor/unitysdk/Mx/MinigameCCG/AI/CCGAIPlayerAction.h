#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::AI { class CCGAIThinkContext; }
namespace MX::MinigameCCG { class CCGEvent; }

#define MX_MINIGAMECCG_AI_CCGAIPLAYERACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E37C10)
#define MX_MINIGAMECCG_AI_CCGAIPLAYERACTION_ONPLAYEREVENT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::MinigameCCG::AI
{
	inline static constexpr unsigned int CCGAIPlayerAction_TypeDefinitionIndex = 21045;

	class CCGAIPlayerAction : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_AI_CCGAIPLAYERACTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnPlayerEvent(::MX::MinigameCCG::AI::CCGAIThinkContext* arg, ::MX::MinigameCCG::CCGEvent* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::AI::CCGAIThinkContext*, ::MX::MinigameCCG::CCGEvent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_AI_CCGAIPLAYERACTION_ONPLAYEREVENT_OFFSET))(arg, arg, nullptr);
		}

	};
}


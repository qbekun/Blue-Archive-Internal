#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGPlayer; }
namespace MX::MinigameCCG::AI { class CCGAIData; }
namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG::Visual { class CCGFlowProcessor; }
namespace Cysharp::Threading::Tasks { class UniTask; }
namespace MX::MinigameCCG { class CCGEvent; }

#define MX_MINIGAMECCG_CCGBEHAVIOUR_BOT_GET_PLAYER_OFFSET UNITYSDK_OFFSET(0x1DB36E0)
#define MX_MINIGAMECCG_CCGBEHAVIOUR_BOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DB36F0)
#define MX_MINIGAMECCG_CCGBEHAVIOUR_BOT_GET_AI_OFFSET UNITYSDK_OFFSET(0x1DB37D0)
#define MX_MINIGAMECCG_CCGBEHAVIOUR_BOT_PLAYINPUTEVENT_OFFSET UNITYSDK_OFFSET(0x1DB37E0)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGBehaviour_Bot_TypeDefinitionIndex = 20440;

	class CCGBehaviour_Bot : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGPlayer* _player_k__BackingField; // 0x20
		::MX::MinigameCCG::AI::CCGAIData* _ai_k__BackingField; // 0x28
		CCGAIRuleContext* currentContext; // 0x30
		Il2CppObject* executedRules; // 0x48

		::MX::MinigameCCG::CCGPlayer* get_player()
		{
			return (return (::MX::MinigameCCG::CCGPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGBEHAVIOUR_BOT_GET_PLAYER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::Visual::CCGFlowProcessor* arg, ::MX::MinigameCCG::CCGPlayer* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::Visual::CCGFlowProcessor*, ::MX::MinigameCCG::CCGPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGBEHAVIOUR_BOT_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::MX::MinigameCCG::AI::CCGAIData* get_ai()
		{
			return (return (::MX::MinigameCCG::AI::CCGAIData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGBEHAVIOUR_BOT_GET_AI_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* PlayInputEvent(::MX::MinigameCCG::CCGEvent* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::MX::MinigameCCG::CCGEvent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGBEHAVIOUR_BOT_PLAYINPUTEVENT_OFFSET))(arg, nullptr);
		}

	};
}


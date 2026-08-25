#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGPlayer; }
namespace MX::MinigameCCG::AI { class CCGAIData; }
namespace MX::MinigameCCG { class CCGGame; }

#define MX_MINIGAMECCG_AI_CCGAITHINKCONTEXT_GET_AIDATA_OFFSET UNITYSDK_OFFSET(0x1E37C20)
#define MX_MINIGAMECCG_AI_CCGAITHINKCONTEXT_PREPARE_OFFSET UNITYSDK_OFFSET(0x1E37C30)
#define MX_MINIGAMECCG_AI_CCGAITHINKCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E37BB0)
#define MX_MINIGAMECCG_AI_CCGAITHINKCONTEXT_GET_PLAYER_OFFSET UNITYSDK_OFFSET(0x1E38270)

namespace MX::MinigameCCG::AI
{
	inline static constexpr unsigned int CCGAIThinkContext_TypeDefinitionIndex = 21047;

	class CCGAIThinkContext : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGPlayer* _player; // 0x28
		::MX::MinigameCCG::AI::CCGAIData* _data; // 0x30

		::MX::MinigameCCG::AI::CCGAIData* get_AIData()
		{
			return (return (::MX::MinigameCCG::AI::CCGAIData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_AI_CCGAITHINKCONTEXT_GET_AIDATA_OFFSET))(nullptr);
		}

		::System::Void Prepare()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_AI_CCGAITHINKCONTEXT_PREPARE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::AI::CCGAIData* arg, ::MX::MinigameCCG::CCGPlayer* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::AI::CCGAIData*, ::MX::MinigameCCG::CCGPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_AI_CCGAITHINKCONTEXT_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::MX::MinigameCCG::CCGPlayer* get_Player()
		{
			return (return (::MX::MinigameCCG::CCGPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_AI_CCGAITHINKCONTEXT_GET_PLAYER_OFFSET))(nullptr);
		}

	};
}


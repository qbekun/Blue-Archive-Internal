#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGGamePlayerSetting; }
namespace MX::MinigameCCG::AI { class CCGAIData; }

#define MX_MINIGAMECCG_CCGGAMESETTING_GET_PLAYERB_OFFSET UNITYSDK_OFFSET(0x1DBD820)
#define MX_MINIGAMECCG_CCGGAMESETTING_GET_PLAYERA_OFFSET UNITYSDK_OFFSET(0x1DBD830)
#define MX_MINIGAMECCG_CCGGAMESETTING_GET_AI_OFFSET UNITYSDK_OFFSET(0x1DBD840)
#define MX_MINIGAMECCG_CCGGAMESETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DBD850)
#define MX_MINIGAMECCG_CCGGAMESETTING_SET_AI_OFFSET UNITYSDK_OFFSET(0x1DBD8F0)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGGameSetting_TypeDefinitionIndex = 20455;

	class CCGGameSetting : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGGamePlayerSetting* _PlayerA_k__BackingField; // 0x10
		::MX::MinigameCCG::CCGGamePlayerSetting* _PlayerB_k__BackingField; // 0x18
		::MX::MinigameCCG::AI::CCGAIData* _AI_k__BackingField; // 0x20

		::MX::MinigameCCG::CCGGamePlayerSetting* get_PlayerB()
		{
			return (return (::MX::MinigameCCG::CCGGamePlayerSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESETTING_GET_PLAYERB_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGGamePlayerSetting* get_PlayerA()
		{
			return (return (::MX::MinigameCCG::CCGGamePlayerSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESETTING_GET_PLAYERA_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::AI::CCGAIData* get_AI()
		{
			return (return (::MX::MinigameCCG::AI::CCGAIData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESETTING_GET_AI_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESETTING_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_AI(::MX::MinigameCCG::AI::CCGAIData* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::AI::CCGAIData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESETTING_SET_AI_OFFSET))(arg, nullptr);
		}

	};
}


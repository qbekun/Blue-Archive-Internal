#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGPlayer; }
namespace MX::MinigameCCG { class CCGCard; }
namespace MX::MinigameCCG { class CCGEntityLocation; }

#define MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_DRAWCARD_GET_CARD_OFFSET UNITYSDK_OFFSET(0x1E27BB0)
#define MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_DRAWCARD_GET_PLAYER_OFFSET UNITYSDK_OFFSET(0x1E27BC0)
#define MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_DRAWCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E27BD0)
#define MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_DRAWCARD_GET_DESTINATION_OFFSET UNITYSDK_OFFSET(0x1E27C20)

namespace MX::MinigameCCG::SkillTriggers
{
	inline static constexpr unsigned int CCGPassiveSkillTriggerArgs_DrawCard_TypeDefinitionIndex = 20885;

	class CCGPassiveSkillTriggerArgs_DrawCard : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGPlayer* _Player_k__BackingField; // 0x10
		::MX::MinigameCCG::CCGCard* _Card_k__BackingField; // 0x18
		::MX::MinigameCCG::CCGEntityLocation* _Destination_k__BackingField; // 0x20

		::MX::MinigameCCG::CCGCard* get_Card()
		{
			return (return (::MX::MinigameCCG::CCGCard*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_DRAWCARD_GET_CARD_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGPlayer* get_Player()
		{
			return (return (::MX::MinigameCCG::CCGPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_DRAWCARD_GET_PLAYER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGPlayer* arg, ::MX::MinigameCCG::CCGCard* arg, ::MX::MinigameCCG::CCGEntityLocation* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGPlayer*, ::MX::MinigameCCG::CCGCard*, ::MX::MinigameCCG::CCGEntityLocation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_DRAWCARD_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::MX::MinigameCCG::CCGEntityLocation* get_Destination()
		{
			return (return (::MX::MinigameCCG::CCGEntityLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_DRAWCARD_GET_DESTINATION_OFFSET))(nullptr);
		}

	};
}


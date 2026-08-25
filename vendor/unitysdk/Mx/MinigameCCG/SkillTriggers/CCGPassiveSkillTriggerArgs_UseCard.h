#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGCard; }

#define MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_USECARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E28710)
#define MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_USECARD_GET_CARD_OFFSET UNITYSDK_OFFSET(0x1E28740)

namespace MX::MinigameCCG::SkillTriggers
{
	inline static constexpr unsigned int CCGPassiveSkillTriggerArgs_UseCard_TypeDefinitionIndex = 20897;

	class CCGPassiveSkillTriggerArgs_UseCard : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGCard* _Card_k__BackingField; // 0x10

		::System::Void .ctor(::MX::MinigameCCG::CCGCard* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGCard*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_USECARD_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::CCGCard* get_Card()
		{
			return (return (::MX::MinigameCCG::CCGCard*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_SKILLTRIGGERS_CCGPASSIVESKILLTRIGGERARGS_USECARD_GET_CARD_OFFSET))(nullptr);
		}

	};
}


#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGCard; }
namespace MX::MinigameCCG { class CCGEntity; }

#define MX_MINIGAMECCG_CCGPLAYERINPUT_PLAYERUSECARD_GET_CARD_OFFSET UNITYSDK_OFFSET(0x1DCF3F0)
#define MX_MINIGAMECCG_CCGPLAYERINPUT_PLAYERUSECARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCF400)
#define MX_MINIGAMECCG_CCGPLAYERINPUT_PLAYERUSECARD_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x1DCF470)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGPlayerInput_PlayerUseCard_TypeDefinitionIndex = 20587;

	class CCGPlayerInput_PlayerUseCard : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGCard* _Card_k__BackingField; // 0x18
		::MX::MinigameCCG::CCGEntity* _Target_k__BackingField; // 0x20

		::MX::MinigameCCG::CCGCard* get_Card()
		{
			return (return (::MX::MinigameCCG::CCGCard*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYERINPUT_PLAYERUSECARD_GET_CARD_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGCard* arg, ::MX::MinigameCCG::CCGEntity* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGCard*, ::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYERINPUT_PLAYERUSECARD_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::MX::MinigameCCG::CCGEntity* get_Target()
		{
			return (return (::MX::MinigameCCG::CCGEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYERINPUT_PLAYERUSECARD_GET_TARGET_OFFSET))(nullptr);
		}

	};
}


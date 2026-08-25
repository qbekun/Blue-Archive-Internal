#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGSpellCard; }

#define MX_MINIGAMECCG_CCGEVENT_USESPELLCARD_GET_PLAYERID_OFFSET UNITYSDK_OFFSET(0x1DCCCC0)
#define MX_MINIGAMECCG_CCGEVENT_USESPELLCARD_GET_CARDENTITYID_OFFSET UNITYSDK_OFFSET(0x1DCCCD0)
#define MX_MINIGAMECCG_CCGEVENT_USESPELLCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCCCE0)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEvent_UseSpellCard_TypeDefinitionIndex = 20542;

	class CCGEvent_UseSpellCard : public Il2CppObject
	{
	public:
		::System::Int32 _PlayerId_k__BackingField; // 0x10
		::System::Int32 _CardEntityId_k__BackingField; // 0x14

		::System::Int32 get_PlayerId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_USESPELLCARD_GET_PLAYERID_OFFSET))(nullptr);
		}

		::System::Int32 get_CardEntityId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_USESPELLCARD_GET_CARDENTITYID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGSpellCard* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGSpellCard*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_USESPELLCARD_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}


#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGCard; }

#define MX_MINIGAMECCG_CCGEVENT_REVERTCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCEAF0)
#define MX_MINIGAMECCG_CCGEVENT_REVERTCARD_GET_CARDENTITYID_OFFSET UNITYSDK_OFFSET(0x1DCEB20)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEvent_RevertCard_TypeDefinitionIndex = 20575;

	class CCGEvent_RevertCard : public Il2CppObject
	{
	public:
		::System::Int32 _CardEntityId_k__BackingField; // 0x10

		::System::Void .ctor(::MX::MinigameCCG::CCGCard* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGCard*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_REVERTCARD_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CardEntityId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_REVERTCARD_GET_CARDENTITYID_OFFSET))(nullptr);
		}

	};
}


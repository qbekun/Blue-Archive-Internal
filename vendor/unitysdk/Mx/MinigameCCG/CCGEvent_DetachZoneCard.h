#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGZoneCard; }

#define MX_MINIGAMECCG_CCGEVENT_DETACHZONECARD_GET_PLAYERID_OFFSET UNITYSDK_OFFSET(0x1DCCC60)
#define MX_MINIGAMECCG_CCGEVENT_DETACHZONECARD_GET_CARDENTITYID_OFFSET UNITYSDK_OFFSET(0x1DCCC70)
#define MX_MINIGAMECCG_CCGEVENT_DETACHZONECARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCCC80)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEvent_DetachZoneCard_TypeDefinitionIndex = 20541;

	class CCGEvent_DetachZoneCard : public Il2CppObject
	{
	public:
		::System::Int32 _PlayerId_k__BackingField; // 0x10
		::System::Int32 _CardEntityId_k__BackingField; // 0x14

		::System::Int32 get_PlayerId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_DETACHZONECARD_GET_PLAYERID_OFFSET))(nullptr);
		}

		::System::Int32 get_CardEntityId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_DETACHZONECARD_GET_CARDENTITYID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGZoneCard* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGZoneCard*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_DETACHZONECARD_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}


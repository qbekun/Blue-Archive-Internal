#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGEntityLocation; }
namespace MX::MinigameCCG { class CCGCard; }

#define MX_MINIGAMECCG_CCGEVENT_SPAWNCARD_GET_PLAYERID_OFFSET UNITYSDK_OFFSET(0x1DCCDC0)
#define MX_MINIGAMECCG_CCGEVENT_SPAWNCARD_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0x1DCCDD0)
#define MX_MINIGAMECCG_CCGEVENT_SPAWNCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCCDE0)
#define MX_MINIGAMECCG_CCGEVENT_SPAWNCARD_GET_CARDID_OFFSET UNITYSDK_OFFSET(0x1DCCEC0)
#define MX_MINIGAMECCG_CCGEVENT_SPAWNCARD_GET_CARDENTITYID_OFFSET UNITYSDK_OFFSET(0x1DCCED0)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEvent_SpawnCard_TypeDefinitionIndex = 20545;

	class CCGEvent_SpawnCard : public Il2CppObject
	{
	public:
		::System::Int32 _PlayerId_k__BackingField; // 0x10
		::System::Int32 _CardEntityId_k__BackingField; // 0x14
		::System::Int64 _CardId_k__BackingField; // 0x18
		::MX::MinigameCCG::CCGEntityLocation* _Location_k__BackingField; // 0x20

		::System::Int32 get_PlayerId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_SPAWNCARD_GET_PLAYERID_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGEntityLocation* get_Location()
		{
			return (return (::MX::MinigameCCG::CCGEntityLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_SPAWNCARD_GET_LOCATION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGCard* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGCard*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_SPAWNCARD_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_SPAWNCARD_GET_CARDID_OFFSET))(nullptr);
		}

		::System::Int32 get_CardEntityId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_SPAWNCARD_GET_CARDENTITYID_OFFSET))(nullptr);
		}

	};
}


#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class EventHealthChange; }
namespace MX::MinigameCCG { class CCGStriker; }

#define MX_MINIGAMECCG_CCGEVENT_SPAWNSTRIKER_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1DCD5C0)
#define MX_MINIGAMECCG_CCGEVENT_SPAWNSTRIKER_GET_STRIKERENTITYID_OFFSET UNITYSDK_OFFSET(0x1DCD5D0)
#define MX_MINIGAMECCG_CCGEVENT_SPAWNSTRIKER_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x1DCD5E0)
#define MX_MINIGAMECCG_CCGEVENT_SPAWNSTRIKER_GET_EVENTHEALTHCHANGE_OFFSET UNITYSDK_OFFSET(0x1DCD5F0)
#define MX_MINIGAMECCG_CCGEVENT_SPAWNSTRIKER_GET_PLAYERID_OFFSET UNITYSDK_OFFSET(0x1DCD600)
#define MX_MINIGAMECCG_CCGEVENT_SPAWNSTRIKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCD610)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEvent_SpawnStriker_TypeDefinitionIndex = 20552;

	class CCGEvent_SpawnStriker : public Il2CppObject
	{
	public:
		::System::Int32 _PlayerId_k__BackingField; // 0x10
		::System::Int32 _StrikerEntityId_k__BackingField; // 0x14
		::System::Int64 _CharacterId_k__BackingField; // 0x18
		::System::Int32 _SlotIndex_k__BackingField; // 0x20
		::MX::MinigameCCG::EventHealthChange* _EventHealthChange_k__BackingField; // 0x28

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_SPAWNSTRIKER_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Int32 get_StrikerEntityId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_SPAWNSTRIKER_GET_STRIKERENTITYID_OFFSET))(nullptr);
		}

		::System::Int32 get_SlotIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_SPAWNSTRIKER_GET_SLOTINDEX_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::EventHealthChange* get_EventHealthChange()
		{
			return (return (::MX::MinigameCCG::EventHealthChange*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_SPAWNSTRIKER_GET_EVENTHEALTHCHANGE_OFFSET))(nullptr);
		}

		::System::Int32 get_PlayerId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_SPAWNSTRIKER_GET_PLAYERID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGStriker* arg, ::System::Int32 arg, ::MX::MinigameCCG::EventHealthChange* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGStriker*, ::System::Int32, ::MX::MinigameCCG::EventHealthChange*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_SPAWNSTRIKER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}


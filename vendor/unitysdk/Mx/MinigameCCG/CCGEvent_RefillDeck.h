#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGPlayer; }

#define MX_MINIGAMECCG_CCGEVENT_REFILLDECK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCE8B0)
#define MX_MINIGAMECCG_CCGEVENT_REFILLDECK_GET_PLAYERID_OFFSET UNITYSDK_OFFSET(0x1DCEA20)
#define MX_MINIGAMECCG_CCGEVENT_REFILLDECK_GET_CARDENTITYIDS_OFFSET UNITYSDK_OFFSET(0x1DCEA30)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEvent_RefillDeck_TypeDefinitionIndex = 20574;

	class CCGEvent_RefillDeck : public Il2CppObject
	{
	public:
		::System::Int32 _PlayerId_k__BackingField; // 0x10
		::Il2CppArray<::System::Object*>* _CardEntityIds_k__BackingField; // 0x18

		::System::Void .ctor(::MX::MinigameCCG::CCGPlayer* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGPlayer*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_REFILLDECK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_PlayerId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_REFILLDECK_GET_PLAYERID_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_CardEntityIds()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_REFILLDECK_GET_CARDENTITYIDS_OFFSET))(nullptr);
		}

	};
}


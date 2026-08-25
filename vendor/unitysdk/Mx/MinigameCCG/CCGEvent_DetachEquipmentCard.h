#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGCharacter; }
namespace MX::MinigameCCG { class CCGEquipmentCard; }

#define MX_MINIGAMECCG_CCGEVENT_DETACHEQUIPMENTCARD_GET_CARDENTITYID_OFFSET UNITYSDK_OFFSET(0x1DCCC00)
#define MX_MINIGAMECCG_CCGEVENT_DETACHEQUIPMENTCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCCC10)
#define MX_MINIGAMECCG_CCGEVENT_DETACHEQUIPMENTCARD_GET_CHARACTERENTITYID_OFFSET UNITYSDK_OFFSET(0x1DCCC50)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEvent_DetachEquipmentCard_TypeDefinitionIndex = 20540;

	class CCGEvent_DetachEquipmentCard : public Il2CppObject
	{
	public:
		::System::Int32 _CharacterEntityId_k__BackingField; // 0x10
		::System::Int32 _CardEntityId_k__BackingField; // 0x14

		::System::Int32 get_CardEntityId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_DETACHEQUIPMENTCARD_GET_CARDENTITYID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGCharacter* arg, ::MX::MinigameCCG::CCGEquipmentCard* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGCharacter*, ::MX::MinigameCCG::CCGEquipmentCard*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_DETACHEQUIPMENTCARD_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_CharacterEntityId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_DETACHEQUIPMENTCARD_GET_CHARACTERENTITYID_OFFSET))(nullptr);
		}

	};
}


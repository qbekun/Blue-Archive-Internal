#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGCharacter; }
namespace MX::MinigameCCG { class CCGEquipmentCard; }

#define MX_MINIGAMECCG_CCGEVENT_ATTACHEQUIPMENTCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCCBA0)
#define MX_MINIGAMECCG_CCGEVENT_ATTACHEQUIPMENTCARD_GET_CARDENTITYID_OFFSET UNITYSDK_OFFSET(0x1DCCBE0)
#define MX_MINIGAMECCG_CCGEVENT_ATTACHEQUIPMENTCARD_GET_CHARACTERENTITYID_OFFSET UNITYSDK_OFFSET(0x1DCCBF0)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEvent_AttachEquipmentCard_TypeDefinitionIndex = 20539;

	class CCGEvent_AttachEquipmentCard : public Il2CppObject
	{
	public:
		::System::Int32 _CharacterEntityId_k__BackingField; // 0x10
		::System::Int32 _CardEntityId_k__BackingField; // 0x14

		::System::Void .ctor(::MX::MinigameCCG::CCGCharacter* arg, ::MX::MinigameCCG::CCGEquipmentCard* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGCharacter*, ::MX::MinigameCCG::CCGEquipmentCard*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_ATTACHEQUIPMENTCARD_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_CardEntityId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_ATTACHEQUIPMENTCARD_GET_CARDENTITYID_OFFSET))(nullptr);
		}

		::System::Int32 get_CharacterEntityId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_ATTACHEQUIPMENTCARD_GET_CHARACTERENTITYID_OFFSET))(nullptr);
		}

	};
}


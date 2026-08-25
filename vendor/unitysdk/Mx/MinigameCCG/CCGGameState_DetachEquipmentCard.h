#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGEquipmentCard; }

#define MX_MINIGAMECCG_CCGGAMESTATE_DETACHEQUIPMENTCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DD2B40)
#define MX_MINIGAMECCG_CCGGAMESTATE_DETACHEQUIPMENTCARD_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1DD2B90)
#define MX_MINIGAMECCG_CCGGAMESTATE_DETACHEQUIPMENTCARD_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x1DD2C40)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGGameState_DetachEquipmentCard_TypeDefinitionIndex = 20607;

	class CCGGameState_DetachEquipmentCard : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGEquipmentCard* _equippedCard; // 0x18

		::System::Void .ctor(::MX::MinigameCCG::CCGEquipmentCard* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGEquipmentCard*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_DETACHEQUIPMENTCARD_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void OnState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_DETACHEQUIPMENTCARD_ONSTATE_OFFSET))(nullptr);
		}

		Il2CppObject* OnStateEnter()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_DETACHEQUIPMENTCARD_ONSTATEENTER_OFFSET))(nullptr);
		}

	};
}


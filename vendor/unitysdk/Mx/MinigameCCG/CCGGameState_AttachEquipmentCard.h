#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGEquipmentCard; }
namespace MX::MinigameCCG { class CCGCharacter; }
namespace MX::MinigameCCG { class CCGSkillContext; }

#define MX_MINIGAMECCG_CCGGAMESTATE_ATTACHEQUIPMENTCARD_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0x1DCFD30)
#define MX_MINIGAMECCG_CCGGAMESTATE_ATTACHEQUIPMENTCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCFDE0)
#define MX_MINIGAMECCG_CCGGAMESTATE_ATTACHEQUIPMENTCARD_ONSTATE_OFFSET UNITYSDK_OFFSET(0x1DCFE30)
#define MX_MINIGAMECCG_CCGGAMESTATE_ATTACHEQUIPMENTCARD_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x1DCFF00)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGGameState_AttachEquipmentCard_TypeDefinitionIndex = 20600;

	class CCGGameState_AttachEquipmentCard : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGEquipmentCard* _card; // 0x18
		::System::Boolean _checkCost; // 0x20
		::System::Boolean _canAbort; // 0x21
		::MX::MinigameCCG::CCGCharacter* _character; // 0x28
		::MX::MinigameCCG::CCGSkillContext* _skillContext; // 0x30

		Il2CppObject* OnStateExit()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_ATTACHEQUIPMENTCARD_ONSTATEEXIT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGEquipmentCard* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGEquipmentCard*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_ATTACHEQUIPMENTCARD_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_ATTACHEQUIPMENTCARD_ONSTATE_OFFSET))(nullptr);
		}

		Il2CppObject* OnStateEnter()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_ATTACHEQUIPMENTCARD_ONSTATEENTER_OFFSET))(nullptr);
		}

	};
}


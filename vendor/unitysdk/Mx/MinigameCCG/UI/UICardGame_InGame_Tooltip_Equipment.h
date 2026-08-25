#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::UI { class UICardGame_InGame_Tooltip_Equipment_ScrollViewController; }
namespace MX::MinigameCCG::UI { class UICardGame_InGame_Tooltip_EquipmentInfo; }
namespace MX::MinigameCCG::UI { class UICardGame_InGame_Tooltip_Character; }
namespace MX::MinigameCCG { class CCGCharacter; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_EQUIPMENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1DF5840)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_EQUIPMENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1DF5940)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_EQUIPMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x1DF42D0)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_EQUIPMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x1DF5AC0)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_EQUIPMENT_HANDLEEQUIPMENTINFOMESSAGE_OFFSET UNITYSDK_OFFSET(0x1DF5C40)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_EQUIPMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DF6130)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_InGame_Tooltip_Equipment_TypeDefinitionIndex = 20717;

	class UICardGame_InGame_Tooltip_Equipment : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::UI::UICardGame_InGame_Tooltip_Equipment_ScrollViewController* equipmentScrollViewController; // 0x18
		::MX::MinigameCCG::UI::UICardGame_InGame_Tooltip_EquipmentInfo* equipmentInfo; // 0x20

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_EQUIPMENT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_EQUIPMENT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::MinigameCCG::UI::UICardGame_InGame_Tooltip_Character* arg, ::MX::MinigameCCG::CCGCharacter* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::UICardGame_InGame_Tooltip_Character*, ::MX::MinigameCCG::CCGCharacter*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_EQUIPMENT_SETDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetData(::MX::MinigameCCG::UI::UICardGame_InGame_Tooltip_Character* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::UICardGame_InGame_Tooltip_Character*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_EQUIPMENT_SETDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HandleEquipmentInfoMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return (return (::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_EQUIPMENT_HANDLEEQUIPMENTINFOMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_EQUIPMENT_.CTOR_OFFSET))(nullptr);
		}

	};
}


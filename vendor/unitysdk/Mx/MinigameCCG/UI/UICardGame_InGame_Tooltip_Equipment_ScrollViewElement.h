#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGEquipmentCard; }

#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_EQUIPMENT_SCROLLVIEWELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x1DF6890)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_EQUIPMENT_SCROLLVIEWELEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1DF69D0)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_EQUIPMENT_SCROLLVIEWELEMENT_ONCLICKTOOLTIPBUTTON_OFFSET UNITYSDK_OFFSET(0x1DF6B50)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_EQUIPMENT_SCROLLVIEWELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DF6C30)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_InGame_Tooltip_Equipment_ScrollViewElement_TypeDefinitionIndex = 20720;

	class UICardGame_InGame_Tooltip_Equipment_ScrollViewElement : public ::System::Xml::SafeAsciiDecoder
	{
	public:
		UITexture* icon; // 0x28
		UISprite* bg; // 0x30
		UILabel* stackCount; // 0x38
		MXButton* tooltipBtn; // 0x40
		::MX::MinigameCCG::CCGEquipmentCard* equipmentCard; // 0x48

		::System::Void SetData(::MX::MinigameCCG::CCGEquipmentCard* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGEquipmentCard*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_EQUIPMENT_SCROLLVIEWELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_EQUIPMENT_SCROLLVIEWELEMENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickTooltipButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_EQUIPMENT_SCROLLVIEWELEMENT_ONCLICKTOOLTIPBUTTON_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_EQUIPMENT_SCROLLVIEWELEMENT_.CTOR_OFFSET))(nullptr);
		}

	};
}


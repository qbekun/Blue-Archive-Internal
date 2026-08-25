#pragma once
#include "../../../unitysdk.h"

#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_EQUIPMENT_SCROLLVIEWCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DF6850)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_EQUIPMENT_SCROLLVIEWCONTROLLER_GET_GRID_OFFSET UNITYSDK_OFFSET(0x1DF5DC0)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_InGame_Tooltip_Equipment_ScrollViewController_TypeDefinitionIndex = 20719;

	class UICardGame_InGame_Tooltip_Equipment_ScrollViewController : public ::System::Xml::XmlOutputMethod
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_EQUIPMENT_SCROLLVIEWCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		UIGrid* get_Grid()
		{
			return (return (UIGrid*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_EQUIPMENT_SCROLLVIEWCONTROLLER_GET_GRID_OFFSET))(nullptr);
		}

	};
}


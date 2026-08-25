#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGGame; }

#define MX_MINIGAMECCG_UI_UICARDGAME_LOG_BASEELEMENT_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1DEDC80)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOG_BASEELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DEDCA0)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOG_BASEELEMENT_GET_WIDGET_OFFSET UNITYSDK_OFFSET(0x1DEDCB0)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOG_BASEELEMENT_GET_GAME_OFFSET UNITYSDK_OFFSET(0x1DEDCC0)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_Log_BaseElement_TypeDefinitionIndex = 20699;

	class UICardGame_Log_BaseElement : public Il2CppObject
	{
	public:
		UIWidget* widget; // 0x18

		::System::Single get_Height()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOG_BASEELEMENT_GET_HEIGHT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOG_BASEELEMENT_.CTOR_OFFSET))(nullptr);
		}

		UIWidget* get_Widget()
		{
			return (return (UIWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOG_BASEELEMENT_GET_WIDGET_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGGame* get_game()
		{
			return (return (::MX::MinigameCCG::CCGGame*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOG_BASEELEMENT_GET_GAME_OFFSET))(nullptr);
		}

	};
}


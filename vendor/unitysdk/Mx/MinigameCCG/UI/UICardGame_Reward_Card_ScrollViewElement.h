#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::UI { class UICardGame_CardGroup; }
namespace MX::MinigameCCG::UI { class CCGCardRewardInfo; }

#define MX_MINIGAMECCG_UI_UICARDGAME_REWARD_CARD_SCROLLVIEWELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E21080)
#define MX_MINIGAMECCG_UI_UICARDGAME_REWARD_CARD_SCROLLVIEWELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x1E210C0)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_Reward_Card_ScrollViewElement_TypeDefinitionIndex = 20850;

	class UICardGame_Reward_Card_ScrollViewElement : public ::System::Xml::UTF16Decoder
	{
	public:
		::MX::MinigameCCG::UI::UICardGame_CardGroup* cardGroup; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REWARD_CARD_SCROLLVIEWELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::MinigameCCG::UI::CCGCardRewardInfo* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::CCGCardRewardInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REWARD_CARD_SCROLLVIEWELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

	};
}


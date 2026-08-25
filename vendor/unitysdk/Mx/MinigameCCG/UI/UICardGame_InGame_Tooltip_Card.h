#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace MX::MinigameCCG::UI { class UICardGame_CardTag; }
namespace Cysharp::Threading::Tasks { class UniTask; }
namespace MX::MinigameCCG { class CCGEntity; }
namespace FlatData { class CCGCardType; }
namespace MX::MinigameCCG { class ICCGCardData; }

#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_CARD_REPOSITIONDELAYFRAME_OFFSET UNITYSDK_OFFSET(0x1DF1EB0)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_CARD_SETDATA_OFFSET UNITYSDK_OFFSET(0x1DF2040)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_CARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DF2BF0)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_CARD_GETCARDTYPEICONPATH_OFFSET UNITYSDK_OFFSET(0x1DF2B70)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_CARD_SETDATA_OFFSET UNITYSDK_OFFSET(0x1DF2C70)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_InGame_Tooltip_Card_TypeDefinitionIndex = 20713;

	class UICardGame_InGame_Tooltip_Card : public Il2CppObject
	{
	public:
		UIScrollView* scrollView; // 0x118
		UILabel* cardNameLabel; // 0x120
		UISprite* cardTypeIcon; // 0x128
		UILabel* cardTypeLabel; // 0x130
		UILabel* descriptionLabel; // 0x138
		UILabel* costLabel; // 0x140
		UILabel* equipmentDurabilityLabel; // 0x148
		::UnityEngine::GameObject* normalCostBg; // 0x150
		::UnityEngine::GameObject* equipmentCostBg; // 0x158
		::MX::MinigameCCG::UI::UICardGame_CardTag* cardTag; // 0x160

		::Cysharp::Threading::Tasks::UniTask* RepositionDelayFrame(::System::Int32 arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_CARD_REPOSITIONDELAYFRAME_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::MinigameCCG::CCGEntity* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_CARD_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_CARD_.CTOR_OFFSET))(nullptr);
		}

		::System::String* GetCardTypeIconPath(::FlatData::CCGCardType* arg)
		{
			return (return (::System::String*(*)(::FlatData::CCGCardType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_CARD_GETCARDTYPEICONPATH_OFFSET))(arg, nullptr);
		}

		::System::Void Setdata(::MX::MinigameCCG::ICCGCardData* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::ICCGCardData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_CARD_SETDATA_OFFSET))(arg, nullptr);
		}

	};
}


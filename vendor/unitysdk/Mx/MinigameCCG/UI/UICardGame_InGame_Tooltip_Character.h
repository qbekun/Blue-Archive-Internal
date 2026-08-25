#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::UI { class UICardGame_InGame_Tooltip_Equipment; }
namespace MX::MinigameCCG::UI { class UICardGame_InGame_Tooltip_SkillInfo; }
namespace MX::MinigameCCG::UI { class UICardGame_InGame_Tooltip_Hediff; }
namespace MX::MinigameCCG { class CCGEntity; }
namespace MX::MinigameCCG { class ICCGCharacterData; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_CHARACTER_REPOSITION_OFFSET UNITYSDK_OFFSET(0x1DF3B50)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_CHARACTER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1DF3D10)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_CHARACTER_SETDATA_OFFSET UNITYSDK_OFFSET(0x1DF3F20)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_CHARACTER_SETDATA_OFFSET UNITYSDK_OFFSET(0x1DF4C70)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_CHARACTER_REPOSITIONDELAYFRAME_OFFSET UNITYSDK_OFFSET(0x1DF3B80)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_CHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DF52A0)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_InGame_Tooltip_Character_TypeDefinitionIndex = 20715;

	class UICardGame_InGame_Tooltip_Character : public Il2CppObject
	{
	public:
		UILabel* nameLabel; // 0x118
		UIScrollView* scrollView; // 0x120
		::MX::MinigameCCG::UI::UICardGame_InGame_Tooltip_Equipment* equipment; // 0x128
		::MX::MinigameCCG::UI::UICardGame_InGame_Tooltip_SkillInfo* exSkill; // 0x130
		::MX::MinigameCCG::UI::UICardGame_InGame_Tooltip_SkillInfo* passiveSkill; // 0x138
		::MX::MinigameCCG::UI::UICardGame_InGame_Tooltip_Hediff* hediff; // 0x140

		::System::Void Reposition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_CHARACTER_REPOSITION_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_CHARACTER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::MinigameCCG::CCGEntity* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_CHARACTER_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::MinigameCCG::ICCGCharacterData* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::ICCGCharacterData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_CHARACTER_SETDATA_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* RepositionDelayFrame(::System::Int32 arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_CHARACTER_REPOSITIONDELAYFRAME_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_CHARACTER_.CTOR_OFFSET))(nullptr);
		}

	};
}


#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace MX::MinigameCCG { class CCGEntity; }
namespace MX::MinigameCCG { class CCGSkillData; }
namespace MX::MinigameCCG::UI { class CCGSkillType; }

#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_SKILLINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0x1DF4310)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_SKILLINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0x1DF7A30)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_SKILLINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DF7BA0)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_SKILLINFO_ONCLICKHEADBUTTON_OFFSET UNITYSDK_OFFSET(0x1DF7BB0)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_InGame_Tooltip_SkillInfo_TypeDefinitionIndex = 20724;

	class UICardGame_InGame_Tooltip_SkillInfo : public Il2CppObject
	{
	public:
		MXButton* headBtn; // 0x18
		::UnityEngine::GameObject* arrowIcon; // 0x20
		UISprite* skillIcon; // 0x28
		UISprite* skillBasePowerTypeIcon; // 0x30
		UISprite* skillTypeIcon; // 0x38
		UILabel* skillNameLabel; // 0x40
		UILabel* skillTypeLabel; // 0x48
		UILabel* skillDescriptionLabel; // 0x50
		UILabel* costLabel; // 0x58
		UILabel* basePowerLabel; // 0x60
		::UnityEngine::GameObject* descriptionRoot; // 0x68
		::System::Single dropDownOn; // 0x0
		::System::Single dropDownOff; // 0x0
		::System::Action* OnRepositon; // 0x70

		::System::Void SetData(::MX::MinigameCCG::CCGEntity* arg, ::MX::MinigameCCG::CCGSkillData* arg, ::MX::MinigameCCG::UI::CCGSkillType* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGEntity*, ::MX::MinigameCCG::CCGSkillData*, ::MX::MinigameCCG::UI::CCGSkillType*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_SKILLINFO_SETDATA_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_SKILLINFO_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_SKILLINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickHeadButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_SKILLINFO_ONCLICKHEADBUTTON_OFFSET))(nullptr);
		}

	};
}


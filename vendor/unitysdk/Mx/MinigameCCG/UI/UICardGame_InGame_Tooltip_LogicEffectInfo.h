#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace MX::MinigameCCG { class CCGLogicEffect; }

#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_LOGICEFFECTINFO_ONCLICKHEADBUTTON_OFFSET UNITYSDK_OFFSET(0x1DF7700)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_LOGICEFFECTINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0x1DF7120)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_LOGICEFFECTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DF7870)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_LOGICEFFECTINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0x1DF7880)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_InGame_Tooltip_LogicEffectInfo_TypeDefinitionIndex = 20722;

	class UICardGame_InGame_Tooltip_LogicEffectInfo : public Il2CppObject
	{
	public:
		MXButton* headBtn; // 0x18
		UISprite* logicEffectIcon; // 0x20
		UILabel* stackCountLabel; // 0x28
		::UnityEngine::GameObject* arrowIcon; // 0x30
		UILabel* logicEffectNameLabel; // 0x38
		UILabel* logicEffectDescriptionLabel; // 0x40
		::UnityEngine::GameObject* descriptionRoot; // 0x48
		::System::Single dropDownOn; // 0x0
		::System::Single dropDownOff; // 0x0
		::System::Action* reposition; // 0x50

		::System::Void OnClickHeadButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_LOGICEFFECTINFO_ONCLICKHEADBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::MinigameCCG::CCGLogicEffect* arg, ::System::Action* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGLogicEffect*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_LOGICEFFECTINFO_SETDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_LOGICEFFECTINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_LOGICEFFECTINFO_AWAKE_OFFSET))(nullptr);
		}

	};
}


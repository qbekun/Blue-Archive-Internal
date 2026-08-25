#pragma once
#include "../../../unitysdk.h"

#define MX_MINIGAMECCG_UI_UICARDGAME_RESETPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x1DF9E70)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESETPOPUP_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x1DFA150)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESETPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DFA1E0)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESETPOPUP_SETDATA_OFFSET UNITYSDK_OFFSET(0x1DFA1F0)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESETPOPUP_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0x1DFA500)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESETPOPUP_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x1DFA5B0)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESETPOPUP_GET_CCGOBJECT_OFFSET UNITYSDK_OFFSET(0x1DFA480)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_ResetPopup_TypeDefinitionIndex = 20732;

	class UICardGame_ResetPopup : public Il2CppObject
	{
	public:
		UILabel* stageLabel; // 0xD8
		MXButton* confirmBtn; // 0xE0
		MXButton* closeBtn; // 0xE8
		MXButton* cancelBtn; // 0xF0
		::System::Action* callback; // 0xF8

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESETPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESETPOPUP_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESETPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESETPOPUP_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESETPOPUP_ONCLICKCONFIRM_OFFSET))(nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESETPOPUP_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		MinigameCCGObject* get_ccgObject()
		{
			return (return (MinigameCCGObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESETPOPUP_GET_CCGOBJECT_OFFSET))(nullptr);
		}

	};
}


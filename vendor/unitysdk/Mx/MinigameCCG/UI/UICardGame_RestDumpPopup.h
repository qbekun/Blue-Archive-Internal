#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::UI { class UICardGame_RestDumpPopup_ScrollViewController; }

#define MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMPPOPUP_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0x1E14AA0)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMPPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x1E14B30)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMPPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E14C60)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMPPOPUP_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1E14C80)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMPPOPUP_SETDATA_OFFSET UNITYSDK_OFFSET(0x1E139C0)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_RestDumpPopup_TypeDefinitionIndex = 20809;

	class UICardGame_RestDumpPopup : public Il2CppObject
	{
	public:
		MXButton* confirmButton; // 0xD8
		::MX::MinigameCCG::UI::UICardGame_RestDumpPopup_ScrollViewController* scrollViewController; // 0xE0
		::System::Action* callback; // 0xE8
		::System::Int32 chunkSize; // 0xF0

		::System::Void OnClickConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMPPOPUP_ONCLICKCONFIRM_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMPPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMPPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMPPOPUP_ONCLOSE_OFFSET))(nullptr);
		}

		::System::Void SetData(Il2CppObject* arg, ::System::Action* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMPPOPUP_SETDATA_OFFSET))(arg, arg, nullptr);
		}

	};
}


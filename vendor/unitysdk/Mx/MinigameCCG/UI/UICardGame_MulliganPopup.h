#pragma once
#include "../../../unitysdk.h"

#define MX_MINIGAMECCG_UI_UICARDGAME_MULLIGANPOPUP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1DF99B0)
#define MX_MINIGAMECCG_UI_UICARDGAME_MULLIGANPOPUP_ONBACK_OFFSET UNITYSDK_OFFSET(0x1DF99D0)
#define MX_MINIGAMECCG_UI_UICARDGAME_MULLIGANPOPUP_ONOPENED_OFFSET UNITYSDK_OFFSET(0x1DF99E0)
#define MX_MINIGAMECCG_UI_UICARDGAME_MULLIGANPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DF9A70)
#define MX_MINIGAMECCG_UI_UICARDGAME_MULLIGANPOPUP_ONCLICKOK_OFFSET UNITYSDK_OFFSET(0x1DF9A80)
#define MX_MINIGAMECCG_UI_UICARDGAME_MULLIGANPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x1DF9B10)
#define MX_MINIGAMECCG_UI_UICARDGAME_MULLIGANPOPUP_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0x1DF9DE0)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_MulliganPopup_TypeDefinitionIndex = 20731;

	class UICardGame_MulliganPopup : public Il2CppObject
	{
	public:
		MXButton* mulliganConfirmBtn; // 0xD8
		MXButton* startGameBtn; // 0xE0
		Il2CppObject* callback; // 0xE8

		::System::Void Initialize(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MULLIGANPOPUP_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MULLIGANPOPUP_ONBACK_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MULLIGANPOPUP_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MULLIGANPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickOK()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MULLIGANPOPUP_ONCLICKOK_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MULLIGANPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MULLIGANPOPUP_ONCLICKCANCEL_OFFSET))(nullptr);
		}

	};
}


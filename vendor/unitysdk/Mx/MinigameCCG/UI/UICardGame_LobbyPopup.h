#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace MX::MinigameCCG::UI { class UICardGame_TokenElement; }

#define MX_MINIGAMECCG_UI_UICARDGAME_LOBBYPOPUP_ONOPENED_OFFSET UNITYSDK_OFFSET(0x1E03420)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOBBYPOPUP_ONCANCEL_OFFSET UNITYSDK_OFFSET(0x1E03750)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOBBYPOPUP_GET_CCGOBJECT_OFFSET UNITYSDK_OFFSET(0x1E037E0)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOBBYPOPUP_SETDATARESUME_OFFSET UNITYSDK_OFFSET(0x1DFF880)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOBBYPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E03860)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOBBYPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x1E03870)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOBBYPOPUP_SETDATARESET_OFFSET UNITYSDK_OFFSET(0x1E000F0)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOBBYPOPUP_CONFIRM_OFFSET UNITYSDK_OFFSET(0x1E03DC0)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOBBYPOPUP_SETUI_OFFSET UNITYSDK_OFFSET(0x1E03440)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_LobbyPopup_TypeDefinitionIndex = 20757;

	class UICardGame_LobbyPopup : public Il2CppObject
	{
	public:
		MXButton* resumeBtn; // 0xD8
		MXButton* resumeCloseBtn; // 0xE0
		MXButton* resumeCancelBtn; // 0xE8
		MXButton* resetBtn; // 0xF0
		::UnityEngine::GameObject* resetDisableBtn; // 0xF8
		MXButton* resetCloseBtn; // 0x100
		MXButton* resetCancelBtn; // 0x108
		::UnityEngine::GameObject* resumeRoot; // 0x110
		::UnityEngine::GameObject* resetRoot; // 0x118
		::Il2CppArray<::System::Object*>* stageLabels; // 0x120
		::MX::MinigameCCG::UI::UICardGame_TokenElement* ownedToken; // 0x128
		::MX::MinigameCCG::UI::UICardGame_TokenElement* tokenCost; // 0x130
		::System::Action* callback; // 0x138

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOBBYPOPUP_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOBBYPOPUP_ONCANCEL_OFFSET))(nullptr);
		}

		MinigameCCGObject* get_ccgObject()
		{
			return (return (MinigameCCGObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOBBYPOPUP_GET_CCGOBJECT_OFFSET))(nullptr);
		}

		::System::Void SetDataResume(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOBBYPOPUP_SETDATARESUME_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOBBYPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOBBYPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetDataReset(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOBBYPOPUP_SETDATARESET_OFFSET))(arg, nullptr);
		}

		::System::Void Confirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOBBYPOPUP_CONFIRM_OFFSET))(nullptr);
		}

		::System::Void SetUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOBBYPOPUP_SETUI_OFFSET))(nullptr);
		}

	};
}


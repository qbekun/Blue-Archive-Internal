#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::UI { class UICardGame_Log_Populator; }

#define MX_MINIGAMECCG_UI_UICARDGAME_LOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DED7C0)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOG_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x1DED7D0)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOG_ONDOUBLECLICKCHEAT_OFFSET UNITYSDK_OFFSET(0x1DED860)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x1DED8C0)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOG_ONOPENED_OFFSET UNITYSDK_OFFSET(0x1DEDB80)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_Log_TypeDefinitionIndex = 20698;

	class UICardGame_Log : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::UI::UICardGame_Log_Populator* populator; // 0xD8
		MXButton* closeBtn; // 0xE0
		UIEventTrigger* triggerForCheat; // 0xE8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOG_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOG_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void OnDoubleClickCheat()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOG_ONDOUBLECLICKCHEAT_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOG_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOG_ONOPENED_OFFSET))(arg, nullptr);
		}

	};
}


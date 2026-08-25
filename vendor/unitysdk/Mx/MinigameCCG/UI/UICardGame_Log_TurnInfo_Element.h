#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class TurnChangeLogData; }

#define MX_MINIGAMECCG_UI_UICARDGAME_LOG_TURNINFO_ELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x1DF0930)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOG_TURNINFO_ELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DF0B60)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_Log_TurnInfo_Element_TypeDefinitionIndex = 20708;

	class UICardGame_Log_TurnInfo_Element : public Il2CppObject
	{
	public:
		UILabel* turnLabel; // 0x20
		UILabel* turnCountLabel; // 0x28

		::System::Void SetData(::MX::MinigameCCG::TurnChangeLogData* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::TurnChangeLogData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOG_TURNINFO_ELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOG_TURNINFO_ELEMENT_.CTOR_OFFSET))(nullptr);
		}

	};
}


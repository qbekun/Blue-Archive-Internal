#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGEntity; }

#define MX_MINIGAMECCG_UI_UICARDGAME_BASECARD_SETDATA_OFFSET UNITYSDK_OFFSET(0x1DFA640)
#define MX_MINIGAMECCG_UI_UICARDGAME_BASECARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DFA670)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_BaseCard_TypeDefinitionIndex = 20733;

	class UICardGame_BaseCard : public Il2CppObject
	{
	public:
		UITexture* image; // 0x18

		::System::Void SetData(::MX::MinigameCCG::CCGEntity* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_BASECARD_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_BASECARD_.CTOR_OFFSET))(nullptr);
		}

	};
}


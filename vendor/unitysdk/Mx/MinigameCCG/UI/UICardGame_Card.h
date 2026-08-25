#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGEntity; }
namespace MX::MinigameCCG { class ICCGCardData; }

#define MX_MINIGAMECCG_UI_UICARDGAME_CARD_SETDATA_OFFSET UNITYSDK_OFFSET(0x1DFA680)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARD_SETDATA_OFFSET UNITYSDK_OFFSET(0x1DFAA80)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARD_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1DFA870)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DFACA0)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_Card_TypeDefinitionIndex = 20734;

	class UICardGame_Card : public Il2CppObject
	{
	public:
		UITexture* gearTexture; // 0x20
		UITexture* icon; // 0x28
		UILabel* costLabel; // 0x30

		::System::Void SetData(::MX::MinigameCCG::CCGEntity* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARD_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::MinigameCCG::ICCGCardData* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::ICCGCardData*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARD_SETDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetTexture(::MX::MinigameCCG::ICCGCardData* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::ICCGCardData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARD_SETTEXTURE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARD_.CTOR_OFFSET))(nullptr);
		}

	};
}


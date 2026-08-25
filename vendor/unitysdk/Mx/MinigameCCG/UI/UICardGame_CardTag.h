#pragma once
#include "../../../unitysdk.h"

#define MX_MINIGAMECCG_UI_UICARDGAME_CARDTAG_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DF0CD0)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARDTAG_SETDATA_OFFSET UNITYSDK_OFFSET(0x1DF0CE0)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_CardTag_TypeDefinitionIndex = 20710;

	class UICardGame_CardTag : public Il2CppObject
	{
	public:
		UILabel* tagLabel; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDTAG_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDTAG_SETDATA_OFFSET))(arg, nullptr);
		}

	};
}


#pragma once
#include "../../../unitysdk.h"

#define MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMPPOPUP_SCROLLVIEWELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E14E00)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMPPOPUP_SCROLLVIEWELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x1E14E40)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_RestDumpPopup_ScrollViewElement_TypeDefinitionIndex = 20812;

	class UICardGame_RestDumpPopup_ScrollViewElement : public UndeclaredNotation
	{
	public:
		Il2CppObject* groups; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMPPOPUP_SCROLLVIEWELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMPPOPUP_SCROLLVIEWELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

	};
}


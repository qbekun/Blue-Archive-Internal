#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::UI { class UICardGame_MyDeck_ScrollViewElementCardData; }

#define MX_MINIGAMECCG_UI_UICARDGAME_MYDECK_SCROLLVIEWELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DFC3F0)
#define MX_MINIGAMECCG_UI_UICARDGAME_MYDECK_SCROLLVIEWELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x1DFC430)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_MyDeck_ScrollViewElement_TypeDefinitionIndex = 20744;

	class UICardGame_MyDeck_ScrollViewElement : public ::System::Xml::Serialization::XmlAnyElementAttributes
	{
	public:
		Il2CppObject* items; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MYDECK_SCROLLVIEWELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::MinigameCCG::UI::UICardGame_MyDeck_ScrollViewElementCardData* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::UICardGame_MyDeck_ScrollViewElementCardData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MYDECK_SCROLLVIEWELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

	};
}


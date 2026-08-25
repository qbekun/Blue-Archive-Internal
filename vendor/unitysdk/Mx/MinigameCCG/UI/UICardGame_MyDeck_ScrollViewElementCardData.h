#pragma once
#include "../../../unitysdk.h"

#define MX_MINIGAMECCG_UI_UICARDGAME_MYDECK_SCROLLVIEWELEMENTCARDDATA_GET_CARDLIST_OFFSET UNITYSDK_OFFSET(0x1DFC370)
#define MX_MINIGAMECCG_UI_UICARDGAME_MYDECK_SCROLLVIEWELEMENTCARDDATA_SET_CARDLIST_OFFSET UNITYSDK_OFFSET(0x1DFC380)
#define MX_MINIGAMECCG_UI_UICARDGAME_MYDECK_SCROLLVIEWELEMENTCARDDATA_GET_ELEMENTINDEX_OFFSET UNITYSDK_OFFSET(0x1DFC390)
#define MX_MINIGAMECCG_UI_UICARDGAME_MYDECK_SCROLLVIEWELEMENTCARDDATA_SET_ELEMENTINDEX_OFFSET UNITYSDK_OFFSET(0x1DFC3A0)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_MyDeck_ScrollViewElementCardData_TypeDefinitionIndex = 20739;

	class UICardGame_MyDeck_ScrollViewElementCardData : public Il2CppObject
	{
	public:
		Il2CppObject* _CardList_k__BackingField; // 0x10
		Il2CppObject* _ElementIndex_k__BackingField; // 0x18

		Il2CppObject* get_CardList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MYDECK_SCROLLVIEWELEMENTCARDDATA_GET_CARDLIST_OFFSET))(nullptr);
		}

		::System::Void set_CardList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MYDECK_SCROLLVIEWELEMENTCARDDATA_SET_CARDLIST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ElementIndex()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MYDECK_SCROLLVIEWELEMENTCARDDATA_GET_ELEMENTINDEX_OFFSET))(nullptr);
		}

		::System::Void set_ElementIndex(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MYDECK_SCROLLVIEWELEMENTCARDDATA_SET_ELEMENTINDEX_OFFSET))(arg, nullptr);
		}

	};
}


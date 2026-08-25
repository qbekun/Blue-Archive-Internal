#pragma once
#include "unitysdk.h"

class UITexture;
class MinigameCCGObject;

#define UICARDGAME_DECKENTITY_SCROLLVIEWELEMENT_GET_CCGOBJECT_OFFSET UNITYSDK_OFFSET(0xA4B450)
#define UICARDGAME_DECKENTITY_SCROLLVIEWELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0xA4B4D0)
#define UICARDGAME_DECKENTITY_SCROLLVIEWELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4B730)

	inline static constexpr unsigned int UICardGame_DeckEntity_ScrollViewElement_TypeDefinitionIndex = 448;

	class UICardGame_DeckEntity_ScrollViewElement : public ::System::Xml::ValidateNames
	{
	public:
		UITexture* uITexture; // 0x28

		MinigameCCGObject* get_ccgObject()
		{
			return ((MinigameCCGObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_DECKENTITY_SCROLLVIEWELEMENT_GET_CCGOBJECT_OFFSET))(nullptr);
		}

		::System::Void SetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_DECKENTITY_SCROLLVIEWELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_DECKENTITY_SCROLLVIEWELEMENT_.CTOR_OFFSET))(nullptr);
		}

	};


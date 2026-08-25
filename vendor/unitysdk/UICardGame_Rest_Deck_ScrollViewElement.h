#pragma once
#include "unitysdk.h"

class UICardGame_Rest_Popup_RemoveCard;

#define UICARDGAME_REST_DECK_SCROLLVIEWELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4FA30)
#define UICARDGAME_REST_DECK_SCROLLVIEWELEMENT_CO_REMOVEDIRECTING_OFFSET UNITYSDK_OFFSET(0xA4FA70)
#define UICARDGAME_REST_DECK_SCROLLVIEWELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0xA4FB20)

	inline static constexpr unsigned int UICardGame_Rest_Deck_ScrollViewElement_TypeDefinitionIndex = 469;

	class UICardGame_Rest_Deck_ScrollViewElement : public ParseElementOnlyContent_LocalFrame
	{
	public:
		UICardGame_Rest_Popup_RemoveCard* rootUI; // 0x28
		Il2CppObject* cards; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_REST_DECK_SCROLLVIEWELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_RemoveDirecting(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_REST_DECK_SCROLLVIEWELEMENT_CO_REMOVEDIRECTING_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_REST_DECK_SCROLLVIEWELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

	};


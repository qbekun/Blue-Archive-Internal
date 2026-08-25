#pragma once
#include "unitysdk.h"

class UICardGame_Deck_ScrollViewController;
class MXButton;
class MinigameCCGObject;

#define UICARDGAME_POPUP_DECK_GET_CCGOBJECT_OFFSET UNITYSDK_OFFSET(0xA4EA20)
#define UICARDGAME_POPUP_DECK_RESETSCROLL_OFFSET UNITYSDK_OFFSET(0xA4EAA0)
#define UICARDGAME_POPUP_DECK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4F0C0)
#define UICARDGAME_POPUP_DECK_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0xA4F0D0)
#define UICARDGAME_POPUP_DECK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xA4F160)
#define UICARDGAME_POPUP_DECK_AWAKE_OFFSET UNITYSDK_OFFSET(0xA4F170)

	inline static constexpr unsigned int UICardGame_Popup_Deck_TypeDefinitionIndex = 462;

	class UICardGame_Popup_Deck : public Il2CppObject
	{
	public:
		UICardGame_Deck_ScrollViewController* characterScrollViewController; // 0xD8
		UICardGame_Deck_ScrollViewController* cardScrollViewController; // 0xE0
		MXButton* closeBtn; // 0xE8

		MinigameCCGObject* get_ccgObject()
		{
			return ((MinigameCCGObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_POPUP_DECK_GET_CCGOBJECT_OFFSET))(nullptr);
		}

		::System::Void ResetScroll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_POPUP_DECK_RESETSCROLL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_POPUP_DECK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_POPUP_DECK_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_POPUP_DECK_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_POPUP_DECK_AWAKE_OFFSET))(nullptr);
		}

	};


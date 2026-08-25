#pragma once
#include "unitysdk.h"

#define UICARDGAME_DECK_SCROLLVIEWCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4B770)

	inline static constexpr unsigned int UICardGame_Deck_ScrollViewController_TypeDefinitionIndex = 449;

	class UICardGame_Deck_ScrollViewController : public Token
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_DECK_SCROLLVIEWCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};


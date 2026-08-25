#pragma once
#include "unitysdk.h"

class LobbyCharacterSelectInfo;

#define LOBBYCHARACTERSELECTSCROLLVIEWELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x263CBE0)
#define LOBBYCHARACTERSELECTSCROLLVIEWELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x263CC20)

	inline static constexpr unsigned int LobbyCharacterSelectScrollViewElement_TypeDefinitionIndex = 6590;

	class LobbyCharacterSelectScrollViewElement : public ::System::Xml::XPath::XPathNavigatorKeyComparer
	{
	public:
		::Il2CppArray<::System::Object*>* Characters; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBBYCHARACTERSELECTSCROLLVIEWELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(LobbyCharacterSelectInfo* arg)
		{
			((::System::Void(*)(LobbyCharacterSelectInfo*, ::PVOID))((::PBYTE)hIl2Cpp + LOBBYCHARACTERSELECTSCROLLVIEWELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

	};


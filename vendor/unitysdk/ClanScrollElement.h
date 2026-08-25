#pragma once
#include "unitysdk.h"

class UICharacterCard;
class UILabel;
class MXButton;
class ClanObject;

#define CLANSCROLLELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x233A1F0)
#define CLANSCROLLELEMENT_ONCLANVISITCLICK_OFFSET UNITYSDK_OFFSET(0x233A470)
#define CLANSCROLLELEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x233A510)
#define CLANSCROLLELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x233A650)

	inline static constexpr unsigned int ClanScrollElement_TypeDefinitionIndex = 4967;

	class ClanScrollElement : public ::System::Xml::Ucs4Decoder
	{
	public:
		UICharacterCard* clanThumbnail; // 0x28
		UILabel* clanName; // 0x30
		UILabel* clanMemberCount; // 0x38
		UILabel* clanDBId; // 0x40
		UILabel* clanJoinOption; // 0x48
		MXButton* clanVisitButton; // 0x50
		ClanObject* clanObject; // 0x58

		::System::Void SetData(ClanObject* arg)
		{
			((::System::Void(*)(ClanObject*, ::PVOID))((::PBYTE)hIl2Cpp + CLANSCROLLELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnClanVisitClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANSCROLLELEMENT_ONCLANVISITCLICK_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANSCROLLELEMENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANSCROLLELEMENT_.CTOR_OFFSET))(nullptr);
		}

	};


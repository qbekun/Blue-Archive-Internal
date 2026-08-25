#pragma once
#include "unitysdk.h"

class UICharacterCard;
class UILabel;
class MXButton;
class UIEmblemParcel;
class ClanMemberObject;

#define CLANMEMBERSCROLLELEMENT_ONCLANMEMBERINFOCLICK_OFFSET UNITYSDK_OFFSET(0x23398A0)
#define CLANMEMBERSCROLLELEMENT_SETTAGINFO_OFFSET UNITYSDK_OFFSET(0x2339A10)
#define CLANMEMBERSCROLLELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2339AA0)
#define CLANMEMBERSCROLLELEMENT_SETINFOBUTTON_OFFSET UNITYSDK_OFFSET(0x2339AE0)
#define CLANMEMBERSCROLLELEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x2339D60)
#define CLANMEMBERSCROLLELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x2339EA0)
#define CLANMEMBERSCROLLELEMENT_SETPERIODDAY_OFFSET UNITYSDK_OFFSET(0x233A060)

	inline static constexpr unsigned int ClanMemberScrollElement_TypeDefinitionIndex = 4963;

	class ClanMemberScrollElement : public ::System::Xml::Ucs4Encoding3412
	{
	public:
		UICharacterCard* clanMemberCharacterCard; // 0x28
		UILabel* clanMemberName; // 0x30
		UILabel* clanMemberAccountLV; // 0x38
		UILabel* clanMemberAccessPeriod; // 0x40
		UILabel* clanMemberGameLoginPeriod; // 0x48
		UILabel* clanMemberInfoLabel; // 0x50
		MXButton* clanMemberInfoButton; // 0x58
		::Il2CppArray<::System::Object*>* clanMemberTagObjects; // 0x60
		UIEmblemParcel* emblemParcel; // 0x68
		ClanMemberObject* memberInfo; // 0x70

		::System::Void OnClanMemberInfoClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERSCROLLELEMENT_ONCLANMEMBERINFOCLICK_OFFSET))(nullptr);
		}

		::System::Void SetTagInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERSCROLLELEMENT_SETTAGINFO_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERSCROLLELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetInfoButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERSCROLLELEMENT_SETINFOBUTTON_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERSCROLLELEMENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetData(ClanMemberObject* arg)
		{
			((::System::Void(*)(ClanMemberObject*, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERSCROLLELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetPeriodDay(::System::Int32 arg, ::System::String&* arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBERSCROLLELEMENT_SETPERIODDAY_OFFSET))(arg, arg2, nullptr);
		}

	};


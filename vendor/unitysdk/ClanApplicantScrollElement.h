#pragma once
#include "unitysdk.h"

class UICharacterCard;
class UILabel;
class MXButton;
class UIEmblemParcel;
class ClanMemberObject;

#define CLANAPPLICANTSCROLLELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x232D010)
#define CLANAPPLICANTSCROLLELEMENT_SETPERIODDAY_OFFSET UNITYSDK_OFFSET(0x232D1B0)
#define CLANAPPLICANTSCROLLELEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x232D2E0)
#define CLANAPPLICANTSCROLLELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x232D500)
#define CLANAPPLICANTSCROLLELEMENT_ONCLICKAPPLICATREJECT_OFFSET UNITYSDK_OFFSET(0x232D540)
#define CLANAPPLICANTSCROLLELEMENT_ONCLICKAPPLICATAPPROVAL_OFFSET UNITYSDK_OFFSET(0x232D5E0)

	inline static constexpr unsigned int ClanApplicantScrollElement_TypeDefinitionIndex = 4934;

	class ClanApplicantScrollElement : public ::System::Xml::Ucs4Encoding3412
	{
	public:
		UICharacterCard* clanApplicantCharacterCard; // 0x28
		UILabel* clanApplicantName; // 0x30
		UILabel* clanApplicantAccountLV; // 0x38
		UILabel* clanApplicantAccessPeriod; // 0x40
		UILabel* clanMemberGameLoginPeriod; // 0x48
		MXButton* clanApplicatApprovalButton; // 0x50
		MXButton* clanApplicztRejectButton; // 0x58
		UIEmblemParcel* emblemParcel; // 0x60
		::System::Int64 applicantAccountId; // 0x68

		::System::Void SetData(ClanMemberObject* arg)
		{
			((::System::Void(*)(ClanMemberObject*, ::PVOID))((::PBYTE)hIl2Cpp + CLANAPPLICANTSCROLLELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetPeriodDay(::System::Int32 arg, ::System::String&* arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + CLANAPPLICANTSCROLLELEMENT_SETPERIODDAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANAPPLICANTSCROLLELEMENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANAPPLICANTSCROLLELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickApplicatReject()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANAPPLICANTSCROLLELEMENT_ONCLICKAPPLICATREJECT_OFFSET))(nullptr);
		}

		::System::Void OnClickApplicatApproval()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANAPPLICANTSCROLLELEMENT_ONCLICKAPPLICATAPPROVAL_OFFSET))(nullptr);
		}

	};


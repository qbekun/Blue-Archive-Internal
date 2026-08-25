#pragma once
#include "unitysdk.h"

class UIPopup_RaidRankDetail;
class UIPopup_DifficultFilter;
class UIPopup_ArmorDifficultFilter;
class MXButton;
class UILabel;
namespace FlatData { class ContentType; }

#define UIPOPUP_RAIDRANKDETAIL_FILTERJUMPDELEGATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x279D870)
#define UIPOPUP_RAIDRANKDETAIL_FILTERJUMPDELEGATOR_CLOSEFILTER_OFFSET UNITYSDK_OFFSET(0x279C9A0)
#define UIPOPUP_RAIDRANKDETAIL_FILTERJUMPDELEGATOR_APPLYFILTER_OFFSET UNITYSDK_OFFSET(0x279CCC0)
#define UIPOPUP_RAIDRANKDETAIL_FILTERJUMPDELEGATOR_GET_CURRENTRAIDTYPE_OFFSET UNITYSDK_OFFSET(0x279D890)
#define UIPOPUP_RAIDRANKDETAIL_FILTERJUMPDELEGATOR_ONCLICKFILTER_OFFSET UNITYSDK_OFFSET(0x279D8D0)
#define UIPOPUP_RAIDRANKDETAIL_FILTERJUMPDELEGATOR_REFRESHFILTERLABEL_OFFSET UNITYSDK_OFFSET(0x279BD00)
#define UIPOPUP_RAIDRANKDETAIL_FILTERJUMPDELEGATOR_AWAKE_OFFSET UNITYSDK_OFFSET(0x279D9A0)

	inline static constexpr unsigned int UIPopup_RaidRankDetail_FilterJumpDelegator_TypeDefinitionIndex = 7466;

	class UIPopup_RaidRankDetail_FilterJumpDelegator : public Il2CppObject
	{
	public:
		UIPopup_RaidRankDetail* RaidRankDetailPopup; // 0x18
		UIPopup_DifficultFilter* FilterPopup_Raid; // 0x20
		UIPopup_ArmorDifficultFilter* FilterPopup_EliminateRaid; // 0x28
		MXButton* FilterButton; // 0x30
		UILabel* FilterLabel; // 0x38
		::System::String* DefaultColorCode; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDRANKDETAIL_FILTERJUMPDELEGATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void CloseFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDRANKDETAIL_FILTERJUMPDELEGATOR_CLOSEFILTER_OFFSET))(nullptr);
		}

		::System::Void ApplyFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDRANKDETAIL_FILTERJUMPDELEGATOR_APPLYFILTER_OFFSET))(nullptr);
		}

		::FlatData::ContentType* get_currentRaidType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDRANKDETAIL_FILTERJUMPDELEGATOR_GET_CURRENTRAIDTYPE_OFFSET))(nullptr);
		}

		::System::Void OnClickFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDRANKDETAIL_FILTERJUMPDELEGATOR_ONCLICKFILTER_OFFSET))(nullptr);
		}

		::System::Void RefreshFilterLabel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDRANKDETAIL_FILTERJUMPDELEGATOR_REFRESHFILTERLABEL_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDRANKDETAIL_FILTERJUMPDELEGATOR_AWAKE_OFFSET))(nullptr);
		}

	};


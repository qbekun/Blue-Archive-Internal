#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;
namespace MX::Data { class CampaignStageInfo; }

#define UIPOPUP_HARDPLAYCOUNTRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x276BF80)
#define UIPOPUP_HARDPLAYCOUNTRESULT_ONOPENED_OFFSET UNITYSDK_OFFSET(0x276BF90)
#define UIPOPUP_HARDPLAYCOUNTRESULT_SETDATA_OFFSET UNITYSDK_OFFSET(0x276C0D0)
#define UIPOPUP_HARDPLAYCOUNTRESULT_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x276C0F0)
#define UIPOPUP_HARDPLAYCOUNTRESULT_AWAKE_OFFSET UNITYSDK_OFFSET(0x276C180)
#define UIPOPUP_HARDPLAYCOUNTRESULT_START_OFFSET UNITYSDK_OFFSET(0x276C390)

	inline static constexpr unsigned int UIPopup_HardPlayCountResult_TypeDefinitionIndex = 7331;

	class UIPopup_HardPlayCountResult : public Il2CppObject
	{
	public:
		UILabel* descriptionLabel; // 0xD8
		UILabel* currentCountLabel; // 0xE0
		MXButton* closeButton; // 0xE8
		MXButton* backButton; // 0xF0
		::MX::Data::CampaignStageInfo* stageInfo; // 0xF8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_HARDPLAYCOUNTRESULT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_HARDPLAYCOUNTRESULT_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::Data::CampaignStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_HARDPLAYCOUNTRESULT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_HARDPLAYCOUNTRESULT_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_HARDPLAYCOUNTRESULT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_HARDPLAYCOUNTRESULT_START_OFFSET))(nullptr);
		}

	};


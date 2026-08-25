#pragma once
#include "unitysdk.h"

class MXButton;
class UISprite;
class UILabel;
class UIParcelGridScrollViewController;
namespace Cysharp::Threading::Tasks { class UniTask; }

#define UIPOPUP_WELCOMECAMPAIGNITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0xBD1D40)
#define UIPOPUP_WELCOMECAMPAIGNITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0xBD1D50)
#define UIPOPUP_WELCOMECAMPAIGNITEM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xBD1E80)
#define UIPOPUP_WELCOMECAMPAIGNITEM_SENDENTERREWARDREQUEST_OFFSET UNITYSDK_OFFSET(0xBD23F0)
#define UIPOPUP_WELCOMECAMPAIGNITEM_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0xBD2570)

	inline static constexpr unsigned int UIPopup_WelcomeCampaignItem_TypeDefinitionIndex = 8672;

	class UIPopup_WelcomeCampaignItem : public Il2CppObject
	{
	public:
		MXButton* confirmButton; // 0xD8
		UISprite* campaignIcon; // 0xE0
		UILabel* campaignDescription; // 0xE8
		UIParcelGridScrollViewController* parcelGridScrollViewController; // 0xF0
		::System::Action* closeCallback; // 0xF8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WELCOMECAMPAIGNITEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WELCOMECAMPAIGNITEM_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WELCOMECAMPAIGNITEM_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* SendEnterRewardRequest()
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WELCOMECAMPAIGNITEM_SENDENTERREWARDREQUEST_OFFSET))(nullptr);
		}

		::System::Void OnClickConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WELCOMECAMPAIGNITEM_ONCLICKCONFIRM_OFFSET))(nullptr);
		}

	};


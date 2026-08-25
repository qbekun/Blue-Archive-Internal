#pragma once
#include "unitysdk.h"

class MXButton;
class UILabel;
class UIScrollView;
namespace MX::Data { class CampaignStageInfo; }
namespace MX::Data { class MiniGameDefenseStageInfo; }

#define UIPOPUP_STAGETIP_AWAKE_OFFSET UNITYSDK_OFFSET(0x2775F80)
#define UIPOPUP_STAGETIP_ONOPENED_OFFSET UNITYSDK_OFFSET(0x27760E0)
#define UIPOPUP_STAGETIP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2776110)
#define UIPOPUP_STAGETIP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x27761F0)
#define UIPOPUP_STAGETIP_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x27762C0)
#define UIPOPUP_STAGETIP_.CTOR_OFFSET UNITYSDK_OFFSET(0x2776350)

	inline static constexpr unsigned int UIPopup_StageTip_TypeDefinitionIndex = 7359;

	class UIPopup_StageTip : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		MXButton* confirmButton; // 0xE0
		UILabel* tipDescription; // 0xE8
		UIScrollView* tipScrollView; // 0xF0

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGETIP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGETIP_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::MX::Data::CampaignStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGETIP_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::MX::Data::MiniGameDefenseStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::MiniGameDefenseStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGETIP_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGETIP_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_STAGETIP_.CTOR_OFFSET))(nullptr);
		}

	};


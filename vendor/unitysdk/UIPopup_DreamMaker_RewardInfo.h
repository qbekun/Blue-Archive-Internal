#pragma once
#include "unitysdk.h"

class IntTabController;
class MXButton;
class UIEventRewardPopup;
class UIDreammaker_RewardScrollViewController;
namespace UnityEngine { class GameObject; }
namespace MX::Data { class EventContentSeasonInfo; }
namespace FlatData { class DreamMakerEndingRewardType; }

#define UIPOPUP_DREAMMAKER_REWARDINFO_ONTABCHANGED_OFFSET UNITYSDK_OFFSET(0xD0D5A0)
#define UIPOPUP_DREAMMAKER_REWARDINFO_ONOPENED_OFFSET UNITYSDK_OFFSET(0xD0D950)
#define UIPOPUP_DREAMMAKER_REWARDINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0xD0D9B0)
#define UIPOPUP_DREAMMAKER_REWARDINFO_INITREWARDSCROLL_OFFSET UNITYSDK_OFFSET(0xD0D6B0)
#define UIPOPUP_DREAMMAKER_REWARDINFO_SETEVENTPOINTREWARDDATA_OFFSET UNITYSDK_OFFSET(0xD0DBB0)
#define UIPOPUP_DREAMMAKER_REWARDINFO_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0xD0DC00)
#define UIPOPUP_DREAMMAKER_REWARDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xD0DC20)

	inline static constexpr unsigned int UIPopup_DreamMaker_RewardInfo_TypeDefinitionIndex = 621;

	class UIPopup_DreamMaker_RewardInfo : public Il2CppObject
	{
	public:
		IntTabController* rewardTab; // 0xD8
		MXButton* closeButton; // 0xE0
		UIEventRewardPopup* eventRewardPopup; // 0xE8
		UIDreammaker_RewardScrollViewController* secondThirdScrollViewController; // 0xF0
		::UnityEngine::GameObject* tab1pointRewardRoot; // 0xF8
		::UnityEngine::GameObject* tab2RewardRoot; // 0x100
		::MX::Data::EventContentSeasonInfo* seasonInfo; // 0x108

		::System::Void OnTabChanged(::System::Boolean arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_REWARDINFO_ONTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_REWARDINFO_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_REWARDINFO_AWAKE_OFFSET))(nullptr);
		}

		::System::Void InitRewardScroll(::FlatData::DreamMakerEndingRewardType* arg)
		{
			((::System::Void(*)(::FlatData::DreamMakerEndingRewardType*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_REWARDINFO_INITREWARDSCROLL_OFFSET))(arg, nullptr);
		}

		::System::Void SetEventPointRewardData(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_REWARDINFO_SETEVENTPOINTREWARDDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_REWARDINFO_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_REWARDINFO_.CTOR_OFFSET))(nullptr);
		}

	};


#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }
class UIEventRewardScrollController;
class UISlider;
class UILabel;
namespace UnityEngine { class Transform; }
class UIGrid;
namespace MX::Data { class EventContentSeasonInfo; }
namespace MX::Data { class EventContentStageTotalRewardInfo; }

#define UIEVENTREWARDPOPUP_REFRESHREWARDPOPUP_OFFSET UNITYSDK_OFFSET(0x245DC80)
#define UIEVENTREWARDPOPUP_SETREWARDPOINTINFO_OFFSET UNITYSDK_OFFSET(0x245E920)
#define UIEVENTREWARDPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x245ED00)
#define UIEVENTREWARDPOPUP_ONCLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0x245ED10)
#define UIEVENTREWARDPOPUP_ONOPENED_OFFSET UNITYSDK_OFFSET(0x245EDB0)
#define UIEVENTREWARDPOPUP_SETDATA_OFFSET UNITYSDK_OFFSET(0x245EE00)
#define UIEVENTREWARDPOPUP_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x245EE40)
#define UIEVENTREWARDPOPUP__REFRESHREWARDPOPUP_B__22_1_OFFSET UNITYSDK_OFFSET(0x245EE60)
#define UIEVENTREWARDPOPUP_ONCLICKEVENTITEMREWARDRECEIVEBUTTON_OFFSET UNITYSDK_OFFSET(0x245EE90)
#define UIEVENTREWARDPOPUP__REFRESHREWARDPOPUP_B__22_4_OFFSET UNITYSDK_OFFSET(0x245EEC0)
#define UIEVENTREWARDPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x245EEF0)

	inline static constexpr unsigned int UIEventRewardPopup_TypeDefinitionIndex = 5594;

	class UIEventRewardPopup : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		MXButton* eventItemRewardReceiveButton; // 0xE0
		::UnityEngine::GameObject* eventItemRewardReceiveDisableButton; // 0xE8
		UIEventRewardScrollController* eventRewardScrollController; // 0xF0
		UISlider* eventItemRewardPointSlider; // 0xF8
		UILabel* eventItemCurrPointLabel; // 0x100
		UILabel* eventItemStartPointLabel; // 0x108
		UILabel* eventItemMaxPointLabel; // 0x110
		UILabel* eventItemTargetPointLabel; // 0x118
		::UnityEngine::Transform* eventItemRewardProgressTarget; // 0x120
		::Il2CppArray<::System::Object*>* eventItemRewardParcelCards; // 0x128
		::UnityEngine::GameObject* eventItemRewardBoxEnable; // 0x130
		::UnityEngine::GameObject* eventRewardTotalComplete; // 0x138
		UIGrid* targetRewardGrid; // 0x140
		::MX::Data::EventContentSeasonInfo* seasonInfo; // 0x148
		::System::Action* OnEventItemRewardReceive; // 0x150
		::System::Int64 maxPoint; // 0x158
		::System::Int64 requiredPoint; // 0x160
		::System::Single currPoint; // 0x168
		::MX::Data::EventContentStageTotalRewardInfo* eventItemRewardInfo; // 0x170

		::System::Void RefreshRewardPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTREWARDPOPUP_REFRESHREWARDPOPUP_OFFSET))(nullptr);
		}

		::System::Void SetRewardPointInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTREWARDPOPUP_SETREWARDPOINTINFO_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTREWARDPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickCloseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTREWARDPOPUP_ONCLICKCLOSEBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTREWARDPOPUP_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::Data::EventContentSeasonInfo* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTREWARDPOPUP_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTREWARDPOPUP_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Boolean _RefreshRewardPopup_b__22_1(::MX::Data::EventContentStageTotalRewardInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::EventContentStageTotalRewardInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTREWARDPOPUP__REFRESHREWARDPOPUP_B__22_1_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickEventItemRewardReceiveButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTREWARDPOPUP_ONCLICKEVENTITEMREWARDRECEIVEBUTTON_OFFSET))(nullptr);
		}

		::System::Boolean _RefreshRewardPopup_b__22_4(::MX::Data::EventContentStageTotalRewardInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::EventContentStageTotalRewardInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTREWARDPOPUP__REFRESHREWARDPOPUP_B__22_4_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTREWARDPOPUP_AWAKE_OFFSET))(nullptr);
		}

	};


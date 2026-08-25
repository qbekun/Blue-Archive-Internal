#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }
class UIDiceRaceRewardScrollController;
class UILabel;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIPOPUP_DICERACEREWARD_HANDLEDICERACELAPREWARDRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x23D88B0)
#define UIPOPUP_DICERACEREWARD_ONCLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0x23D9310)
#define UIPOPUP_DICERACEREWARD_ONENABLE_OFFSET UNITYSDK_OFFSET(0x23D93A0)
#define UIPOPUP_DICERACEREWARD_AWAKE_OFFSET UNITYSDK_OFFSET(0x23D94B0)
#define UIPOPUP_DICERACEREWARD_ONOPENED_OFFSET UNITYSDK_OFFSET(0x23D96D0)
#define UIPOPUP_DICERACEREWARD_ONCLICKEVENTITEMREWARDRECEIVEBUTTON_OFFSET UNITYSDK_OFFSET(0x23D9A90)
#define UIPOPUP_DICERACEREWARD_REFRESHREWARDPOPUP_OFFSET UNITYSDK_OFFSET(0x23D89F0)
#define UIPOPUP_DICERACEREWARD_SETDATA_OFFSET UNITYSDK_OFFSET(0x23D9B50)
#define UIPOPUP_DICERACEREWARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x23D9BA0)
#define UIPOPUP_DICERACEREWARD_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x23D9BB0)

	inline static constexpr unsigned int UIPopup_DiceRaceReward_TypeDefinitionIndex = 5363;

	class UIPopup_DiceRaceReward : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		MXButton* diceRaceRewardReceiveButton; // 0xE0
		::UnityEngine::GameObject* diceRaceRewardReceiveDisableButton; // 0xE8
		UIDiceRaceRewardScrollController* diceRaceRewardScrollController; // 0xF0
		UILabel* diceRaceDateLabel; // 0xF8
		UILabel* diceraceLapCountLabel; // 0x100
		::System::Action* OnRefreshDiceRaceFinishRewardRedDot; // 0x108
		::System::Action* OnRefreshSelectDiceItemReward; // 0x110
		::System::Int64 eventContentId; // 0x118

		::System::Boolean HandleDiceRaceLapRewardResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DICERACEREWARD_HANDLEDICERACELAPREWARDRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickCloseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DICERACEREWARD_ONCLICKCLOSEBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DICERACEREWARD_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DICERACEREWARD_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DICERACEREWARD_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickEventItemRewardReceiveButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DICERACEREWARD_ONCLICKEVENTITEMREWARDRECEIVEBUTTON_OFFSET))(nullptr);
		}

		::System::Void RefreshRewardPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DICERACEREWARD_REFRESHREWARDPOPUP_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Int64 arg, ::System::Action* arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DICERACEREWARD_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DICERACEREWARD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DICERACEREWARD_ONDISABLE_OFFSET))(nullptr);
		}

	};


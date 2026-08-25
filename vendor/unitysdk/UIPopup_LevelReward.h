#pragma once
#include "unitysdk.h"

class UITexture;
class UISlider;
class UILabel;
class MXButton;
namespace MX::NetworkProtocol { class ReceiveAccountLevelRewardResponse; }
namespace MX::NetworkProtocol { class CheckAccountLevelRewardResponse; }

#define UIPOPUP_LEVELREWARD_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x267A5D0)
#define UIPOPUP_LEVELREWARD_ONOPENED_OFFSET UNITYSDK_OFFSET(0x267A660)
#define UIPOPUP_LEVELREWARD_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x267ACE0)
#define UIPOPUP_LEVELREWARD___N__0_OFFSET UNITYSDK_OFFSET(0x267ADA0)
#define UIPOPUP_LEVELREWARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x267ADB0)
#define UIPOPUP_LEVELREWARD__ONGETREWARDBUTTONCLICK_B__12_0_OFFSET UNITYSDK_OFFSET(0x267ADC0)
#define UIPOPUP_LEVELREWARD__RECHECKLEVELREWARDRECEIVESTATE_B__13_0_OFFSET UNITYSDK_OFFSET(0x267B0B0)
#define UIPOPUP_LEVELREWARD_SYNCTOCURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x267A680)
#define UIPOPUP_LEVELREWARD_ONGETREWARDBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x267B200)
#define UIPOPUP_LEVELREWARD_ONCLOSEBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x267AD00)
#define UIPOPUP_LEVELREWARD_AWAKE_OFFSET UNITYSDK_OFFSET(0x267B2C0)
#define UIPOPUP_LEVELREWARD_RECHECKLEVELREWARDRECEIVESTATE_OFFSET UNITYSDK_OFFSET(0x267AFF0)

	inline static constexpr unsigned int UIPopup_LevelReward_TypeDefinitionIndex = 6729;

	class UIPopup_LevelReward : public Il2CppObject
	{
	public:
		UITexture* titleImage; // 0xD8
		UISlider* levelGauge; // 0xE0
		UILabel* levelLabel; // 0xE8
		Il2CppObject* levelRewards; // 0xF0
		MXButton* getRewardButton; // 0xF8
		MXButton* getRewardButtonDisabled; // 0x100
		MXButton* closeButton; // 0x108

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_LEVELREWARD_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_LEVELREWARD_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_LEVELREWARD_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_LEVELREWARD___N__0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_LEVELREWARD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnGetRewardButtonClick_b__12_0(::MX::NetworkProtocol::ReceiveAccountLevelRewardResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ReceiveAccountLevelRewardResponse*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_LEVELREWARD__ONGETREWARDBUTTONCLICK_B__12_0_OFFSET))(arg, nullptr);
		}

		::System::Void _RecheckLevelRewardReceiveState_b__13_0(::MX::NetworkProtocol::CheckAccountLevelRewardResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::CheckAccountLevelRewardResponse*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_LEVELREWARD__RECHECKLEVELREWARDRECEIVESTATE_B__13_0_OFFSET))(arg, nullptr);
		}

		::System::Void SyncToCurrentState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_LEVELREWARD_SYNCTOCURRENTSTATE_OFFSET))(nullptr);
		}

		::System::Void OnGetRewardButtonClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_LEVELREWARD_ONGETREWARDBUTTONCLICK_OFFSET))(nullptr);
		}

		::System::Void OnCloseButtonClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_LEVELREWARD_ONCLOSEBUTTONCLICK_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_LEVELREWARD_AWAKE_OFFSET))(nullptr);
		}

		::System::Void RecheckLevelRewardReceiveState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_LEVELREWARD_RECHECKLEVELREWARDRECEIVESTATE_OFFSET))(nullptr);
		}

	};


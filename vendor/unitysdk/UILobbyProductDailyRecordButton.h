#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class MXButton;
class UILabel;
class UIPopup_ProductDailyRecordReward;

#define UILOBBYPRODUCTDAILYRECORDBUTTON_ONCLICKREWARDBUTTON_OFFSET UNITYSDK_OFFSET(0x26754C0)
#define UILOBBYPRODUCTDAILYRECORDBUTTON_SETTIMELABELTEXT_OFFSET UNITYSDK_OFFSET(0x26755A0)
#define UILOBBYPRODUCTDAILYRECORDBUTTON_AWAKE_OFFSET UNITYSDK_OFFSET(0x2675A60)
#define UILOBBYPRODUCTDAILYRECORDBUTTON__ONCLICKREWARDBUTTON_B__9_0_OFFSET UNITYSDK_OFFSET(0x2675BF0)
#define UILOBBYPRODUCTDAILYRECORDBUTTON_UPDATEVISIBILITY_OFFSET UNITYSDK_OFFSET(0x2675C80)
#define UILOBBYPRODUCTDAILYRECORDBUTTON_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2676180)
#define UILOBBYPRODUCTDAILYRECORDBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0x2676190)

	inline static constexpr unsigned int UILobbyProductDailyRecordButton_TypeDefinitionIndex = 6716;

	class UILobbyProductDailyRecordButton : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* _visibleObject; // 0x18
		MXButton* _rewardButton; // 0x20
		::UnityEngine::GameObject* _redDot; // 0x28
		UILabel* _remainingTimeLabel; // 0x30
		Il2CppObject* _currentDailyRecordShopCashExcel; // 0x38

		::System::Void OnClickRewardButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYPRODUCTDAILYRECORDBUTTON_ONCLICKREWARDBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetTimeLabelText()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYPRODUCTDAILYRECORDBUTTON_SETTIMELABELTEXT_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYPRODUCTDAILYRECORDBUTTON_AWAKE_OFFSET))(nullptr);
		}

		::System::Void _OnClickRewardButton_b__9_0(UIPopup_ProductDailyRecordReward* arg)
		{
			((::System::Void(*)(UIPopup_ProductDailyRecordReward*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYPRODUCTDAILYRECORDBUTTON__ONCLICKREWARDBUTTON_B__9_0_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateVisibility()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYPRODUCTDAILYRECORDBUTTON_UPDATEVISIBILITY_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYPRODUCTDAILYRECORDBUTTON_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYPRODUCTDAILYRECORDBUTTON_.CTOR_OFFSET))(nullptr);
		}

	};


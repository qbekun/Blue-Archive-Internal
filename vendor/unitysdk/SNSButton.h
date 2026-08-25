#pragma once
#include "unitysdk.h"

class MXButton;
class OpenConditionButtonController;
namespace UnityEngine { class GameObject; }
class UILabel;
class UIPopup_SNS;

#define SNSBUTTON__ONCLICKOPENSNS_B__7_0_OFFSET UNITYSDK_OFFSET(0xAE54C0)
#define SNSBUTTON_OPENCONDITIONCHECK_OFFSET UNITYSDK_OFFSET(0xAE5540)
#define SNSBUTTON_ONCLICKOPENSNS_OFFSET UNITYSDK_OFFSET(0xAE5570)
#define SNSBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0xAE5650)
#define SNSBUTTON_SETSNSBUTTONSTATE_OFFSET UNITYSDK_OFFSET(0xAE5660)
#define SNSBUTTON_INITIALIZESNSBUTTON_OFFSET UNITYSDK_OFFSET(0xAE58B0)

	inline static constexpr unsigned int SNSButton_TypeDefinitionIndex = 8090;

	class SNSButton : public Il2CppObject
	{
	public:
		MXButton* snsButton; // 0x18
		OpenConditionButtonController* openConditionButtonController; // 0x20
		::UnityEngine::GameObject* snsUnreadNoticeRoot; // 0x28
		UILabel* snsUnreadCountText; // 0x30

		::System::Void _OnClickOpenSNS_b__7_0(UIPopup_SNS* arg)
		{
			((::System::Void(*)(UIPopup_SNS*, ::PVOID))((::PBYTE)hIl2Cpp + SNSBUTTON__ONCLICKOPENSNS_B__7_0_OFFSET))(arg, nullptr);
		}

		::System::Void OpenConditionCheck()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SNSBUTTON_OPENCONDITIONCHECK_OFFSET))(nullptr);
		}

		::System::Void OnClickOpenSNS()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SNSBUTTON_ONCLICKOPENSNS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SNSBUTTON_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetSnsButtonState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SNSBUTTON_SETSNSBUTTONSTATE_OFFSET))(nullptr);
		}

		::System::Void InitializeSnsButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SNSBUTTON_INITIALIZESNSBUTTON_OFFSET))(nullptr);
		}

	};


#pragma once
#include "unitysdk.h"

class MXButton;
class UIInput;
class UILabel;
namespace UnityEngine { class GameObject; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class UIPopup_System;

#define UIPOPUP_BIRTH_ONCLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0xCCEB00)
#define UIPOPUP_BIRTH_ONCLICKOKBUTTON_OFFSET UNITYSDK_OFFSET(0xCCEB90)
#define UIPOPUP_BIRTH_AWAKE_OFFSET UNITYSDK_OFFSET(0xCCED40)
#define UIPOPUP_BIRTH_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCCF2B0)
#define UIPOPUP_BIRTH__APPLYBIRTH_B__19_1_OFFSET UNITYSDK_OFFSET(0xCCF420)
#define UIPOPUP_BIRTH_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCCF4B0)
#define UIPOPUP_BIRTH_ONCLICKCONFIRMOKBUTTON_OFFSET UNITYSDK_OFFSET(0xCCF5C0)
#define UIPOPUP_BIRTH_.CTOR_OFFSET UNITYSDK_OFFSET(0xCCF7A0)
#define UIPOPUP_BIRTH_ONCLICKCONFIRMCANCELBUTTON_OFFSET UNITYSDK_OFFSET(0xCCF7B0)
#define UIPOPUP_BIRTH_ONCHANGEBIRTHINPUT_OFFSET UNITYSDK_OFFSET(0xCCF7E0)
#define UIPOPUP_BIRTH_HANDLEBIRTHDAYMESSAGE_OFFSET UNITYSDK_OFFSET(0xCCF840)
#define UIPOPUP_BIRTH_APPLYBIRTH_OFFSET UNITYSDK_OFFSET(0xCCF8C0)
#define UIPOPUP_BIRTH_ONOPENED_OFFSET UNITYSDK_OFFSET(0xCCFAC0)
#define UIPOPUP_BIRTH__APPLYBIRTH_B__19_0_OFFSET UNITYSDK_OFFSET(0xCCFB60)
#define UIPOPUP_BIRTH_ONCLICKCONFIRMCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0xCCFC00)

	inline static constexpr unsigned int UIPopup_Birth_TypeDefinitionIndex = 9141;

	class UIPopup_Birth : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		UIInput* birthInput; // 0xE0
		UILabel* birthInputPlaceholder; // 0xE8
		MXButton* okButton; // 0xF0
		::UnityEngine::GameObject* confirmPopup; // 0xF8
		MXButton* confirmCloseButton; // 0x100
		UILabel* confirmBirthLabel; // 0x108
		MXButton* confirmOkButton; // 0x110
		MXButton* confirmCancelButton; // 0x118

		::System::Void OnClickCloseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BIRTH_ONCLICKCLOSEBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickOkButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BIRTH_ONCLICKOKBUTTON_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BIRTH_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BIRTH_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void _ApplyBirth_b__19_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BIRTH__APPLYBIRTH_B__19_1_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BIRTH_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnClickConfirmOkButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BIRTH_ONCLICKCONFIRMOKBUTTON_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BIRTH_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnclickConfirmCancelButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BIRTH_ONCLICKCONFIRMCANCELBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnChangeBirthInput()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BIRTH_ONCHANGEBIRTHINPUT_OFFSET))(nullptr);
		}

		::System::Boolean HandleBirthDayMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BIRTH_HANDLEBIRTHDAYMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyBirth()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BIRTH_APPLYBIRTH_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BIRTH_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void _ApplyBirth_b__19_0(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BIRTH__APPLYBIRTH_B__19_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickConfirmCloseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BIRTH_ONCLICKCONFIRMCLOSEBUTTON_OFFSET))(nullptr);
		}

	};


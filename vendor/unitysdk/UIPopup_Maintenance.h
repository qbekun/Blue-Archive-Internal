#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class GameObject; }
class MXButton;
class UIPopup_System;

#define UIPOPUP_MAINTENANCE_CLEARBUTTONEVENT_OFFSET UNITYSDK_OFFSET(0x276C420)
#define UIPOPUP_MAINTENANCE__ONCLICKNOTICEBUTTON_B__19_2_OFFSET UNITYSDK_OFFSET(0x276C4D0)
#define UIPOPUP_MAINTENANCE_ONCLICKNOTICEBUTTON_OFFSET UNITYSDK_OFFSET(0x276C510)
#define UIPOPUP_MAINTENANCE__ONCLICKNOTICEBUTTON_G__REOPENSYSTEMPOPUP|19_1_OFFSET UNITYSDK_OFFSET(0x276C6C0)
#define UIPOPUP_MAINTENANCE_ONCLICKOK_OFFSET UNITYSDK_OFFSET(0x276C7A0)
#define UIPOPUP_MAINTENANCE__ONCLICKNOTICEBUTTON_B__19_0_OFFSET UNITYSDK_OFFSET(0x276C8A0)
#define UIPOPUP_MAINTENANCE_SETUI_OFFSET UNITYSDK_OFFSET(0x276C8B0)
#define UIPOPUP_MAINTENANCE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x276CA60)
#define UIPOPUP_MAINTENANCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x276CD60)
#define UIPOPUP_MAINTENANCE_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x276CD70)

	inline static constexpr unsigned int UIPopup_Maintenance_TypeDefinitionIndex = 7333;

	class UIPopup_Maintenance : public Il2CppObject
	{
	public:
		UILabel* titleLabel; // 0x18
		::UnityEngine::GameObject* descriptionLabelRoot; // 0x20
		UILabel* descriptionLabel; // 0x28
		::UnityEngine::GameObject* type1ButtonRoot; // 0x30
		MXButton* okButton_type1; // 0x38
		UILabel* okButtonLabel_type1; // 0x40
		::UnityEngine::GameObject* type2ButtonRoot; // 0x48
		MXButton* okButton_type2; // 0x50
		UILabel* okButtonLabel_type2; // 0x58
		MXButton* noticeButton; // 0x60
		UILabel* noticeButtonLabel; // 0x68
		::System::Boolean isType1; // 0x70
		::System::Action* okCallback; // 0x78
		::System::String* descriptionText; // 0x80

		::System::Void ClearButtonEvent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MAINTENANCE_CLEARBUTTONEVENT_OFFSET))(nullptr);
		}

		::System::Void _OnClickNoticeButton_b__19_2(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MAINTENANCE__ONCLICKNOTICEBUTTON_B__19_2_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickNoticeButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MAINTENANCE_ONCLICKNOTICEBUTTON_OFFSET))(nullptr);
		}

		::System::Void _OnClickNoticeButton_g__ReOpenSystemPopup|19_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MAINTENANCE__ONCLICKNOTICEBUTTON_G__REOPENSYSTEMPOPUP|19_1_OFFSET))(nullptr);
		}

		::System::Void OnClickOk()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MAINTENANCE_ONCLICKOK_OFFSET))(nullptr);
		}

		::System::Void _OnClickNoticeButton_b__19_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MAINTENANCE__ONCLICKNOTICEBUTTON_B__19_0_OFFSET))(nullptr);
		}

		::System::Void SetUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MAINTENANCE_SETUI_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Boolean arg, ::System::String* str, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MAINTENANCE_INITIALIZE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MAINTENANCE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MAINTENANCE_ONCLOSED_OFFSET))(nullptr);
		}

	};


#pragma once
#include "../../../../unitysdk.h"

namespace NPA::Editor::Auth { class AccountSettingsLayoutType; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine { class Color; }

#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKSETTINGSVIEW_SETTITLE_OFFSET UNITYSDK_OFFSET(0x9CB3FF0)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKSETTINGSVIEW_SETDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x9CB4000)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKSETTINGSVIEW_SETDETAILEDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x9CB4010)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKSETTINGSVIEW_SETCONFIRMBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x9CB4020)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKSETTINGSVIEW_SETCLOSEBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x9CB4030)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKSETTINGSVIEW_SETDISPLAYNAMETEXT_OFFSET UNITYSDK_OFFSET(0x9CB4040)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKSETTINGSVIEW_SETACCOUNTLINKINFOTEXT_OFFSET UNITYSDK_OFFSET(0x9CB4050)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKSETTINGSVIEW_SETACTIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x9CB4060)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKSETTINGSVIEW_SETCURRENTLINKTYPE_OFFSET UNITYSDK_OFFSET(0x9CB4080)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKSETTINGSVIEW_LOAD_OFFSET UNITYSDK_OFFSET(0x9CB4090)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKSETTINGSVIEW_ONCONFIRM_OFFSET UNITYSDK_OFFSET(0x9CB48D0)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKSETTINGSVIEW_ONCANCEL_OFFSET UNITYSDK_OFFSET(0x9CB4C20)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKSETTINGSVIEW_ENABLEBUTTONS_OFFSET UNITYSDK_OFFSET(0x9CB4C60)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKSETTINGSVIEW_DISABLEBUTTONS_OFFSET UNITYSDK_OFFSET(0x9CB4910)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKSETTINGSVIEW_HIDECONFIRMBUTTON_OFFSET UNITYSDK_OFFSET(0x9CB4DF0)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKSETTINGSVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CB4E00)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKSETTINGSVIEW__LOAD_B__29_0_OFFSET UNITYSDK_OFFSET(0x9CB4E50)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKSETTINGSVIEW__LOAD_B__29_1_OFFSET UNITYSDK_OFFSET(0x9CB4FB0)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKSETTINGSVIEW__LOAD_B__29_2_OFFSET UNITYSDK_OFFSET(0x9CB5110)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKSETTINGSVIEW__LOAD_B__29_3_OFFSET UNITYSDK_OFFSET(0x9CB5270)

namespace NPA::Editor::Auth::View
{
	inline static constexpr unsigned int NXPAccountLinkSettingsView_TypeDefinitionIndex = 27188;

	class NXPAccountLinkSettingsView : public Il2CppObject
	{
	public:
		::System::String* accountSettingsViewPrefabUrl; // 0x0
		::System::String* accountSettingsHeaderBasePath; // 0x0
		::System::String* accountSettingsContentsBasePath; // 0x0
		::System::String* accountSettingsFooterBasePath; // 0x0
		::System::String* title; // 0x48
		::System::String* mainDescription; // 0x50
		::System::String* subDescription; // 0x58
		::System::String* confirmButtonText; // 0x60
		::System::String* closeButtonText; // 0x68
		::System::String* displayNameText; // 0x70
		::System::String* accountLinkInfoText; // 0x78
		::System::Boolean usePositiveButton; // 0x80
		::NPA::Editor::Auth::AccountSettingsLayoutType* _loginType; // 0x84
		::System::Action* actionCallback; // 0x88
		::UnityEngine::UI::Button* _confirmButton; // 0x90
		::UnityEngine::UI::Button* _closeButton; // 0x98
		::UnityEngine::UI::Text* _confirmButtonText; // 0xA0
		::UnityEngine::UI::Text* _closeButtonText; // 0xA8
		::UnityEngine::Color* _confirmButtonTextColor; // 0xB0
		::UnityEngine::Color* _closeButtonTextColor; // 0xC0

		::System::Void SetTitle(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKSETTINGSVIEW_SETTITLE_OFFSET))(str, nullptr);
		}

		::System::Void SetDescription(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKSETTINGSVIEW_SETDESCRIPTION_OFFSET))(str, nullptr);
		}

		::System::Void SetDetailedDescription(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKSETTINGSVIEW_SETDETAILEDDESCRIPTION_OFFSET))(str, nullptr);
		}

		::System::Void SetConfirmButtonText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKSETTINGSVIEW_SETCONFIRMBUTTONTEXT_OFFSET))(str, nullptr);
		}

		::System::Void SetCloseButtonText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKSETTINGSVIEW_SETCLOSEBUTTONTEXT_OFFSET))(str, nullptr);
		}

		::System::Void SetDisplayNameText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKSETTINGSVIEW_SETDISPLAYNAMETEXT_OFFSET))(str, nullptr);
		}

		::System::Void SetAccountLinkInfoText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKSETTINGSVIEW_SETACCOUNTLINKINFOTEXT_OFFSET))(str, nullptr);
		}

		::System::Void SetActionCallback(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKSETTINGSVIEW_SETACTIONCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SetCurrentLinkType(::NPA::Editor::Auth::AccountSettingsLayoutType* arg)
		{
			((::System::Void(*)(::NPA::Editor::Auth::AccountSettingsLayoutType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKSETTINGSVIEW_SETCURRENTLINKTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKSETTINGSVIEW_LOAD_OFFSET))(nullptr);
		}

		::System::Void OnConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKSETTINGSVIEW_ONCONFIRM_OFFSET))(nullptr);
		}

		::System::Void OnCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKSETTINGSVIEW_ONCANCEL_OFFSET))(nullptr);
		}

		::System::Void EnableButtons()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKSETTINGSVIEW_ENABLEBUTTONS_OFFSET))(nullptr);
		}

		::System::Void DisableButtons()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKSETTINGSVIEW_DISABLEBUTTONS_OFFSET))(nullptr);
		}

		::System::Void HideConfirmButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKSETTINGSVIEW_HIDECONFIRMBUTTON_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKSETTINGSVIEW_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Load_b__29_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKSETTINGSVIEW__LOAD_B__29_0_OFFSET))(nullptr);
		}

		::System::Void _Load_b__29_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKSETTINGSVIEW__LOAD_B__29_1_OFFSET))(nullptr);
		}

		::System::Void _Load_b__29_2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKSETTINGSVIEW__LOAD_B__29_2_OFFSET))(nullptr);
		}

		::System::Void _Load_b__29_3()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTLINKSETTINGSVIEW__LOAD_B__29_3_OFFSET))(nullptr);
		}

	};
}


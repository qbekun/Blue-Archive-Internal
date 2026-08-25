#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class Sprite; }

#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTSETTINGSVIEW_SETUSEPLAYNOW_OFFSET UNITYSDK_OFFSET(0x9CB5BC0)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTSETTINGSVIEW_SETTITLE_OFFSET UNITYSDK_OFFSET(0x9CB5BD0)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTSETTINGSVIEW_SETEMAIL_OFFSET UNITYSDK_OFFSET(0x9CB5BE0)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTSETTINGSVIEW_SETLOGINTYPE_OFFSET UNITYSDK_OFFSET(0x9CB5BF0)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTSETTINGSVIEW_SETCONFIRMCALLBACK_OFFSET UNITYSDK_OFFSET(0x9CB5C00)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTSETTINGSVIEW_SETCONFIRMBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x9CB5C20)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTSETTINGSVIEW_LOAD_OFFSET UNITYSDK_OFFSET(0x9CB5C40)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTSETTINGSVIEW_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x9CB64E0)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTSETTINGSVIEW_ONCONFIRM_OFFSET UNITYSDK_OFFSET(0x9CB6550)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTSETTINGSVIEW_ONCANCEL_OFFSET UNITYSDK_OFFSET(0x9CB6590)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTSETTINGSVIEW_GETLOGINTYPEICON_OFFSET UNITYSDK_OFFSET(0x9CB6200)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTSETTINGSVIEW_GETLOGINTYPEDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x9CB6340)
#define NPA_EDITOR_AUTH_VIEW_NXPACCOUNTSETTINGSVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CB65D0)

namespace NPA::Editor::Auth::View
{
	inline static constexpr unsigned int NXPAccountSettingsView_TypeDefinitionIndex = 27191;

	class NXPAccountSettingsView : public Il2CppObject
	{
	public:
		::System::String* plateImageBaseUrl; // 0x48
		::System::String* accountSettingsViewPrefabUrl; // 0x50
		::System::String* accountSettingsHeaderBasePath; // 0x58
		::System::String* accountSettingsContentsBasePath; // 0x60
		::System::Boolean usePlayNow; // 0x68
		::System::String* title; // 0x70
		::System::String* email; // 0x78
		::System::Int32 loginType; // 0x80
		::System::String* confirmButtonText; // 0x88
		::System::Action* confirmCallback; // 0x90

		::System::Void SetUsePlayNow(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTSETTINGSVIEW_SETUSEPLAYNOW_OFFSET))(arg, nullptr);
		}

		::System::Void SetTitle(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTSETTINGSVIEW_SETTITLE_OFFSET))(str, nullptr);
		}

		::System::Void SetEmail(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTSETTINGSVIEW_SETEMAIL_OFFSET))(str, nullptr);
		}

		::System::Void SetLoginType(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTSETTINGSVIEW_SETLOGINTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void SetConfirmCallback(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTSETTINGSVIEW_SETCONFIRMCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SetConfirmButtonText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTSETTINGSVIEW_SETCONFIRMBUTTONTEXT_OFFSET))(str, nullptr);
		}

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTSETTINGSVIEW_LOAD_OFFSET))(nullptr);
		}

		::System::Void SetInteractable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTSETTINGSVIEW_SETINTERACTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void OnConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTSETTINGSVIEW_ONCONFIRM_OFFSET))(nullptr);
		}

		::System::Void OnCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTSETTINGSVIEW_ONCANCEL_OFFSET))(nullptr);
		}

		::UnityEngine::Sprite* GetLoginTypeIcon()
		{
			return (return (::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTSETTINGSVIEW_GETLOGINTYPEICON_OFFSET))(nullptr);
		}

		::System::String* GetLoginTypeDescription()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTSETTINGSVIEW_GETLOGINTYPEDESCRIPTION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPACCOUNTSETTINGSVIEW_.CTOR_OFFSET))(nullptr);
		}

	};
}


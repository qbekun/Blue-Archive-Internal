#pragma once
#include "../../../../unitysdk.h"

#define NPA_EDITOR_AUTH_VIEW_NXPPLAYNOWACCOUNTSETTINGSVIEW_SETTITLE_OFFSET UNITYSDK_OFFSET(0x9CB6F90)
#define NPA_EDITOR_AUTH_VIEW_NXPPLAYNOWACCOUNTSETTINGSVIEW_SETDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x9CB6FA0)
#define NPA_EDITOR_AUTH_VIEW_NXPPLAYNOWACCOUNTSETTINGSVIEW_SETCONFIRMBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x9CB6FB0)
#define NPA_EDITOR_AUTH_VIEW_NXPPLAYNOWACCOUNTSETTINGSVIEW_SETLINKNEXONACCOUNTCALLBACK_OFFSET UNITYSDK_OFFSET(0x9CB6FC0)
#define NPA_EDITOR_AUTH_VIEW_NXPPLAYNOWACCOUNTSETTINGSVIEW_LOAD_OFFSET UNITYSDK_OFFSET(0x9CB6FD0)
#define NPA_EDITOR_AUTH_VIEW_NXPPLAYNOWACCOUNTSETTINGSVIEW_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x9CB73F0)
#define NPA_EDITOR_AUTH_VIEW_NXPPLAYNOWACCOUNTSETTINGSVIEW_ONLINKNEXONACCOUNT_OFFSET UNITYSDK_OFFSET(0x9CB7460)
#define NPA_EDITOR_AUTH_VIEW_NXPPLAYNOWACCOUNTSETTINGSVIEW_ONCANCEL_OFFSET UNITYSDK_OFFSET(0x9CB74A0)
#define NPA_EDITOR_AUTH_VIEW_NXPPLAYNOWACCOUNTSETTINGSVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CB74E0)

namespace NPA::Editor::Auth::View
{
	inline static constexpr unsigned int NXPPlayNowAccountSettingsView_TypeDefinitionIndex = 27193;

	class NXPPlayNowAccountSettingsView : public Il2CppObject
	{
	public:
		::System::String* accountSettingsViewPrefabUrl; // 0x48
		::System::String* accountSettingsHeaderBasePath; // 0x50
		::System::String* accountSettingsContentsBasePath; // 0x58
		::System::String* title; // 0x60
		::System::String* description; // 0x68
		::System::String* confirmButtonText; // 0x70
		::System::Action* linkNexonAccountCallback; // 0x78

		::System::Void SetTitle(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPPLAYNOWACCOUNTSETTINGSVIEW_SETTITLE_OFFSET))(str, nullptr);
		}

		::System::Void SetDescription(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPPLAYNOWACCOUNTSETTINGSVIEW_SETDESCRIPTION_OFFSET))(str, nullptr);
		}

		::System::Void SetConfirmButtonText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPPLAYNOWACCOUNTSETTINGSVIEW_SETCONFIRMBUTTONTEXT_OFFSET))(str, nullptr);
		}

		::System::Void SetLinkNexonAccountCallback(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPPLAYNOWACCOUNTSETTINGSVIEW_SETLINKNEXONACCOUNTCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPPLAYNOWACCOUNTSETTINGSVIEW_LOAD_OFFSET))(nullptr);
		}

		::System::Void SetInteractable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPPLAYNOWACCOUNTSETTINGSVIEW_SETINTERACTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void OnLinkNexonAccount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPPLAYNOWACCOUNTSETTINGSVIEW_ONLINKNEXONACCOUNT_OFFSET))(nullptr);
		}

		::System::Void OnCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPPLAYNOWACCOUNTSETTINGSVIEW_ONCANCEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_VIEW_NXPPLAYNOWACCOUNTSETTINGSVIEW_.CTOR_OFFSET))(nullptr);
		}

	};
}


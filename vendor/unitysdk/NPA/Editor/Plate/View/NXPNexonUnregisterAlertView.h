#pragma once
#include "../../../../unitysdk.h"

namespace NPA::Editor::Auth::Interface { class AccountDeletionAlertInfo; }

#define NPA_EDITOR_PLATE_VIEW_NXPNEXONUNREGISTERALERTVIEW_SETPCLIST_OFFSET UNITYSDK_OFFSET(0x9DCAE40)
#define NPA_EDITOR_PLATE_VIEW_NXPNEXONUNREGISTERALERTVIEW_SETMOBILELIST_OFFSET UNITYSDK_OFFSET(0x9DCAE50)
#define NPA_EDITOR_PLATE_VIEW_NXPNEXONUNREGISTERALERTVIEW_SETACCOUNTDELETIONALERTINFO_OFFSET UNITYSDK_OFFSET(0x9DCAE60)
#define NPA_EDITOR_PLATE_VIEW_NXPNEXONUNREGISTERALERTVIEW_SETCANCELCALLBACK_OFFSET UNITYSDK_OFFSET(0x9DCAE80)
#define NPA_EDITOR_PLATE_VIEW_NXPNEXONUNREGISTERALERTVIEW_SETCONFIRMCALLBACK_OFFSET UNITYSDK_OFFSET(0x9DCAEA0)
#define NPA_EDITOR_PLATE_VIEW_NXPNEXONUNREGISTERALERTVIEW_LOAD_OFFSET UNITYSDK_OFFSET(0x9DCAEC0)
#define NPA_EDITOR_PLATE_VIEW_NXPNEXONUNREGISTERALERTVIEW_SELECTIONGROUPEXIT_OFFSET UNITYSDK_OFFSET(0x9DCBDB0)
#define NPA_EDITOR_PLATE_VIEW_NXPNEXONUNREGISTERALERTVIEW_ONCLICK_OFFSET UNITYSDK_OFFSET(0x9DCBDF0)
#define NPA_EDITOR_PLATE_VIEW_NXPNEXONUNREGISTERALERTVIEW_ONCANCEL_OFFSET UNITYSDK_OFFSET(0x9DCBDD0)
#define NPA_EDITOR_PLATE_VIEW_NXPNEXONUNREGISTERALERTVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCBE30)

namespace NPA::Editor::Plate::View
{
	inline static constexpr unsigned int NXPNexonUnregisterAlertView_TypeDefinitionIndex = 26458;

	class NXPNexonUnregisterAlertView : public Il2CppObject
	{
	public:
		::System::String* plateImageBaseUrl; // 0x48
		::System::String* unregisterAlertViewPrefabUrl; // 0x50
		::System::String* unregisterAlertItemPrefabUrl; // 0x58
		::System::String* unregisterAlertHeaderBasePath; // 0x60
		::System::String* unregisterAlertContentsBasePath; // 0x68
		::System::String* unregisterAlertFooterBasePath; // 0x70
		Il2CppObject* pcList; // 0x78
		Il2CppObject* mobileList; // 0x80
		::NPA::Editor::Auth::Interface::AccountDeletionAlertInfo* deletionAlertInfo; // 0x88
		::System::Action* cancelCallback; // 0x90
		::System::Action* confirmCallback; // 0x98

		::System::Void SetPcList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPNEXONUNREGISTERALERTVIEW_SETPCLIST_OFFSET))(arg, nullptr);
		}

		::System::Void SetMobileList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPNEXONUNREGISTERALERTVIEW_SETMOBILELIST_OFFSET))(arg, nullptr);
		}

		::System::Void SetAccountDeletionAlertInfo(::NPA::Editor::Auth::Interface::AccountDeletionAlertInfo* arg)
		{
			((::System::Void(*)(::NPA::Editor::Auth::Interface::AccountDeletionAlertInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPNEXONUNREGISTERALERTVIEW_SETACCOUNTDELETIONALERTINFO_OFFSET))(arg, nullptr);
		}

		::System::Void SetCancelCallback(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPNEXONUNREGISTERALERTVIEW_SETCANCELCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SetConfirmCallback(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPNEXONUNREGISTERALERTVIEW_SETCONFIRMCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPNEXONUNREGISTERALERTVIEW_LOAD_OFFSET))(nullptr);
		}

		::System::Void SelectionGroupExit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPNEXONUNREGISTERALERTVIEW_SELECTIONGROUPEXIT_OFFSET))(nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPNEXONUNREGISTERALERTVIEW_ONCLICK_OFFSET))(nullptr);
		}

		::System::Void OnCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPNEXONUNREGISTERALERTVIEW_ONCANCEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPNEXONUNREGISTERALERTVIEW_.CTOR_OFFSET))(nullptr);
		}

	};
}


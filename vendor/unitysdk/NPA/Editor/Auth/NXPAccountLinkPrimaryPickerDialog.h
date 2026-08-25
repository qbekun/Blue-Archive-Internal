#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Auth::View { class NXPAccountLinkGameDataPickerView; }
namespace NPA::Editor::Auth::AccountLink { class Link; }

#define NPA_EDITOR_AUTH_NXPACCOUNTLINKPRIMARYPICKERDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CA8FE0)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKPRIMARYPICKERDIALOG_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x9CA9220)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKPRIMARYPICKERDIALOG_GET_ONITEMCLICKED_OFFSET UNITYSDK_OFFSET(0x9CA9430)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKPRIMARYPICKERDIALOG_SET_ONITEMCLICKED_OFFSET UNITYSDK_OFFSET(0x9CA9440)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKPRIMARYPICKERDIALOG_GET_ONPRIMARYCLICKED_OFFSET UNITYSDK_OFFSET(0x9CA9450)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKPRIMARYPICKERDIALOG_SET_ONPRIMARYCLICKED_OFFSET UNITYSDK_OFFSET(0x9CA9460)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKPRIMARYPICKERDIALOG_GET_ONABORT_OFFSET UNITYSDK_OFFSET(0x9CA9470)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKPRIMARYPICKERDIALOG_SET_ONABORT_OFFSET UNITYSDK_OFFSET(0x9CA9480)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKPRIMARYPICKERDIALOG__SETCALLBACK_B__1_0_OFFSET UNITYSDK_OFFSET(0x9CA9490)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKPRIMARYPICKERDIALOG__SETCALLBACK_B__1_1_OFFSET UNITYSDK_OFFSET(0x9CA94C0)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKPRIMARYPICKERDIALOG__SETCALLBACK_B__1_2_OFFSET UNITYSDK_OFFSET(0x9CA9500)

namespace NPA::Editor::Auth
{
	inline static constexpr unsigned int NXPAccountLinkPrimaryPickerDialog_TypeDefinitionIndex = 27155;

	class NXPAccountLinkPrimaryPickerDialog : public Il2CppObject
	{
	public:
		::NPA::Editor::Auth::View::NXPAccountLinkGameDataPickerView* _view; // 0x30
		Il2CppObject* _OnItemClicked_k__BackingField; // 0x38
		::System::Action* _OnPrimaryClicked_k__BackingField; // 0x40
		::System::Action* _OnAbort_k__BackingField; // 0x48

		::System::Void .ctor(::NPA::Editor::Auth::AccountLink::Link* arg, Il2CppObject* arg, EBrandLogoPolicy* arg)
		{
			((::System::Void(*)(::NPA::Editor::Auth::AccountLink::Link*, Il2CppObject*, EBrandLogoPolicy*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKPRIMARYPICKERDIALOG_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKPRIMARYPICKERDIALOG_SETCALLBACK_OFFSET))(nullptr);
		}

		Il2CppObject* get_OnItemClicked()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKPRIMARYPICKERDIALOG_GET_ONITEMCLICKED_OFFSET))(nullptr);
		}

		::System::Void set_OnItemClicked(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKPRIMARYPICKERDIALOG_SET_ONITEMCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Action* get_OnPrimaryClicked()
		{
			return (return (::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKPRIMARYPICKERDIALOG_GET_ONPRIMARYCLICKED_OFFSET))(nullptr);
		}

		::System::Void set_OnPrimaryClicked(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKPRIMARYPICKERDIALOG_SET_ONPRIMARYCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Action* get_OnAbort()
		{
			return (return (::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKPRIMARYPICKERDIALOG_GET_ONABORT_OFFSET))(nullptr);
		}

		::System::Void set_OnAbort(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKPRIMARYPICKERDIALOG_SET_ONABORT_OFFSET))(arg, nullptr);
		}

		::System::Void _SetCallback_b__1_0(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKPRIMARYPICKERDIALOG__SETCALLBACK_B__1_0_OFFSET))(arg, nullptr);
		}

		::System::Void _SetCallback_b__1_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKPRIMARYPICKERDIALOG__SETCALLBACK_B__1_1_OFFSET))(nullptr);
		}

		::System::Void _SetCallback_b__1_2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKPRIMARYPICKERDIALOG__SETCALLBACK_B__1_2_OFFSET))(nullptr);
		}

	};
}


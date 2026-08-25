#pragma once
#include "../../../unitysdk.h"

namespace NPA::Promotion { class NXPToyBanner; }
namespace NPA::Editor::Banner { class NXPBannerDialog; }

#define NPA_EDITOR_BANNER_NXPBANNERGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C636E0)
#define NPA_EDITOR_BANNER_NXPBANNERGROUP_SHOW_OFFSET UNITYSDK_OFFSET(0x9C63870)
#define NPA_EDITOR_BANNER_NXPBANNERGROUP_DISMISS_OFFSET UNITYSDK_OFFSET(0x9C63C80)
#define NPA_EDITOR_BANNER_NXPBANNERGROUP_CLOSE_OFFSET UNITYSDK_OFFSET(0x9C63D60)
#define NPA_EDITOR_BANNER_NXPBANNERGROUP_SHOWBANNERCONTENT_OFFSET UNITYSDK_OFFSET(0x9C63880)
#define NPA_EDITOR_BANNER_NXPBANNERGROUP_REQUESTCONTENT_OFFSET UNITYSDK_OFFSET(0x9C63DF0)
#define NPA_EDITOR_BANNER_NXPBANNERGROUP_SETBANNERDIALOG_OFFSET UNITYSDK_OFFSET(0x9C63F30)
#define NPA_EDITOR_BANNER_NXPBANNERGROUP_ONCLICKWORKONBUTTON_OFFSET UNITYSDK_OFFSET(0x9C64510)
#define NPA_EDITOR_BANNER_NXPBANNERGROUP_ONCLICKBANNERCONTENT_OFFSET UNITYSDK_OFFSET(0x9C645C0)
#define NPA_EDITOR_BANNER_NXPBANNERGROUP_ONCLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0x9C63C90)
#define NPA_EDITOR_BANNER_NXPBANNERGROUP_GETLINKVALUE_OFFSET UNITYSDK_OFFSET(0x9C64670)
#define NPA_EDITOR_BANNER_NXPBANNERGROUP_GETLINKTYPE_OFFSET UNITYSDK_OFFSET(0x9C64820)
#define NPA_EDITOR_BANNER_NXPBANNERGROUP__SETBANNERDIALOG_B__17_0_OFFSET UNITYSDK_OFFSET(0x9C64910)

namespace NPA::Editor::Banner
{
	inline static constexpr unsigned int NXPBannerGroup_TypeDefinitionIndex = 26917;

	class NXPBannerGroup : public Il2CppObject
	{
	public:
		::System::Int32 REQ_BANNER_CLICK_IMG; // 0x0
		::System::Int32 REQ_BANNER_CLICK_BTN; // 0x0
		Il2CppObject* onLoadBanner; // 0x10
		Il2CppObject* onToggleChanged; // 0x18
		Il2CppObject* onClickBanner; // 0x20
		Il2CppObject* onDismissBanner; // 0x28
		::System::Action* onCloseBanner; // 0x30
		Il2CppObject* bannerQueue; // 0x38
		Il2CppObject* bannerImages; // 0x40
		::NPA::Promotion::NXPToyBanner* currentBanner; // 0x48
		::NPA::Editor::Banner::NXPBannerDialog* currentDialog; // 0x50

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, ::System::Action* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPBANNERGROUP_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Show()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPBANNERGROUP_SHOW_OFFSET))(nullptr);
		}

		::System::Void Dismiss()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPBANNERGROUP_DISMISS_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPBANNERGROUP_CLOSE_OFFSET))(nullptr);
		}

		::System::Void ShowBannerContent(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPBANNERGROUP_SHOWBANNERCONTENT_OFFSET))(arg, nullptr);
		}

		::System::Void RequestContent(::System::Int32 arg, ::System::String* str, ::System::Action* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::System::Action*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPBANNERGROUP_REQUESTCONTENT_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void SetBannerDialog(::NPA::Promotion::NXPToyBanner* arg)
		{
			((::System::Void(*)(::NPA::Promotion::NXPToyBanner*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPBANNERGROUP_SETBANNERDIALOG_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickWorkOnButton(::NPA::Promotion::NXPToyBanner* arg)
		{
			((::System::Void(*)(::NPA::Promotion::NXPToyBanner*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPBANNERGROUP_ONCLICKWORKONBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickBannerContent(::NPA::Promotion::NXPToyBanner* arg)
		{
			((::System::Void(*)(::NPA::Promotion::NXPToyBanner*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPBANNERGROUP_ONCLICKBANNERCONTENT_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickCloseButton(::NPA::Promotion::NXPToyBanner* arg)
		{
			((::System::Void(*)(::NPA::Promotion::NXPToyBanner*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPBANNERGROUP_ONCLICKCLOSEBUTTON_OFFSET))(arg, nullptr);
		}

		::System::String* GetLinkValue(::NPA::Promotion::NXPToyBanner* arg)
		{
			return (return (::System::String*(*)(::NPA::Promotion::NXPToyBanner*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPBANNERGROUP_GETLINKVALUE_OFFSET))(arg, nullptr);
		}

		::System::String* GetLinkType(::NPA::Promotion::NXPToyBanner* arg)
		{
			return (return (::System::String*(*)(::NPA::Promotion::NXPToyBanner*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPBANNERGROUP_GETLINKTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void _SetBannerDialog_b__17_0(::System::Int32 arg, ::System::String* str, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPBANNERGROUP__SETBANNERDIALOG_B__17_0_OFFSET))(arg, str, arg, arg, nullptr);
		}

	};
}


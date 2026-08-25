#pragma once
#include "../../../unitysdk.h"

namespace NPA::Promotion { class NXPToyBanner; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace NPA::Editor { class NXPSelectionGroup; }
namespace UnityEngine { class GameObject; }
namespace NPA::Editor::Banner { class NXPClosingBannerDialog; }
namespace UnityEngine::UI { class Selectable; }

#define NPA_EDITOR_BANNER_NXPCLOSINGBANNERDIALOG_GET_SELECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x9C67710)
#define NPA_EDITOR_BANNER_NXPCLOSINGBANNERDIALOG_SET_SELECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x9C67720)
#define NPA_EDITOR_BANNER_NXPCLOSINGBANNERDIALOG_NEWINSTANCE_OFFSET UNITYSDK_OFFSET(0x9C67730)
#define NPA_EDITOR_BANNER_NXPCLOSINGBANNERDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C67790)
#define NPA_EDITOR_BANNER_NXPCLOSINGBANNERDIALOG_CREATESELECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x9C68240)
#define NPA_EDITOR_BANNER_NXPCLOSINGBANNERDIALOG_SELECTIONGROUPEXIT_OFFSET UNITYSDK_OFFSET(0x9C683E0)
#define NPA_EDITOR_BANNER_NXPCLOSINGBANNERDIALOG_HANDLECLOSINGBANNEREVENT_OFFSET UNITYSDK_OFFSET(0x9C684C0)
#define NPA_EDITOR_BANNER_NXPCLOSINGBANNERDIALOG_ONBACKPRESSED_OFFSET UNITYSDK_OFFSET(0x9C68450)
#define NPA_EDITOR_BANNER_NXPCLOSINGBANNERDIALOG_SETENDINGBANNERDATA_OFFSET UNITYSDK_OFFSET(0x9C67DF0)
#define NPA_EDITOR_BANNER_NXPCLOSINGBANNERDIALOG_SETDEFAULTCLOSINGBANNERIMAGE_OFFSET UNITYSDK_OFFSET(0x9C67F00)
#define NPA_EDITOR_BANNER_NXPCLOSINGBANNERDIALOG_INITIALIZECUSTOMBUTTON_OFFSET UNITYSDK_OFFSET(0x9C680C0)
#define NPA_EDITOR_BANNER_NXPCLOSINGBANNERDIALOG_DISMISS_OFFSET UNITYSDK_OFFSET(0x9C685A0)
#define NPA_EDITOR_BANNER_NXPCLOSINGBANNERDIALOG_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9C68600)
#define NPA_EDITOR_BANNER_NXPCLOSINGBANNERDIALOG__.CTOR_B__9_2_OFFSET UNITYSDK_OFFSET(0x9C68640)
#define NPA_EDITOR_BANNER_NXPCLOSINGBANNERDIALOG__.CTOR_B__9_0_OFFSET UNITYSDK_OFFSET(0x9C68650)
#define NPA_EDITOR_BANNER_NXPCLOSINGBANNERDIALOG__INITIALIZECUSTOMBUTTON_B__16_0_OFFSET UNITYSDK_OFFSET(0x9C68660)

namespace NPA::Editor::Banner
{
	inline static constexpr unsigned int NXPClosingBannerDialog_TypeDefinitionIndex = 26928;

	class NXPClosingBannerDialog : public Il2CppObject
	{
	public:
		::System::Int32 WORK_ON_BTN_TYPE_NONE; // 0x0
		::NPA::Promotion::NXPToyBanner* endingBanner; // 0x10
		::UnityEngine::Transform* bannerImageTransform; // 0x18
		::UnityEngine::UI::Image* bannerImage; // 0x20
		::NPA::Editor::NXPSelectionGroup* selectionGroup; // 0x28
		::UnityEngine::GameObject* gameObject; // 0x30

		::NPA::Editor::NXPSelectionGroup* get_SelectionGroup()
		{
			return (return (::NPA::Editor::NXPSelectionGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPCLOSINGBANNERDIALOG_GET_SELECTIONGROUP_OFFSET))(nullptr);
		}

		::System::Void set_SelectionGroup(::NPA::Editor::NXPSelectionGroup* arg)
		{
			((::System::Void(*)(::NPA::Editor::NXPSelectionGroup*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPCLOSINGBANNERDIALOG_SET_SELECTIONGROUP_OFFSET))(arg, nullptr);
		}

		::NPA::Editor::Banner::NXPClosingBannerDialog* NewInstance(::System::String* str)
		{
			return (return (::NPA::Editor::Banner::NXPClosingBannerDialog*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPCLOSINGBANNERDIALOG_NEWINSTANCE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPCLOSINGBANNERDIALOG_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void CreateSelectionGroup(::UnityEngine::GameObject* arg, ::UnityEngine::UI::Selectable* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::UI::Selectable*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPCLOSINGBANNERDIALOG_CREATESELECTIONGROUP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SelectionGroupExit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPCLOSINGBANNERDIALOG_SELECTIONGROUPEXIT_OFFSET))(nullptr);
		}

		::System::Void handleClosingBannerEvent(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPCLOSINGBANNERDIALOG_HANDLECLOSINGBANNEREVENT_OFFSET))(arg, nullptr);
		}

		::System::Void OnBackPressed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPCLOSINGBANNERDIALOG_ONBACKPRESSED_OFFSET))(nullptr);
		}

		::System::Void SetEndingBannerData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPCLOSINGBANNERDIALOG_SETENDINGBANNERDATA_OFFSET))(str, nullptr);
		}

		::System::Void SetDefaultClosingBannerImage()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPCLOSINGBANNERDIALOG_SETDEFAULTCLOSINGBANNERIMAGE_OFFSET))(nullptr);
		}

		::System::Void InitializeCustomButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPCLOSINGBANNERDIALOG_INITIALIZECUSTOMBUTTON_OFFSET))(nullptr);
		}

		::System::Void Dismiss()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPCLOSINGBANNERDIALOG_DISMISS_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPCLOSINGBANNERDIALOG_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void _.ctor_b__9_2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPCLOSINGBANNERDIALOG__.CTOR_B__9_2_OFFSET))(nullptr);
		}

		::System::Void _.ctor_b__9_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPCLOSINGBANNERDIALOG__.CTOR_B__9_0_OFFSET))(nullptr);
		}

		::System::Void _InitializeCustomButton_b__16_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPCLOSINGBANNERDIALOG__INITIALIZECUSTOMBUTTON_B__16_0_OFFSET))(nullptr);
		}

	};
}


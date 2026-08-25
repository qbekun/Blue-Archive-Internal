#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::UI { class ScrollRect; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Selectable; }

#define NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDITEMVIEW_SETDIMVISIBLE_OFFSET UNITYSDK_OFFSET(0x9C11490)
#define NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDITEMVIEW_SETTITLE_OFFSET UNITYSDK_OFFSET(0x9C114A0)
#define NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDITEMVIEW_SETITEMTITLE_OFFSET UNITYSDK_OFFSET(0x9C114B0)
#define NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDITEMVIEW_SETTERMSTITLE_OFFSET UNITYSDK_OFFSET(0x9C114D0)
#define NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDITEMVIEW_SETTOTALPRICETITLE_OFFSET UNITYSDK_OFFSET(0x9C114F0)
#define NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDITEMVIEW_SETTOTALPRICE_OFFSET UNITYSDK_OFFSET(0x9C11510)
#define NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDITEMVIEW_SETITEMDETAILLISTTITLE_OFFSET UNITYSDK_OFFSET(0x9C11530)
#define NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDITEMVIEW_SETITEMDETAILLIST_OFFSET UNITYSDK_OFFSET(0x9C11550)
#define NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDITEMVIEW_SETTERMSLIST_OFFSET UNITYSDK_OFFSET(0x9C11570)
#define NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDITEMVIEW_SETCONFIRMBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x9C11590)
#define NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDITEMVIEW_SETONCONFIRM_OFFSET UNITYSDK_OFFSET(0x9C115B0)
#define NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDITEMVIEW_SETONCLOSE_OFFSET UNITYSDK_OFFSET(0x9C115D0)
#define NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDITEMVIEW_SETONCLICKTERMS_OFFSET UNITYSDK_OFFSET(0x9C115F0)
#define NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDITEMVIEW_LOAD_OFFSET UNITYSDK_OFFSET(0x9C11610)
#define NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDITEMVIEW_UPDATESCROLLVIEWCONTENTSSIZE_OFFSET UNITYSDK_OFFSET(0x9C127C0)
#define NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDITEMVIEW_ADDSCROLLVIEWFADER_OFFSET UNITYSDK_OFFSET(0x9C13870)
#define NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDITEMVIEW_UPDATETHEME_OFFSET UNITYSDK_OFFSET(0x9C12BD0)
#define NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDITEMVIEW_CREATESELECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x9C139B0)
#define NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDITEMVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C0E3C0)
#define NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDITEMVIEW__LOAD_B__32_0_OFFSET UNITYSDK_OFFSET(0x9C13BE0)
#define NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDITEMVIEW__LOAD_B__32_1_OFFSET UNITYSDK_OFFSET(0x9C13C00)

namespace NPA::Editor::Policy::View
{
	inline static constexpr unsigned int NXPSettlementFundItemView_TypeDefinitionIndex = 26585;

	class NXPSettlementFundItemView : public Il2CppObject
	{
	public:
		::System::String* itemViewPrefabUrl; // 0x48
		::System::String* itemDetailPrefabUrl; // 0x50
		::System::String* termsPrefabUrl; // 0x58
		::System::String* itemConfirmHeaderBasePath; // 0x60
		::System::String* itemConfirmContentsBasePath; // 0x68
		::System::String* itemConfirmBottomBasePath; // 0x70
		::System::Boolean dimVisible; // 0x78
		::System::String* title; // 0x80
		::System::String* itemTitle; // 0x88
		::System::String* termsTitle; // 0x90
		::System::String* totalPriceTitle; // 0x98
		::System::String* totalPrice; // 0xA0
		::System::String* itemDetailListTitle; // 0xA8
		Il2CppObject* itemDetailList; // 0xB0
		Il2CppObject* termsList; // 0xB8
		::System::String* confirmButtonText; // 0xC0
		::System::Action* onConfirm; // 0xC8
		::System::Action* onClose; // 0xD0
		Il2CppObject* onClickTerms; // 0xD8

		::System::Void SetDimVisible(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDITEMVIEW_SETDIMVISIBLE_OFFSET))(arg, nullptr);
		}

		::System::Void SetTitle(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDITEMVIEW_SETTITLE_OFFSET))(str, nullptr);
		}

		::System::Void SetItemTitle(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDITEMVIEW_SETITEMTITLE_OFFSET))(str, nullptr);
		}

		::System::Void SetTermsTitle(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDITEMVIEW_SETTERMSTITLE_OFFSET))(str, nullptr);
		}

		::System::Void SetTotalPriceTitle(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDITEMVIEW_SETTOTALPRICETITLE_OFFSET))(str, nullptr);
		}

		::System::Void SetTotalPrice(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDITEMVIEW_SETTOTALPRICE_OFFSET))(str, nullptr);
		}

		::System::Void SetItemDetailListTitle(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDITEMVIEW_SETITEMDETAILLISTTITLE_OFFSET))(str, nullptr);
		}

		::System::Void SetItemDetailList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDITEMVIEW_SETITEMDETAILLIST_OFFSET))(arg, nullptr);
		}

		::System::Void SetTermsList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDITEMVIEW_SETTERMSLIST_OFFSET))(arg, nullptr);
		}

		::System::Void SetConfirmButtonText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDITEMVIEW_SETCONFIRMBUTTONTEXT_OFFSET))(str, nullptr);
		}

		::System::Void SetOnConfirm(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDITEMVIEW_SETONCONFIRM_OFFSET))(arg, nullptr);
		}

		::System::Void SetOnClose(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDITEMVIEW_SETONCLOSE_OFFSET))(arg, nullptr);
		}

		::System::Void SetOnClickTerms(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDITEMVIEW_SETONCLICKTERMS_OFFSET))(arg, nullptr);
		}

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDITEMVIEW_LOAD_OFFSET))(nullptr);
		}

		::System::Void UpdateScrollViewContentsSize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDITEMVIEW_UPDATESCROLLVIEWCONTENTSSIZE_OFFSET))(nullptr);
		}

		::System::Void AddScrollViewFader(::UnityEngine::UI::ScrollRect* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::ScrollRect*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDITEMVIEW_ADDSCROLLVIEWFADER_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateTheme()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDITEMVIEW_UPDATETHEME_OFFSET))(nullptr);
		}

		::System::Void CreateSelectionGroup(::UnityEngine::GameObject* arg, ::UnityEngine::UI::Selectable* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::UI::Selectable*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDITEMVIEW_CREATESELECTIONGROUP_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDITEMVIEW_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Load_b__32_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDITEMVIEW__LOAD_B__32_0_OFFSET))(nullptr);
		}

		::System::Void _Load_b__32_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDITEMVIEW__LOAD_B__32_1_OFFSET))(nullptr);
		}

	};
}


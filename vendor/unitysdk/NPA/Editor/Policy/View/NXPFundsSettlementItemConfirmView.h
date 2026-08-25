#pragma once
#include "../../../../unitysdk.h"

#define NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTITEMCONFIRMVIEW_SETDIMVISIBLE_OFFSET UNITYSDK_OFFSET(0x9C0F690)
#define NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTITEMCONFIRMVIEW_SETTITLE_OFFSET UNITYSDK_OFFSET(0x9C0F6A0)
#define NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTITEMCONFIRMVIEW_SETITEMNAME_OFFSET UNITYSDK_OFFSET(0x9C0C5E0)
#define NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTITEMCONFIRMVIEW_SETITEMPRICE_OFFSET UNITYSDK_OFFSET(0x9C0C620)
#define NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTITEMCONFIRMVIEW_SETTERMSLIST_OFFSET UNITYSDK_OFFSET(0x9C0F6B0)
#define NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTITEMCONFIRMVIEW_SETCONFIRMBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x9C0F6D0)
#define NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTITEMCONFIRMVIEW_SETONCLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x9C0F6F0)
#define NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTITEMCONFIRMVIEW_LOAD_OFFSET UNITYSDK_OFFSET(0x9C0F710)
#define NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTITEMCONFIRMVIEW_ONCONFIRM_OFFSET UNITYSDK_OFFSET(0x9C10130)
#define NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTITEMCONFIRMVIEW_ONCLICKTERMS_OFFSET UNITYSDK_OFFSET(0x9C101A0)
#define NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTITEMCONFIRMVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C0C4E0)

namespace NPA::Editor::Policy::View
{
	inline static constexpr unsigned int NXPFundsSettlementItemConfirmView_TypeDefinitionIndex = 26581;

	class NXPFundsSettlementItemConfirmView : public Il2CppObject
	{
	public:
		::System::String* fundsSettlementItemConfirmViewPrefabUrl; // 0x48
		::System::String* fundsSettlementTermsPrefabUrl; // 0x50
		::System::String* fundsSettlementItemConfirmHeaderBasePath; // 0x58
		::System::String* fundsSettlementItemConfirmContentsBasePath; // 0x60
		::System::Boolean dimVisible; // 0x68
		::System::String* title; // 0x70
		::System::String* itemNameTitle; // 0x78
		::System::String* itemName; // 0x80
		::System::String* itemPriceTitle; // 0x88
		::System::String* itemPrice; // 0x90
		::System::String* confirmButtonText; // 0x98
		Il2CppObject* termsList; // 0xA0
		Il2CppObject* clickCallback; // 0xA8

		::System::Void SetDimVisible(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTITEMCONFIRMVIEW_SETDIMVISIBLE_OFFSET))(arg, nullptr);
		}

		::System::Void SetTitle(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTITEMCONFIRMVIEW_SETTITLE_OFFSET))(str, nullptr);
		}

		::System::Void SetItemName(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTITEMCONFIRMVIEW_SETITEMNAME_OFFSET))(str, str, nullptr);
		}

		::System::Void SetItemPrice(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTITEMCONFIRMVIEW_SETITEMPRICE_OFFSET))(str, str, nullptr);
		}

		::System::Void SetTermsList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTITEMCONFIRMVIEW_SETTERMSLIST_OFFSET))(arg, nullptr);
		}

		::System::Void SetConfirmButtonText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTITEMCONFIRMVIEW_SETCONFIRMBUTTONTEXT_OFFSET))(str, nullptr);
		}

		::System::Void SetOnClickCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTITEMCONFIRMVIEW_SETONCLICKCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTITEMCONFIRMVIEW_LOAD_OFFSET))(nullptr);
		}

		::System::Void OnConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTITEMCONFIRMVIEW_ONCONFIRM_OFFSET))(nullptr);
		}

		::System::Void OnClickTerms(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTITEMCONFIRMVIEW_ONCLICKTERMS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTITEMCONFIRMVIEW_.CTOR_OFFSET))(nullptr);
		}

	};
}


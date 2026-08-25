#pragma once
#include "../../../../unitysdk.h"

#define NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTCONFIRMVIEW_SETTITLE_OFFSET UNITYSDK_OFFSET(0x9C0EFF0)
#define NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTCONFIRMVIEW_SETDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x9C0F000)
#define NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTCONFIRMVIEW_SETCONFIRMBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x9C0F010)
#define NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTCONFIRMVIEW_SETCANCELBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x9C0F020)
#define NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTCONFIRMVIEW_SETONCLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x9C0F030)
#define NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTCONFIRMVIEW_LOAD_OFFSET UNITYSDK_OFFSET(0x9C0F040)
#define NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTCONFIRMVIEW_ONCONFIRM_OFFSET UNITYSDK_OFFSET(0x9C0F650)
#define NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTCONFIRMVIEW_ONCANCEL_OFFSET UNITYSDK_OFFSET(0x9C0F670)
#define NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTCONFIRMVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C0AE00)

namespace NPA::Editor::Policy::View
{
	inline static constexpr unsigned int NXPFundsSettlementConfirmView_TypeDefinitionIndex = 26579;

	class NXPFundsSettlementConfirmView : public Il2CppObject
	{
	public:
		::System::String* fundsSettlementConfirmViewPrefabUrl; // 0x48
		::System::String* fundsSettlementConfirmHeaderBasePath; // 0x50
		::System::String* fundsSettlementConfirmContentsBasePath; // 0x58
		::System::String* title; // 0x60
		::System::String* description; // 0x68
		::System::String* confirmButtonText; // 0x70
		::System::String* cancelButtonText; // 0x78
		Il2CppObject* clickCallback; // 0x80

		::System::Void SetTitle(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTCONFIRMVIEW_SETTITLE_OFFSET))(str, nullptr);
		}

		::System::Void SetDescription(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTCONFIRMVIEW_SETDESCRIPTION_OFFSET))(str, nullptr);
		}

		::System::Void SetConfirmButtonText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTCONFIRMVIEW_SETCONFIRMBUTTONTEXT_OFFSET))(str, nullptr);
		}

		::System::Void SetCancelButtonText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTCONFIRMVIEW_SETCANCELBUTTONTEXT_OFFSET))(str, nullptr);
		}

		::System::Void SetOnClickCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTCONFIRMVIEW_SETONCLICKCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTCONFIRMVIEW_LOAD_OFFSET))(nullptr);
		}

		::System::Void OnConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTCONFIRMVIEW_ONCONFIRM_OFFSET))(nullptr);
		}

		::System::Void OnCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTCONFIRMVIEW_ONCANCEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTCONFIRMVIEW_.CTOR_OFFSET))(nullptr);
		}

	};
}


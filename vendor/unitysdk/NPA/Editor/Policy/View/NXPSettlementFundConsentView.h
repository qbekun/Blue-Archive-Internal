#pragma once
#include "../../../../unitysdk.h"

#define NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDCONSENTVIEW_SETTITLE_OFFSET UNITYSDK_OFFSET(0x9C10DF0)
#define NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDCONSENTVIEW_SETDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x9C10E00)
#define NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDCONSENTVIEW_SETCONFIRMBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x9C10E10)
#define NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDCONSENTVIEW_SETCANCELBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x9C10E20)
#define NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDCONSENTVIEW_SETONCONFIRM_OFFSET UNITYSDK_OFFSET(0x9C10E30)
#define NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDCONSENTVIEW_SETONDECLINE_OFFSET UNITYSDK_OFFSET(0x9C10E40)
#define NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDCONSENTVIEW_SETONBACK_OFFSET UNITYSDK_OFFSET(0x9C10E50)
#define NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDCONSENTVIEW_SETONCLOSE_OFFSET UNITYSDK_OFFSET(0x9C10E60)
#define NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDCONSENTVIEW_LOAD_OFFSET UNITYSDK_OFFSET(0x9C10E70)
#define NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDCONSENTVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C0DBA0)
#define NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDCONSENTVIEW__LOAD_B__19_0_OFFSET UNITYSDK_OFFSET(0x9C11410)
#define NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDCONSENTVIEW__LOAD_B__19_1_OFFSET UNITYSDK_OFFSET(0x9C11430)
#define NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDCONSENTVIEW__LOAD_B__19_2_OFFSET UNITYSDK_OFFSET(0x9C11450)
#define NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDCONSENTVIEW__LOAD_B__19_3_OFFSET UNITYSDK_OFFSET(0x9C11470)

namespace NPA::Editor::Policy::View
{
	inline static constexpr unsigned int NXPSettlementFundConsentView_TypeDefinitionIndex = 26583;

	class NXPSettlementFundConsentView : public Il2CppObject
	{
	public:
		::System::String* consentViewPrefabUrl; // 0x0
		::System::String* consentHeaderBasePath; // 0x0
		::System::String* consentContentsBasePath; // 0x0
		::System::String* title; // 0x48
		::System::String* descriptuion; // 0x50
		::System::String* confirmButtonText; // 0x58
		::System::String* cancelButtonText; // 0x60
		::System::Action* onConfirm; // 0x68
		::System::Action* onDecline; // 0x70
		::System::Action* onBack; // 0x78
		::System::Action* onClose; // 0x80

		::System::Void SetTitle(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDCONSENTVIEW_SETTITLE_OFFSET))(str, nullptr);
		}

		::System::Void SetDescription(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDCONSENTVIEW_SETDESCRIPTION_OFFSET))(str, nullptr);
		}

		::System::Void SetConfirmButtonText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDCONSENTVIEW_SETCONFIRMBUTTONTEXT_OFFSET))(str, nullptr);
		}

		::System::Void SetCancelButtonText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDCONSENTVIEW_SETCANCELBUTTONTEXT_OFFSET))(str, nullptr);
		}

		::System::Void SetOnConfirm(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDCONSENTVIEW_SETONCONFIRM_OFFSET))(arg, nullptr);
		}

		::System::Void SetOnDecline(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDCONSENTVIEW_SETONDECLINE_OFFSET))(arg, nullptr);
		}

		::System::Void SetOnBack(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDCONSENTVIEW_SETONBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SetOnClose(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDCONSENTVIEW_SETONCLOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDCONSENTVIEW_LOAD_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDCONSENTVIEW_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Load_b__19_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDCONSENTVIEW__LOAD_B__19_0_OFFSET))(nullptr);
		}

		::System::Void _Load_b__19_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDCONSENTVIEW__LOAD_B__19_1_OFFSET))(nullptr);
		}

		::System::Void _Load_b__19_2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDCONSENTVIEW__LOAD_B__19_2_OFFSET))(nullptr);
		}

		::System::Void _Load_b__19_3()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPSETTLEMENTFUNDCONSENTVIEW__LOAD_B__19_3_OFFSET))(nullptr);
		}

	};
}


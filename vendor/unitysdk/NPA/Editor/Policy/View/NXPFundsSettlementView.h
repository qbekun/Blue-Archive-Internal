#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::UI { class InputField; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Color; }

#define NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTVIEW_SETTITLE_OFFSET UNITYSDK_OFFSET(0x9C102C0)
#define NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTVIEW_SETDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x9C102D0)
#define NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTVIEW_SETONCLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x9C102E0)
#define NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTVIEW_SETCONFIRMBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x9C102F0)
#define NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTVIEW_SETYEARDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x9C10300)
#define NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTVIEW_SETMONTHDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x9C10310)
#define NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTVIEW_LOAD_OFFSET UNITYSDK_OFFSET(0x9C10330)
#define NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTVIEW_SELECTIONGROUPENTER_OFFSET UNITYSDK_OFFSET(0x9C10BB0)
#define NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTVIEW_ONCONFIRM_OFFSET UNITYSDK_OFFSET(0x9C10BF0)
#define NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTVIEW_ENABLECONFIRMBUTTON_OFFSET UNITYSDK_OFFSET(0x9C10C50)
#define NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTVIEW_SETCONFIRMBUTTONUI_OFFSET UNITYSDK_OFFSET(0x9C10A70)
#define NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C0B9C0)
#define NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTVIEW__LOAD_B__20_0_OFFSET UNITYSDK_OFFSET(0x9C10DD0)
#define NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTVIEW__LOAD_B__20_1_OFFSET UNITYSDK_OFFSET(0x9C10DE0)

namespace NPA::Editor::Policy::View
{
	inline static constexpr unsigned int NXPFundsSettlementView_TypeDefinitionIndex = 26582;

	class NXPFundsSettlementView : public Il2CppObject
	{
	public:
		::System::String* fundsSettlementViewPrefabUrl; // 0x48
		::System::String* fundsSettlementHeaderBasePath; // 0x50
		::System::String* fundsSettlementContentsBasePath; // 0x58
		::System::String* title; // 0x60
		::System::String* description; // 0x68
		Il2CppObject* clickCallback; // 0x70
		::System::String* confirmButtonText; // 0x78
		::System::String* yearDescription; // 0x80
		::System::String* monthDescription; // 0x88
		::UnityEngine::UI::InputField* yearInputField; // 0x90
		::UnityEngine::UI::InputField* monthInputField; // 0x98
		::UnityEngine::Transform* confirmButtonTransform; // 0xA0
		::UnityEngine::Color* disableConfirmButtonTextColor; // 0xA8
		::UnityEngine::Color* disableConfirmButtonBackgroundColor; // 0xB8

		::System::Void SetTitle(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTVIEW_SETTITLE_OFFSET))(str, nullptr);
		}

		::System::Void SetDescription(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTVIEW_SETDESCRIPTION_OFFSET))(str, nullptr);
		}

		::System::Void SetOnClickCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTVIEW_SETONCLICKCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SetConfirmButtonText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTVIEW_SETCONFIRMBUTTONTEXT_OFFSET))(str, nullptr);
		}

		::System::Void SetYearDescription(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTVIEW_SETYEARDESCRIPTION_OFFSET))(str, nullptr);
		}

		::System::Void SetMonthDescription(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTVIEW_SETMONTHDESCRIPTION_OFFSET))(str, nullptr);
		}

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTVIEW_LOAD_OFFSET))(nullptr);
		}

		::System::Void SelectionGroupEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTVIEW_SELECTIONGROUPENTER_OFFSET))(nullptr);
		}

		::System::Void OnConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTVIEW_ONCONFIRM_OFFSET))(nullptr);
		}

		::System::Void EnableConfirmButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTVIEW_ENABLECONFIRMBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetConfirmButtonUI(::UnityEngine::Color* arg, ::UnityEngine::Color* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::UnityEngine::Color*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTVIEW_SETCONFIRMBUTTONUI_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTVIEW_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Load_b__20_0(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTVIEW__LOAD_B__20_0_OFFSET))(str, nullptr);
		}

		::System::Void _Load_b__20_1(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_VIEW_NXPFUNDSSETTLEMENTVIEW__LOAD_B__20_1_OFFSET))(str, nullptr);
		}

	};
}


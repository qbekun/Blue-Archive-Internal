#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor { class NXToyLocaleManager; }
namespace NPA::Editor::Policy::View { class NXPFundsSettlementItemConfirmView; }
namespace NPA::Editor::Policy::Result { class NXPToyFundsSettlementPolicyResult; }

#define NPA_EDITOR_POLICY_NXPFUNDSSETTLEMENTITEMCONFIRMDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C0B230)
#define NPA_EDITOR_POLICY_NXPFUNDSSETTLEMENTITEMCONFIRMDIALOG_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x9C0C660)
#define NPA_EDITOR_POLICY_NXPFUNDSSETTLEMENTITEMCONFIRMDIALOG_SHOWCONFIRMALERT_OFFSET UNITYSDK_OFFSET(0x9C0C750)
#define NPA_EDITOR_POLICY_NXPFUNDSSETTLEMENTITEMCONFIRMDIALOG_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x9C0C990)
#define NPA_EDITOR_POLICY_NXPFUNDSSETTLEMENTITEMCONFIRMDIALOG_GETSTRINGRESOURCE_OFFSET UNITYSDK_OFFSET(0x9C0C5B0)
#define NPA_EDITOR_POLICY_NXPFUNDSSETTLEMENTITEMCONFIRMDIALOG__SETCALLBACK_B__8_0_OFFSET UNITYSDK_OFFSET(0x9C0C9D0)
#define NPA_EDITOR_POLICY_NXPFUNDSSETTLEMENTITEMCONFIRMDIALOG__SETCALLBACK_B__8_1_OFFSET UNITYSDK_OFFSET(0x9C0CAD0)
#define NPA_EDITOR_POLICY_NXPFUNDSSETTLEMENTITEMCONFIRMDIALOG__SHOWCONFIRMALERT_B__9_0_OFFSET UNITYSDK_OFFSET(0x9C0CBF0)

namespace NPA::Editor::Policy
{
	inline static constexpr unsigned int NXPFundsSettlementItemConfirmDialog_TypeDefinitionIndex = 26572;

	class NXPFundsSettlementItemConfirmDialog : public Il2CppObject
	{
	public:
		::System::String* itemName; // 0x30
		::System::String* itemPrice; // 0x38
		Il2CppObject* callback; // 0x40
		Il2CppObject* policyTerms; // 0x48
		::NPA::Editor::NXToyLocaleManager* localeManager; // 0x50
		::System::String* localeCode; // 0x58
		::NPA::Editor::Policy::View::NXPFundsSettlementItemConfirmView* fundsSettlementItemConfirmView; // 0x60

		::System::Void .ctor(::System::Boolean arg, ::System::String* str, ::System::String* str, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::String*, ::System::String*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_NXPFUNDSSETTLEMENTITEMCONFIRMDIALOG_.CTOR_OFFSET))(arg, str, str, arg, arg, nullptr);
		}

		::System::Void SetCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_NXPFUNDSSETTLEMENTITEMCONFIRMDIALOG_SETCALLBACK_OFFSET))(nullptr);
		}

		::System::Void ShowConfirmAlert()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_NXPFUNDSSETTLEMENTITEMCONFIRMDIALOG_SHOWCONFIRMALERT_OFFSET))(nullptr);
		}

		::System::Void OnClose(::NPA::Editor::Policy::Result::NXPToyFundsSettlementPolicyResult* arg)
		{
			((::System::Void(*)(::NPA::Editor::Policy::Result::NXPToyFundsSettlementPolicyResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_NXPFUNDSSETTLEMENTITEMCONFIRMDIALOG_ONCLOSE_OFFSET))(arg, nullptr);
		}

		::System::String* GetStringResource(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_NXPFUNDSSETTLEMENTITEMCONFIRMDIALOG_GETSTRINGRESOURCE_OFFSET))(str, nullptr);
		}

		::System::Void _SetCallback_b__8_0(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_NXPFUNDSSETTLEMENTITEMCONFIRMDIALOG__SETCALLBACK_B__8_0_OFFSET))(str, arg, nullptr);
		}

		::System::Void _SetCallback_b__8_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_NXPFUNDSSETTLEMENTITEMCONFIRMDIALOG__SETCALLBACK_B__8_1_OFFSET))(nullptr);
		}

		::System::Void _ShowConfirmAlert_b__9_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_NXPFUNDSSETTLEMENTITEMCONFIRMDIALOG__SHOWCONFIRMALERT_B__9_0_OFFSET))(nullptr);
		}

	};
}


#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Policy::View { class NXPFundsSettlementView; }
namespace NPA::Editor { class NXToyLocaleManager; }
namespace NPA::Editor::Policy::Result { class NXPToyFundsSettlementPolicyResult; }

#define NPA_EDITOR_POLICY_NXPFUNDSSETTLEMENTDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C0B6D0)
#define NPA_EDITOR_POLICY_NXPFUNDSSETTLEMENTDIALOG_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x9C0BAA0)
#define NPA_EDITOR_POLICY_NXPFUNDSSETTLEMENTDIALOG_VALIDATEPOLICY_OFFSET UNITYSDK_OFFSET(0x9C0BB90)
#define NPA_EDITOR_POLICY_NXPFUNDSSETTLEMENTDIALOG_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x9C0BC40)
#define NPA_EDITOR_POLICY_NXPFUNDSSETTLEMENTDIALOG_GETSTRINGRESOURCE_OFFSET UNITYSDK_OFFSET(0x9C0BA70)
#define NPA_EDITOR_POLICY_NXPFUNDSSETTLEMENTDIALOG__SETCALLBACK_B__8_0_OFFSET UNITYSDK_OFFSET(0x9C0BC80)
#define NPA_EDITOR_POLICY_NXPFUNDSSETTLEMENTDIALOG__SETCALLBACK_B__8_1_OFFSET UNITYSDK_OFFSET(0x9C0BF60)
#define NPA_EDITOR_POLICY_NXPFUNDSSETTLEMENTDIALOG__VALIDATEPOLICY_B__9_0_OFFSET UNITYSDK_OFFSET(0x9C0C080)

namespace NPA::Editor::Policy
{
	inline static constexpr unsigned int NXPFundsSettlementDialog_TypeDefinitionIndex = 26570;

	class NXPFundsSettlementDialog : public Il2CppObject
	{
	public:
		::System::String* itemName; // 0x30
		::System::String* itemPrice; // 0x38
		Il2CppObject* policyTerms; // 0x40
		Il2CppObject* callback; // 0x48
		::NPA::Editor::Policy::View::NXPFundsSettlementView* fundsSettlementView; // 0x50
		::NPA::Editor::NXToyLocaleManager* localeManager; // 0x58
		::System::String* localeCode; // 0x60

		::System::Void .ctor(::System::String* str, ::System::String* str, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_NXPFUNDSSETTLEMENTDIALOG_.CTOR_OFFSET))(str, str, arg, arg, nullptr);
		}

		::System::Void SetCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_NXPFUNDSSETTLEMENTDIALOG_SETCALLBACK_OFFSET))(nullptr);
		}

		::System::Void ValidatePolicy(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_NXPFUNDSSETTLEMENTDIALOG_VALIDATEPOLICY_OFFSET))(str, nullptr);
		}

		::System::Void OnClose(::NPA::Editor::Policy::Result::NXPToyFundsSettlementPolicyResult* arg)
		{
			((::System::Void(*)(::NPA::Editor::Policy::Result::NXPToyFundsSettlementPolicyResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_NXPFUNDSSETTLEMENTDIALOG_ONCLOSE_OFFSET))(arg, nullptr);
		}

		::System::String* GetStringResource(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_NXPFUNDSSETTLEMENTDIALOG_GETSTRINGRESOURCE_OFFSET))(str, nullptr);
		}

		::System::Void _SetCallback_b__8_0(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_NXPFUNDSSETTLEMENTDIALOG__SETCALLBACK_B__8_0_OFFSET))(str, str, nullptr);
		}

		::System::Void _SetCallback_b__8_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_NXPFUNDSSETTLEMENTDIALOG__SETCALLBACK_B__8_1_OFFSET))(nullptr);
		}

		::System::Void _ValidatePolicy_b__9_0(::NPA::Editor::Policy::Result::NXPToyFundsSettlementPolicyResult* arg)
		{
			((::System::Void(*)(::NPA::Editor::Policy::Result::NXPToyFundsSettlementPolicyResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_NXPFUNDSSETTLEMENTDIALOG__VALIDATEPOLICY_B__9_0_OFFSET))(arg, nullptr);
		}

	};
}


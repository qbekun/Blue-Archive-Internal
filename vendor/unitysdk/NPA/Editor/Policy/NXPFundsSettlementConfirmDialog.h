#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor { class NXToyLocaleManager; }
namespace NPA::Editor::Policy::View { class NXPFundsSettlementConfirmView; }
namespace NPA::Editor::Policy::Result { class NXPToyFundsSettlementPolicyResult; }

#define NPA_EDITOR_POLICY_NXPFUNDSSETTLEMENTCONFIRMDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C0AB50)
#define NPA_EDITOR_POLICY_NXPFUNDSSETTLEMENTCONFIRMDIALOG_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x9C0AEE0)
#define NPA_EDITOR_POLICY_NXPFUNDSSETTLEMENTCONFIRMDIALOG_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x9C0B020)
#define NPA_EDITOR_POLICY_NXPFUNDSSETTLEMENTCONFIRMDIALOG_GETSTRINGRESOURCE_OFFSET UNITYSDK_OFFSET(0x9C0AEB0)
#define NPA_EDITOR_POLICY_NXPFUNDSSETTLEMENTCONFIRMDIALOG__SETCALLBACK_B__9_0_OFFSET UNITYSDK_OFFSET(0x9C0B060)
#define NPA_EDITOR_POLICY_NXPFUNDSSETTLEMENTCONFIRMDIALOG__SETCALLBACK_B__9_1_OFFSET UNITYSDK_OFFSET(0x9C0B570)
#define NPA_EDITOR_POLICY_NXPFUNDSSETTLEMENTCONFIRMDIALOG__SETCALLBACK_B__9_2_OFFSET UNITYSDK_OFFSET(0x9C0B5B0)

namespace NPA::Editor::Policy
{
	inline static constexpr unsigned int NXPFundsSettlementConfirmDialog_TypeDefinitionIndex = 26567;

	class NXPFundsSettlementConfirmDialog : public Il2CppObject
	{
	public:
		::System::String* itemName; // 0x30
		::System::String* itemPrice; // 0x38
		Il2CppObject* policyTerms; // 0x40
		Il2CppObject* callback; // 0x48
		::System::Action* backPressCallback; // 0x50
		::NPA::Editor::NXToyLocaleManager* localeManager; // 0x58
		::System::String* localeCode; // 0x60
		::NPA::Editor::Policy::View::NXPFundsSettlementConfirmView* fundsSettlementConfirmView; // 0x68

		::System::Void .ctor(::System::String* str, ::System::String* str, Il2CppObject* arg, ::System::Action* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, ::System::Action*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_NXPFUNDSSETTLEMENTCONFIRMDIALOG_.CTOR_OFFSET))(str, str, arg, arg, arg, nullptr);
		}

		::System::Void SetCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_NXPFUNDSSETTLEMENTCONFIRMDIALOG_SETCALLBACK_OFFSET))(nullptr);
		}

		::System::Void OnClose(::NPA::Editor::Policy::Result::NXPToyFundsSettlementPolicyResult* arg)
		{
			((::System::Void(*)(::NPA::Editor::Policy::Result::NXPToyFundsSettlementPolicyResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_NXPFUNDSSETTLEMENTCONFIRMDIALOG_ONCLOSE_OFFSET))(arg, nullptr);
		}

		::System::String* GetStringResource(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_NXPFUNDSSETTLEMENTCONFIRMDIALOG_GETSTRINGRESOURCE_OFFSET))(str, nullptr);
		}

		::System::Void _SetCallback_b__9_0(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_NXPFUNDSSETTLEMENTCONFIRMDIALOG__SETCALLBACK_B__9_0_OFFSET))(arg, nullptr);
		}

		::System::Void _SetCallback_b__9_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_NXPFUNDSSETTLEMENTCONFIRMDIALOG__SETCALLBACK_B__9_1_OFFSET))(nullptr);
		}

		::System::Void _SetCallback_b__9_2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_NXPFUNDSSETTLEMENTCONFIRMDIALOG__SETCALLBACK_B__9_2_OFFSET))(nullptr);
		}

	};
}


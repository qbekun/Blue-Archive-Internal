#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Policy::View { class NXPSettlementFundConsentView; }

#define NPA_EDITOR_POLICY_NXPSETTLEMENTFUNDCONSENTDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C0D7D0)
#define NPA_EDITOR_POLICY_NXPSETTLEMENTFUNDCONSENTDIALOG_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x9C0DC70)
#define NPA_EDITOR_POLICY_NXPSETTLEMENTFUNDCONSENTDIALOG_DISMISS_OFFSET UNITYSDK_OFFSET(0x9C0DE00)
#define NPA_EDITOR_POLICY_NXPSETTLEMENTFUNDCONSENTDIALOG_GETLOCALIZEDTEXT_OFFSET UNITYSDK_OFFSET(0x9C0DBF0)
#define NPA_EDITOR_POLICY_NXPSETTLEMENTFUNDCONSENTDIALOG__SETCALLBACK_B__9_0_OFFSET UNITYSDK_OFFSET(0x9C0DE20)
#define NPA_EDITOR_POLICY_NXPSETTLEMENTFUNDCONSENTDIALOG__SETCALLBACK_B__9_1_OFFSET UNITYSDK_OFFSET(0x9C0DE40)
#define NPA_EDITOR_POLICY_NXPSETTLEMENTFUNDCONSENTDIALOG__SETCALLBACK_B__9_2_OFFSET UNITYSDK_OFFSET(0x9C0DE60)
#define NPA_EDITOR_POLICY_NXPSETTLEMENTFUNDCONSENTDIALOG__SETCALLBACK_B__9_3_OFFSET UNITYSDK_OFFSET(0x9C0DE80)

namespace NPA::Editor::Policy
{
	inline static constexpr unsigned int NXPSettlementFundConsentDialog_TypeDefinitionIndex = 26576;

	class NXPSettlementFundConsentDialog : public Il2CppObject
	{
	public:
		::System::String* itemName; // 0x30
		::System::String* totalPrice; // 0x38
		LOCALE* language; // 0x40
		Il2CppObject* onConfirm; // 0x48
		Il2CppObject* onDecline; // 0x50
		Il2CppObject* onBack; // 0x58
		Il2CppObject* onClose; // 0x60
		::NPA::Editor::Policy::View::NXPSettlementFundConsentView* consentView; // 0x68

		::System::Void .ctor(::System::String* str, ::System::String* str, LOCALE* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, LOCALE*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_NXPSETTLEMENTFUNDCONSENTDIALOG_.CTOR_OFFSET))(str, str, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_NXPSETTLEMENTFUNDCONSENTDIALOG_SETCALLBACK_OFFSET))(nullptr);
		}

		::System::Void Dismiss()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_NXPSETTLEMENTFUNDCONSENTDIALOG_DISMISS_OFFSET))(nullptr);
		}

		::System::String* GetLocalizedText(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_NXPSETTLEMENTFUNDCONSENTDIALOG_GETLOCALIZEDTEXT_OFFSET))(str, nullptr);
		}

		::System::Void _SetCallback_b__9_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_NXPSETTLEMENTFUNDCONSENTDIALOG__SETCALLBACK_B__9_0_OFFSET))(nullptr);
		}

		::System::Void _SetCallback_b__9_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_NXPSETTLEMENTFUNDCONSENTDIALOG__SETCALLBACK_B__9_1_OFFSET))(nullptr);
		}

		::System::Void _SetCallback_b__9_2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_NXPSETTLEMENTFUNDCONSENTDIALOG__SETCALLBACK_B__9_2_OFFSET))(nullptr);
		}

		::System::Void _SetCallback_b__9_3()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_NXPSETTLEMENTFUNDCONSENTDIALOG__SETCALLBACK_B__9_3_OFFSET))(nullptr);
		}

	};
}


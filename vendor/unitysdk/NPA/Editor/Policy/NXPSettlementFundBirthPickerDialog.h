#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Policy::View { class NXPFundsSettlementView; }

#define NPA_EDITOR_POLICY_NXPSETTLEMENTFUNDBIRTHPICKERDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C0CDB0)
#define NPA_EDITOR_POLICY_NXPSETTLEMENTFUNDBIRTHPICKERDIALOG_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x9C0D210)
#define NPA_EDITOR_POLICY_NXPSETTLEMENTFUNDBIRTHPICKERDIALOG_DISMISS_OFFSET UNITYSDK_OFFSET(0x9C0D300)
#define NPA_EDITOR_POLICY_NXPSETTLEMENTFUNDBIRTHPICKERDIALOG_GETLOCALIZEDTEXT_OFFSET UNITYSDK_OFFSET(0x9C0D190)
#define NPA_EDITOR_POLICY_NXPSETTLEMENTFUNDBIRTHPICKERDIALOG__SETCALLBACK_B__6_0_OFFSET UNITYSDK_OFFSET(0x9C0D320)
#define NPA_EDITOR_POLICY_NXPSETTLEMENTFUNDBIRTHPICKERDIALOG__SETCALLBACK_B__6_1_OFFSET UNITYSDK_OFFSET(0x9C0D6D0)

namespace NPA::Editor::Policy
{
	inline static constexpr unsigned int NXPSettlementFundBirthPickerDialog_TypeDefinitionIndex = 26575;

	class NXPSettlementFundBirthPickerDialog : public Il2CppObject
	{
	public:
		::System::String* itemName; // 0x30
		LOCALE* language; // 0x38
		Il2CppObject* onConfirm; // 0x40
		Il2CppObject* onCancel; // 0x48
		::NPA::Editor::Policy::View::NXPFundsSettlementView* birthPickerView; // 0x50

		::System::Void .ctor(::System::String* str, LOCALE* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, LOCALE*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_NXPSETTLEMENTFUNDBIRTHPICKERDIALOG_.CTOR_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void SetCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_NXPSETTLEMENTFUNDBIRTHPICKERDIALOG_SETCALLBACK_OFFSET))(nullptr);
		}

		::System::Void Dismiss()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_NXPSETTLEMENTFUNDBIRTHPICKERDIALOG_DISMISS_OFFSET))(nullptr);
		}

		::System::String* GetLocalizedText(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_NXPSETTLEMENTFUNDBIRTHPICKERDIALOG_GETLOCALIZEDTEXT_OFFSET))(str, nullptr);
		}

		::System::Void _SetCallback_b__6_0(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_NXPSETTLEMENTFUNDBIRTHPICKERDIALOG__SETCALLBACK_B__6_0_OFFSET))(str, str, nullptr);
		}

		::System::Void _SetCallback_b__6_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_NXPSETTLEMENTFUNDBIRTHPICKERDIALOG__SETCALLBACK_B__6_1_OFFSET))(nullptr);
		}

	};
}


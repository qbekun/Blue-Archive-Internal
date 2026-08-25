#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Policy::View { class NXPSettlementFundItemView; }

#define NPA_EDITOR_POLICY_NXPSETTLEMENTFUNDITEMDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C0DEA0)
#define NPA_EDITOR_POLICY_NXPSETTLEMENTFUNDITEMDIALOG_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x9C0E550)
#define NPA_EDITOR_POLICY_NXPSETTLEMENTFUNDITEMDIALOG_DISMISS_OFFSET UNITYSDK_OFFSET(0x9C0E730)
#define NPA_EDITOR_POLICY_NXPSETTLEMENTFUNDITEMDIALOG_GETLOCALIZEDTEXT_OFFSET UNITYSDK_OFFSET(0x9C0E4D0)
#define NPA_EDITOR_POLICY_NXPSETTLEMENTFUNDITEMDIALOG__SETCALLBACK_B__8_0_OFFSET UNITYSDK_OFFSET(0x9C0E750)
#define NPA_EDITOR_POLICY_NXPSETTLEMENTFUNDITEMDIALOG__SETCALLBACK_B__8_3_OFFSET UNITYSDK_OFFSET(0x9C0EE90)
#define NPA_EDITOR_POLICY_NXPSETTLEMENTFUNDITEMDIALOG__SETCALLBACK_B__8_1_OFFSET UNITYSDK_OFFSET(0x9C0EEB0)

namespace NPA::Editor::Policy
{
	inline static constexpr unsigned int NXPSettlementFundItemDialog_TypeDefinitionIndex = 26578;

	class NXPSettlementFundItemDialog : public Il2CppObject
	{
	public:
		::System::String* totalPrice; // 0x30
		LOCALE* language; // 0x38
		Il2CppObject* itemDetailList; // 0x40
		Il2CppObject* termsList; // 0x48
		Il2CppObject* onConfirm; // 0x50
		Il2CppObject* onClose; // 0x58
		::NPA::Editor::Policy::View::NXPSettlementFundItemView* itemView; // 0x60

		::System::Void .ctor(::System::String* str, LOCALE* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, LOCALE*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_NXPSETTLEMENTFUNDITEMDIALOG_.CTOR_OFFSET))(str, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_NXPSETTLEMENTFUNDITEMDIALOG_SETCALLBACK_OFFSET))(nullptr);
		}

		::System::Void Dismiss()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_NXPSETTLEMENTFUNDITEMDIALOG_DISMISS_OFFSET))(nullptr);
		}

		::System::String* GetLocalizedText(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_NXPSETTLEMENTFUNDITEMDIALOG_GETLOCALIZEDTEXT_OFFSET))(str, nullptr);
		}

		::System::Void _SetCallback_b__8_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_NXPSETTLEMENTFUNDITEMDIALOG__SETCALLBACK_B__8_0_OFFSET))(nullptr);
		}

		::System::Void _SetCallback_b__8_3()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_NXPSETTLEMENTFUNDITEMDIALOG__SETCALLBACK_B__8_3_OFFSET))(nullptr);
		}

		::System::Void _SetCallback_b__8_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_NXPSETTLEMENTFUNDITEMDIALOG__SETCALLBACK_B__8_1_OFFSET))(nullptr);
		}

	};
}


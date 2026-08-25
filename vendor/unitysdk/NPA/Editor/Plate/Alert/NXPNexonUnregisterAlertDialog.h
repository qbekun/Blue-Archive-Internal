#pragma once
#include "../../../../unitysdk.h"

namespace NPA::Editor::Plate::View { class NXPNexonUnregisterAlertView; }
namespace NPA::Editor::Auth::Interface { class AccountDeletionAlertInfo; }

#define NPA_EDITOR_PLATE_ALERT_NXPNEXONUNREGISTERALERTDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BEB050)
#define NPA_EDITOR_PLATE_ALERT_NXPNEXONUNREGISTERALERTDIALOG_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x9BEB250)
#define NPA_EDITOR_PLATE_ALERT_NXPNEXONUNREGISTERALERTDIALOG__SETCALLBACK_B__4_0_OFFSET UNITYSDK_OFFSET(0x9BEB340)
#define NPA_EDITOR_PLATE_ALERT_NXPNEXONUNREGISTERALERTDIALOG__SETCALLBACK_B__4_1_OFFSET UNITYSDK_OFFSET(0x9BEB380)

namespace NPA::Editor::Plate::Alert
{
	inline static constexpr unsigned int NXPNexonUnregisterAlertDialog_TypeDefinitionIndex = 26471;

	class NXPNexonUnregisterAlertDialog : public Il2CppObject
	{
	public:
		::NPA::Editor::Plate::View::NXPNexonUnregisterAlertView* nexonUnregisterAlertView; // 0x30
		::System::Action* cancelCallback; // 0x38
		::System::Action* confirmCallback; // 0x40

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg, ::NPA::Editor::Auth::Interface::AccountDeletionAlertInfo* arg, ::System::Action* arg, ::System::Action* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::NPA::Editor::Auth::Interface::AccountDeletionAlertInfo*, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_ALERT_NXPNEXONUNREGISTERALERTDIALOG_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_ALERT_NXPNEXONUNREGISTERALERTDIALOG_SETCALLBACK_OFFSET))(nullptr);
		}

		::System::Void _SetCallback_b__4_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_ALERT_NXPNEXONUNREGISTERALERTDIALOG__SETCALLBACK_B__4_0_OFFSET))(nullptr);
		}

		::System::Void _SetCallback_b__4_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_ALERT_NXPNEXONUNREGISTERALERTDIALOG__SETCALLBACK_B__4_1_OFFSET))(nullptr);
		}

	};
}


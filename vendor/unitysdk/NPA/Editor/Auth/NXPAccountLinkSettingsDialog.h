#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Auth::View { class NXPAccountLinkSettingsView; }

#define NPA_EDITOR_AUTH_NXPACCOUNTLINKSETTINGSDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C9B9A0)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKSETTINGSDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CA9540)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKSETTINGSDIALOG_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x9CA97E0)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKSETTINGSDIALOG_ONCONFIRM_OFFSET UNITYSDK_OFFSET(0x9CA98C0)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKSETTINGSDIALOG_ONCANCEL_OFFSET UNITYSDK_OFFSET(0x9CA98E0)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKSETTINGSDIALOG_CLOSE_OFFSET UNITYSDK_OFFSET(0x9C9BFE0)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKSETTINGSDIALOG_UNLOCKBUTTONS_OFFSET UNITYSDK_OFFSET(0x9C9C000)

namespace NPA::Editor::Auth
{
	inline static constexpr unsigned int NXPAccountLinkSettingsDialog_TypeDefinitionIndex = 27157;

	class NXPAccountLinkSettingsDialog : public Il2CppObject
	{
	public:
		::NPA::Editor::Auth::View::NXPAccountLinkSettingsView* _view; // 0x30
		::System::Action* cancelAction; // 0x38
		::System::Action* confirmAction; // 0x40

		::System::Void .ctor(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKSETTINGSDIALOG_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKSETTINGSDIALOG_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKSETTINGSDIALOG_SETCALLBACK_OFFSET))(nullptr);
		}

		::System::Void OnConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKSETTINGSDIALOG_ONCONFIRM_OFFSET))(nullptr);
		}

		::System::Void OnCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKSETTINGSDIALOG_ONCANCEL_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKSETTINGSDIALOG_CLOSE_OFFSET))(nullptr);
		}

		::System::Void UnlockButtons()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKSETTINGSDIALOG_UNLOCKBUTTONS_OFFSET))(nullptr);
		}

	};
}


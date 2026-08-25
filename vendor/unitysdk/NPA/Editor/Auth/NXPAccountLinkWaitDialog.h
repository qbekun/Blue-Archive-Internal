#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Auth::View { class NXPAccountLinkWaitView; }

#define NPA_EDITOR_AUTH_NXPACCOUNTLINKWAITDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CA9920)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKWAITDIALOG_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x9CA9BF0)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKWAITDIALOG_ONABORT_OFFSET UNITYSDK_OFFSET(0x9CA9C80)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKWAITDIALOG_PREVENTUSERCONTROLS_OFFSET UNITYSDK_OFFSET(0x9CA9CB0)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKWAITDIALOG_ALLOWUSERCONTROLS_OFFSET UNITYSDK_OFFSET(0x9CA9CD0)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKWAITDIALOG_CLOSE_OFFSET UNITYSDK_OFFSET(0x9CA9CF0)

namespace NPA::Editor::Auth
{
	inline static constexpr unsigned int NXPAccountLinkWaitDialog_TypeDefinitionIndex = 27158;

	class NXPAccountLinkWaitDialog : public Il2CppObject
	{
	public:
		::System::Action* _abortAction; // 0x30
		::NPA::Editor::Auth::View::NXPAccountLinkWaitView* _view; // 0x38

		::System::Void .ctor(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKWAITDIALOG_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKWAITDIALOG_SETCALLBACK_OFFSET))(nullptr);
		}

		::System::Void OnAbort()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKWAITDIALOG_ONABORT_OFFSET))(nullptr);
		}

		::System::Void PreventUserControls()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKWAITDIALOG_PREVENTUSERCONTROLS_OFFSET))(nullptr);
		}

		::System::Void AllowUserControls()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKWAITDIALOG_ALLOWUSERCONTROLS_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKWAITDIALOG_CLOSE_OFFSET))(nullptr);
		}

	};
}


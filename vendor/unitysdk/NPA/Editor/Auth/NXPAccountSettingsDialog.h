#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Auth::View { class NXPAccountSettingsView; }
namespace NPA::Editor { class NXToyLocaleManager; }
namespace NPA::Auth { class NXPToyLoginResult; }
namespace NPA::Auth { class NXPToySignOutResult; }

#define NPA_EDITOR_AUTH_NXPACCOUNTSETTINGSDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CA9D10)
#define NPA_EDITOR_AUTH_NXPACCOUNTSETTINGSDIALOG_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x9CA9F60)
#define NPA_EDITOR_AUTH_NXPACCOUNTSETTINGSDIALOG_CHANGENEXONACCOUNT_OFFSET UNITYSDK_OFFSET(0x9CAA040)
#define NPA_EDITOR_AUTH_NXPACCOUNTSETTINGSDIALOG_HANDLELOGINERROR_OFFSET UNITYSDK_OFFSET(0x9CAA100)
#define NPA_EDITOR_AUTH_NXPACCOUNTSETTINGSDIALOG_SIGNOUT_OFFSET UNITYSDK_OFFSET(0x9CAA2C0)
#define NPA_EDITOR_AUTH_NXPACCOUNTSETTINGSDIALOG_INVOKECANCELRESULT_OFFSET UNITYSDK_OFFSET(0x9CAA380)
#define NPA_EDITOR_AUTH_NXPACCOUNTSETTINGSDIALOG_INVOKERESULT_OFFSET UNITYSDK_OFFSET(0x9CAA480)
#define NPA_EDITOR_AUTH_NXPACCOUNTSETTINGSDIALOG__SETCALLBACK_B__5_0_OFFSET UNITYSDK_OFFSET(0x9CAA4C0)
#define NPA_EDITOR_AUTH_NXPACCOUNTSETTINGSDIALOG__CHANGENEXONACCOUNT_B__6_0_OFFSET UNITYSDK_OFFSET(0x9CAA510)
#define NPA_EDITOR_AUTH_NXPACCOUNTSETTINGSDIALOG__HANDLELOGINERROR_B__7_0_OFFSET UNITYSDK_OFFSET(0x9CAA6A0)
#define NPA_EDITOR_AUTH_NXPACCOUNTSETTINGSDIALOG__SIGNOUT_B__8_0_OFFSET UNITYSDK_OFFSET(0x9CAA6D0)

namespace NPA::Editor::Auth
{
	inline static constexpr unsigned int NXPAccountSettingsDialog_TypeDefinitionIndex = 27160;

	class NXPAccountSettingsDialog : public Il2CppObject
	{
	public:
		::NPA::Editor::Auth::View::NXPAccountSettingsView* accountSettingsView; // 0x30
		Il2CppObject* callback; // 0x38
		::System::Boolean useArenaAccount; // 0x40
		::NPA::Editor::NXToyLocaleManager* localeManager; // 0x48

		::System::Void .ctor(::System::Int32 arg, ::System::String* str, ::System::Boolean arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTSETTINGSDIALOG_.CTOR_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void SetCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTSETTINGSDIALOG_SETCALLBACK_OFFSET))(nullptr);
		}

		::System::Void ChangeNexonAccount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTSETTINGSDIALOG_CHANGENEXONACCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean HandleLoginError(::NPA::Auth::NXPToyLoginResult* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Auth::NXPToyLoginResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTSETTINGSDIALOG_HANDLELOGINERROR_OFFSET))(arg, nullptr);
		}

		::System::Void SignOut()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTSETTINGSDIALOG_SIGNOUT_OFFSET))(nullptr);
		}

		::System::Void InvokeCancelResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTSETTINGSDIALOG_INVOKECANCELRESULT_OFFSET))(nullptr);
		}

		::System::Void InvokeResult(::NPA::Auth::NXPToyLoginResult* arg)
		{
			((::System::Void(*)(::NPA::Auth::NXPToyLoginResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTSETTINGSDIALOG_INVOKERESULT_OFFSET))(arg, nullptr);
		}

		::System::Void _SetCallback_b__5_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTSETTINGSDIALOG__SETCALLBACK_B__5_0_OFFSET))(nullptr);
		}

		::System::Void _ChangeNexonAccount_b__6_0(::NPA::Auth::NXPToyLoginResult* arg)
		{
			((::System::Void(*)(::NPA::Auth::NXPToyLoginResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTSETTINGSDIALOG__CHANGENEXONACCOUNT_B__6_0_OFFSET))(arg, nullptr);
		}

		::System::Void _HandleLoginError_b__7_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTSETTINGSDIALOG__HANDLELOGINERROR_B__7_0_OFFSET))(nullptr);
		}

		::System::Void _SignOut_b__8_0(::NPA::Auth::NXPToySignOutResult* arg)
		{
			((::System::Void(*)(::NPA::Auth::NXPToySignOutResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTSETTINGSDIALOG__SIGNOUT_B__8_0_OFFSET))(arg, nullptr);
		}

	};
}


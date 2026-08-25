#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Auth::View { class NXPLinkNexonAccountAlertView; }
namespace NPA::Auth { class NXPToyLoginResult; }
namespace NPA::Promotion { class NXPToyCloseResult; }

#define NPA_EDITOR_AUTH_NXPLINKNEXONACCOUNTALERTDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CAAC20)
#define NPA_EDITOR_AUTH_NXPLINKNEXONACCOUNTALERTDIALOG_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x9CAAF50)
#define NPA_EDITOR_AUTH_NXPLINKNEXONACCOUNTALERTDIALOG_PROCESSCHANGENEXONACCOUNT_OFFSET UNITYSDK_OFFSET(0x9CAB090)
#define NPA_EDITOR_AUTH_NXPLINKNEXONACCOUNTALERTDIALOG_SHOWPLAYNOWCODE_OFFSET UNITYSDK_OFFSET(0x9CAB200)
#define NPA_EDITOR_AUTH_NXPLINKNEXONACCOUNTALERTDIALOG_INVOKECANCELRESULT_OFFSET UNITYSDK_OFFSET(0x9CAB2C0)
#define NPA_EDITOR_AUTH_NXPLINKNEXONACCOUNTALERTDIALOG_INVOKERESULT_OFFSET UNITYSDK_OFFSET(0x9CAB3C0)
#define NPA_EDITOR_AUTH_NXPLINKNEXONACCOUNTALERTDIALOG__PROCESSCHANGENEXONACCOUNT_B__7_0_OFFSET UNITYSDK_OFFSET(0x9CAB400)
#define NPA_EDITOR_AUTH_NXPLINKNEXONACCOUNTALERTDIALOG__SHOWPLAYNOWCODE_B__8_0_OFFSET UNITYSDK_OFFSET(0x9CAB460)

namespace NPA::Editor::Auth
{
	inline static constexpr unsigned int NXPLinkNexonAccountAlertDialog_TypeDefinitionIndex = 27162;

	class NXPLinkNexonAccountAlertDialog : public Il2CppObject
	{
	public:
		::NPA::Editor::Auth::View::NXPLinkNexonAccountAlertView* linkNexonAccountAlertView; // 0x30
		Il2CppObject* callback; // 0x38
		::System::String* webToken; // 0x40
		::System::String* ticket; // 0x48
		::System::Boolean isRecover; // 0x50

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::Boolean arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPLINKNEXONACCOUNTALERTDIALOG_.CTOR_OFFSET))(str, str, arg, arg, arg, nullptr);
		}

		::System::Void SetCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPLINKNEXONACCOUNTALERTDIALOG_SETCALLBACK_OFFSET))(nullptr);
		}

		::System::Void ProcessChangeNexonAccount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPLINKNEXONACCOUNTALERTDIALOG_PROCESSCHANGENEXONACCOUNT_OFFSET))(nullptr);
		}

		::System::Void ShowPlayNowCode()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPLINKNEXONACCOUNTALERTDIALOG_SHOWPLAYNOWCODE_OFFSET))(nullptr);
		}

		::System::Void InvokeCancelResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPLINKNEXONACCOUNTALERTDIALOG_INVOKECANCELRESULT_OFFSET))(nullptr);
		}

		::System::Void InvokeResult(::NPA::Auth::NXPToyLoginResult* arg)
		{
			((::System::Void(*)(::NPA::Auth::NXPToyLoginResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPLINKNEXONACCOUNTALERTDIALOG_INVOKERESULT_OFFSET))(arg, nullptr);
		}

		::System::Void _ProcessChangeNexonAccount_b__7_0(::NPA::Auth::NXPToyLoginResult* arg)
		{
			((::System::Void(*)(::NPA::Auth::NXPToyLoginResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPLINKNEXONACCOUNTALERTDIALOG__PROCESSCHANGENEXONACCOUNT_B__7_0_OFFSET))(arg, nullptr);
		}

		::System::Void _ShowPlayNowCode_b__8_0(::NPA::Promotion::NXPToyCloseResult* arg)
		{
			((::System::Void(*)(::NPA::Promotion::NXPToyCloseResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPLINKNEXONACCOUNTALERTDIALOG__SHOWPLAYNOWCODE_B__8_0_OFFSET))(arg, nullptr);
		}

	};
}


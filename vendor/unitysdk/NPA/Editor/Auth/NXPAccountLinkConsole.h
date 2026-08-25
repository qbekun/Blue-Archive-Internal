#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Auth { class LinkSessionTicket; }
namespace NPA::Editor { class IExternalPlatform; }
namespace NPA::Ex { class ApplicationFocusEvent; }

#define NPA_EDITOR_AUTH_NXPACCOUNTLINKCONSOLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C7A750)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKCONSOLE_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0x9C7A840)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKCONSOLE_CREATEACCOUNTLINK_OFFSET UNITYSDK_OFFSET(0x9C7A850)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKCONSOLE_CREATEACCOUNTLINKFORSWAP_OFFSET UNITYSDK_OFFSET(0x9C7A970)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKCONSOLE_CLOSELOGINWAITDIALOG_OFFSET UNITYSDK_OFFSET(0x9C7AA90)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKCONSOLE_ONAPPLICATIONFOCUSCHANGED_OFFSET UNITYSDK_OFFSET(0x9C7ABD0)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKCONSOLE_VALIDATEACCOUNTLINK_OFFSET UNITYSDK_OFFSET(0x9C7B050)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKCONSOLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9C7B130)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKCONSOLE__CLOSELOGINWAITDIALOG_G__DISMISSANDCLEARDIALOG|7_0_OFFSET UNITYSDK_OFFSET(0x9C7AB90)

namespace NPA::Editor::Auth
{
	inline static constexpr unsigned int NXPAccountLinkConsole_TypeDefinitionIndex = 26992;

	class NXPAccountLinkConsole : public Il2CppObject
	{
	public:
		::NPA::Editor::Auth::LinkSessionTicket* _linkTicket; // 0x28
		::System::Action* _focusRestoreCallback; // 0x30
		Il2CppObject* LastNotificationTimestamps; // 0x0

		::System::Void .ctor(::NPA::Editor::IExternalPlatform* arg)
		{
			((::System::Void(*)(::NPA::Editor::IExternalPlatform*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKCONSOLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void ShutDown()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKCONSOLE_SHUTDOWN_OFFSET))(nullptr);
		}

		::System::Void CreateAccountLink(::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKCONSOLE_CREATEACCOUNTLINK_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void CreateAccountLinkForSwap(::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKCONSOLE_CREATEACCOUNTLINKFORSWAP_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void CloseLoginWaitDialog()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKCONSOLE_CLOSELOGINWAITDIALOG_OFFSET))(nullptr);
		}

		::System::Void OnApplicationFocusChanged(::NPA::Ex::ApplicationFocusEvent* arg)
		{
			((::System::Void(*)(::NPA::Ex::ApplicationFocusEvent*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKCONSOLE_ONAPPLICATIONFOCUSCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void ValidateAccountLink(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKCONSOLE_VALIDATEACCOUNTLINK_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKCONSOLE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void _CloseLoginWaitDialog_g__DismissAndClearDialog|7_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKCONSOLE__CLOSELOGINWAITDIALOG_G__DISMISSANDCLEARDIALOG|7_0_OFFSET))(nullptr);
		}

	};
}


#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Auth { class NXPToyAuthenticationManager; }
namespace NPA::Editor { class NXPToySession; }
namespace NPA::Editor { class NXToyLocaleManager; }
namespace NPA::Auth { class NXPToyAccountDeleteResult; }

#define NPA_EDITOR_AUTH_NXPARENAACCOUNT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C81020)
#define NPA_EDITOR_AUTH_NXPARENAACCOUNT_DELETE_OFFSET UNITYSDK_OFFSET(0x9C810C0)
#define NPA_EDITOR_AUTH_NXPARENAACCOUNT_DISPATCHERRORRESULT_OFFSET UNITYSDK_OFFSET(0x9C81220)
#define NPA_EDITOR_AUTH_NXPARENAACCOUNT_DISPATCHCANCELERRORRESULT_OFFSET UNITYSDK_OFFSET(0x9C81320)
#define NPA_EDITOR_AUTH_NXPARENAACCOUNT_REQUESTACCOUNTDELETION_OFFSET UNITYSDK_OFFSET(0x9C813A0)
#define NPA_EDITOR_AUTH_NXPARENAACCOUNT_SHOWCSALERT_OFFSET UNITYSDK_OFFSET(0x9C814E0)
#define NPA_EDITOR_AUTH_NXPARENAACCOUNT_SHOWARENACSPAGE_OFFSET UNITYSDK_OFFSET(0x9C81700)
#define NPA_EDITOR_AUTH_NXPARENAACCOUNT_GETTITLE_OFFSET UNITYSDK_OFFSET(0x9C81870)
#define NPA_EDITOR_AUTH_NXPARENAACCOUNT_GETDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x9C81900)
#define NPA_EDITOR_AUTH_NXPARENAACCOUNT_GETWARNINGTEXT_OFFSET UNITYSDK_OFFSET(0x9C81990)
#define NPA_EDITOR_AUTH_NXPARENAACCOUNT_GETQUESTIONTEXT_OFFSET UNITYSDK_OFFSET(0x9C819C0)
#define NPA_EDITOR_AUTH_NXPARENAACCOUNT_GETHIGHLIGHTEDTEXT_OFFSET UNITYSDK_OFFSET(0x9C81A50)
#define NPA_EDITOR_AUTH_NXPARENAACCOUNT_GETUPDATEINTERVALTEXT_OFFSET UNITYSDK_OFFSET(0x9C81AE0)
#define NPA_EDITOR_AUTH_NXPARENAACCOUNT_GETCURRENTPLAYINGGAMESTEXT_OFFSET UNITYSDK_OFFSET(0x9C81B10)
#define NPA_EDITOR_AUTH_NXPARENAACCOUNT_GETCONFIRMBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x9C81BA0)
#define NPA_EDITOR_AUTH_NXPARENAACCOUNT_GETCANCELBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x9C81C30)

namespace NPA::Editor::Auth
{
	inline static constexpr unsigned int NXPArenaAccount_TypeDefinitionIndex = 27011;

	class NXPArenaAccount : public Il2CppObject
	{
	public:
		::NPA::Editor::Auth::NXPToyAuthenticationManager* authManager; // 0x10
		::NPA::Editor::NXPToySession* session; // 0x18
		::NPA::Editor::NXToyLocaleManager* localeManager; // 0x20

		::System::Void .ctor(::NPA::Editor::Auth::NXPToyAuthenticationManager* arg, ::NPA::Editor::NXPToySession* arg)
		{
			((::System::Void(*)(::NPA::Editor::Auth::NXPToyAuthenticationManager*, ::NPA::Editor::NXPToySession*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPARENAACCOUNT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Delete(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPARENAACCOUNT_DELETE_OFFSET))(arg, nullptr);
		}

		::System::Void DispatchErrorResult(Il2CppObject* arg, ::System::String* str, ::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(Il2CppObject*, ::System::String*, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPARENAACCOUNT_DISPATCHERRORRESULT_OFFSET))(arg, str, arg, str, nullptr);
		}

		::System::Void DispatchCancelErrorResult(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPARENAACCOUNT_DISPATCHCANCELERRORRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void RequestAccountDeletion(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPARENAACCOUNT_REQUESTACCOUNTDELETION_OFFSET))(arg, nullptr);
		}

		::System::Void ShowCsAlert(::NPA::Auth::NXPToyAccountDeleteResult* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Auth::NXPToyAccountDeleteResult*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPARENAACCOUNT_SHOWCSALERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ShowArenaCsPage(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPARENAACCOUNT_SHOWARENACSPAGE_OFFSET))(str, arg, nullptr);
		}

		::System::String* GetTitle()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPARENAACCOUNT_GETTITLE_OFFSET))(nullptr);
		}

		::System::String* GetDescription()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPARENAACCOUNT_GETDESCRIPTION_OFFSET))(nullptr);
		}

		::System::String* GetWarningText()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPARENAACCOUNT_GETWARNINGTEXT_OFFSET))(nullptr);
		}

		::System::String* GetQuestionText()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPARENAACCOUNT_GETQUESTIONTEXT_OFFSET))(nullptr);
		}

		::System::String* GetHighlightedText()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPARENAACCOUNT_GETHIGHLIGHTEDTEXT_OFFSET))(nullptr);
		}

		::System::String* GetUpdateIntervalText()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPARENAACCOUNT_GETUPDATEINTERVALTEXT_OFFSET))(nullptr);
		}

		::System::String* GetCurrentPlayingGamesText()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPARENAACCOUNT_GETCURRENTPLAYINGGAMESTEXT_OFFSET))(nullptr);
		}

		::System::String* GetConfirmButtonText()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPARENAACCOUNT_GETCONFIRMBUTTONTEXT_OFFSET))(nullptr);
		}

		::System::String* GetCancelButtonText()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPARENAACCOUNT_GETCANCELBUTTONTEXT_OFFSET))(nullptr);
		}

	};
}


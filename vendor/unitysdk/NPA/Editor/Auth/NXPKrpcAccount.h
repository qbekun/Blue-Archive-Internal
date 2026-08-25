#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Auth { class NXPToyAuthenticationManager; }
namespace NPA::Editor { class NXPToySession; }
namespace NPA::Editor { class NXToyLocaleManager; }

#define NPA_EDITOR_AUTH_NXPKRPCACCOUNT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C8B4C0)
#define NPA_EDITOR_AUTH_NXPKRPCACCOUNT_DELETE_OFFSET UNITYSDK_OFFSET(0x9C8B550)
#define NPA_EDITOR_AUTH_NXPKRPCACCOUNT_DELETEACCOUNT_OFFSET UNITYSDK_OFFSET(0x9C8BAA0)
#define NPA_EDITOR_AUTH_NXPKRPCACCOUNT_DISPATCHERRORRESULT_OFFSET UNITYSDK_OFFSET(0x9C8B8E0)
#define NPA_EDITOR_AUTH_NXPKRPCACCOUNT_GETTITLE_OFFSET UNITYSDK_OFFSET(0x9C8BBF0)
#define NPA_EDITOR_AUTH_NXPKRPCACCOUNT_GETDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x9C8BC80)
#define NPA_EDITOR_AUTH_NXPKRPCACCOUNT_GETWARNINGTEXT_OFFSET UNITYSDK_OFFSET(0x9C8BDF0)
#define NPA_EDITOR_AUTH_NXPKRPCACCOUNT_GETQUESTIONTEXT_OFFSET UNITYSDK_OFFSET(0x9C8BE80)
#define NPA_EDITOR_AUTH_NXPKRPCACCOUNT_GETHIGHLIGHTEDTEXT_OFFSET UNITYSDK_OFFSET(0x9C8BF10)
#define NPA_EDITOR_AUTH_NXPKRPCACCOUNT_GETUPDATEINTERVALTEXT_OFFSET UNITYSDK_OFFSET(0x9C8BFA0)
#define NPA_EDITOR_AUTH_NXPKRPCACCOUNT_GETCURRENTPLAYINGGAMESTEXT_OFFSET UNITYSDK_OFFSET(0x9C8C030)
#define NPA_EDITOR_AUTH_NXPKRPCACCOUNT_GETCONFIRMBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x9C8C0B0)
#define NPA_EDITOR_AUTH_NXPKRPCACCOUNT_GETCANCELBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x9C8C130)

namespace NPA::Editor::Auth
{
	inline static constexpr unsigned int NXPKrpcAccount_TypeDefinitionIndex = 27045;

	class NXPKrpcAccount : public Il2CppObject
	{
	public:
		::NPA::Editor::Auth::NXPToyAuthenticationManager* authManager; // 0x10
		::NPA::Editor::NXPToySession* session; // 0x18
		::NPA::Editor::NXToyLocaleManager* localeManager; // 0x20

		::System::Void .ctor(::NPA::Editor::Auth::NXPToyAuthenticationManager* arg, ::NPA::Editor::NXPToySession* arg)
		{
			((::System::Void(*)(::NPA::Editor::Auth::NXPToyAuthenticationManager*, ::NPA::Editor::NXPToySession*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPKRPCACCOUNT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Delete(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPKRPCACCOUNT_DELETE_OFFSET))(arg, nullptr);
		}

		::System::Void DeleteAccount(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPKRPCACCOUNT_DELETEACCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DispatchErrorResult(Il2CppObject* arg, ::System::String* str, ::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(Il2CppObject*, ::System::String*, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPKRPCACCOUNT_DISPATCHERRORRESULT_OFFSET))(arg, str, arg, str, nullptr);
		}

		::System::String* GetTitle()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPKRPCACCOUNT_GETTITLE_OFFSET))(nullptr);
		}

		::System::String* GetDescription()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPKRPCACCOUNT_GETDESCRIPTION_OFFSET))(nullptr);
		}

		::System::String* GetWarningText()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPKRPCACCOUNT_GETWARNINGTEXT_OFFSET))(nullptr);
		}

		::System::String* GetQuestionText()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPKRPCACCOUNT_GETQUESTIONTEXT_OFFSET))(nullptr);
		}

		::System::String* GetHighlightedText()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPKRPCACCOUNT_GETHIGHLIGHTEDTEXT_OFFSET))(nullptr);
		}

		::System::String* GetUpdateIntervalText()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPKRPCACCOUNT_GETUPDATEINTERVALTEXT_OFFSET))(nullptr);
		}

		::System::String* GetCurrentPlayingGamesText()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPKRPCACCOUNT_GETCURRENTPLAYINGGAMESTEXT_OFFSET))(nullptr);
		}

		::System::String* GetConfirmButtonText()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPKRPCACCOUNT_GETCONFIRMBUTTONTEXT_OFFSET))(nullptr);
		}

		::System::String* GetCancelButtonText()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPKRPCACCOUNT_GETCANCELBUTTONTEXT_OFFSET))(nullptr);
		}

	};
}


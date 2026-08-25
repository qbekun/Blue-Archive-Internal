#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Auth::JavaScriptInterface { class PlayNowJavaScriptInterface; }
namespace NPA::Auth { class NXPToyLoginResult; }
namespace NPA::SimpleJSON { class JSONNode; }
namespace NPA::Service { class NXPWebInfo; }
namespace NPA::SimpleJSON { class JSONClass; }
namespace NPA::Auth { class NXPToySignOutResult; }

#define NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CAC3F0)
#define NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG_SETSCREENNAME_OFFSET UNITYSDK_OFFSET(0x9CAC530)
#define NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG_GETSCREENNAME_OFFSET UNITYSDK_OFFSET(0x9CAC550)
#define NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x9CAC560)
#define NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG_ONLOADWEBSERVER_OFFSET UNITYSDK_OFFSET(0x9CAC610)
#define NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG_ONLOADPROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0x9CAC640)
#define NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG_ONEXECUTENATIVEMETHOD_OFFSET UNITYSDK_OFFSET(0x9CAC680)
#define NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG_EXECUTEJAVASCRIPT_OFFSET UNITYSDK_OFFSET(0x9CACC80)
#define NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG_CACHESIGNINRESPONSE_OFFSET UNITYSDK_OFFSET(0x9CACE00)
#define NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG_CACHEAGREETERMSRESPONSE_OFFSET UNITYSDK_OFFSET(0x9CACE20)
#define NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG_SUCCESSPLAYNOWLOGIN_OFFSET UNITYSDK_OFFSET(0x9CACE40)
#define NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG_DESTROY_OFFSET UNITYSDK_OFFSET(0x9CACF20)
#define NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG_SHOWLOGINSELECTOR_OFFSET UNITYSDK_OFFSET(0x9CACF30)
#define NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG_SHOWACCOUNTSETTINGS_OFFSET UNITYSDK_OFFSET(0x9CAD000)
#define NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG_PROCESSSIGNOUT_OFFSET UNITYSDK_OFFSET(0x9CAD0C0)
#define NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG_INVOKEUSERCANCELATSIGNOUT_OFFSET UNITYSDK_OFFSET(0x9CAD170)
#define NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG_SHOWWEB_OFFSET UNITYSDK_OFFSET(0x9CAD270)
#define NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG_INVOKEFAILEDORCANCELATCODELOGIN_OFFSET UNITYSDK_OFFSET(0x9CAD310)
#define NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG_EXECUTEJAVASCRIPT_OFFSET UNITYSDK_OFFSET(0x9CACCF0)
#define NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG__SUCCESSPLAYNOWLOGIN_B__16_0_OFFSET UNITYSDK_OFFSET(0x9CAD410)
#define NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG__SHOWLOGINSELECTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x9CAD450)
#define NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG__SHOWLOGINSELECTOR_B__18_1_OFFSET UNITYSDK_OFFSET(0x9CAD660)
#define NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG__SHOWACCOUNTSETTINGS_B__19_0_OFFSET UNITYSDK_OFFSET(0x9CAD690)
#define NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG__PROCESSSIGNOUT_B__20_0_OFFSET UNITYSDK_OFFSET(0x9CAD770)

namespace NPA::Editor::Auth
{
	inline static constexpr unsigned int NXPPlayNowDialog_TypeDefinitionIndex = 27167;

	class NXPPlayNowDialog : public Il2CppObject
	{
	public:
		::NPA::Editor::Auth::JavaScriptInterface::PlayNowJavaScriptInterface* playNowJS; // 0x98
		Il2CppObject* loginCallback; // 0xA0
		Il2CppObject* signOutCallback; // 0xA8
		::NPA::Auth::NXPToyLoginResult* cachedLoginResult; // 0xB0
		::NPA::SimpleJSON::JSONNode* cachedAgreeTermsResult; // 0xB8
		::System::String* screenName; // 0xC0

		::System::Void .ctor(::NPA::Service::NXPWebInfo* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::NPA::Service::NXPWebInfo*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetScreenName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG_SETSCREENNAME_OFFSET))(str, nullptr);
		}

		::System::String* GetScreenName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG_GETSCREENNAME_OFFSET))(nullptr);
		}

		::System::Void OnClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG_ONCLOSE_OFFSET))(nullptr);
		}

		::System::Void OnLoadWebServer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG_ONLOADWEBSERVER_OFFSET))(nullptr);
		}

		::System::Void OnLoadProgressChanged(::System::Object* arg, ::System::Single arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG_ONLOADPROGRESSCHANGED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnExecuteNativeMethod(::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG_ONEXECUTENATIVEMETHOD_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void ExecuteJavaScript(::System::String* str, ::NPA::SimpleJSON::JSONClass* arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::SimpleJSON::JSONClass*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG_EXECUTEJAVASCRIPT_OFFSET))(str, arg, nullptr);
		}

		::System::Void CacheSignInResponse(::NPA::Auth::NXPToyLoginResult* arg)
		{
			((::System::Void(*)(::NPA::Auth::NXPToyLoginResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG_CACHESIGNINRESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void CacheAgreeTermsResponse(::NPA::SimpleJSON::JSONNode* arg)
		{
			((::System::Void(*)(::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG_CACHEAGREETERMSRESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void SuccessPlayNowLogin(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG_SUCCESSPLAYNOWLOGIN_OFFSET))(str, nullptr);
		}

		::System::Void Destroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG_DESTROY_OFFSET))(nullptr);
		}

		::System::Void ShowLoginSelector()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG_SHOWLOGINSELECTOR_OFFSET))(nullptr);
		}

		::System::Void ShowAccountSettings()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG_SHOWACCOUNTSETTINGS_OFFSET))(nullptr);
		}

		::System::Void ProcessSignOut()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG_PROCESSSIGNOUT_OFFSET))(nullptr);
		}

		::System::Void InvokeUserCancelAtSignOut()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG_INVOKEUSERCANCELATSIGNOUT_OFFSET))(nullptr);
		}

		::System::Void ShowWeb(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG_SHOWWEB_OFFSET))(str, nullptr);
		}

		::System::Void InvokeFailedOrCancelAtCodeLogin()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG_INVOKEFAILEDORCANCELATCODELOGIN_OFFSET))(nullptr);
		}

		::System::Void ExecuteJavaScript(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG_EXECUTEJAVASCRIPT_OFFSET))(str, str, nullptr);
		}

		::System::Void _SuccessPlayNowLogin_b__16_0(::NPA::Auth::NXPToyLoginResult* arg)
		{
			((::System::Void(*)(::NPA::Auth::NXPToyLoginResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG__SUCCESSPLAYNOWLOGIN_B__16_0_OFFSET))(arg, nullptr);
		}

		::System::Void _ShowLoginSelector_b__18_0(::NPA::Auth::NXPToyLoginResult* arg)
		{
			((::System::Void(*)(::NPA::Auth::NXPToyLoginResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG__SHOWLOGINSELECTOR_B__18_0_OFFSET))(arg, nullptr);
		}

		::System::Void _ShowLoginSelector_b__18_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG__SHOWLOGINSELECTOR_B__18_1_OFFSET))(nullptr);
		}

		::System::Void _ShowAccountSettings_b__19_0(::NPA::Auth::NXPToyLoginResult* arg)
		{
			((::System::Void(*)(::NPA::Auth::NXPToyLoginResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG__SHOWACCOUNTSETTINGS_B__19_0_OFFSET))(arg, nullptr);
		}

		::System::Void _ProcessSignOut_b__20_0(::NPA::Auth::NXPToySignOutResult* arg)
		{
			((::System::Void(*)(::NPA::Auth::NXPToySignOutResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPPLAYNOWDIALOG__PROCESSSIGNOUT_B__20_0_OFFSET))(arg, nullptr);
		}

	};
}


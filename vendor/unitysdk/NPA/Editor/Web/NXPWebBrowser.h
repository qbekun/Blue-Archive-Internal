#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace NPA::Editor::Web { class NXPWebBrowserHandler; }
namespace ToyWebViewShared::Messages { class RequestJsDialog; }

#define NPA_EDITOR_WEB_NXPWEBBROWSER_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x9DAB220)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_SET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x9DAB230)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_GET_ISCEFINITIALIZED_OFFSET UNITYSDK_OFFSET(0x9DAB240)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_SET_ISCEFINITIALIZED_OFFSET UNITYSDK_OFFSET(0x9DAB250)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_GET_USETRANSPARENCY_OFFSET UNITYSDK_OFFSET(0x9DAB260)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_SET_USETRANSPARENCY_OFFSET UNITYSDK_OFFSET(0x9DAB270)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_GET_BACKGROUNDCOLOR_OFFSET UNITYSDK_OFFSET(0x9DAB280)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_SET_BACKGROUNDCOLOR_OFFSET UNITYSDK_OFFSET(0x9DAB290)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_GET_USEFULLSCREEN_OFFSET UNITYSDK_OFFSET(0x9DAB2A0)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_SET_USEFULLSCREEN_OFFSET UNITYSDK_OFFSET(0x9DAB2B0)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_GET_USECLEARCOOKIE_OFFSET UNITYSDK_OFFSET(0x9DAB2C0)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_SET_USECLEARCOOKIE_OFFSET UNITYSDK_OFFSET(0x9DAB2D0)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_GET_USEINPUTMODE_OFFSET UNITYSDK_OFFSET(0x9DAB2E0)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_SET_USEINPUTMODE_OFFSET UNITYSDK_OFFSET(0x9DAB2F0)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_GET_CHANGECURSOR_OFFSET UNITYSDK_OFFSET(0x9DAB300)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_SET_CHANGECURSOR_OFFSET UNITYSDK_OFFSET(0x9DAB310)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_GET_CANGOBACK_OFFSET UNITYSDK_OFFSET(0x9DAB320)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_SET_CANGOBACK_OFFSET UNITYSDK_OFFSET(0x9DAB330)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_GET_CANGOFORWARD_OFFSET UNITYSDK_OFFSET(0x9DAB340)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_SET_CANGOFORWARD_OFFSET UNITYSDK_OFFSET(0x9DAB350)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_GET_ZOOMLEVEL_OFFSET UNITYSDK_OFFSET(0x9DAB360)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_SET_ZOOMLEVEL_OFFSET UNITYSDK_OFFSET(0x9DAB370)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_GET_INITIALURL_OFFSET UNITYSDK_OFFSET(0x9DAB380)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_SET_INITIALURL_OFFSET UNITYSDK_OFFSET(0x9DAB390)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_GET_CURRENTURL_OFFSET UNITYSDK_OFFSET(0x9DAB3A0)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_SET_CURRENTURL_OFFSET UNITYSDK_OFFSET(0x9DAB3B0)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_GET_WEBVIEWSIZE_OFFSET UNITYSDK_OFFSET(0x9DAB3C0)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_SET_WEBVIEWSIZE_OFFSET UNITYSDK_OFFSET(0x9DAB3D0)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_GET_INITIALHEADERS_OFFSET UNITYSDK_OFFSET(0x9DAB3E0)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_GET_REMOVECOOKIELIST_OFFSET UNITYSDK_OFFSET(0x9DAB3F0)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_GET_DOCUMENTLOADJAVASCRIPTS_OFFSET UNITYSDK_OFFSET(0x9DAB400)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_GET_PAGESTARTEDJAVASCRIPTS_OFFSET UNITYSDK_OFFSET(0x9DAB410)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_GET_PAGEFINISHEDJAVASCRIPTS_OFFSET UNITYSDK_OFFSET(0x9DAB420)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_GET_CUSTOMSCHEMES_OFFSET UNITYSDK_OFFSET(0x9DAB430)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_GET_WEBBROWSERHANDLER_OFFSET UNITYSDK_OFFSET(0x9DAB440)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_SET_WEBBROWSERHANDLER_OFFSET UNITYSDK_OFFSET(0x9DAB450)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_ONRESUME_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_CLEARCUSTOMSCHEME_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_LOADURL_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_LOADURL_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_LOADHTML_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_RELOAD_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_ONREQUESTJSDIALOG_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_GOBACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_GOFORWARD_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_SETFOCUS_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_SETZOOMLEVEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_EXECUTEJAVASCRIPT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_SETUSEKEYINPUTCOMPOSITIONSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_SETWEBBROWSERHANDLER_OFFSET UNITYSDK_OFFSET(0x9DAB460)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_UPDATECURRENTURL_OFFSET UNITYSDK_OFFSET(0x9DAB470)
#define NPA_EDITOR_WEB_NXPWEBBROWSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DAB480)

namespace NPA::Editor::Web
{
	inline static constexpr unsigned int NXPWebBrowser_TypeDefinitionIndex = 26387;

	class NXPWebBrowser : public Il2CppObject
	{
	public:
		::System::Boolean _IsInitialized_k__BackingField; // 0x18
		::System::Boolean _IsCefInitialized_k__BackingField; // 0x19
		::System::Boolean _UseTransparency_k__BackingField; // 0x1A
		::System::UInt32 _BackgroundColor_k__BackingField; // 0x1C
		::System::Boolean _UseFullScreen_k__BackingField; // 0x20
		::System::Boolean _UseClearCookie_k__BackingField; // 0x21
		::System::Boolean _UseInputMode_k__BackingField; // 0x22
		::System::Boolean _ChangeCursor_k__BackingField; // 0x23
		::System::Boolean _CanGoBack_k__BackingField; // 0x24
		::System::Boolean _CanGoForward_k__BackingField; // 0x25
		::System::Double _ZoomLevel_k__BackingField; // 0x28
		::System::String* _InitialUrl_k__BackingField; // 0x30
		::System::String* _CurrentUrl_k__BackingField; // 0x38
		::UnityEngine::Vector2* _WebViewSize_k__BackingField; // 0x40
		Il2CppObject* _InitialHeaders_k__BackingField; // 0x48
		Il2CppObject* _RemoveCookieList_k__BackingField; // 0x50
		Il2CppObject* _DocumentLoadJavaScripts_k__BackingField; // 0x58
		Il2CppObject* _PageStartedJavaScripts_k__BackingField; // 0x60
		Il2CppObject* _PageFinishedJavaScripts_k__BackingField; // 0x68
		Il2CppObject* _CustomSchemes_k__BackingField; // 0x70
		::NPA::Editor::Web::NXPWebBrowserHandler* _WebBrowserHandler_k__BackingField; // 0x78

		::System::Boolean get_IsInitialized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_GET_ISINITIALIZED_OFFSET))(nullptr);
		}

		::System::Void set_IsInitialized(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_SET_ISINITIALIZED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsCefInitialized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_GET_ISCEFINITIALIZED_OFFSET))(nullptr);
		}

		::System::Void set_IsCefInitialized(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_SET_ISCEFINITIALIZED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UseTransparency()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_GET_USETRANSPARENCY_OFFSET))(nullptr);
		}

		::System::Void set_UseTransparency(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_SET_USETRANSPARENCY_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_BackgroundColor()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_GET_BACKGROUNDCOLOR_OFFSET))(nullptr);
		}

		::System::Void set_BackgroundColor(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_SET_BACKGROUNDCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UseFullScreen()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_GET_USEFULLSCREEN_OFFSET))(nullptr);
		}

		::System::Void set_UseFullScreen(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_SET_USEFULLSCREEN_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UseClearCookie()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_GET_USECLEARCOOKIE_OFFSET))(nullptr);
		}

		::System::Void set_UseClearCookie(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_SET_USECLEARCOOKIE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UseInputMode()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_GET_USEINPUTMODE_OFFSET))(nullptr);
		}

		::System::Void set_UseInputMode(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_SET_USEINPUTMODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ChangeCursor()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_GET_CHANGECURSOR_OFFSET))(nullptr);
		}

		::System::Void set_ChangeCursor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_SET_CHANGECURSOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanGoBack()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_GET_CANGOBACK_OFFSET))(nullptr);
		}

		::System::Void set_CanGoBack(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_SET_CANGOBACK_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanGoForward()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_GET_CANGOFORWARD_OFFSET))(nullptr);
		}

		::System::Void set_CanGoForward(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_SET_CANGOFORWARD_OFFSET))(arg, nullptr);
		}

		::System::Double get_ZoomLevel()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_GET_ZOOMLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_ZoomLevel(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_SET_ZOOMLEVEL_OFFSET))(arg, nullptr);
		}

		::System::String* get_InitialUrl()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_GET_INITIALURL_OFFSET))(nullptr);
		}

		::System::Void set_InitialUrl(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_SET_INITIALURL_OFFSET))(str, nullptr);
		}

		::System::String* get_CurrentUrl()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_GET_CURRENTURL_OFFSET))(nullptr);
		}

		::System::Void set_CurrentUrl(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_SET_CURRENTURL_OFFSET))(str, nullptr);
		}

		::UnityEngine::Vector2* get_WebViewSize()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_GET_WEBVIEWSIZE_OFFSET))(nullptr);
		}

		::System::Void set_WebViewSize(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_SET_WEBVIEWSIZE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_InitialHeaders()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_GET_INITIALHEADERS_OFFSET))(nullptr);
		}

		Il2CppObject* get_RemoveCookieList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_GET_REMOVECOOKIELIST_OFFSET))(nullptr);
		}

		Il2CppObject* get_DocumentLoadJavaScripts()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_GET_DOCUMENTLOADJAVASCRIPTS_OFFSET))(nullptr);
		}

		Il2CppObject* get_PageStartedJavaScripts()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_GET_PAGESTARTEDJAVASCRIPTS_OFFSET))(nullptr);
		}

		Il2CppObject* get_PageFinishedJavaScripts()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_GET_PAGEFINISHEDJAVASCRIPTS_OFFSET))(nullptr);
		}

		Il2CppObject* get_CustomSchemes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_GET_CUSTOMSCHEMES_OFFSET))(nullptr);
		}

		::NPA::Editor::Web::NXPWebBrowserHandler* get_WebBrowserHandler()
		{
			return (return (::NPA::Editor::Web::NXPWebBrowserHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_GET_WEBBROWSERHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_WebBrowserHandler(::NPA::Editor::Web::NXPWebBrowserHandler* arg)
		{
			((::System::Void(*)(::NPA::Editor::Web::NXPWebBrowserHandler*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_SET_WEBBROWSERHANDLER_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void OnResume()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_ONRESUME_OFFSET))(nullptr);
		}

		::System::Void OnPause()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_ONPAUSE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void ClearCustomScheme()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_CLEARCUSTOMSCHEME_OFFSET))(nullptr);
		}

		::System::Void LoadUrl(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_LOADURL_OFFSET))(str, nullptr);
		}

		::System::Void LoadUrl(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_LOADURL_OFFSET))(str, arg, nullptr);
		}

		::System::Void LoadHtml(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_LOADHTML_OFFSET))(str, nullptr);
		}

		::System::Void Reload(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_RELOAD_OFFSET))(arg, nullptr);
		}

		::System::Void OnRequestJsDialog(::ToyWebViewShared::Messages::RequestJsDialog* arg, ::System::Action* arg)
		{
			((::System::Void(*)(::ToyWebViewShared::Messages::RequestJsDialog*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_ONREQUESTJSDIALOG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GoBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_GOBACK_OFFSET))(nullptr);
		}

		::System::Void GoForward()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_GOFORWARD_OFFSET))(nullptr);
		}

		::System::Void SetFocus(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_SETFOCUS_OFFSET))(arg, nullptr);
		}

		::System::Void SetZoomLevel(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_SETZOOMLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void ExecuteJavaScript(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_EXECUTEJAVASCRIPT_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetUseKeyInputCompositionString(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_SETUSEKEYINPUTCOMPOSITIONSTRING_OFFSET))(arg, nullptr);
		}

		::System::Void SetWebBrowserHandler(::NPA::Editor::Web::NXPWebBrowserHandler* arg)
		{
			((::System::Void(*)(::NPA::Editor::Web::NXPWebBrowserHandler*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_SETWEBBROWSERHANDLER_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateCurrentUrl(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_UPDATECURRENTURL_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSER_.CTOR_OFFSET))(nullptr);
		}

	};
}


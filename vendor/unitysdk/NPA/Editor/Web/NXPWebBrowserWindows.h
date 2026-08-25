#pragma once
#include "../../../unitysdk.h"

namespace ToyWebViewShared { class NXPMainThreadDispatcher; }
namespace NPA::Editor::Web { class NXPWebBrowserRenderer; }
namespace NPA::Editor::Web { class NXPMessageHandler; }
namespace NPA::Editor::Web { class NXPMouseHandler; }
namespace NPA::Editor::Web { class NXPKeyHandler; }
namespace NPA::Editor::Web { class NXPSharedMemoryClient; }
namespace NPA::Editor::Web { class NXPWebServerManager; }
namespace NPA::Editor::Web { class NXPWebBrowserWindows; }
namespace ToyWebViewShared::Messages { class RequestJsDialog; }

#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_GET_JAVASCRIPTCALLBACKS_OFFSET UNITYSDK_OFFSET(0x9DB46A0)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_GET_MESSAGEHANDLER_OFFSET UNITYSDK_OFFSET(0x9DB46B0)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_SET_MESSAGEHANDLER_OFFSET UNITYSDK_OFFSET(0x9DB46C0)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_GET_MOUSEHANDLER_OFFSET UNITYSDK_OFFSET(0x9DB46E0)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_SET_MOUSEHANDLER_OFFSET UNITYSDK_OFFSET(0x9DB46F0)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_GET_KEYHANDLER_OFFSET UNITYSDK_OFFSET(0x9DB4710)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_SET_KEYHANDLER_OFFSET UNITYSDK_OFFSET(0x9DB4720)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_GET_SHAREDMEMORYCLIENT_OFFSET UNITYSDK_OFFSET(0x9DB4740)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_SET_SHAREDMEMORYCLIENT_OFFSET UNITYSDK_OFFSET(0x9DB4750)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_GET_INITIALIZEDWEBBROWSER_OFFSET UNITYSDK_OFFSET(0x9DB4770)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_SET_INITIALIZEDWEBBROWSER_OFFSET UNITYSDK_OFFSET(0x9DB4780)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_GET_VISIBLE_OFFSET UNITYSDK_OFFSET(0x9DB47A0)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_SET_VISIBLE_OFFSET UNITYSDK_OFFSET(0x9DB47D0)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_ADD_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x9DB4800)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_REMOVE_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x9DB48A0)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_CREATE_OFFSET UNITYSDK_OFFSET(0x9DAB060)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9DB4940)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_ONRESUME_OFFSET UNITYSDK_OFFSET(0x9DB4950)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x9DB4960)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_CLEARCUSTOMSCHEME_OFFSET UNITYSDK_OFFSET(0x9DB49B0)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_LOADURL_OFFSET UNITYSDK_OFFSET(0x9DB4B50)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_LOADURL_OFFSET UNITYSDK_OFFSET(0x9DB4B70)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_LOADHTML_OFFSET UNITYSDK_OFFSET(0x9DB4CE0)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_RELOAD_OFFSET UNITYSDK_OFFSET(0x9DB4D60)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_ONREQUESTJSDIALOG_OFFSET UNITYSDK_OFFSET(0x9DB4DD0)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_GOBACK_OFFSET UNITYSDK_OFFSET(0x9DB4FC0)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_GOFORWARD_OFFSET UNITYSDK_OFFSET(0x9DB5030)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_SETFOCUS_OFFSET UNITYSDK_OFFSET(0x9DB50A0)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_SETZOOMLEVEL_OFFSET UNITYSDK_OFFSET(0x9DB5110)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_EXECUTEJAVASCRIPT_OFFSET UNITYSDK_OFFSET(0x9DB5190)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_SETUSEKEYINPUTCOMPOSITIONSTRING_OFFSET UNITYSDK_OFFSET(0x9DB52C0)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_REMOVEWEBCACHE_OFFSET UNITYSDK_OFFSET(0x9DB52E0)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_ONINITIALIZED_OFFSET UNITYSDK_OFFSET(0x9DAEF70)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_AWAKE_OFFSET UNITYSDK_OFFSET(0x9DB5460)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_UPDATE_OFFSET UNITYSDK_OFFSET(0x9DB5800)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9DB5C50)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_CONNECT_OFFSET UNITYSDK_OFFSET(0x9DB5880)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_ONSHAREDMEMORYDISCONNECTED_OFFSET UNITYSDK_OFFSET(0x9DB6160)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_SETMESSAGEHANDLERCALLBACK_OFFSET UNITYSDK_OFFSET(0x9DB5E00)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_REMOVECOOKIE_OFFSET UNITYSDK_OFFSET(0x9DAF370)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_SETCUSTOMSCHEME_OFFSET UNITYSDK_OFFSET(0x9DB4C60)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_DELETEALLCOOKIE_OFFSET UNITYSDK_OFFSET(0x9DB6170)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_DELETECOOKIE_OFFSET UNITYSDK_OFFSET(0x9DB61E0)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_EXECUTEJAVASCRIPT_OFFSET UNITYSDK_OFFSET(0x9DB51B0)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_EXECUTEJAVASCRIPTONDOCUMENTLOAD_OFFSET UNITYSDK_OFFSET(0x9DAF1F0)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_STOPWEBVIEWSERVER_OFFSET UNITYSDK_OFFSET(0x9DB5D90)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_EXECUTEJAVASCRIPTATPAGESTARTED_OFFSET UNITYSDK_OFFSET(0x9DB6270)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_EXECUTEJAVASCRIPTATPAGEFINISHED_OFFSET UNITYSDK_OFFSET(0x9DB63F0)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DB6570)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS__SETMESSAGEHANDLERCALLBACK_B__60_0_OFFSET UNITYSDK_OFFSET(0x9DB65F0)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS__SETMESSAGEHANDLERCALLBACK_B__60_1_OFFSET UNITYSDK_OFFSET(0x9DB6630)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS__SETMESSAGEHANDLERCALLBACK_B__60_2_OFFSET UNITYSDK_OFFSET(0x9DB6840)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS__SETMESSAGEHANDLERCALLBACK_B__60_3_OFFSET UNITYSDK_OFFSET(0x9DB68B0)
#define NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS__SETMESSAGEHANDLERCALLBACK_B__60_4_OFFSET UNITYSDK_OFFSET(0x9DB6910)

namespace NPA::Editor::Web
{
	inline static constexpr unsigned int NXPWebBrowserWindows_TypeDefinitionIndex = 26407;

	class NXPWebBrowserWindows : public Il2CppObject
	{
	public:
		::System::Boolean connectStarted; // 0x80
		::System::Int32 javaScriptCallbackSequence; // 0x84
		::ToyWebViewShared::NXPMainThreadDispatcher* mainThreadDispatcher; // 0x88
		::NPA::Editor::Web::NXPWebBrowserRenderer* webBrowserRenderer; // 0x90
		Il2CppObject* _JavaScriptCallbacks_k__BackingField; // 0x98
		::NPA::Editor::Web::NXPMessageHandler* _MessageHandler_k__BackingField; // 0xA0
		::NPA::Editor::Web::NXPMouseHandler* _MouseHandler_k__BackingField; // 0xA8
		::NPA::Editor::Web::NXPKeyHandler* _KeyHandler_k__BackingField; // 0xB0
		::NPA::Editor::Web::NXPSharedMemoryClient* _SharedMemoryClient_k__BackingField; // 0xB8
		Il2CppObject* onRequestJsDialog; // 0xC0
		::NPA::Editor::Web::NXPWebServerManager* webServerManager; // 0xC8
		::System::String* pipeNamePrefix; // 0xD0
		::NPA::Editor::Web::NXPWebBrowserWindows* _InitializedWebBrowser_k__BackingField; // 0xD8
		::System::EventHandler* Initialized; // 0xE0

		Il2CppObject* get_JavaScriptCallbacks()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_GET_JAVASCRIPTCALLBACKS_OFFSET))(nullptr);
		}

		::NPA::Editor::Web::NXPMessageHandler* get_MessageHandler()
		{
			return (return (::NPA::Editor::Web::NXPMessageHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_GET_MESSAGEHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_MessageHandler(::NPA::Editor::Web::NXPMessageHandler* arg)
		{
			((::System::Void(*)(::NPA::Editor::Web::NXPMessageHandler*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_SET_MESSAGEHANDLER_OFFSET))(arg, nullptr);
		}

		::NPA::Editor::Web::NXPMouseHandler* get_MouseHandler()
		{
			return (return (::NPA::Editor::Web::NXPMouseHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_GET_MOUSEHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_MouseHandler(::NPA::Editor::Web::NXPMouseHandler* arg)
		{
			((::System::Void(*)(::NPA::Editor::Web::NXPMouseHandler*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_SET_MOUSEHANDLER_OFFSET))(arg, nullptr);
		}

		::NPA::Editor::Web::NXPKeyHandler* get_KeyHandler()
		{
			return (return (::NPA::Editor::Web::NXPKeyHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_GET_KEYHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_KeyHandler(::NPA::Editor::Web::NXPKeyHandler* arg)
		{
			((::System::Void(*)(::NPA::Editor::Web::NXPKeyHandler*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_SET_KEYHANDLER_OFFSET))(arg, nullptr);
		}

		::NPA::Editor::Web::NXPSharedMemoryClient* get_SharedMemoryClient()
		{
			return (return (::NPA::Editor::Web::NXPSharedMemoryClient*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_GET_SHAREDMEMORYCLIENT_OFFSET))(nullptr);
		}

		::System::Void set_SharedMemoryClient(::NPA::Editor::Web::NXPSharedMemoryClient* arg)
		{
			((::System::Void(*)(::NPA::Editor::Web::NXPSharedMemoryClient*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_SET_SHAREDMEMORYCLIENT_OFFSET))(arg, nullptr);
		}

		::NPA::Editor::Web::NXPWebBrowserWindows* get_InitializedWebBrowser()
		{
			return (return (::NPA::Editor::Web::NXPWebBrowserWindows*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_GET_INITIALIZEDWEBBROWSER_OFFSET))(nullptr);
		}

		::System::Void set_InitializedWebBrowser(::NPA::Editor::Web::NXPWebBrowserWindows* arg)
		{
			((::System::Void(*)(::NPA::Editor::Web::NXPWebBrowserWindows*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_SET_INITIALIZEDWEBBROWSER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Visible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_GET_VISIBLE_OFFSET))(nullptr);
		}

		::System::Void set_Visible(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_SET_VISIBLE_OFFSET))(arg, nullptr);
		}

		::System::Void add_Initialized(::System::EventHandler* arg)
		{
			((::System::Void(*)(::System::EventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_ADD_INITIALIZED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_Initialized(::System::EventHandler* arg)
		{
			((::System::Void(*)(::System::EventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_REMOVE_INITIALIZED_OFFSET))(arg, nullptr);
		}

		::NPA::Editor::Web::NXPWebBrowserWindows* Create()
		{
			return (return (::NPA::Editor::Web::NXPWebBrowserWindows*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_CREATE_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void OnResume()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_ONRESUME_OFFSET))(nullptr);
		}

		::System::Void OnPause()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_ONPAUSE_OFFSET))(nullptr);
		}

		::System::Void ClearCustomScheme()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_CLEARCUSTOMSCHEME_OFFSET))(nullptr);
		}

		::System::Void LoadUrl(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_LOADURL_OFFSET))(str, nullptr);
		}

		::System::Void LoadUrl(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_LOADURL_OFFSET))(str, arg, nullptr);
		}

		::System::Void LoadHtml(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_LOADHTML_OFFSET))(str, nullptr);
		}

		::System::Void Reload(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_RELOAD_OFFSET))(arg, nullptr);
		}

		::System::Void OnRequestJsDialog(::ToyWebViewShared::Messages::RequestJsDialog* arg, ::System::Action* arg)
		{
			((::System::Void(*)(::ToyWebViewShared::Messages::RequestJsDialog*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_ONREQUESTJSDIALOG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GoBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_GOBACK_OFFSET))(nullptr);
		}

		::System::Void GoForward()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_GOFORWARD_OFFSET))(nullptr);
		}

		::System::Void SetFocus(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_SETFOCUS_OFFSET))(arg, nullptr);
		}

		::System::Void SetZoomLevel(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_SETZOOMLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void ExecuteJavaScript(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_EXECUTEJAVASCRIPT_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetUseKeyInputCompositionString(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_SETUSEKEYINPUTCOMPOSITIONSTRING_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveWebCache()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_REMOVEWEBCACHE_OFFSET))(nullptr);
		}

		::System::Void OnInitialized()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_ONINITIALIZED_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_UPDATE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void Connect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_CONNECT_OFFSET))(nullptr);
		}

		::System::Void OnSharedMemoryDisconnected()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_ONSHAREDMEMORYDISCONNECTED_OFFSET))(nullptr);
		}

		::System::Void SetMessageHandlerCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_SETMESSAGEHANDLERCALLBACK_OFFSET))(nullptr);
		}

		::System::Void RemoveCookie()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_REMOVECOOKIE_OFFSET))(nullptr);
		}

		::System::Void SetCustomScheme()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_SETCUSTOMSCHEME_OFFSET))(nullptr);
		}

		::System::Void DeleteAllCookie()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_DELETEALLCOOKIE_OFFSET))(nullptr);
		}

		::System::Void DeleteCookie(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_DELETECOOKIE_OFFSET))(str, arg, nullptr);
		}

		::System::Void ExecuteJavaScript(::System::String* str, ::System::Boolean arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_EXECUTEJAVASCRIPT_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void ExecuteJavaScriptOnDocumentLoad()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_EXECUTEJAVASCRIPTONDOCUMENTLOAD_OFFSET))(nullptr);
		}

		::System::Void StopWebViewServer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_STOPWEBVIEWSERVER_OFFSET))(nullptr);
		}

		::System::Void ExecuteJavaScriptAtPageStarted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_EXECUTEJAVASCRIPTATPAGESTARTED_OFFSET))(nullptr);
		}

		::System::Void ExecuteJavaScriptAtPageFinished()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_EXECUTEJAVASCRIPTATPAGEFINISHED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _SetMessageHandlerCallback_b__60_0(::System::Object* arg, ::System::Single arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS__SETMESSAGEHANDLERCALLBACK_B__60_0_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void _SetMessageHandlerCallback_b__60_1(::System::Object* arg, ::System::Int32 arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS__SETMESSAGEHANDLERCALLBACK_B__60_1_OFFSET))(arg, arg, str, str, nullptr);
		}

		::System::Void _SetMessageHandlerCallback_b__60_2(::System::Object* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Object*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS__SETMESSAGEHANDLERCALLBACK_B__60_2_OFFSET))(arg, str, str, nullptr);
		}

		::System::Void _SetMessageHandlerCallback_b__60_3(::System::Object* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS__SETMESSAGEHANDLERCALLBACK_B__60_3_OFFSET))(arg, str, nullptr);
		}

		::System::Void _SetMessageHandlerCallback_b__60_4(::System::Object* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBBROWSERWINDOWS__SETMESSAGEHANDLERCALLBACK_B__60_4_OFFSET))(arg, str, nullptr);
		}

	};
}


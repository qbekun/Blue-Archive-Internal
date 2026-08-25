#pragma once
#include "../../../../unitysdk.h"

namespace NPA::Editor::Web { class NXPWebBrowserRenderer; }
namespace ToyWebViewShared { class NXPMainThreadDispatcher; }
namespace NPA::Editor::Web { class GameScaleWebKeyHandlerOSX; }
namespace NPA::Editor::Web { class GameScaleWebMouseHandlerOSX; }
namespace NPA::Editor::Web::MacOS { class NXPWebBrowserOSX; }
namespace ToyWebViewShared::Messages { class RequestJsDialog; }

#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_GAMESCALEWEBHELPERPLUGIN_NEW_OFFSET UNITYSDK_OFFSET(0x9DB8830)
#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_GAMESCALEWEBHELPERPLUGIN_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9DB8930)
#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_GAMESCALEWEBHELPERPLUGIN_DESTROY_OFFSET UNITYSDK_OFFSET(0x9DB89B0)
#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_GAMESCALEWEBHELPERPLUGIN_SENDMESSAGE_OFFSET UNITYSDK_OFFSET(0x9DB8A30)
#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_GAMESCALEWEBHELPERPLUGIN_RECEIVEMESSAGEIMPL_OFFSET UNITYSDK_OFFSET(0x9DB8760)
#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_GAMESCALEWEBHELPERPLUGIN_REGISTERMESSAGELISTENER_OFFSET UNITYSDK_OFFSET(0x9DB8AE0)
#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_GAMESCALEWEBHELPERPLUGIN_RECEIVEIMAGEDATAIMPL_OFFSET UNITYSDK_OFFSET(0x9DB87C0)
#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_GAMESCALEWEBHELPERPLUGIN_REGISTERIMAGEDATALISTENER_OFFSET UNITYSDK_OFFSET(0x9DB8B70)
#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_GAMESCALEWEBHELPERPLUGIN_RELEASEIMAGEDATA_OFFSET UNITYSDK_OFFSET(0x9DB8C00)
#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_GET_KEYHANDLER_OFFSET UNITYSDK_OFFSET(0x9DB8C80)
#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_SET_KEYHANDLER_OFFSET UNITYSDK_OFFSET(0x9DB8C90)
#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_GET_MOUSEHANDLER_OFFSET UNITYSDK_OFFSET(0x9DB8CB0)
#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_SET_MOUSEHANDLER_OFFSET UNITYSDK_OFFSET(0x9DB8CC0)
#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_CREATE_OFFSET UNITYSDK_OFFSET(0x9DB8CE0)
#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_EXISTLIBRARY_OFFSET UNITYSDK_OFFSET(0x9DB8E70)
#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9DB8F70)
#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_ONRESUME_OFFSET UNITYSDK_OFFSET(0x9DB9AC0)
#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x9DB9AD0)
#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9DB9B20)
#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_CLEARCUSTOMSCHEME_OFFSET UNITYSDK_OFFSET(0x9DB9C10)
#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_LOADURL_OFFSET UNITYSDK_OFFSET(0x9DB9DB0)
#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_LOADURL_OFFSET UNITYSDK_OFFSET(0x9DB9DC0)
#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_LOADHTML_OFFSET UNITYSDK_OFFSET(0x9DB9DD0)
#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_RELOAD_OFFSET UNITYSDK_OFFSET(0x9DB9DE0)
#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_ONREQUESTJSDIALOG_OFFSET UNITYSDK_OFFSET(0x9DB9DF0)
#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_GOBACK_OFFSET UNITYSDK_OFFSET(0x9DB9F70)
#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_GOFORWARD_OFFSET UNITYSDK_OFFSET(0x9DBA040)
#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_SETFOCUS_OFFSET UNITYSDK_OFFSET(0x9DBA050)
#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_SETZOOMLEVEL_OFFSET UNITYSDK_OFFSET(0x9DBA170)
#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_EXECUTEJAVASCRIPT_OFFSET UNITYSDK_OFFSET(0x9DBA180)
#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_SETUSEKEYINPUTCOMPOSITIONSTRING_OFFSET UNITYSDK_OFFSET(0x9DBA2C0)
#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_SENDREPLYJSDIALOG_OFFSET UNITYSDK_OFFSET(0x9DBA2E0)
#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x9DBA410)
#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_AWAKE_OFFSET UNITYSDK_OFFSET(0x9DBA420)
#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_UPDATE_OFFSET UNITYSDK_OFFSET(0x9DBA4D0)
#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_ONGUI_OFFSET UNITYSDK_OFFSET(0x9DBA550)
#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_PROCESSWEBVIEWDATA_OFFSET UNITYSDK_OFFSET(0x9DBA560)
#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_UPDATEUI_OFFSET UNITYSDK_OFFSET(0x9DBB5F0)
#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_ONKEYEVENT_OFFSET UNITYSDK_OFFSET(0x9DBB950)
#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_ONMOUSECLICKEVENT_OFFSET UNITYSDK_OFFSET(0x9DBBBB0)
#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_ONMOUSEWHEELEVENT_OFFSET UNITYSDK_OFFSET(0x9DBBD00)
#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_ONMOUSEMOVEEVENT_OFFSET UNITYSDK_OFFSET(0x9DBBE50)
#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_ONRESIZE_OFFSET UNITYSDK_OFFSET(0x9DBBF80)
#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_SETCUSTOMSCHEME_OFFSET UNITYSDK_OFFSET(0x9DBB4B0)
#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_EXECUTEJAVASCRIPTONDOCUMENTLOAD_OFFSET UNITYSDK_OFFSET(0x9DBB030)
#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_EXECUTEJAVASCRIPTATPAGESTARTED_OFFSET UNITYSDK_OFFSET(0x9DBB1A0)
#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_EXECUTEJAVASCRIPTATPAGEFINISHED_OFFSET UNITYSDK_OFFSET(0x9DBB310)
#define NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DBC0A0)

namespace NPA::Editor::Web::MacOS
{
	inline static constexpr unsigned int NXPWebBrowserOSX_TypeDefinitionIndex = 26422;

	class NXPWebBrowserOSX : public Il2CppObject
	{
	public:
		Il2CppObject* updateUIAction; // 0x0
		Il2CppObject* processWebViewDataAction; // 0x8
		::System::Int32 webViewHelper; // 0x80
		::NPA::Editor::Web::NXPWebBrowserRenderer* webBrowserRenderer; // 0x88
		::ToyWebViewShared::NXPMainThreadDispatcher* mainThreadDispatcher; // 0x90
		::NPA::Editor::Web::GameScaleWebKeyHandlerOSX* _KeyHandler_k__BackingField; // 0x98
		::NPA::Editor::Web::GameScaleWebMouseHandlerOSX* _MouseHandler_k__BackingField; // 0xA0

		::System::Int32 GameScaleWebHelperPlugin_New(::System::Int32 arg, ::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_GAMESCALEWEBHELPERPLUGIN_NEW_OFFSET))(arg, str, str, str, str, nullptr);
		}

		::System::Boolean GameScaleWebHelperPlugin_Initialize(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_GAMESCALEWEBHELPERPLUGIN_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void GameScaleWebHelperPlugin_Destroy(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_GAMESCALEWEBHELPERPLUGIN_DESTROY_OFFSET))(arg, nullptr);
		}

		::System::Void GameScaleWebHelperPlugin_SendMessage(::System::Int32 arg, ::System::Int32 arg, ::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_GAMESCALEWEBHELPERPLUGIN_SENDMESSAGE_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Void GameScaleWebHelperPlugin_ReceiveMessageImpl(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_GAMESCALEWEBHELPERPLUGIN_RECEIVEMESSAGEIMPL_OFFSET))(arg, str, nullptr);
		}

		::System::Void GameScaleWebHelperPlugin_RegisterMessageListener(GameScaleWebHelperReceiveMessage* arg)
		{
			((::System::Void(*)(GameScaleWebHelperReceiveMessage*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_GAMESCALEWEBHELPERPLUGIN_REGISTERMESSAGELISTENER_OFFSET))(arg, nullptr);
		}

		::System::Void GameScaleWebHelperPlugin_ReceiveImageDataImpl(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_GAMESCALEWEBHELPERPLUGIN_RECEIVEIMAGEDATAIMPL_OFFSET))(arg, arg, arg, str, nullptr);
		}

		::System::Void GameScaleWebHelperPlugin_RegisterImageDataListener(GameScaleWebHelperReceiveImageData* arg)
		{
			((::System::Void(*)(GameScaleWebHelperReceiveImageData*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_GAMESCALEWEBHELPERPLUGIN_REGISTERIMAGEDATALISTENER_OFFSET))(arg, nullptr);
		}

		::System::Void GameScaleWebHelperPlugin_ReleaseImageData(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_GAMESCALEWEBHELPERPLUGIN_RELEASEIMAGEDATA_OFFSET))(arg, nullptr);
		}

		::NPA::Editor::Web::GameScaleWebKeyHandlerOSX* get_KeyHandler()
		{
			return (return (::NPA::Editor::Web::GameScaleWebKeyHandlerOSX*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_GET_KEYHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_KeyHandler(::NPA::Editor::Web::GameScaleWebKeyHandlerOSX* arg)
		{
			((::System::Void(*)(::NPA::Editor::Web::GameScaleWebKeyHandlerOSX*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_SET_KEYHANDLER_OFFSET))(arg, nullptr);
		}

		::NPA::Editor::Web::GameScaleWebMouseHandlerOSX* get_MouseHandler()
		{
			return (return (::NPA::Editor::Web::GameScaleWebMouseHandlerOSX*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_GET_MOUSEHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_MouseHandler(::NPA::Editor::Web::GameScaleWebMouseHandlerOSX* arg)
		{
			((::System::Void(*)(::NPA::Editor::Web::GameScaleWebMouseHandlerOSX*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_SET_MOUSEHANDLER_OFFSET))(arg, nullptr);
		}

		::NPA::Editor::Web::MacOS::NXPWebBrowserOSX* Create()
		{
			return (return (::NPA::Editor::Web::MacOS::NXPWebBrowserOSX*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_CREATE_OFFSET))(nullptr);
		}

		::System::Boolean ExistLibrary()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_EXISTLIBRARY_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void OnResume()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_ONRESUME_OFFSET))(nullptr);
		}

		::System::Void OnPause()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_ONPAUSE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void ClearCustomScheme()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_CLEARCUSTOMSCHEME_OFFSET))(nullptr);
		}

		::System::Void LoadUrl(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_LOADURL_OFFSET))(str, nullptr);
		}

		::System::Void LoadUrl(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_LOADURL_OFFSET))(str, arg, nullptr);
		}

		::System::Void LoadHtml(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_LOADHTML_OFFSET))(str, nullptr);
		}

		::System::Void Reload(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_RELOAD_OFFSET))(arg, nullptr);
		}

		::System::Void OnRequestJsDialog(::ToyWebViewShared::Messages::RequestJsDialog* arg, ::System::Action* arg)
		{
			((::System::Void(*)(::ToyWebViewShared::Messages::RequestJsDialog*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_ONREQUESTJSDIALOG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GoBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_GOBACK_OFFSET))(nullptr);
		}

		::System::Void GoForward()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_GOFORWARD_OFFSET))(nullptr);
		}

		::System::Void SetFocus(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_SETFOCUS_OFFSET))(arg, nullptr);
		}

		::System::Void SetZoomLevel(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_SETZOOMLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void ExecuteJavaScript(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_EXECUTEJAVASCRIPT_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetUseKeyInputCompositionString(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_SETUSEKEYINPUTCOMPOSITIONSTRING_OFFSET))(arg, nullptr);
		}

		::System::Void SendReplyJsDialog(::System::Boolean arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Boolean, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_SENDREPLYJSDIALOG_OFFSET))(arg, str, nullptr);
		}

		::System::Void OnApplicationFocus(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_ONAPPLICATIONFOCUS_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_UPDATE_OFFSET))(nullptr);
		}

		::System::Void OnGUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_ONGUI_OFFSET))(nullptr);
		}

		::System::Void ProcessWebViewData(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_PROCESSWEBVIEWDATA_OFFSET))(arg, str, nullptr);
		}

		::System::Void UpdateUI(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_UPDATEUI_OFFSET))(arg, arg, arg, str, nullptr);
		}

		::System::Void OnKeyEvent(EventType* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, Modifier* arg)
		{
			((::System::Void(*)(EventType*, ::System::Int32, ::System::Int32, ::System::Int32, Modifier*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_ONKEYEVENT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void OnMouseClickEvent(::System::Int32 arg, ::System::Int32 arg, Button* arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, Button*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_ONMOUSECLICKEVENT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void OnMouseWheelEvent(::System::Boolean arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_ONMOUSEWHEELEVENT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void OnMouseMoveEvent(::System::Int32 arg, ::System::Int32 arg, Button* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, Button*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_ONMOUSEMOVEEVENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnResize(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_ONRESIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetCustomScheme()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_SETCUSTOMSCHEME_OFFSET))(nullptr);
		}

		::System::Void ExecuteJavaScriptOnDocumentLoad()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_EXECUTEJAVASCRIPTONDOCUMENTLOAD_OFFSET))(nullptr);
		}

		::System::Void ExecuteJavaScriptAtPageStarted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_EXECUTEJAVASCRIPTATPAGESTARTED_OFFSET))(nullptr);
		}

		::System::Void ExecuteJavaScriptAtPageFinished()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_EXECUTEJAVASCRIPTATPAGEFINISHED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_MACOS_NXPWEBBROWSEROSX_.CTOR_OFFSET))(nullptr);
		}

	};
}


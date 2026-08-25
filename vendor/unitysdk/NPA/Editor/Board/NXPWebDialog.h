#pragma once
#include "../../../unitysdk.h"

namespace NPA::Service { class NXPWebInfo; }
namespace NPA::Editor::Web { class NXPWebBrowser; }
namespace NPA::Editor::Board { class NXPWebView; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Color32; }
namespace NPA { class NPRequestTypeTag; }

#define NPA_EDITOR_BOARD_NXPWEBDIALOG_GET_DOCUMENTLOADJAVASCRIPTS_OFFSET UNITYSDK_OFFSET(0x9C57890)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_GET_PRELOADJAVASCRIPT_OFFSET UNITYSDK_OFFSET(0x9C578A0)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_GET_POSTLOADJAVASCRIPT_OFFSET UNITYSDK_OFFSET(0x9C578B0)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C55690)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C578C0)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x9C57C40)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_SETSORTORDER_OFFSET UNITYSDK_OFFSET(0x9C57EF0)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_SETVIEW_OFFSET UNITYSDK_OFFSET(0x9C57F00)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x9C57F10)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_SETUSEDEFAULTTOYHEADER_OFFSET UNITYSDK_OFFSET(0x9C57FE0)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9C57CF0)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_INITWEBBROWSER_OFFSET UNITYSDK_OFFSET(0x9C58150)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_INITVIEW_OFFSET UNITYSDK_OFFSET(0x9C591F0)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_ISCOMPLETIONURL_OFFSET UNITYSDK_OFFSET(0x9C59910)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_ISCOMPLETIONURLREGEX_OFFSET UNITYSDK_OFFSET(0x9C59980)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_SETREMOVECOOKIES_OFFSET UNITYSDK_OFFSET(0x9C59A20)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_EXECUTEJAVASCRIPT_OFFSET UNITYSDK_OFFSET(0x9C59A30)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x9C59A60)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_DESTROY_OFFSET UNITYSDK_OFFSET(0x9C59B20)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_SETCLOSECALLBACK_OFFSET UNITYSDK_OFFSET(0x9C59B50)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_GETREQUESTTAG_OFFSET UNITYSDK_OFFSET(0x9C59B60)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_GETSCREENNAME_OFFSET UNITYSDK_OFFSET(0x9C59B70)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_ADDDOCUMENTLOADJAVASCRIPT_OFFSET UNITYSDK_OFFSET(0x9C55830)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_ADDPRELOADJAVASCRIPT_OFFSET UNITYSDK_OFFSET(0x9C55E90)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_ADDPOSTLOADJAVASCRIPT_OFFSET UNITYSDK_OFFSET(0x9C59BA0)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_ONLOADWEBSERVER_OFFSET UNITYSDK_OFFSET(0x9C59C40)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_ONSTANDBY_OFFSET UNITYSDK_OFFSET(0x9C59C50)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_ONLOADPROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0x9C56B80)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_ONPAGELOADFAILED_OFFSET UNITYSDK_OFFSET(0x9C59CA0)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_ONPAGESTARTED_OFFSET UNITYSDK_OFFSET(0x9C59CB0)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_ONPAGEFINISHED_OFFSET UNITYSDK_OFFSET(0x9C59CC0)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_ONTITLECHANGED_OFFSET UNITYSDK_OFFSET(0x9C59CD0)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_ONURLCHANGED_OFFSET UNITYSDK_OFFSET(0x9C59DD0)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_ONCONSOLELOGGED_OFFSET UNITYSDK_OFFSET(0x9C5A340)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_ONCLICKED_OFFSET UNITYSDK_OFFSET(0x9C5A350)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_ONMOUSEWHEELEVENT_OFFSET UNITYSDK_OFFSET(0x9C5A360)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_ONMESSAGEEMITTED_OFFSET UNITYSDK_OFFSET(0x9C5A3C0)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_ONEXECUTENATIVEMETHOD_OFFSET UNITYSDK_OFFSET(0x9C5A3D0)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_HANDLEURLSCHEME_OFFSET UNITYSDK_OFFSET(0x9C59E80)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_HANDLETOYSCHEME_OFFSET UNITYSDK_OFFSET(0x9C5A2A0)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_HANDLETOYOPENURLSCHEME_OFFSET UNITYSDK_OFFSET(0x9C5A460)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_ADDHEADERS_OFFSET UNITYSDK_OFFSET(0x9C59390)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_GETDEFAULTTOYHEADER_OFFSET UNITYSDK_OFFSET(0x9C59560)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_GETEVENTTOYHEADER_OFFSET UNITYSDK_OFFSET(0x9C59690)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_UPDATEPROGRESSBAR_OFFSET UNITYSDK_OFFSET(0x9C59C60)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_SETISUSETRANSPARENCY_OFFSET UNITYSDK_OFFSET(0x9C5A5C0)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_SETBACKGROUNDCOLOR_OFFSET UNITYSDK_OFFSET(0x9C5A5D0)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_SETHIDECLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0x9C5A5E0)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_SETIGNORECLOSEBUTTONINPUT_OFFSET UNITYSDK_OFFSET(0x9C5A5F0)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_GETCONVERTEDCOLOR32TOUINT_OFFSET UNITYSDK_OFFSET(0x9C58120)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9C5A600)
#define NPA_EDITOR_BOARD_NXPWEBDIALOG__SETCALLBACK_B__31_0_OFFSET UNITYSDK_OFFSET(0x9C5A660)

namespace NPA::Editor::Board
{
	inline static constexpr unsigned int NXPWebDialog_TypeDefinitionIndex = 26899;

	class NXPWebDialog : public Il2CppObject
	{
	public:
		::System::String* TOY_WEBVIEW_SCHEME_OPEN_URL; // 0x0
		::NPA::Service::NXPWebInfo* webInfo; // 0x30
		::NPA::Editor::Web::NXPWebBrowser* currentWebBrowser; // 0x38
		::NPA::Editor::Board::NXPWebView* webView; // 0x40
		::UnityEngine::Vector2* webViewSize; // 0x48
		Il2CppObject* closeCallback; // 0x50
		Il2CppObject* _DocumentLoadJavaScripts_k__BackingField; // 0x58
		Il2CppObject* _PreLoadJavaScript_k__BackingField; // 0x60
		Il2CppObject* _PostLoadJavaScript_k__BackingField; // 0x68
		::System::String* completionUrl; // 0x70
		::System::String* completionUrlRegex; // 0x78
		::System::Boolean useDefaultToyHeader; // 0x80
		::System::Boolean isReady; // 0x81
		::System::Boolean isUseTransparency; // 0x82
		::System::Boolean isHideCloseButton; // 0x83
		::System::Boolean isIgnoreCloseButtonInput; // 0x84
		::UnityEngine::Color32* backgroundColor; // 0x88
		::System::Boolean useOutsideBackgroundColor; // 0x8C
		::UnityEngine::Color32* outsideBackgroundColor; // 0x90
		::System::Int32 sortOrder; // 0x94

		Il2CppObject* get_DocumentLoadJavaScripts()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_GET_DOCUMENTLOADJAVASCRIPTS_OFFSET))(nullptr);
		}

		Il2CppObject* get_PreLoadJavaScript()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_GET_PRELOADJAVASCRIPT_OFFSET))(nullptr);
		}

		Il2CppObject* get_PostLoadJavaScript()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_GET_POSTLOADJAVASCRIPT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::NPA::Service::NXPWebInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Service::NXPWebInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::NPA::Service::NXPWebInfo* arg, ::System::Boolean arg, ::UnityEngine::Color32* arg, ::System::Boolean arg, ::UnityEngine::Color32* arg, ::System::Boolean arg, ::System::Boolean arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Service::NXPWebInfo*, ::System::Boolean, ::UnityEngine::Color32*, ::System::Boolean, ::UnityEngine::Color32*, ::System::Boolean, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Show()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_SHOW_OFFSET))(nullptr);
		}

		::System::Void SetSortOrder(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_SETSORTORDER_OFFSET))(arg, nullptr);
		}

		::System::Void SetView(::NPA::Editor::Board::NXPWebView* arg)
		{
			((::System::Void(*)(::NPA::Editor::Board::NXPWebView*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_SETVIEW_OFFSET))(arg, nullptr);
		}

		::System::Void SetCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_SETCALLBACK_OFFSET))(nullptr);
		}

		::System::Void SetUseDefaultToyHeader(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_SETUSEDEFAULTTOYHEADER_OFFSET))(arg, nullptr);
		}

		::System::Boolean Initialize()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void InitWebBrowser()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_INITWEBBROWSER_OFFSET))(nullptr);
		}

		::System::Void InitView()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_INITVIEW_OFFSET))(nullptr);
		}

		::System::Boolean IsCompletionUrl(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_ISCOMPLETIONURL_OFFSET))(str, nullptr);
		}

		::System::Boolean IsCompletionUrlRegex(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_ISCOMPLETIONURLREGEX_OFFSET))(str, nullptr);
		}

		::System::Void SetRemoveCookies()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_SETREMOVECOOKIES_OFFSET))(nullptr);
		}

		::System::Void ExecuteJavaScript(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_EXECUTEJAVASCRIPT_OFFSET))(str, nullptr);
		}

		::System::Void OnClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_ONCLOSE_OFFSET))(nullptr);
		}

		::System::Void Destroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_DESTROY_OFFSET))(nullptr);
		}

		::System::Void SetCloseCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_SETCLOSECALLBACK_OFFSET))(arg, nullptr);
		}

		::NPA::NPRequestTypeTag* GetRequestTag()
		{
			return (return (::NPA::NPRequestTypeTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_GETREQUESTTAG_OFFSET))(nullptr);
		}

		::System::String* GetScreenName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_GETSCREENNAME_OFFSET))(nullptr);
		}

		::System::Void AddDocumentLoadJavaScript(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_ADDDOCUMENTLOADJAVASCRIPT_OFFSET))(str, nullptr);
		}

		::System::Void AddPreLoadJavaScript(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_ADDPRELOADJAVASCRIPT_OFFSET))(str, nullptr);
		}

		::System::Void AddPostLoadJavaScript(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_ADDPOSTLOADJAVASCRIPT_OFFSET))(str, nullptr);
		}

		::System::Void OnLoadWebServer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_ONLOADWEBSERVER_OFFSET))(nullptr);
		}

		::System::Void OnStandby(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_ONSTANDBY_OFFSET))(arg, nullptr);
		}

		::System::Void OnLoadProgressChanged(::System::Object* arg, ::System::Single arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_ONLOADPROGRESSCHANGED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnPageLoadFailed(::System::Object* arg, ::System::Int32 arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_ONPAGELOADFAILED_OFFSET))(arg, arg, str, str, nullptr);
		}

		::System::Void OnPageStarted(::System::Object* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_ONPAGESTARTED_OFFSET))(arg, str, nullptr);
		}

		::System::Void OnPageFinished(::System::Object* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_ONPAGEFINISHED_OFFSET))(arg, str, nullptr);
		}

		::System::Void OnTitleChanged(::System::Object* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_ONTITLECHANGED_OFFSET))(arg, str, nullptr);
		}

		::System::Void OnUrlChanged(::System::Object* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Object*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_ONURLCHANGED_OFFSET))(arg, str, str, nullptr);
		}

		::System::Void OnConsoleLogged(::System::Object* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_ONCONSOLELOGGED_OFFSET))(arg, str, nullptr);
		}

		::System::Void OnClicked(::System::Object* arg, ::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::System::Object*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_ONCLICKED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnMouseWheelEvent(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_ONMOUSEWHEELEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void OnMessageEmitted(::System::Object* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_ONMESSAGEEMITTED_OFFSET))(arg, str, nullptr);
		}

		::System::Void OnExecuteNativeMethod(::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_ONEXECUTENATIVEMETHOD_OFFSET))(str, str, arg, nullptr);
		}

		::System::Boolean HandleURLScheme(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_HANDLEURLSCHEME_OFFSET))(str, nullptr);
		}

		::System::Boolean HandleToyScheme(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_HANDLETOYSCHEME_OFFSET))(str, nullptr);
		}

		::System::Void HandleToyOpenUrlScheme(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_HANDLETOYOPENURLSCHEME_OFFSET))(str, nullptr);
		}

		::System::Void AddHeaders(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_ADDHEADERS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetDefaultToyHeader()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_GETDEFAULTTOYHEADER_OFFSET))(nullptr);
		}

		Il2CppObject* GetEventToyHeader()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_GETEVENTTOYHEADER_OFFSET))(nullptr);
		}

		::System::Void UpdateProgressBar(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_UPDATEPROGRESSBAR_OFFSET))(arg, nullptr);
		}

		::System::Void SetIsUseTransparency(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_SETISUSETRANSPARENCY_OFFSET))(arg, nullptr);
		}

		::System::Void SetBackgroundColor(::UnityEngine::Color32* arg)
		{
			((::System::Void(*)(::UnityEngine::Color32*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_SETBACKGROUNDCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetHideCloseButton(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_SETHIDECLOSEBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void SetIgnoreCloseButtonInput(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_SETIGNORECLOSEBUTTONINPUT_OFFSET))(arg, nullptr);
		}

		::System::UInt32 GetConvertedColor32ToUInt()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_GETCONVERTEDCOLOR32TOUINT_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void _SetCallback_b__31_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBDIALOG__SETCALLBACK_B__31_0_OFFSET))(nullptr);
		}

	};
}


#pragma once
#include "../../../unitysdk.h"

namespace ToyWebViewShared { class NXPMainThreadDispatcher; }
namespace NPA::Editor::Web { class NXPWebBrowserWindows; }
namespace NPA::Editor::Web { class NXPWebBrowserRenderer; }
namespace UnityEngine { class Texture2D; }
namespace ToyWebViewShared::Messages { class Message; }
namespace ToyWebViewShared::Messages { class ExecuteNativeMethod; }
namespace ToyWebViewShared::Messages { class NotifyCursorChange; }
namespace ToyWebViewShared::Messages { class ReplyResize; }
namespace ToyWebViewShared::Messages { class NotifyConsoleMessage; }
namespace ToyWebViewShared::Messages { class NotifyMessageEmitted; }
namespace ToyWebViewShared::Messages { class NotifyLoadError; }
namespace ToyWebViewShared::Messages { class RequestJsDialog; }
namespace ToyWebViewShared::Messages { class NotifyFocusedNodeChanged; }
namespace ToyWebViewShared::Messages { class NotifyUrlChanged; }
namespace ToyWebViewShared::Messages { class NotifyLoadingStateChange; }
namespace ToyWebViewShared::Messages { class NotifyPageStarted; }
namespace ToyWebViewShared::Messages { class NotifyPageFinished; }
namespace ToyWebViewShared::Messages { class NotifyPaintView; }
namespace ToyWebViewShared::Messages { class NotifyPaintPopup; }
namespace ToyWebViewShared::Messages { class NotifyPopupShow; }
namespace ToyWebViewShared::Messages { class NotifyPopupHide; }
namespace ToyWebViewShared::Messages { class NotifyTitleChange; }
namespace ToyWebViewShared::Messages { class ReplyExecuteJavaScript; }

#define NPA_EDITOR_WEB_NXPMESSAGEHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DAE330)
#define NPA_EDITOR_WEB_NXPMESSAGEHANDLER_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x9DAE390)
#define NPA_EDITOR_WEB_NXPMESSAGEHANDLER_ONEXECUTENATIVEMETHOD_OFFSET UNITYSDK_OFFSET(0x9DAEBE0)
#define NPA_EDITOR_WEB_NXPMESSAGEHANDLER_ONNOTIFYCURSORCHANGE_OFFSET UNITYSDK_OFFSET(0x9DAEC20)
#define NPA_EDITOR_WEB_NXPMESSAGEHANDLER_ONREPLYRESIZE_OFFSET UNITYSDK_OFFSET(0x9DAEDC0)
#define NPA_EDITOR_WEB_NXPMESSAGEHANDLER_ONNOTIFYCONSOLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x9DAEDE0)
#define NPA_EDITOR_WEB_NXPMESSAGEHANDLER_ONNOTIFYMESSAGEEMITTED_OFFSET UNITYSDK_OFFSET(0x9DAEE20)
#define NPA_EDITOR_WEB_NXPMESSAGEHANDLER_ONNOTIFYLOADERROR_OFFSET UNITYSDK_OFFSET(0x9DAEE60)
#define NPA_EDITOR_WEB_NXPMESSAGEHANDLER_ONREPLYCREATE_OFFSET UNITYSDK_OFFSET(0x9DAEED0)
#define NPA_EDITOR_WEB_NXPMESSAGEHANDLER_ONREQUESTJSDIALOG_OFFSET UNITYSDK_OFFSET(0x9DAF000)
#define NPA_EDITOR_WEB_NXPMESSAGEHANDLER_ONNOTIFYFOCUSEDNODECHANGED_OFFSET UNITYSDK_OFFSET(0x9DAF030)
#define NPA_EDITOR_WEB_NXPMESSAGEHANDLER_ONNOTIFYCLOSE_OFFSET UNITYSDK_OFFSET(0x9DAF050)
#define NPA_EDITOR_WEB_NXPMESSAGEHANDLER_ONNOTIFYCONNECT_OFFSET UNITYSDK_OFFSET(0x9DAF070)
#define NPA_EDITOR_WEB_NXPMESSAGEHANDLER_ONNOTIFYURLCHANGED_OFFSET UNITYSDK_OFFSET(0x9DAF620)
#define NPA_EDITOR_WEB_NXPMESSAGEHANDLER_ONNOTIFYLOADINGSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x9DAF660)
#define NPA_EDITOR_WEB_NXPMESSAGEHANDLER_ONNOTIFYPAGESTARTED_OFFSET UNITYSDK_OFFSET(0x9DAF6D0)
#define NPA_EDITOR_WEB_NXPMESSAGEHANDLER_ONNOTIFYPAGEFINISHED_OFFSET UNITYSDK_OFFSET(0x9DAF710)
#define NPA_EDITOR_WEB_NXPMESSAGEHANDLER_ONNOTIFYPAINTVIEW_OFFSET UNITYSDK_OFFSET(0x9DAF780)
#define NPA_EDITOR_WEB_NXPMESSAGEHANDLER_ONNOTIFYPAINTPOPUP_OFFSET UNITYSDK_OFFSET(0x9DAF810)
#define NPA_EDITOR_WEB_NXPMESSAGEHANDLER_ONNOTIFYPOPUPSHOW_OFFSET UNITYSDK_OFFSET(0x9DAF8B0)
#define NPA_EDITOR_WEB_NXPMESSAGEHANDLER_ONNOTIFYPOPUPHIDE_OFFSET UNITYSDK_OFFSET(0x9DAF930)
#define NPA_EDITOR_WEB_NXPMESSAGEHANDLER_ONNOTIFYTITLECHANGE_OFFSET UNITYSDK_OFFSET(0x9DAF9B0)
#define NPA_EDITOR_WEB_NXPMESSAGEHANDLER_ONREPLYEXECUTEJAVASCRIPT_OFFSET UNITYSDK_OFFSET(0x9DAF9F0)

namespace NPA::Editor::Web
{
	inline static constexpr unsigned int NXPMessageHandler_TypeDefinitionIndex = 26396;

	class NXPMessageHandler : public Il2CppObject
	{
	public:
		::ToyWebViewShared::NXPMainThreadDispatcher* mainThreadDispatcher; // 0x10
		::NPA::Editor::Web::NXPWebBrowserWindows* webBrowser; // 0x18
		::NPA::Editor::Web::NXPWebBrowserRenderer* webBrowserRenderer; // 0x20
		::System::Action* onLoadWebServer; // 0x28
		::System::Boolean isStandby; // 0x30
		Il2CppObject* onStandby; // 0x38
		Il2CppObject* onUrlChanged; // 0x40
		Il2CppObject* onLoadingStateChange; // 0x48
		Il2CppObject* onLoadError; // 0x50
		Il2CppObject* onPageStarted; // 0x58
		Il2CppObject* onPageFinished; // 0x60
		Il2CppObject* onTitleChange; // 0x68
		Il2CppObject* onConsoleMessage; // 0x70
		Il2CppObject* onExecuteNativeMethod; // 0x78
		Il2CppObject* onAddWebView; // 0x80
		::System::Action* onClose; // 0x88
		Il2CppObject* onMessageEmitted; // 0x90
		::UnityEngine::Texture2D* handCursor; // 0x98
		::UnityEngine::Texture2D* iBeamCursor; // 0xA0

		::System::Void .ctor(::NPA::Editor::Web::NXPWebBrowserWindows* arg, ::NPA::Editor::Web::NXPWebBrowserRenderer* arg, ::ToyWebViewShared::NXPMainThreadDispatcher* arg)
		{
			((::System::Void(*)(::NPA::Editor::Web::NXPWebBrowserWindows*, ::NPA::Editor::Web::NXPWebBrowserRenderer*, ::ToyWebViewShared::NXPMainThreadDispatcher*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPMESSAGEHANDLER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void HandleMessage(::ToyWebViewShared::Messages::Message* arg)
		{
			((::System::Void(*)(::ToyWebViewShared::Messages::Message*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPMESSAGEHANDLER_HANDLEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnExecuteNativeMethod(::ToyWebViewShared::Messages::ExecuteNativeMethod* arg)
		{
			((::System::Void(*)(::ToyWebViewShared::Messages::ExecuteNativeMethod*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPMESSAGEHANDLER_ONEXECUTENATIVEMETHOD_OFFSET))(arg, nullptr);
		}

		::System::Void OnNotifyCursorChange(::ToyWebViewShared::Messages::NotifyCursorChange* arg)
		{
			((::System::Void(*)(::ToyWebViewShared::Messages::NotifyCursorChange*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPMESSAGEHANDLER_ONNOTIFYCURSORCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnReplyResize(::ToyWebViewShared::Messages::ReplyResize* arg)
		{
			((::System::Void(*)(::ToyWebViewShared::Messages::ReplyResize*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPMESSAGEHANDLER_ONREPLYRESIZE_OFFSET))(arg, nullptr);
		}

		::System::Void OnNotifyConsoleMessage(::ToyWebViewShared::Messages::NotifyConsoleMessage* arg)
		{
			((::System::Void(*)(::ToyWebViewShared::Messages::NotifyConsoleMessage*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPMESSAGEHANDLER_ONNOTIFYCONSOLEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnNotifyMessageEmitted(::ToyWebViewShared::Messages::NotifyMessageEmitted* arg)
		{
			((::System::Void(*)(::ToyWebViewShared::Messages::NotifyMessageEmitted*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPMESSAGEHANDLER_ONNOTIFYMESSAGEEMITTED_OFFSET))(arg, nullptr);
		}

		::System::Void OnNotifyLoadError(::ToyWebViewShared::Messages::NotifyLoadError* arg)
		{
			((::System::Void(*)(::ToyWebViewShared::Messages::NotifyLoadError*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPMESSAGEHANDLER_ONNOTIFYLOADERROR_OFFSET))(arg, nullptr);
		}

		::System::Void OnReplyCreate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPMESSAGEHANDLER_ONREPLYCREATE_OFFSET))(nullptr);
		}

		::System::Void OnRequestJsDialog(::ToyWebViewShared::Messages::RequestJsDialog* arg)
		{
			((::System::Void(*)(::ToyWebViewShared::Messages::RequestJsDialog*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPMESSAGEHANDLER_ONREQUESTJSDIALOG_OFFSET))(arg, nullptr);
		}

		::System::Void OnNotifyFocusedNodeChanged(::ToyWebViewShared::Messages::NotifyFocusedNodeChanged* arg)
		{
			((::System::Void(*)(::ToyWebViewShared::Messages::NotifyFocusedNodeChanged*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPMESSAGEHANDLER_ONNOTIFYFOCUSEDNODECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void OnNotifyClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPMESSAGEHANDLER_ONNOTIFYCLOSE_OFFSET))(nullptr);
		}

		::System::Void OnNotifyConnect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPMESSAGEHANDLER_ONNOTIFYCONNECT_OFFSET))(nullptr);
		}

		::System::Void OnNotifyUrlChanged(::ToyWebViewShared::Messages::NotifyUrlChanged* arg)
		{
			((::System::Void(*)(::ToyWebViewShared::Messages::NotifyUrlChanged*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPMESSAGEHANDLER_ONNOTIFYURLCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void OnNotifyLoadingStateChange(::ToyWebViewShared::Messages::NotifyLoadingStateChange* arg)
		{
			((::System::Void(*)(::ToyWebViewShared::Messages::NotifyLoadingStateChange*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPMESSAGEHANDLER_ONNOTIFYLOADINGSTATECHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnNotifyPageStarted(::ToyWebViewShared::Messages::NotifyPageStarted* arg)
		{
			((::System::Void(*)(::ToyWebViewShared::Messages::NotifyPageStarted*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPMESSAGEHANDLER_ONNOTIFYPAGESTARTED_OFFSET))(arg, nullptr);
		}

		::System::Void OnNotifyPageFinished(::ToyWebViewShared::Messages::NotifyPageFinished* arg)
		{
			((::System::Void(*)(::ToyWebViewShared::Messages::NotifyPageFinished*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPMESSAGEHANDLER_ONNOTIFYPAGEFINISHED_OFFSET))(arg, nullptr);
		}

		::System::Void OnNotifyPaintView(::ToyWebViewShared::Messages::NotifyPaintView* arg)
		{
			((::System::Void(*)(::ToyWebViewShared::Messages::NotifyPaintView*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPMESSAGEHANDLER_ONNOTIFYPAINTVIEW_OFFSET))(arg, nullptr);
		}

		::System::Void OnNotifyPaintPopup(::ToyWebViewShared::Messages::NotifyPaintPopup* arg)
		{
			((::System::Void(*)(::ToyWebViewShared::Messages::NotifyPaintPopup*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPMESSAGEHANDLER_ONNOTIFYPAINTPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Void OnNotifyPopupShow(::ToyWebViewShared::Messages::NotifyPopupShow* arg)
		{
			((::System::Void(*)(::ToyWebViewShared::Messages::NotifyPopupShow*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPMESSAGEHANDLER_ONNOTIFYPOPUPSHOW_OFFSET))(arg, nullptr);
		}

		::System::Void OnNotifyPopupHide(::ToyWebViewShared::Messages::NotifyPopupHide* arg)
		{
			((::System::Void(*)(::ToyWebViewShared::Messages::NotifyPopupHide*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPMESSAGEHANDLER_ONNOTIFYPOPUPHIDE_OFFSET))(arg, nullptr);
		}

		::System::Void OnNotifyTitleChange(::ToyWebViewShared::Messages::NotifyTitleChange* arg)
		{
			((::System::Void(*)(::ToyWebViewShared::Messages::NotifyTitleChange*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPMESSAGEHANDLER_ONNOTIFYTITLECHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnReplyExecuteJavaScript(::ToyWebViewShared::Messages::ReplyExecuteJavaScript* arg)
		{
			((::System::Void(*)(::ToyWebViewShared::Messages::ReplyExecuteJavaScript*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPMESSAGEHANDLER_ONREPLYEXECUTEJAVASCRIPT_OFFSET))(arg, nullptr);
		}

	};
}


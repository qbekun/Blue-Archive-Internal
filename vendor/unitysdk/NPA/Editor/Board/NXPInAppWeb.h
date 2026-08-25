#pragma once
#include "../../../unitysdk.h"

namespace NPA { class NXPWebSettings; }
namespace NPA::Editor::Web { class NXPWebBrowser; }
namespace NPA { class NXPWebURLRequest; }
namespace UnityEngine { class Color32; }
namespace NPA::Editor::Board { class NXPInAppWeb; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Canvas; }
namespace NPA { class NXPInset; }
namespace NPA { class SizeUnit; }

#define NPA_EDITOR_BOARD_NXPINAPPWEB_CREATE_OFFSET UNITYSDK_OFFSET(0x9C52CA0)
#define NPA_EDITOR_BOARD_NXPINAPPWEB_AWAKE_OFFSET UNITYSDK_OFFSET(0x9C52E70)
#define NPA_EDITOR_BOARD_NXPINAPPWEB_UPDATE_OFFSET UNITYSDK_OFFSET(0x9C53390)
#define NPA_EDITOR_BOARD_NXPINAPPWEB_SETSTARTEDLOADINGCALLBACK_OFFSET UNITYSDK_OFFSET(0x9C53680)
#define NPA_EDITOR_BOARD_NXPINAPPWEB_SETFINISHEDLOADINGCALLBACK_OFFSET UNITYSDK_OFFSET(0x9C53690)
#define NPA_EDITOR_BOARD_NXPINAPPWEB_SETRECEIVEDERRORCALLBACK_OFFSET UNITYSDK_OFFSET(0x9C536A0)
#define NPA_EDITOR_BOARD_NXPINAPPWEB_SETDISMISSCALLBACK_OFFSET UNITYSDK_OFFSET(0x9C536B0)
#define NPA_EDITOR_BOARD_NXPINAPPWEB_SETWEBSETTINGS_OFFSET UNITYSDK_OFFSET(0x9C52DA0)
#define NPA_EDITOR_BOARD_NXPINAPPWEB_SETMARGIN_OFFSET UNITYSDK_OFFSET(0x9C536C0)
#define NPA_EDITOR_BOARD_NXPINAPPWEB_SETSORTORDER_OFFSET UNITYSDK_OFFSET(0x9C53910)
#define NPA_EDITOR_BOARD_NXPINAPPWEB_SHOW_OFFSET UNITYSDK_OFFSET(0x9C53990)
#define NPA_EDITOR_BOARD_NXPINAPPWEB_SHOW_OFFSET UNITYSDK_OFFSET(0x9C53A90)
#define NPA_EDITOR_BOARD_NXPINAPPWEB_LOADURL_OFFSET UNITYSDK_OFFSET(0x9C53A10)
#define NPA_EDITOR_BOARD_NXPINAPPWEB_LOADREQUEST_OFFSET UNITYSDK_OFFSET(0x9C53440)
#define NPA_EDITOR_BOARD_NXPINAPPWEB_SETCUSTOMSCHEMES_OFFSET UNITYSDK_OFFSET(0x9C53AA0)
#define NPA_EDITOR_BOARD_NXPINAPPWEB_CLOSE_OFFSET UNITYSDK_OFFSET(0x9C54290)
#define NPA_EDITOR_BOARD_NXPINAPPWEB_CANGOBACK_OFFSET UNITYSDK_OFFSET(0x9C544A0)
#define NPA_EDITOR_BOARD_NXPINAPPWEB_GOBACK_OFFSET UNITYSDK_OFFSET(0x9C544B0)
#define NPA_EDITOR_BOARD_NXPINAPPWEB_ONLOADPROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0x9C54530)
#define NPA_EDITOR_BOARD_NXPINAPPWEB_ONPAGESTARTED_OFFSET UNITYSDK_OFFSET(0x9C545D0)
#define NPA_EDITOR_BOARD_NXPINAPPWEB_ONPAGEFINISHED_OFFSET UNITYSDK_OFFSET(0x9C54670)
#define NPA_EDITOR_BOARD_NXPINAPPWEB_ONPAGELOADFAILED_OFFSET UNITYSDK_OFFSET(0x9C54710)
#define NPA_EDITOR_BOARD_NXPINAPPWEB_DISPATCHCLOSERESULT_OFFSET UNITYSDK_OFFSET(0x9C54360)
#define NPA_EDITOR_BOARD_NXPINAPPWEB_ONURLCHANGED_OFFSET UNITYSDK_OFFSET(0x9C54C40)
#define NPA_EDITOR_BOARD_NXPINAPPWEB_SHOULDOVERRIDEURLLOADING_OFFSET UNITYSDK_OFFSET(0x9C54C80)
#define NPA_EDITOR_BOARD_NXPINAPPWEB_HANDLEURL_OFFSET UNITYSDK_OFFSET(0x9C54D80)
#define NPA_EDITOR_BOARD_NXPINAPPWEB_HANDLEURLSCHEME_OFFSET UNITYSDK_OFFSET(0x9C54EA0)
#define NPA_EDITOR_BOARD_NXPINAPPWEB_HANDLEINAPPWEBLINK_OFFSET UNITYSDK_OFFSET(0x9C55140)
#define NPA_EDITOR_BOARD_NXPINAPPWEB_HANDLEWEBLINK_OFFSET UNITYSDK_OFFSET(0x9C55320)
#define NPA_EDITOR_BOARD_NXPINAPPWEB_UPDATEPROGRESSBAR_OFFSET UNITYSDK_OFFSET(0x9C54590)
#define NPA_EDITOR_BOARD_NXPINAPPWEB_GETCONVERTEDCOLOR32TOUINT_OFFSET UNITYSDK_OFFSET(0x9C53360)
#define NPA_EDITOR_BOARD_NXPINAPPWEB_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C55550)

namespace NPA::Editor::Board
{
	inline static constexpr unsigned int NXPInAppWeb_TypeDefinitionIndex = 26893;

	class NXPInAppWeb : public Il2CppObject
	{
	public:
		::NPA::NXPWebSettings* webSettings; // 0x18
		::NPA::Editor::Web::NXPWebBrowser* webBrowser; // 0x20
		::NPA::NXPWebURLRequest* request; // 0x28
		Il2CppObject* pendingRequests; // 0x30
		::System::Boolean canGoBack; // 0x38
		Il2CppObject* startedLoadingCallback; // 0x40
		Il2CppObject* finishedLoadingCallback; // 0x48
		Il2CppObject* receivedErrorCallback; // 0x50
		Il2CppObject* dismissCallback; // 0x58
		::UnityEngine::Color32* backgroundColor; // 0x60

		::NPA::Editor::Board::NXPInAppWeb* Create(::NPA::NXPWebSettings* arg)
		{
			return (return (::NPA::Editor::Board::NXPInAppWeb*(*)(::NPA::NXPWebSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPINAPPWEB_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPINAPPWEB_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPINAPPWEB_UPDATE_OFFSET))(nullptr);
		}

		::System::Void SetStartedLoadingCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPINAPPWEB_SETSTARTEDLOADINGCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SetFinishedLoadingCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPINAPPWEB_SETFINISHEDLOADINGCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SetReceivedErrorCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPINAPPWEB_SETRECEIVEDERRORCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SetDismissCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPINAPPWEB_SETDISMISSCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SetWebSettings(::NPA::NXPWebSettings* arg)
		{
			((::System::Void(*)(::NPA::NXPWebSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPINAPPWEB_SETWEBSETTINGS_OFFSET))(arg, nullptr);
		}

		::System::Void SetMargin(::UnityEngine::Transform* arg, ::UnityEngine::Canvas* arg, ::NPA::NXPInset* arg, ::NPA::SizeUnit* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Canvas*, ::NPA::NXPInset*, ::NPA::SizeUnit*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPINAPPWEB_SETMARGIN_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetSortOrder(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPINAPPWEB_SETSORTORDER_OFFSET))(arg, nullptr);
		}

		::System::Void Show(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPINAPPWEB_SHOW_OFFSET))(str, nullptr);
		}

		::System::Void Show(::NPA::NXPWebURLRequest* arg)
		{
			((::System::Void(*)(::NPA::NXPWebURLRequest*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPINAPPWEB_SHOW_OFFSET))(arg, nullptr);
		}

		::System::Void LoadUrl(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPINAPPWEB_LOADURL_OFFSET))(str, nullptr);
		}

		::System::Void LoadRequest(::NPA::NXPWebURLRequest* arg)
		{
			((::System::Void(*)(::NPA::NXPWebURLRequest*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPINAPPWEB_LOADREQUEST_OFFSET))(arg, nullptr);
		}

		::System::Void SetCustomSchemes()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPINAPPWEB_SETCUSTOMSCHEMES_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPINAPPWEB_CLOSE_OFFSET))(nullptr);
		}

		::System::Boolean CanGoBack()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPINAPPWEB_CANGOBACK_OFFSET))(nullptr);
		}

		::System::Void GoBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPINAPPWEB_GOBACK_OFFSET))(nullptr);
		}

		::System::Void OnLoadProgressChanged(::System::Object* arg, ::System::Single arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPINAPPWEB_ONLOADPROGRESSCHANGED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnPageStarted(::System::Object* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPINAPPWEB_ONPAGESTARTED_OFFSET))(arg, str, nullptr);
		}

		::System::Void OnPageFinished(::System::Object* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPINAPPWEB_ONPAGEFINISHED_OFFSET))(arg, str, nullptr);
		}

		::System::Void OnPageLoadFailed(::System::Object* arg, ::System::Int32 arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPINAPPWEB_ONPAGELOADFAILED_OFFSET))(arg, arg, str, str, nullptr);
		}

		::System::Void DispatchCloseResult(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPINAPPWEB_DISPATCHCLOSERESULT_OFFSET))(arg, str, nullptr);
		}

		::System::Void OnUrlChanged(::System::Object* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Object*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPINAPPWEB_ONURLCHANGED_OFFSET))(arg, str, str, nullptr);
		}

		::System::Void ShouldOverrideUrlLoading(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPINAPPWEB_SHOULDOVERRIDEURLLOADING_OFFSET))(str, nullptr);
		}

		::System::Void HandleUrl(::System::String* str, ::System::Action* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPINAPPWEB_HANDLEURL_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean HandleUrlScheme(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPINAPPWEB_HANDLEURLSCHEME_OFFSET))(str, nullptr);
		}

		::System::Void HandleInAppWebLink(::System::String* str, ::System::Action* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPINAPPWEB_HANDLEINAPPWEBLINK_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean HandleWebLink(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPINAPPWEB_HANDLEWEBLINK_OFFSET))(str, nullptr);
		}

		::System::Void UpdateProgressBar(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPINAPPWEB_UPDATEPROGRESSBAR_OFFSET))(arg, nullptr);
		}

		::System::UInt32 GetConvertedColor32ToUInt()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPINAPPWEB_GETCONVERTEDCOLOR32TOUINT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPINAPPWEB_.CTOR_OFFSET))(nullptr);
		}

	};
}


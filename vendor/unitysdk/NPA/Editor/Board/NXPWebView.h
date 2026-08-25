#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Color32; }
namespace NPA::Editor { class NXPCanvasScaleChecker; }

#define NPA_EDITOR_BOARD_NXPWEBVIEW_SETOUTSIDEBACKGROUNDCOLOR_OFFSET UNITYSDK_OFFSET(0x9C598E0)
#define NPA_EDITOR_BOARD_NXPWEBVIEW_SETWEBVIEWSIZE_OFFSET UNITYSDK_OFFSET(0x9C598F0)
#define NPA_EDITOR_BOARD_NXPWEBVIEW_SETISUSETRANSPARENCY_OFFSET UNITYSDK_OFFSET(0x9C5EBC0)
#define NPA_EDITOR_BOARD_NXPWEBVIEW_SETISHIDECLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0x9C5EBD0)
#define NPA_EDITOR_BOARD_NXPWEBVIEW_SETISIGNORECLOSEBUTTONINPUT_OFFSET UNITYSDK_OFFSET(0x9C5EBE0)
#define NPA_EDITOR_BOARD_NXPWEBVIEW_SETTITLEBAR_OFFSET UNITYSDK_OFFSET(0x9C5EBF0)
#define NPA_EDITOR_BOARD_NXPWEBVIEW_SETFULLSCREEN_OFFSET UNITYSDK_OFFSET(0x9C5EC00)
#define NPA_EDITOR_BOARD_NXPWEBVIEW_SETWEBBROWSER_OFFSET UNITYSDK_OFFSET(0x9C5EC10)
#define NPA_EDITOR_BOARD_NXPWEBVIEW_SETTITLE_OFFSET UNITYSDK_OFFSET(0x9C5EC20)
#define NPA_EDITOR_BOARD_NXPWEBVIEW_SETFLEXIBLESIZE_OFFSET UNITYSDK_OFFSET(0x9C5EC40)
#define NPA_EDITOR_BOARD_NXPWEBVIEW_SETSCREENSIZEPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x9C59900)
#define NPA_EDITOR_BOARD_NXPWEBVIEW_SETVISIBLEFORBACKPRESSBUTTON_OFFSET UNITYSDK_OFFSET(0x9C5EC50)
#define NPA_EDITOR_BOARD_NXPWEBVIEW_UPDATETITLE_OFFSET UNITYSDK_OFFSET(0x9C59CF0)
#define NPA_EDITOR_BOARD_NXPWEBVIEW_SETSORTORDER_OFFSET UNITYSDK_OFFSET(0x9C57E80)
#define NPA_EDITOR_BOARD_NXPWEBVIEW_LOAD_OFFSET UNITYSDK_OFFSET(0x9C5EED0)
#define NPA_EDITOR_BOARD_NXPWEBVIEW_SELECTIONGROUPEXIT_OFFSET UNITYSDK_OFFSET(0x9C5FEB0)
#define NPA_EDITOR_BOARD_NXPWEBVIEW_SETVISIBLETITLEBARFORFULLSCREEN_OFFSET UNITYSDK_OFFSET(0x9C5FED0)
#define NPA_EDITOR_BOARD_NXPWEBVIEW_SETTITLEBAR_OFFSET UNITYSDK_OFFSET(0x9C5F400)
#define NPA_EDITOR_BOARD_NXPWEBVIEW_SETOUTSIDEBACKGROUNDCOLOR_OFFSET UNITYSDK_OFFSET(0x9C5FD50)
#define NPA_EDITOR_BOARD_NXPWEBVIEW_SETWEBVIEWSIZE_OFFSET UNITYSDK_OFFSET(0x9C5F7C0)
#define NPA_EDITOR_BOARD_NXPWEBVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C57FF0)
#define NPA_EDITOR_BOARD_NXPWEBVIEW__LOAD_B__37_0_OFFSET UNITYSDK_OFFSET(0x9C5FFF0)

namespace NPA::Editor::Board
{
	inline static constexpr unsigned int NXPWebView_TypeDefinitionIndex = 26908;

	class NXPWebView : public Il2CppObject
	{
	public:
		::System::String* webViewPrefabUrl; // 0x48
		::System::String* webViewOverlayPath; // 0x50
		::System::String* webViewWindowPath; // 0x58
		::System::String* webViewHeaderBasePath; // 0x60
		::System::String* webViewContentsBasePath; // 0x68
		::UnityEngine::Vector2* minMarginForFlexibleScreen; // 0x70
		::UnityEngine::Vector2* maxMarginForFlexibleScreen; // 0x78
		::UnityEngine::MonoBehaviour* webBrowser; // 0x80
		::System::String* title; // 0x88
		::System::Boolean useTitleBar; // 0x90
		::System::Boolean useFullScreen; // 0x91
		::System::Boolean titleBarVisibleState; // 0x92
		::System::Boolean changedWebViewSize; // 0x93
		::UnityEngine::Vector2* webViewSize; // 0x94
		::System::Boolean useFlexibleSize; // 0x9C
		::System::Boolean isUseTransparency; // 0x9D
		::System::Boolean isHideCloseButton; // 0x9E
		::System::Boolean isIgnoreCloseButtonInput; // 0x9F
		::System::Boolean useOutsideBackgroundColor; // 0xA0
		::UnityEngine::Color32* outsideBackgroundColor; // 0xA4
		::System::Boolean useScreenSizePercentage; // 0xA8
		::UnityEngine::Vector2* screenSizePercentage; // 0xAC
		::NPA::Editor::NXPCanvasScaleChecker* canvasScaleChecker; // 0xB8

		::System::Void SetOutsideBackgroundColor(::System::Boolean arg, ::UnityEngine::Color32* arg)
		{
			((::System::Void(*)(::System::Boolean, ::UnityEngine::Color32*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBVIEW_SETOUTSIDEBACKGROUNDCOLOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetWebViewSize(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBVIEW_SETWEBVIEWSIZE_OFFSET))(arg, nullptr);
		}

		::System::Void SetIsUseTransparency(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBVIEW_SETISUSETRANSPARENCY_OFFSET))(arg, nullptr);
		}

		::System::Void SetIsHideCloseButton(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBVIEW_SETISHIDECLOSEBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void SetIsIgnoreCloseButtonInput(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBVIEW_SETISIGNORECLOSEBUTTONINPUT_OFFSET))(arg, nullptr);
		}

		::System::Void SetTitleBar(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBVIEW_SETTITLEBAR_OFFSET))(arg, nullptr);
		}

		::System::Void SetFullScreen(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBVIEW_SETFULLSCREEN_OFFSET))(arg, nullptr);
		}

		::System::Void SetWebBrowser(::UnityEngine::MonoBehaviour* arg)
		{
			((::System::Void(*)(::UnityEngine::MonoBehaviour*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBVIEW_SETWEBBROWSER_OFFSET))(arg, nullptr);
		}

		::System::Void SetTitle(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBVIEW_SETTITLE_OFFSET))(str, nullptr);
		}

		::System::Void SetFlexibleSize(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBVIEW_SETFLEXIBLESIZE_OFFSET))(arg, nullptr);
		}

		::System::Void SetScreenSizePercentage(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBVIEW_SETSCREENSIZEPERCENTAGE_OFFSET))(arg, nullptr);
		}

		::System::Void SetVisibleForBackPressButton(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBVIEW_SETVISIBLEFORBACKPRESSBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateTitle(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBVIEW_UPDATETITLE_OFFSET))(str, nullptr);
		}

		::System::Void SetSortOrder(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBVIEW_SETSORTORDER_OFFSET))(arg, nullptr);
		}

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBVIEW_LOAD_OFFSET))(nullptr);
		}

		::System::Void SelectionGroupExit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBVIEW_SELECTIONGROUPEXIT_OFFSET))(nullptr);
		}

		::System::Void SetVisibleTitleBarForFullScreen(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBVIEW_SETVISIBLETITLEBARFORFULLSCREEN_OFFSET))(arg, nullptr);
		}

		::System::Void SetTitleBar()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBVIEW_SETTITLEBAR_OFFSET))(nullptr);
		}

		::System::Void SetOutsideBackgroundColor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBVIEW_SETOUTSIDEBACKGROUNDCOLOR_OFFSET))(nullptr);
		}

		::System::Void SetWebViewSize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBVIEW_SETWEBVIEWSIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBVIEW_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Load_b__37_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPWEBVIEW__LOAD_B__37_0_OFFSET))(nullptr);
		}

	};
}


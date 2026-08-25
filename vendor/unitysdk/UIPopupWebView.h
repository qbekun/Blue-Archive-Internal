#pragma once
#include "unitysdk.h"

class WebViewMargin;
namespace UnityEngine { class Vector3; }

#define UIPOPUPWEBVIEW_ONBUTTONCLOSE_OFFSET UNITYSDK_OFFSET(0xC8CCC0)
#define UIPOPUPWEBVIEW_REFRESHVIEWMARGIN_OFFSET UNITYSDK_OFFSET(0xC8CD80)
#define UIPOPUPWEBVIEW_SHOW_OFFSET UNITYSDK_OFFSET(0xC8D270)
#define UIPOPUPWEBVIEW_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC8D450)
#define UIPOPUPWEBVIEW_GETCALCVIEWMARGIN_OFFSET UNITYSDK_OFFSET(0xC8CF00)
#define UIPOPUPWEBVIEW_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC8D5A0)
#define UIPOPUPWEBVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0xC8D6D0)
#define UIPOPUPWEBVIEW_HIDE_OFFSET UNITYSDK_OFFSET(0xC8CCD0)
#define UIPOPUPWEBVIEW_ONLOADWEBVIEW_OFFSET UNITYSDK_OFFSET(0xC8D6E0)

	inline static constexpr unsigned int UIPopupWebView_TypeDefinitionIndex = 9100;

	class UIPopupWebView : public Il2CppObject
	{
	public:
		::System::Action* webViewStartAction; // 0x18
		::System::Action* webViewLoadedAction; // 0x20

		::System::Void OnButtonClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPWEBVIEW_ONBUTTONCLOSE_OFFSET))(nullptr);
		}

		::System::Void RefreshViewMargin()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPWEBVIEW_REFRESHVIEWMARGIN_OFFSET))(nullptr);
		}

		::System::Void Show(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPWEBVIEW_SHOW_OFFSET))(str, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPWEBVIEW_ONENABLE_OFFSET))(nullptr);
		}

		WebViewMargin* GetCalcViewMargin(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg2)
		{
			return ((WebViewMargin*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPWEBVIEW_GETCALCVIEWMARGIN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPWEBVIEW_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPWEBVIEW_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Hide()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPWEBVIEW_HIDE_OFFSET))(nullptr);
		}

		::System::Void OnLoadWebview(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPWEBVIEW_ONLOADWEBVIEW_OFFSET))(str, arg, nullptr);
		}

	};


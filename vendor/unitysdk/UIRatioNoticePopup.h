#pragma once
#include "unitysdk.h"

class MXButton;
class UILabel;
class UIPopupWebView;
namespace UnityEngine { class GameObject; }

#define UIRATIONOTICEPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x25C3800)
#define UIRATIONOTICEPOPUP_WEBVIEWSTART_OFFSET UNITYSDK_OFFSET(0x25C3A00)
#define UIRATIONOTICEPOPUP_WEBVIEWLOADED_OFFSET UNITYSDK_OFFSET(0x25C3A20)
#define UIRATIONOTICEPOPUP_ONOPENED_OFFSET UNITYSDK_OFFSET(0x25C3A40)
#define UIRATIONOTICEPOPUP_COOPENANIMATION_OFFSET UNITYSDK_OFFSET(0x25C3B30)
#define UIRATIONOTICEPOPUP_SETDATA_OFFSET UNITYSDK_OFFSET(0x25C3BF0)
#define UIRATIONOTICEPOPUP_SETDATA_OFFSET UNITYSDK_OFFSET(0x25C3C60)
#define UIRATIONOTICEPOPUP_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x25C3D50)
#define UIRATIONOTICEPOPUP_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x25C3DE0)
#define UIRATIONOTICEPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x25C3E10)
#define UIRATIONOTICEPOPUP___N__0_OFFSET UNITYSDK_OFFSET(0x25C3E20)

	inline static constexpr unsigned int UIRatioNoticePopup_TypeDefinitionIndex = 6304;

	class UIRatioNoticePopup : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		UILabel* titleLabel; // 0xE0
		UIPopupWebView* webView; // 0xE8
		::System::String* url; // 0xF0
		::UnityEngine::GameObject* loadingIcon; // 0xF8
		::System::Action* closeCallBack; // 0x100

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRATIONOTICEPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void WebViewStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRATIONOTICEPOPUP_WEBVIEWSTART_OFFSET))(nullptr);
		}

		::System::Void WebViewLoaded()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRATIONOTICEPOPUP_WEBVIEWLOADED_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIRATIONOTICEPOPUP_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoOpenAnimation(::System::Boolean arg, ::System::Action* arg2, ::System::Boolean arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::System::Action*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIRATIONOTICEPOPUP_COOPENANIMATION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIRATIONOTICEPOPUP_SETDATA_OFFSET))(str, nullptr);
		}

		::System::Void SetData(::System::String* str, ::System::String* str2, ::System::Action* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIRATIONOTICEPOPUP_SETDATA_OFFSET))(str, str2, arg, nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRATIONOTICEPOPUP_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRATIONOTICEPOPUP_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRATIONOTICEPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0(::System::Boolean arg, ::System::Action* arg2, ::System::Boolean arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::System::Action*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIRATIONOTICEPOPUP___N__0_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};


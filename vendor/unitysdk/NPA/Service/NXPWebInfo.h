#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector2; }

#define NPA_SERVICE_NXPWEBINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC4CE0)
#define NPA_SERVICE_NXPWEBINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC4D60)
#define NPA_SERVICE_NXPWEBINFO_GET_URL_OFFSET UNITYSDK_OFFSET(0x9CC4DF0)
#define NPA_SERVICE_NXPWEBINFO_SET_URL_OFFSET UNITYSDK_OFFSET(0x9CC4E00)
#define NPA_SERVICE_NXPWEBINFO_GET_FULLSCREEN_OFFSET UNITYSDK_OFFSET(0x9CC4E10)
#define NPA_SERVICE_NXPWEBINFO_SET_FULLSCREEN_OFFSET UNITYSDK_OFFSET(0x9CC4E20)
#define NPA_SERVICE_NXPWEBINFO_GET_TITLEBAR_OFFSET UNITYSDK_OFFSET(0x9CC4E30)
#define NPA_SERVICE_NXPWEBINFO_SET_TITLEBAR_OFFSET UNITYSDK_OFFSET(0x9CC4E40)
#define NPA_SERVICE_NXPWEBINFO_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x9CC4E50)
#define NPA_SERVICE_NXPWEBINFO_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x9CC4E60)
#define NPA_SERVICE_NXPWEBINFO_SET_POSTDATA_OFFSET UNITYSDK_OFFSET(0x9CC4E70)
#define NPA_SERVICE_NXPWEBINFO_GET_EVENTWEB_OFFSET UNITYSDK_OFFSET(0x9CC4E80)
#define NPA_SERVICE_NXPWEBINFO_SET_EVENTWEB_OFFSET UNITYSDK_OFFSET(0x9CC4E90)
#define NPA_SERVICE_NXPWEBINFO_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x9CC4EA0)
#define NPA_SERVICE_NXPWEBINFO_SET_HEADERS_OFFSET UNITYSDK_OFFSET(0x9CC4EB0)
#define NPA_SERVICE_NXPWEBINFO_GET_COMPLETIONURL_OFFSET UNITYSDK_OFFSET(0x9CC4EC0)
#define NPA_SERVICE_NXPWEBINFO_SET_COMPLETIONURL_OFFSET UNITYSDK_OFFSET(0x9CC4ED0)
#define NPA_SERVICE_NXPWEBINFO_GET_COMPLETIONURLREGEX_OFFSET UNITYSDK_OFFSET(0x9CC4EE0)
#define NPA_SERVICE_NXPWEBINFO_SET_COMPLETIONURLREGEX_OFFSET UNITYSDK_OFFSET(0x9CC4EF0)
#define NPA_SERVICE_NXPWEBINFO_GET_SCHEMEACTIONS_OFFSET UNITYSDK_OFFSET(0x9CC4F00)
#define NPA_SERVICE_NXPWEBINFO_SET_SCHEMEACTIONS_OFFSET UNITYSDK_OFFSET(0x9CC4F10)
#define NPA_SERVICE_NXPWEBINFO_GET_ZOOMLEVEL_OFFSET UNITYSDK_OFFSET(0x9CC4F20)
#define NPA_SERVICE_NXPWEBINFO_SET_ZOOMLEVEL_OFFSET UNITYSDK_OFFSET(0x9CC4F30)
#define NPA_SERVICE_NXPWEBINFO_GET_USEPROGRESSBAR_OFFSET UNITYSDK_OFFSET(0x9CC4F40)
#define NPA_SERVICE_NXPWEBINFO_SET_USEPROGRESSBAR_OFFSET UNITYSDK_OFFSET(0x9CC4F50)
#define NPA_SERVICE_NXPWEBINFO_GET_PSALLOWEDDOMAINS_OFFSET UNITYSDK_OFFSET(0x9CC4F60)
#define NPA_SERVICE_NXPWEBINFO_SET_PSALLOWEDDOMAINS_OFFSET UNITYSDK_OFFSET(0x9CC4F70)
#define NPA_SERVICE_NXPWEBINFO_GET_INSIGNSSO_OFFSET UNITYSDK_OFFSET(0x9CC4F80)
#define NPA_SERVICE_NXPWEBINFO_SET_INSIGNSSO_OFFSET UNITYSDK_OFFSET(0x9CC4F90)
#define NPA_SERVICE_NXPWEBINFO_GET_USEFLEXIBLESIZE_OFFSET UNITYSDK_OFFSET(0x9CC4FA0)
#define NPA_SERVICE_NXPWEBINFO_SET_USEFLEXIBLESIZE_OFFSET UNITYSDK_OFFSET(0x9CC4FB0)
#define NPA_SERVICE_NXPWEBINFO_GET_USINGSCREENSIZEPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x9CC4FC0)
#define NPA_SERVICE_NXPWEBINFO_GET_SCREENSIZEPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x9CC4FD0)
#define NPA_SERVICE_NXPWEBINFO_SET_SCREENSIZEPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x9CC4FE0)
#define NPA_SERVICE_NXPWEBINFO_GET_USINGLOCALSPACESIZE_OFFSET UNITYSDK_OFFSET(0x9CC5050)
#define NPA_SERVICE_NXPWEBINFO_GET_WEBVIEWLOCALSPACESIZE_OFFSET UNITYSDK_OFFSET(0x9CC5060)
#define NPA_SERVICE_NXPWEBINFO_SET_WEBVIEWLOCALSPACESIZE_OFFSET UNITYSDK_OFFSET(0x9CC5070)
#define NPA_SERVICE_NXPWEBINFO_SETHEADER_OFFSET UNITYSDK_OFFSET(0x9CC5080)
#define NPA_SERVICE_NXPWEBINFO_ADDSCHEMEACTION_OFFSET UNITYSDK_OFFSET(0x9CC5180)
#define NPA_SERVICE_NXPWEBINFO_ADDPSALLOWEDDOMAIN_OFFSET UNITYSDK_OFFSET(0x9CC52E0)
#define NPA_SERVICE_NXPWEBINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9CC53E0)

namespace NPA::Service
{
	inline static constexpr unsigned int NXPWebInfo_TypeDefinitionIndex = 27297;

	class NXPWebInfo : public Il2CppObject
	{
	public:
		::System::String* url; // 0x10
		::System::Boolean titleBar; // 0x18
		::System::Boolean fullScreen; // 0x19
		::System::String* title; // 0x20
		::System::String* postData; // 0x28
		::System::Boolean eventWeb; // 0x30
		Il2CppObject* headers; // 0x38
		Il2CppObject* schemeActions; // 0x40
		::System::String* completionUrl; // 0x48
		::System::String* completionURLRegex; // 0x50
		::System::Double zoomLevel; // 0x58
		::System::Boolean useProgressBar; // 0x60
		Il2CppObject* psAllowedDomains; // 0x68
		::System::Boolean insignSSO; // 0x70
		::System::Boolean useFlexibleSize; // 0x71
		::System::Boolean useScreenSizePercentage; // 0x72
		::UnityEngine::Vector2* screenSizePercentage; // 0x74
		::System::Boolean useLocalSpaceSize; // 0x7C
		::UnityEngine::Vector2* webViewLocalSpaceSize; // 0x80

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPWEBINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPWEBINFO_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_Url()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPWEBINFO_GET_URL_OFFSET))(nullptr);
		}

		::System::Void set_Url(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPWEBINFO_SET_URL_OFFSET))(str, nullptr);
		}

		::System::Boolean get_FullScreen()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPWEBINFO_GET_FULLSCREEN_OFFSET))(nullptr);
		}

		::System::Void set_FullScreen(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPWEBINFO_SET_FULLSCREEN_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_TitleBar()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPWEBINFO_GET_TITLEBAR_OFFSET))(nullptr);
		}

		::System::Void set_TitleBar(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPWEBINFO_SET_TITLEBAR_OFFSET))(arg, nullptr);
		}

		::System::String* get_Title()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPWEBINFO_GET_TITLE_OFFSET))(nullptr);
		}

		::System::Void set_Title(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPWEBINFO_SET_TITLE_OFFSET))(str, nullptr);
		}

		::System::Void set_PostData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPWEBINFO_SET_POSTDATA_OFFSET))(str, nullptr);
		}

		::System::Boolean get_EventWeb()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPWEBINFO_GET_EVENTWEB_OFFSET))(nullptr);
		}

		::System::Void set_EventWeb(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPWEBINFO_SET_EVENTWEB_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Headers()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPWEBINFO_GET_HEADERS_OFFSET))(nullptr);
		}

		::System::Void set_Headers(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPWEBINFO_SET_HEADERS_OFFSET))(arg, nullptr);
		}

		::System::String* get_CompletionUrl()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPWEBINFO_GET_COMPLETIONURL_OFFSET))(nullptr);
		}

		::System::Void set_CompletionUrl(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPWEBINFO_SET_COMPLETIONURL_OFFSET))(str, nullptr);
		}

		::System::String* get_CompletionURLRegex()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPWEBINFO_GET_COMPLETIONURLREGEX_OFFSET))(nullptr);
		}

		::System::Void set_CompletionURLRegex(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPWEBINFO_SET_COMPLETIONURLREGEX_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_SchemeActions()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPWEBINFO_GET_SCHEMEACTIONS_OFFSET))(nullptr);
		}

		::System::Void set_SchemeActions(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPWEBINFO_SET_SCHEMEACTIONS_OFFSET))(arg, nullptr);
		}

		::System::Double get_ZoomLevel()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPWEBINFO_GET_ZOOMLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_ZoomLevel(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPWEBINFO_SET_ZOOMLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UseProgressBar()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPWEBINFO_GET_USEPROGRESSBAR_OFFSET))(nullptr);
		}

		::System::Void set_UseProgressBar(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPWEBINFO_SET_USEPROGRESSBAR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_PSAllowedDomains()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPWEBINFO_GET_PSALLOWEDDOMAINS_OFFSET))(nullptr);
		}

		::System::Void set_PSAllowedDomains(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPWEBINFO_SET_PSALLOWEDDOMAINS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_InsignSSO()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPWEBINFO_GET_INSIGNSSO_OFFSET))(nullptr);
		}

		::System::Void set_InsignSSO(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPWEBINFO_SET_INSIGNSSO_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UseFlexibleSize()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPWEBINFO_GET_USEFLEXIBLESIZE_OFFSET))(nullptr);
		}

		::System::Void set_UseFlexibleSize(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPWEBINFO_SET_USEFLEXIBLESIZE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UsingScreenSizePercentage()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPWEBINFO_GET_USINGSCREENSIZEPERCENTAGE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_ScreenSizePercentage()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPWEBINFO_GET_SCREENSIZEPERCENTAGE_OFFSET))(nullptr);
		}

		::System::Void set_ScreenSizePercentage(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPWEBINFO_SET_SCREENSIZEPERCENTAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UsingLocalSpaceSize()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPWEBINFO_GET_USINGLOCALSPACESIZE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_WebViewLocalSpaceSize()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPWEBINFO_GET_WEBVIEWLOCALSPACESIZE_OFFSET))(nullptr);
		}

		::System::Void set_WebViewLocalSpaceSize(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPWEBINFO_SET_WEBVIEWLOCALSPACESIZE_OFFSET))(arg, nullptr);
		}

		::System::Void SetHeader(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPWEBINFO_SETHEADER_OFFSET))(str, str, nullptr);
		}

		::System::Void AddSchemeAction(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPWEBINFO_ADDSCHEMEACTION_OFFSET))(str, arg, nullptr);
		}

		::System::Void AddPSAllowedDomain(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPWEBINFO_ADDPSALLOWEDDOMAIN_OFFSET))(str, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPWEBINFO_TOSTRING_OFFSET))(nullptr);
		}

	};
}


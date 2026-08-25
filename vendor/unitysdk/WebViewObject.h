#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector2; }

#define WEBVIEWOBJECT_SETALERTDIALOGENABLED_OFFSET UNITYSDK_OFFSET(0x2597250)
#define WEBVIEWOBJECT_GETVISIBILITY_OFFSET UNITYSDK_OFFSET(0x2597260)
#define WEBVIEWOBJECT_EVALUATEJS_OFFSET UNITYSDK_OFFSET(0x2597270)
#define WEBVIEWOBJECT_INIT_OFFSET UNITYSDK_OFFSET(0x2597280)
#define WEBVIEWOBJECT_GETCOOKIES_OFFSET UNITYSDK_OFFSET(0x2597390)
#define WEBVIEWOBJECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x25973A0)
#define WEBVIEWOBJECT_GETALERTDIALOGENABLED_OFFSET UNITYSDK_OFFSET(0x25973B0)
#define WEBVIEWOBJECT_CANGOFORWARD_OFFSET UNITYSDK_OFFSET(0x25973C0)
#define WEBVIEWOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x25973D0)
#define WEBVIEWOBJECT_CLEARCUSTOMHEADER_OFFSET UNITYSDK_OFFSET(0x25973E0)
#define WEBVIEWOBJECT_ISWEBVIEWAVAILABLE_OFFSET UNITYSDK_OFFSET(0x25973F0)
#define WEBVIEWOBJECT_SETMICROPHONEACCESS_OFFSET UNITYSDK_OFFSET(0x2597400)
#define WEBVIEWOBJECT_GET_ISKEYBOARDVISIBLE_OFFSET UNITYSDK_OFFSET(0x2597410)
#define WEBVIEWOBJECT_CALLONLOADED_OFFSET UNITYSDK_OFFSET(0x2597420)
#define WEBVIEWOBJECT_SETURLPATTERN_OFFSET UNITYSDK_OFFSET(0x2597440)
#define WEBVIEWOBJECT_GETCUSTOMHEADERVALUE_OFFSET UNITYSDK_OFFSET(0x2597450)
#define WEBVIEWOBJECT_SAVECOOKIES_OFFSET UNITYSDK_OFFSET(0x2597460)
#define WEBVIEWOBJECT_SETVISIBILITY_OFFSET UNITYSDK_OFFSET(0x2597470)
#define WEBVIEWOBJECT_PAUSE_OFFSET UNITYSDK_OFFSET(0x2597480)
#define WEBVIEWOBJECT_LOADURL_OFFSET UNITYSDK_OFFSET(0x2597490)
#define WEBVIEWOBJECT_SETMARGINS_OFFSET UNITYSDK_OFFSET(0x25974A0)
#define WEBVIEWOBJECT_SETBASICAUTHINFO_OFFSET UNITYSDK_OFFSET(0x25974B0)
#define WEBVIEWOBJECT_CALLFROMJS_OFFSET UNITYSDK_OFFSET(0x25974C0)
#define WEBVIEWOBJECT_GOBACK_OFFSET UNITYSDK_OFFSET(0x2597510)
#define WEBVIEWOBJECT_SETTEXTZOOM_OFFSET UNITYSDK_OFFSET(0x2597520)
#define WEBVIEWOBJECT_CALLONSTARTED_OFFSET UNITYSDK_OFFSET(0x2597530)
#define WEBVIEWOBJECT_PROGRESS_OFFSET UNITYSDK_OFFSET(0x2597550)
#define WEBVIEWOBJECT_SETCAMERAACCESS_OFFSET UNITYSDK_OFFSET(0x2597560)
#define WEBVIEWOBJECT_GOFORWARD_OFFSET UNITYSDK_OFFSET(0x2597570)
#define WEBVIEWOBJECT_CLEARCOOKIES_OFFSET UNITYSDK_OFFSET(0x2597580)
#define WEBVIEWOBJECT_CALLONCOOKIES_OFFSET UNITYSDK_OFFSET(0x2597590)
#define WEBVIEWOBJECT_GETSCROLLBOUNCEENABLED_OFFSET UNITYSDK_OFFSET(0x25975B0)
#define WEBVIEWOBJECT_ADDCUSTOMHEADER_OFFSET UNITYSDK_OFFSET(0x25975C0)
#define WEBVIEWOBJECT_SETSCROLLBOUNCEENABLED_OFFSET UNITYSDK_OFFSET(0x25975D0)
#define WEBVIEWOBJECT_CALLONERROR_OFFSET UNITYSDK_OFFSET(0x25975E0)
#define WEBVIEWOBJECT_CLEARCACHE_OFFSET UNITYSDK_OFFSET(0x2597600)
#define WEBVIEWOBJECT_SETCENTERPOSITIONWITHSCALE_OFFSET UNITYSDK_OFFSET(0x2597610)
#define WEBVIEWOBJECT_SETSCROLLBARSVISIBILITY_OFFSET UNITYSDK_OFFSET(0x2597620)
#define WEBVIEWOBJECT_CANGOBACK_OFFSET UNITYSDK_OFFSET(0x2597630)
#define WEBVIEWOBJECT_LOADHTML_OFFSET UNITYSDK_OFFSET(0x2597640)
#define WEBVIEWOBJECT_RESUME_OFFSET UNITYSDK_OFFSET(0x2597690)
#define WEBVIEWOBJECT_CALLONHTTPERROR_OFFSET UNITYSDK_OFFSET(0x25976A0)
#define WEBVIEWOBJECT_CALLONHOOKED_OFFSET UNITYSDK_OFFSET(0x25976C0)
#define WEBVIEWOBJECT_AWAKE_OFFSET UNITYSDK_OFFSET(0x2597710)
#define WEBVIEWOBJECT_RELOAD_OFFSET UNITYSDK_OFFSET(0x2597730)
#define WEBVIEWOBJECT_SETINTERACTIONENABLED_OFFSET UNITYSDK_OFFSET(0x2597740)
#define WEBVIEWOBJECT_REMOVECUSTOMHEADER_OFFSET UNITYSDK_OFFSET(0x2597750)

	inline static constexpr unsigned int WebViewObject_TypeDefinitionIndex = 272;

	class WebViewObject : public Il2CppObject
	{
	public:
		Il2CppObject* onJS; // 0x18
		Il2CppObject* onError; // 0x20
		Il2CppObject* onHttpError; // 0x28
		Il2CppObject* onStarted; // 0x30
		Il2CppObject* onLoaded; // 0x38
		Il2CppObject* onHooked; // 0x40
		Il2CppObject* onCookies; // 0x48
		::System::Boolean paused; // 0x50
		::System::Boolean visibility; // 0x51
		::System::Boolean alertDialogEnabled; // 0x52
		::System::Boolean scrollBounceEnabled; // 0x53
		::System::Int32 mMarginLeft; // 0x54
		::System::Int32 mMarginTop; // 0x58
		::System::Int32 mMarginRight; // 0x5C
		::System::Int32 mMarginBottom; // 0x60
		::System::Boolean mMarginRelative; // 0x64
		::System::Single mMarginLeftComputed; // 0x68
		::System::Single mMarginTopComputed; // 0x6C
		::System::Single mMarginRightComputed; // 0x70
		::System::Single mMarginBottomComputed; // 0x74
		::System::Boolean mMarginRelativeComputed; // 0x78
		::System::Int32 webView; // 0x80

		::System::Void SetAlertDialogEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWOBJECT_SETALERTDIALOGENABLED_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetVisibility()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWOBJECT_GETVISIBILITY_OFFSET))(nullptr);
		}

		::System::Void EvaluateJS(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWOBJECT_EVALUATEJS_OFFSET))(str, nullptr);
		}

		::System::Void Init(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3, Il2CppObject* arg4, Il2CppObject* arg5, Il2CppObject* arg6, Il2CppObject* arg7, ::System::Boolean arg8, ::System::Boolean arg9, ::System::String* str, ::System::Int32 arg10, ::System::Int32 arg11, ::System::Boolean arg12, ::System::Int32 arg13, ::System::Boolean arg14, ::System::Boolean arg15, ::System::Boolean arg16)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::System::Boolean, ::System::Boolean, ::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWOBJECT_INIT_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, str, arg10, arg11, arg12, arg13, arg14, arg15, arg16, nullptr);
		}

		::System::Void GetCookies(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWOBJECT_GETCOOKIES_OFFSET))(str, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWOBJECT_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Boolean GetAlertDialogEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWOBJECT_GETALERTDIALOGENABLED_OFFSET))(nullptr);
		}

		::System::Boolean CanGoForward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWOBJECT_CANGOFORWARD_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ClearCustomHeader()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWOBJECT_CLEARCUSTOMHEADER_OFFSET))(nullptr);
		}

		::System::Boolean IsWebViewAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWOBJECT_ISWEBVIEWAVAILABLE_OFFSET))(nullptr);
		}

		::System::Void SetMicrophoneAccess(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWOBJECT_SETMICROPHONEACCESS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsKeyboardVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWOBJECT_GET_ISKEYBOARDVISIBLE_OFFSET))(nullptr);
		}

		::System::Void CallOnLoaded(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWOBJECT_CALLONLOADED_OFFSET))(str, nullptr);
		}

		::System::Boolean SetURLPattern(::System::String* str, ::System::String* str2, ::System::String* str3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWOBJECT_SETURLPATTERN_OFFSET))(str, str2, str3, nullptr);
		}

		::System::String* GetCustomHeaderValue(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWOBJECT_GETCUSTOMHEADERVALUE_OFFSET))(str, nullptr);
		}

		::System::Void SaveCookies()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWOBJECT_SAVECOOKIES_OFFSET))(nullptr);
		}

		::System::Void SetVisibility(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWOBJECT_SETVISIBILITY_OFFSET))(arg, nullptr);
		}

		::System::Void Pause()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWOBJECT_PAUSE_OFFSET))(nullptr);
		}

		::System::Void LoadURL(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWOBJECT_LOADURL_OFFSET))(str, nullptr);
		}

		::System::Void SetMargins(::System::Int32 arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Int32 arg4, ::System::Boolean arg5)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWOBJECT_SETMARGINS_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void SetBasicAuthInfo(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWOBJECT_SETBASICAUTHINFO_OFFSET))(str, str2, nullptr);
		}

		::System::Void CallFromJS(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWOBJECT_CALLFROMJS_OFFSET))(str, nullptr);
		}

		::System::Void GoBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWOBJECT_GOBACK_OFFSET))(nullptr);
		}

		::System::Void SetTextZoom(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWOBJECT_SETTEXTZOOM_OFFSET))(arg, nullptr);
		}

		::System::Void CallOnStarted(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWOBJECT_CALLONSTARTED_OFFSET))(str, nullptr);
		}

		::System::Int32 Progress()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWOBJECT_PROGRESS_OFFSET))(nullptr);
		}

		::System::Void SetCameraAccess(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWOBJECT_SETCAMERAACCESS_OFFSET))(arg, nullptr);
		}

		::System::Void GoForward()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWOBJECT_GOFORWARD_OFFSET))(nullptr);
		}

		::System::Void ClearCookies()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWOBJECT_CLEARCOOKIES_OFFSET))(nullptr);
		}

		::System::Void CallOnCookies(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWOBJECT_CALLONCOOKIES_OFFSET))(str, nullptr);
		}

		::System::Boolean GetScrollBounceEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWOBJECT_GETSCROLLBOUNCEENABLED_OFFSET))(nullptr);
		}

		::System::Void AddCustomHeader(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWOBJECT_ADDCUSTOMHEADER_OFFSET))(str, str2, nullptr);
		}

		::System::Void SetScrollBounceEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWOBJECT_SETSCROLLBOUNCEENABLED_OFFSET))(arg, nullptr);
		}

		::System::Void CallOnError(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWOBJECT_CALLONERROR_OFFSET))(str, nullptr);
		}

		::System::Void ClearCache(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWOBJECT_CLEARCACHE_OFFSET))(arg, nullptr);
		}

		::System::Void SetCenterPositionWithScale(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWOBJECT_SETCENTERPOSITIONWITHSCALE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetScrollbarsVisibility(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWOBJECT_SETSCROLLBARSVISIBILITY_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanGoBack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWOBJECT_CANGOBACK_OFFSET))(nullptr);
		}

		::System::Void LoadHTML(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWOBJECT_LOADHTML_OFFSET))(str, str2, nullptr);
		}

		::System::Void Resume()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWOBJECT_RESUME_OFFSET))(nullptr);
		}

		::System::Void CallOnHttpError(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWOBJECT_CALLONHTTPERROR_OFFSET))(str, nullptr);
		}

		::System::Void CallOnHooked(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWOBJECT_CALLONHOOKED_OFFSET))(str, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWOBJECT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Reload()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWOBJECT_RELOAD_OFFSET))(nullptr);
		}

		::System::Void SetInteractionEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWOBJECT_SETINTERACTIONENABLED_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveCustomHeader(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + WEBVIEWOBJECT_REMOVECUSTOMHEADER_OFFSET))(str, nullptr);
		}

	};


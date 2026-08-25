#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Object; }
namespace UnityEngine { class ThreadPriority; }
namespace UnityEngine { class RuntimePlatform; }
namespace UnityEngine { class SystemLanguage; }
namespace UnityEngine { class NetworkReachability; }
namespace UnityEngine { class LogType; }

#define UNITYENGINE_APPLICATION_QUIT_OFFSET UNITYSDK_OFFSET(0xA1E2D50)
#define UNITYENGINE_APPLICATION_QUIT_OFFSET UNITYSDK_OFFSET(0xA1E2D90)
#define UNITYENGINE_APPLICATION_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0xA1E2DD0)
#define UNITYENGINE_APPLICATION_ISPLAYING_OFFSET UNITYSDK_OFFSET(0xA1E2E10)
#define UNITYENGINE_APPLICATION_GET_ISFOCUSED_OFFSET UNITYSDK_OFFSET(0xA1E2E50)
#define UNITYENGINE_APPLICATION_GET_RUNINBACKGROUND_OFFSET UNITYSDK_OFFSET(0xA1E2E90)
#define UNITYENGINE_APPLICATION_SET_RUNINBACKGROUND_OFFSET UNITYSDK_OFFSET(0xA1E2ED0)
#define UNITYENGINE_APPLICATION_GET_ISBATCHMODE_OFFSET UNITYSDK_OFFSET(0xA1E2F10)
#define UNITYENGINE_APPLICATION_GET_DATAPATH_OFFSET UNITYSDK_OFFSET(0xA1E2F50)
#define UNITYENGINE_APPLICATION_GET_STREAMINGASSETSPATH_OFFSET UNITYSDK_OFFSET(0xA1E2F90)
#define UNITYENGINE_APPLICATION_GET_PERSISTENTDATAPATH_OFFSET UNITYSDK_OFFSET(0xA1E2FD0)
#define UNITYENGINE_APPLICATION_GET_UNITYVERSION_OFFSET UNITYSDK_OFFSET(0xA1E3010)
#define UNITYENGINE_APPLICATION_GET_VERSION_OFFSET UNITYSDK_OFFSET(0xA1E3050)
#define UNITYENGINE_APPLICATION_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xA1E3090)
#define UNITYENGINE_APPLICATION_GET_PRODUCTNAME_OFFSET UNITYSDK_OFFSET(0xA1E30D0)
#define UNITYENGINE_APPLICATION_GET_COMPANYNAME_OFFSET UNITYSDK_OFFSET(0xA1E3110)
#define UNITYENGINE_APPLICATION_OPENURL_OFFSET UNITYSDK_OFFSET(0xA1E3150)
#define UNITYENGINE_APPLICATION_GET_TARGETFRAMERATE_OFFSET UNITYSDK_OFFSET(0xA1E3190)
#define UNITYENGINE_APPLICATION_SET_TARGETFRAMERATE_OFFSET UNITYSDK_OFFSET(0xA1E31D0)
#define UNITYENGINE_APPLICATION_SETLOGCALLBACKDEFINED_OFFSET UNITYSDK_OFFSET(0xA1E3210)
#define UNITYENGINE_APPLICATION_SET_BACKGROUNDLOADINGPRIORITY_OFFSET UNITYSDK_OFFSET(0xA1E3250)
#define UNITYENGINE_APPLICATION_GET_PLATFORM_OFFSET UNITYSDK_OFFSET(0xA1E3290)
#define UNITYENGINE_APPLICATION_GET_ISMOBILEPLATFORM_OFFSET UNITYSDK_OFFSET(0xA1E32D0)
#define UNITYENGINE_APPLICATION_GET_SYSTEMLANGUAGE_OFFSET UNITYSDK_OFFSET(0xA1E3330)
#define UNITYENGINE_APPLICATION_GET_INTERNETREACHABILITY_OFFSET UNITYSDK_OFFSET(0xA1E3370)
#define UNITYENGINE_APPLICATION_CALLLOWMEMORY_OFFSET UNITYSDK_OFFSET(0xA1E33B0)
#define UNITYENGINE_APPLICATION_ADD_LOGMESSAGERECEIVED_OFFSET UNITYSDK_OFFSET(0xA1E3400)
#define UNITYENGINE_APPLICATION_REMOVE_LOGMESSAGERECEIVED_OFFSET UNITYSDK_OFFSET(0xA1E34F0)
#define UNITYENGINE_APPLICATION_ADD_LOGMESSAGERECEIVEDTHREADED_OFFSET UNITYSDK_OFFSET(0xA1E35C0)
#define UNITYENGINE_APPLICATION_REMOVE_LOGMESSAGERECEIVEDTHREADED_OFFSET UNITYSDK_OFFSET(0xA1E36B0)
#define UNITYENGINE_APPLICATION_CALLLOGCALLBACK_OFFSET UNITYSDK_OFFSET(0xA1E3780)
#define UNITYENGINE_APPLICATION_ADD_FOCUSCHANGED_OFFSET UNITYSDK_OFFSET(0xA1E3820)
#define UNITYENGINE_APPLICATION_REMOVE_FOCUSCHANGED_OFFSET UNITYSDK_OFFSET(0xA1E38E0)
#define UNITYENGINE_APPLICATION_ADD_QUITTING_OFFSET UNITYSDK_OFFSET(0xA1E39A0)
#define UNITYENGINE_APPLICATION_REMOVE_QUITTING_OFFSET UNITYSDK_OFFSET(0xA1E3A60)
#define UNITYENGINE_APPLICATION_INTERNAL_APPLICATIONWANTSTOQUIT_OFFSET UNITYSDK_OFFSET(0xA1E3B20)
#define UNITYENGINE_APPLICATION_INTERNAL_APPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0xA1E3E30)
#define UNITYENGINE_APPLICATION_INTERNAL_APPLICATIONUNLOAD_OFFSET UNITYSDK_OFFSET(0xA1E3E80)
#define UNITYENGINE_APPLICATION_INVOKEONBEFORERENDER_OFFSET UNITYSDK_OFFSET(0xA1E3ED0)
#define UNITYENGINE_APPLICATION_INVOKEFOCUSCHANGED_OFFSET UNITYSDK_OFFSET(0xA1E4100)
#define UNITYENGINE_APPLICATION_INVOKEDEEPLINKACTIVATED_OFFSET UNITYSDK_OFFSET(0xA1E4160)
#define UNITYENGINE_APPLICATION_GET_ISEDITOR_OFFSET UNITYSDK_OFFSET(0xA1E41C0)

namespace UnityEngine
{
	inline static constexpr unsigned int Application_TypeDefinitionIndex = 30946;

	class Application : public Il2CppObject
	{
	public:
		LowMemoryCallback* lowMemory; // 0x0
		LogCallback* s_LogCallbackHandler; // 0x8
		LogCallback* s_LogCallbackHandlerThreaded; // 0x10
		Il2CppObject* focusChanged; // 0x18
		Il2CppObject* deepLinkActivated; // 0x20
		Il2CppObject* wantsToQuit; // 0x28
		::System::Action* quitting; // 0x30
		::System::Action* unloading; // 0x38

		::System::Void Quit(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_QUIT_OFFSET))(arg, nullptr);
		}

		::System::Void Quit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_QUIT_OFFSET))(nullptr);
		}

		::System::Boolean get_isPlaying()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_ISPLAYING_OFFSET))(nullptr);
		}

		::System::Boolean IsPlaying(::UnityEngine::Object* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_ISPLAYING_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isFocused()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_ISFOCUSED_OFFSET))(nullptr);
		}

		::System::Boolean get_runInBackground()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_RUNINBACKGROUND_OFFSET))(nullptr);
		}

		::System::Void set_runInBackground(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_SET_RUNINBACKGROUND_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isBatchMode()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_ISBATCHMODE_OFFSET))(nullptr);
		}

		::System::String* get_dataPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_DATAPATH_OFFSET))(nullptr);
		}

		::System::String* get_streamingAssetsPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_STREAMINGASSETSPATH_OFFSET))(nullptr);
		}

		::System::String* get_persistentDataPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_PERSISTENTDATAPATH_OFFSET))(nullptr);
		}

		::System::String* get_unityVersion()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_UNITYVERSION_OFFSET))(nullptr);
		}

		::System::String* get_version()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_VERSION_OFFSET))(nullptr);
		}

		::System::String* get_identifier()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_IDENTIFIER_OFFSET))(nullptr);
		}

		::System::String* get_productName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_PRODUCTNAME_OFFSET))(nullptr);
		}

		::System::String* get_companyName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_COMPANYNAME_OFFSET))(nullptr);
		}

		::System::Void OpenURL(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_OPENURL_OFFSET))(str, nullptr);
		}

		::System::Int32 get_targetFrameRate()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_TARGETFRAMERATE_OFFSET))(nullptr);
		}

		::System::Void set_targetFrameRate(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_SET_TARGETFRAMERATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetLogCallbackDefined(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_SETLOGCALLBACKDEFINED_OFFSET))(arg, nullptr);
		}

		::System::Void set_backgroundLoadingPriority(::UnityEngine::ThreadPriority* arg)
		{
			((::System::Void(*)(::UnityEngine::ThreadPriority*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_SET_BACKGROUNDLOADINGPRIORITY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::RuntimePlatform* get_platform()
		{
			return (return (::UnityEngine::RuntimePlatform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_PLATFORM_OFFSET))(nullptr);
		}

		::System::Boolean get_isMobilePlatform()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_ISMOBILEPLATFORM_OFFSET))(nullptr);
		}

		::UnityEngine::SystemLanguage* get_systemLanguage()
		{
			return (return (::UnityEngine::SystemLanguage*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_SYSTEMLANGUAGE_OFFSET))(nullptr);
		}

		::UnityEngine::NetworkReachability* get_internetReachability()
		{
			return (return (::UnityEngine::NetworkReachability*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_INTERNETREACHABILITY_OFFSET))(nullptr);
		}

		::System::Void CallLowMemory()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_CALLLOWMEMORY_OFFSET))(nullptr);
		}

		::System::Void add_logMessageReceived(LogCallback* arg)
		{
			((::System::Void(*)(LogCallback*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_ADD_LOGMESSAGERECEIVED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_logMessageReceived(LogCallback* arg)
		{
			((::System::Void(*)(LogCallback*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REMOVE_LOGMESSAGERECEIVED_OFFSET))(arg, nullptr);
		}

		::System::Void add_logMessageReceivedThreaded(LogCallback* arg)
		{
			((::System::Void(*)(LogCallback*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_ADD_LOGMESSAGERECEIVEDTHREADED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_logMessageReceivedThreaded(LogCallback* arg)
		{
			((::System::Void(*)(LogCallback*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REMOVE_LOGMESSAGERECEIVEDTHREADED_OFFSET))(arg, nullptr);
		}

		::System::Void CallLogCallback(::System::String* str, ::System::String* str, ::UnityEngine::LogType* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::UnityEngine::LogType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_CALLLOGCALLBACK_OFFSET))(str, str, arg, arg, nullptr);
		}

		::System::Void add_focusChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_ADD_FOCUSCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_focusChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REMOVE_FOCUSCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void add_quitting(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_ADD_QUITTING_OFFSET))(arg, nullptr);
		}

		::System::Void remove_quitting(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_REMOVE_QUITTING_OFFSET))(arg, nullptr);
		}

		::System::Boolean Internal_ApplicationWantsToQuit()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_INTERNAL_APPLICATIONWANTSTOQUIT_OFFSET))(nullptr);
		}

		::System::Void Internal_ApplicationQuit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_INTERNAL_APPLICATIONQUIT_OFFSET))(nullptr);
		}

		::System::Void Internal_ApplicationUnload()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_INTERNAL_APPLICATIONUNLOAD_OFFSET))(nullptr);
		}

		::System::Void InvokeOnBeforeRender()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_INVOKEONBEFORERENDER_OFFSET))(nullptr);
		}

		::System::Void InvokeFocusChanged(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_INVOKEFOCUSCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void InvokeDeepLinkActivated(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_INVOKEDEEPLINKACTIVATED_OFFSET))(str, nullptr);
		}

		::System::Boolean get_isEditor()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_APPLICATION_GET_ISEDITOR_OFFSET))(nullptr);
		}

	};
}


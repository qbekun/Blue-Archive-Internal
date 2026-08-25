#pragma once
#include "../unitysdk.h"

namespace LiveAssist { class CrashReporter; }
class CRASH_BEHAVIOR;
class CrashReporter_CallBackFunc;
class CRASH_RECEIVE_SERVER_REGION;
namespace LiveAssist { class CrashReporterConfiguration; }
namespace UnityEngine { class LogType; }

#define LIVEASSIST_CRASHREPORTER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xDDDE40)
#define LIVEASSIST_CRASHREPORTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xDDDEE0)
#define LIVEASSIST_CRASHREPORTER_CRASHREPORTER_INIT_OFFSET UNITYSDK_OFFSET(0xDDDEF0)
#define LIVEASSIST_CRASHREPORTER_CRASHREPORTER_ISINIT_OFFSET UNITYSDK_OFFSET(0xDDDF80)
#define LIVEASSIST_CRASHREPORTER_CRASHREPORTER_SENDSTARTUPINFO_OFFSET UNITYSDK_OFFSET(0xDDE000)
#define LIVEASSIST_CRASHREPORTER_CRASHREPORTER_PLAYTIMERECORDERINIT_OFFSET UNITYSDK_OFFSET(0xDDE080)
#define LIVEASSIST_CRASHREPORTER_CRASHREPORTER_REGISTERLOGFILE_OFFSET UNITYSDK_OFFSET(0xDDE100)
#define LIVEASSIST_CRASHREPORTER_CRASHREPORTER_REGISTERCALLBACK_BEFOREDUMP_OFFSET UNITYSDK_OFFSET(0xDDE180)
#define LIVEASSIST_CRASHREPORTER_CRASHREPORTER_REGISTERCLIENTMODULE_OFFSET UNITYSDK_OFFSET(0xDDE210)
#define LIVEASSIST_CRASHREPORTER_CRASHREPORTER_SETRECEIVESERVERREGION_OFFSET UNITYSDK_OFFSET(0xDDE290)
#define LIVEASSIST_CRASHREPORTER_CRASHREPORTER_SETCLIENTEXIT_OFFSET UNITYSDK_OFFSET(0xDDE310)
#define LIVEASSIST_CRASHREPORTER_CRASHREPORTER_SETGATHERCRASHSCREENSHOT_OFFSET UNITYSDK_OFFSET(0xDDE390)
#define LIVEASSIST_CRASHREPORTER_CRASHREPORTER_SETPRIVACYPROTECTION_OFFSET UNITYSDK_OFFSET(0xDDE410)
#define LIVEASSIST_CRASHREPORTER_CRASHREPORTER_SETSTRINFOW_OFFSET UNITYSDK_OFFSET(0xDDE490)
#define LIVEASSIST_CRASHREPORTER_CRASHREPORTER_SETBOOLINFO_OFFSET UNITYSDK_OFFSET(0xDDE520)
#define LIVEASSIST_CRASHREPORTER_CRASHREPORTER_SETCLIENTVERSIONINFO_OFFSET UNITYSDK_OFFSET(0xDDE5B0)
#define LIVEASSIST_CRASHREPORTER_CRASHREPORTER_SETINTINFO_OFFSET UNITYSDK_OFFSET(0xDDE630)
#define LIVEASSIST_CRASHREPORTER_CRASHREPORTER_SETFLOATINFO_OFFSET UNITYSDK_OFFSET(0xDDE6C0)
#define LIVEASSIST_CRASHREPORTER_CRASHREPORTER_SETDOUBLEINFO_OFFSET UNITYSDK_OFFSET(0xDDE750)
#define LIVEASSIST_CRASHREPORTER_CRASHREPORTER_SENDUNITYEXCEPTION_OFFSET UNITYSDK_OFFSET(0xDDE7E0)
#define LIVEASSIST_CRASHREPORTER_CRASHREPORTER_UNITYEXCEPTIONSENDERINIT_OFFSET UNITYSDK_OFFSET(0xDDE870)
#define LIVEASSIST_CRASHREPORTER_CRASHREPORTER_REGISTERSCREENSHOTFILE_OFFSET UNITYSDK_OFFSET(0xDDE8F0)
#define LIVEASSIST_CRASHREPORTER_CRASHREPORTER_SETVECTOREDEXCEPTIONHANDLER_OFFSET UNITYSDK_OFFSET(0xDDE980)
#define LIVEASSIST_CRASHREPORTER_CRASHREPORTER_SETSKIPACCESSVIOLATION_OFFSET UNITYSDK_OFFSET(0xDDEA00)
#define LIVEASSIST_CRASHREPORTER_CRASHREPORTER_CLEARVECTOREDEXCEPTIONHANDLER_OFFSET UNITYSDK_OFFSET(0xDDEA80)
#define LIVEASSIST_CRASHREPORTER_VALIDATECONFIGURATION_OFFSET UNITYSDK_OFFSET(0xDDEB00)
#define LIVEASSIST_CRASHREPORTER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xDDEB30)
#define LIVEASSIST_CRASHREPORTER_CLEANUP_OFFSET UNITYSDK_OFFSET(0xDDF4E0)
#define LIVEASSIST_CRASHREPORTER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xDDEF70)
#define LIVEASSIST_CRASHREPORTER_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0xDDF0D0)
#define LIVEASSIST_CRASHREPORTER_SENDSTARTUPINFO_OFFSET UNITYSDK_OFFSET(0xDDF6C0)
#define LIVEASSIST_CRASHREPORTER_INITIALIZEPLAYTIMERECORDER_OFFSET UNITYSDK_OFFSET(0xDDF750)
#define LIVEASSIST_CRASHREPORTER_REGISTERCALLBACK_BEFOREDUMP_OFFSET UNITYSDK_OFFSET(0xDDF7D0)
#define LIVEASSIST_CRASHREPORTER_REGISTERLOGFILE_OFFSET UNITYSDK_OFFSET(0xDDF860)
#define LIVEASSIST_CRASHREPORTER_REGISTERSCREENSHOTFILE_OFFSET UNITYSDK_OFFSET(0xDDF900)
#define LIVEASSIST_CRASHREPORTER_REGISTERCLIENTMODULE_OFFSET UNITYSDK_OFFSET(0xDDF270)
#define LIVEASSIST_CRASHREPORTER_SETSERVERREGION_OFFSET UNITYSDK_OFFSET(0xDDF150)
#define LIVEASSIST_CRASHREPORTER_SETCLIENTEXIT_OFFSET UNITYSDK_OFFSET(0xDDF640)
#define LIVEASSIST_CRASHREPORTER_SETGATHERCRASHSCREENSHOT_OFFSET UNITYSDK_OFFSET(0xDDF9A0)
#define LIVEASSIST_CRASHREPORTER_SETPRIVACYPROTECTION_OFFSET UNITYSDK_OFFSET(0xDDF310)
#define LIVEASSIST_CRASHREPORTER_SETBASEINFO_OFFSET UNITYSDK_OFFSET(0xDDFA30)
#define LIVEASSIST_CRASHREPORTER_SETBASEINFO_OFFSET UNITYSDK_OFFSET(0xDDFAF0)
#define LIVEASSIST_CRASHREPORTER_SETBASEINFO_OFFSET UNITYSDK_OFFSET(0xDDFB90)
#define LIVEASSIST_CRASHREPORTER_SETBASEINFO_OFFSET UNITYSDK_OFFSET(0xDDFC30)
#define LIVEASSIST_CRASHREPORTER_SETBASEINFO_OFFSET UNITYSDK_OFFSET(0xDDFCE0)
#define LIVEASSIST_CRASHREPORTER_SETCLIENTVERSIONINFO_OFFSET UNITYSDK_OFFSET(0xDDF1D0)
#define LIVEASSIST_CRASHREPORTER_STARTCAPTUREUNITYMESSAGES_OFFSET UNITYSDK_OFFSET(0xDDF390)
#define LIVEASSIST_CRASHREPORTER_STOPCAPTUREUNITYMESSAGES_OFFSET UNITYSDK_OFFSET(0xDDF580)
#define LIVEASSIST_CRASHREPORTER_HANDLEUNITYBACKGROUNDEXCEPTION_OFFSET UNITYSDK_OFFSET(0xDDFD90)
#define LIVEASSIST_CRASHREPORTER_HANDLEUNITYMESSAGE_OFFSET UNITYSDK_OFFSET(0xDDFE70)
#define LIVEASSIST_CRASHREPORTER_CATCHUNITYEXCEPTION_OFFSET UNITYSDK_OFFSET(0xDDFF30)

namespace LiveAssist
{
	inline static constexpr unsigned int CrashReporter_TypeDefinitionIndex = 10126;

	class CrashReporter : public Il2CppObject
	{
	public:
		::LiveAssist::CrashReporter* instance; // 0x0
		::System::Boolean isDllLoadingFailed; // 0x10
		::System::Boolean isHandlingUnityMessages; // 0x11
		::System::Threading::Thread* unityMainThread; // 0x18
		::System::Int32 receivedMessageCount; // 0x20

		::LiveAssist::CrashReporter* get_Instance()
		{
			return ((::LiveAssist::CrashReporter*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void CrashReporter_Init(::System::String* str, CRASH_BEHAVIOR* arg)
		{
			((::System::Void(*)(::System::String*, CRASH_BEHAVIOR*, ::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_CRASHREPORTER_INIT_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean CrashReporter_IsInit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_CRASHREPORTER_ISINIT_OFFSET))(nullptr);
		}

		::System::Void CrashReporter_SendStartupInfo(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_CRASHREPORTER_SENDSTARTUPINFO_OFFSET))(str, nullptr);
		}

		::System::Void CrashReporter_PlayTimeRecorderInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_CRASHREPORTER_PLAYTIMERECORDERINIT_OFFSET))(nullptr);
		}

		::System::Void CrashReporter_RegisterLogFile(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_CRASHREPORTER_REGISTERLOGFILE_OFFSET))(str, nullptr);
		}

		::System::Void CrashReporter_RegisterCallback_BeforeDump(CrashReporter_CallBackFunc* arg)
		{
			((::System::Void(*)(CrashReporter_CallBackFunc*, ::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_CRASHREPORTER_REGISTERCALLBACK_BEFOREDUMP_OFFSET))(arg, nullptr);
		}

		::System::Void CrashReporter_RegisterClientModule(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_CRASHREPORTER_REGISTERCLIENTMODULE_OFFSET))(str, nullptr);
		}

		::System::Void CrashReporter_SetReceiveServerRegion(CRASH_RECEIVE_SERVER_REGION* arg)
		{
			((::System::Void(*)(CRASH_RECEIVE_SERVER_REGION*, ::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_CRASHREPORTER_SETRECEIVESERVERREGION_OFFSET))(arg, nullptr);
		}

		::System::Void CrashReporter_SetClientExit(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_CRASHREPORTER_SETCLIENTEXIT_OFFSET))(arg, nullptr);
		}

		::System::Void CrashReporter_SetGatherCrashScreenShot(::System::Boolean arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_CRASHREPORTER_SETGATHERCRASHSCREENSHOT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void CrashReporter_SetPrivacyProtection(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_CRASHREPORTER_SETPRIVACYPROTECTION_OFFSET))(arg, nullptr);
		}

		::System::Void CrashReporter_SetStrInfoW(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_CRASHREPORTER_SETSTRINFOW_OFFSET))(str, str2, nullptr);
		}

		::System::Void CrashReporter_SetBoolInfo(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_CRASHREPORTER_SETBOOLINFO_OFFSET))(str, arg, nullptr);
		}

		::System::Void CrashReporter_SetClientVersionInfo(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_CRASHREPORTER_SETCLIENTVERSIONINFO_OFFSET))(str, nullptr);
		}

		::System::Void CrashReporter_SetIntInfo(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_CRASHREPORTER_SETINTINFO_OFFSET))(str, arg, nullptr);
		}

		::System::Void CrashReporter_SetFloatInfo(::System::String* str, ::System::Single arg)
		{
			((::System::Void(*)(::System::String*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_CRASHREPORTER_SETFLOATINFO_OFFSET))(str, arg, nullptr);
		}

		::System::Void CrashReporter_SetDoubleInfo(::System::String* str, ::System::Double arg)
		{
			((::System::Void(*)(::System::String*, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_CRASHREPORTER_SETDOUBLEINFO_OFFSET))(str, arg, nullptr);
		}

		::System::Void CrashReporter_SendUnityException(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_CRASHREPORTER_SENDUNITYEXCEPTION_OFFSET))(str, str2, nullptr);
		}

		::System::Boolean CrashReporter_UnityExceptionSenderInit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_CRASHREPORTER_UNITYEXCEPTIONSENDERINIT_OFFSET))(nullptr);
		}

		::System::Boolean CrashReporter_RegisterScreenShotFile(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_CRASHREPORTER_REGISTERSCREENSHOTFILE_OFFSET))(str, nullptr);
		}

		::System::Boolean CrashReporter_SetVectoredExceptionHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_CRASHREPORTER_SETVECTOREDEXCEPTIONHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean CrashReporter_SetSkipAccessViolation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_CRASHREPORTER_SETSKIPACCESSVIOLATION_OFFSET))(nullptr);
		}

		::System::Boolean CrashReporter_ClearVectoredExceptionHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_CRASHREPORTER_CLEARVECTOREDEXCEPTIONHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean ValidateConfiguration(::LiveAssist::CrashReporterConfiguration* arg)
		{
			return ((::System::Boolean(*)(::LiveAssist::CrashReporterConfiguration*, ::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_VALIDATECONFIGURATION_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::LiveAssist::CrashReporterConfiguration* arg)
		{
			((::System::Void(*)(::LiveAssist::CrashReporterConfiguration*, ::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void CleanUp()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_CLEANUP_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::String* str, CRASH_BEHAVIOR* arg)
		{
			((::System::Void(*)(::System::String*, CRASH_BEHAVIOR*, ::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_INITIALIZE_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean IsInitialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_ISINITIALIZED_OFFSET))(nullptr);
		}

		::System::Void SendStartupInfo(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_SENDSTARTUPINFO_OFFSET))(str, nullptr);
		}

		::System::Void InitializePlayTimeRecorder()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_INITIALIZEPLAYTIMERECORDER_OFFSET))(nullptr);
		}

		::System::Void RegisterCallback_BeforeDump(CrashReporter_CallBackFunc* arg)
		{
			((::System::Void(*)(CrashReporter_CallBackFunc*, ::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_REGISTERCALLBACK_BEFOREDUMP_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterLogFile(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_REGISTERLOGFILE_OFFSET))(str, nullptr);
		}

		::System::Void RegisterScreenShotFile(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_REGISTERSCREENSHOTFILE_OFFSET))(str, nullptr);
		}

		::System::Void RegisterClientModule(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_REGISTERCLIENTMODULE_OFFSET))(str, nullptr);
		}

		::System::Void SetServerRegion(CRASH_RECEIVE_SERVER_REGION* arg)
		{
			((::System::Void(*)(CRASH_RECEIVE_SERVER_REGION*, ::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_SETSERVERREGION_OFFSET))(arg, nullptr);
		}

		::System::Void SetClientExit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_SETCLIENTEXIT_OFFSET))(nullptr);
		}

		::System::Void SetGatherCrashScreenShot(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_SETGATHERCRASHSCREENSHOT_OFFSET))(arg, nullptr);
		}

		::System::Void SetPrivacyProtection(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_SETPRIVACYPROTECTION_OFFSET))(arg, nullptr);
		}

		::System::Void SetBaseInfo(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_SETBASEINFO_OFFSET))(str, str2, nullptr);
		}

		::System::Void SetBaseInfo(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_SETBASEINFO_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetBaseInfo(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_SETBASEINFO_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetBaseInfo(::System::String* str, ::System::Single arg)
		{
			((::System::Void(*)(::System::String*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_SETBASEINFO_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetBaseInfo(::System::String* str, ::System::Double arg)
		{
			((::System::Void(*)(::System::String*, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_SETBASEINFO_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetClientVersionInfo(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_SETCLIENTVERSIONINFO_OFFSET))(str, nullptr);
		}

		::System::Void StartCaptureUnityMessages()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_STARTCAPTUREUNITYMESSAGES_OFFSET))(nullptr);
		}

		::System::Void StopCaptureUnityMessages()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_STOPCAPTUREUNITYMESSAGES_OFFSET))(nullptr);
		}

		::System::Void HandleUnityBackgroundException(::System::String* str, ::System::String* str2, ::UnityEngine::LogType* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::UnityEngine::LogType*, ::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_HANDLEUNITYBACKGROUNDEXCEPTION_OFFSET))(str, str2, arg, nullptr);
		}

		::System::Void HandleUnityMessage(::System::String* str, ::System::String* str2, ::UnityEngine::LogType* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::UnityEngine::LogType*, ::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_HANDLEUNITYMESSAGE_OFFSET))(str, str2, arg, nullptr);
		}

		::System::Void CatchUnityException(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTER_CATCHUNITYEXCEPTION_OFFSET))(arg, nullptr);
		}

	};
}


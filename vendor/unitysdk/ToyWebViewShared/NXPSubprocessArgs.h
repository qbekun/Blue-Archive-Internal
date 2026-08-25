#pragma once
#include "../unitysdk.h"

#define TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_SETPIPENAME_OFFSET UNITYSDK_OFFSET(0x9BAA680)
#define TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_SETLOCALE_OFFSET UNITYSDK_OFFSET(0x9BAA690)
#define TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_SETUSERAGENT_OFFSET UNITYSDK_OFFSET(0x9BAA6A0)
#define TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_SETPRIMARYWINDOWHANDLE_OFFSET UNITYSDK_OFFSET(0x9BAA6B0)
#define TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_SETPARENTPROCESSID_OFFSET UNITYSDK_OFFSET(0x9BAA6C0)
#define TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_SETHEARTBEATINTERVAL_OFFSET UNITYSDK_OFFSET(0x9BAA6D0)
#define TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_SETPUBLISHERNAME_OFFSET UNITYSDK_OFFSET(0x9BAA6E0)
#define TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_SETPROJECTNAME_OFFSET UNITYSDK_OFFSET(0x9BAA6F0)
#define TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_SETUUID_OFFSET UNITYSDK_OFFSET(0x9BAA700)
#define TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_SETGUID_OFFSET UNITYSDK_OFFSET(0x9BAA710)
#define TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_SETGID_OFFSET UNITYSDK_OFFSET(0x9BAA720)
#define TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_SETVERSION_OFFSET UNITYSDK_OFFSET(0x9BAA730)
#define TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_SETCACHEPATH_OFFSET UNITYSDK_OFFSET(0x9BAA740)
#define TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_SETDEBUGPORT_OFFSET UNITYSDK_OFFSET(0x9BAA750)
#define TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_EXPORT_OFFSET UNITYSDK_OFFSET(0x9BAA760)
#define TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BAAE30)
#define TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_GETPIPENAME_OFFSET UNITYSDK_OFFSET(0x9BAB560)
#define TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_GETLOCALE_OFFSET UNITYSDK_OFFSET(0x9BAB570)
#define TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_GETUSERAGENT_OFFSET UNITYSDK_OFFSET(0x9BAB580)
#define TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_GETPRIMARYWINDOWHANDLE_OFFSET UNITYSDK_OFFSET(0x9BAB590)
#define TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_GETPARENTPROCESSID_OFFSET UNITYSDK_OFFSET(0x9BAB5A0)
#define TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_GETHEARTBEATINTERVAL_OFFSET UNITYSDK_OFFSET(0x9BAB5B0)
#define TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_GETPUBLISHERNAME_OFFSET UNITYSDK_OFFSET(0x9BAB5C0)
#define TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_GETPROJECTNAME_OFFSET UNITYSDK_OFFSET(0x9BAB5D0)
#define TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_GETCACHEPATH_OFFSET UNITYSDK_OFFSET(0x9BAB5E0)
#define TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_GETDEBUGPORT_OFFSET UNITYSDK_OFFSET(0x9BAB5F0)
#define TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_GETCEFSUBPROCESSTYPE_OFFSET UNITYSDK_OFFSET(0x9BAB600)
#define TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_GETUUID_OFFSET UNITYSDK_OFFSET(0x9BAB610)
#define TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_GETGUID_OFFSET UNITYSDK_OFFSET(0x9BAB620)
#define TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_GETGID_OFFSET UNITYSDK_OFFSET(0x9BAB630)
#define TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_GETVERSION_OFFSET UNITYSDK_OFFSET(0x9BAB640)

namespace ToyWebViewShared
{
	inline static constexpr unsigned int NXPSubprocessArgs_TypeDefinitionIndex = 25400;

	class NXPSubprocessArgs : public Il2CppObject
	{
	public:
		::System::String* pipeName; // 0x10
		::System::String* locale; // 0x18
		::System::String* userAgent; // 0x20
		::System::Int64 primaryWindowHandle; // 0x28
		::System::Int32 parentProcessId; // 0x30
		::System::Int32 heartBeatInterval; // 0x34
		::System::String* publisherName; // 0x38
		::System::String* projectName; // 0x40
		::System::String* cachePath; // 0x48
		::System::String* debugPort; // 0x50
		::System::String* cefSubprocessType; // 0x58
		::System::String* PIPE_NAME_KEY; // 0x0
		::System::String* LOCALE_KEY; // 0x0
		::System::String* USER_AGENT_KEY; // 0x0
		::System::String* PRIMARY_WINDOW_HANDLE_KEY; // 0x0
		::System::String* PARENT_PROCESS_ID_KEY; // 0x0
		::System::String* HEART_BEAT_INTERVAL_KEY; // 0x0
		::System::String* PUBLISHER_NAME_KEY; // 0x0
		::System::String* PROJECT_NAME_KEY; // 0x0
		::System::String* CACHE_PATH; // 0x0
		::System::String* DEBUG_PORT_KEY; // 0x0
		::System::String* CEF_SUBPROCESS_TYPE_KEY; // 0x0
		::System::String* uuid; // 0x60
		::System::String* guid; // 0x68
		::System::String* gid; // 0x70
		::System::String* version; // 0x78
		::System::String* UUID_KEY; // 0x0
		::System::String* GUID_KEY; // 0x0
		::System::String* GID_KEY; // 0x0
		::System::String* VERSION_KEY; // 0x0

		::System::Void SetPipeName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_SETPIPENAME_OFFSET))(str, nullptr);
		}

		::System::Void SetLocale(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_SETLOCALE_OFFSET))(str, nullptr);
		}

		::System::Void SetUserAgent(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_SETUSERAGENT_OFFSET))(str, nullptr);
		}

		::System::Void SetPrimaryWindowHandle(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_SETPRIMARYWINDOWHANDLE_OFFSET))(arg, nullptr);
		}

		::System::Void SetParentProcessId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_SETPARENTPROCESSID_OFFSET))(arg, nullptr);
		}

		::System::Void SetHeartBeatInterval(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_SETHEARTBEATINTERVAL_OFFSET))(arg, nullptr);
		}

		::System::Void SetPublisherName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_SETPUBLISHERNAME_OFFSET))(str, nullptr);
		}

		::System::Void SetProjectName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_SETPROJECTNAME_OFFSET))(str, nullptr);
		}

		::System::Void SetUuid(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_SETUUID_OFFSET))(str, nullptr);
		}

		::System::Void SetGuid(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_SETGUID_OFFSET))(str, nullptr);
		}

		::System::Void SetGid(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_SETGID_OFFSET))(str, nullptr);
		}

		::System::Void SetVersion(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_SETVERSION_OFFSET))(str, nullptr);
		}

		::System::Void SetCachePath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_SETCACHEPATH_OFFSET))(str, nullptr);
		}

		::System::Void SetDebugPort(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_SETDEBUGPORT_OFFSET))(str, nullptr);
		}

		::System::Void Export(::System::Text::StringBuilder&* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder&*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_EXPORT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* GetPipeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_GETPIPENAME_OFFSET))(nullptr);
		}

		::System::String* GetLocale()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_GETLOCALE_OFFSET))(nullptr);
		}

		::System::String* GetUserAgent()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_GETUSERAGENT_OFFSET))(nullptr);
		}

		::System::Int64 GetPrimaryWindowHandle()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_GETPRIMARYWINDOWHANDLE_OFFSET))(nullptr);
		}

		::System::Int32 GetParentProcessId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_GETPARENTPROCESSID_OFFSET))(nullptr);
		}

		::System::Int32 GetHeartBeatInterval()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_GETHEARTBEATINTERVAL_OFFSET))(nullptr);
		}

		::System::String* GetPublisherName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_GETPUBLISHERNAME_OFFSET))(nullptr);
		}

		::System::String* GetProjectName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_GETPROJECTNAME_OFFSET))(nullptr);
		}

		::System::String* GetCachePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_GETCACHEPATH_OFFSET))(nullptr);
		}

		::System::String* GetDebugPort()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_GETDEBUGPORT_OFFSET))(nullptr);
		}

		::System::String* GetCefSubprocessType()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_GETCEFSUBPROCESSTYPE_OFFSET))(nullptr);
		}

		::System::String* GetUuid()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_GETUUID_OFFSET))(nullptr);
		}

		::System::String* GetGuid()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_GETGUID_OFFSET))(nullptr);
		}

		::System::String* GetGid()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_GETGID_OFFSET))(nullptr);
		}

		::System::String* GetVersion()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPSUBPROCESSARGS_GETVERSION_OFFSET))(nullptr);
		}

	};
}


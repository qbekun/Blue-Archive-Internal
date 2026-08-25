#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_WEB_NXPWEBSERVERMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DB6AC0)
#define NPA_EDITOR_WEB_NXPWEBSERVERMANAGER_CREATEGAMETHREADPAYLOAD_OFFSET UNITYSDK_OFFSET(0x9DB7AF0)
#define NPA_EDITOR_WEB_NXPWEBSERVERMANAGER_CREATEPLEXPAYLOAD_OFFSET UNITYSDK_OFFSET(0x9DB7BC0)
#define NPA_EDITOR_WEB_NXPWEBSERVERMANAGER_LOGPLEXERROR_OFFSET UNITYSDK_OFFSET(0x9DB7920)
#define NPA_EDITOR_WEB_NXPWEBSERVERMANAGER_LOGPLEXEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9DB7A00)
#define NPA_EDITOR_WEB_NXPWEBSERVERMANAGER_GETCEFHELPERVERSION_OFFSET UNITYSDK_OFFSET(0x9DB7E00)
#define NPA_EDITOR_WEB_NXPWEBSERVERMANAGER_EXISTSERVER_OFFSET UNITYSDK_OFFSET(0x9DB8330)
#define NPA_EDITOR_WEB_NXPWEBSERVERMANAGER_DESTROYSERVER_OFFSET UNITYSDK_OFFSET(0x9DB8400)
#define NPA_EDITOR_WEB_NXPWEBSERVERMANAGER_KILLSERVERPROCESS_OFFSET UNITYSDK_OFFSET(0x9DB8420)
#define NPA_EDITOR_WEB_NXPWEBSERVERMANAGER_GETSERVERPATH_OFFSET UNITYSDK_OFFSET(0x9DB7820)
#define NPA_EDITOR_WEB_NXPWEBSERVERMANAGER_GETWEBVIEWLIBRARYPATH_OFFSET UNITYSDK_OFFSET(0x9DB7880)
#define NPA_EDITOR_WEB_NXPWEBSERVERMANAGER_GETWEBCACHEPATH_OFFSET UNITYSDK_OFFSET(0x9DB7480)
#define NPA_EDITOR_WEB_NXPWEBSERVERMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9DB8610)

namespace NPA::Editor::Web
{
	inline static constexpr unsigned int NXPWebServerManager_TypeDefinitionIndex = 26408;

	class NXPWebServerManager : public Il2CppObject
	{
	public:
		::System::String* PlexSourcePath; // 0x0
		::System::String* PlexSource; // 0x0
		::System::UInt32 subProcessId; // 0x10
		::System::String* cefHelperVersion; // 0x0
		::System::String* DefaultObfuscatedGuid; // 0x0

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBSERVERMANAGER_.CTOR_OFFSET))(str, nullptr);
		}

		GameThreadPayload* CreateGameThreadPayload()
		{
			return (return (GameThreadPayload*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBSERVERMANAGER_CREATEGAMETHREADPAYLOAD_OFFSET))(nullptr);
		}

		Payload* CreatePlexPayload(::System::String* str, ::System::String* str)
		{
			return (return (Payload*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBSERVERMANAGER_CREATEPLEXPAYLOAD_OFFSET))(str, str, nullptr);
		}

		::System::Void LogPlexError(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBSERVERMANAGER_LOGPLEXERROR_OFFSET))(str, str, nullptr);
		}

		::System::Void LogPlexException(::System::String* str, ::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBSERVERMANAGER_LOGPLEXEXCEPTION_OFFSET))(str, str, arg, nullptr);
		}

		::System::String* GetCefHelperVersion()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBSERVERMANAGER_GETCEFHELPERVERSION_OFFSET))(nullptr);
		}

		::System::Boolean ExistServer()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBSERVERMANAGER_EXISTSERVER_OFFSET))(nullptr);
		}

		::System::Void DestroyServer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBSERVERMANAGER_DESTROYSERVER_OFFSET))(nullptr);
		}

		::System::Void KillServerProcess()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBSERVERMANAGER_KILLSERVERPROCESS_OFFSET))(nullptr);
		}

		::System::String* GetServerPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBSERVERMANAGER_GETSERVERPATH_OFFSET))(nullptr);
		}

		::System::String* GetWebViewLibraryPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBSERVERMANAGER_GETWEBVIEWLIBRARYPATH_OFFSET))(nullptr);
		}

		::System::String* GetWebCachePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBSERVERMANAGER_GETWEBCACHEPATH_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPWEBSERVERMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}


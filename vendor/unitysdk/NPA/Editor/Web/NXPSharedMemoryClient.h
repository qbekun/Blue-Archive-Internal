#pragma once
#include "../../../unitysdk.h"

namespace ToyWebViewShared::SharedMemory { class NXPSharedMemoryStream; }
namespace ToyWebViewShared::Messages { class Message; }

#define NPA_EDITOR_WEB_NXPSHAREDMEMORYCLIENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DB12D0)
#define NPA_EDITOR_WEB_NXPSHAREDMEMORYCLIENT_GETSHAREDMEMORYLIBRARYPATH_OFFSET UNITYSDK_OFFSET(0x9DB18B0)
#define NPA_EDITOR_WEB_NXPSHAREDMEMORYCLIENT_CREATESHAREDMEMORYSTREAMS_OFFSET UNITYSDK_OFFSET(0x9DB1970)
#define NPA_EDITOR_WEB_NXPSHAREDMEMORYCLIENT_RUN_OFFSET UNITYSDK_OFFSET(0x9DB1ED0)
#define NPA_EDITOR_WEB_NXPSHAREDMEMORYCLIENT_START_OFFSET UNITYSDK_OFFSET(0x9DB1F80)
#define NPA_EDITOR_WEB_NXPSHAREDMEMORYCLIENT_CONNECTASYNC_OFFSET UNITYSDK_OFFSET(0x9DB2050)
#define NPA_EDITOR_WEB_NXPSHAREDMEMORYCLIENT_RECEIVE_OFFSET UNITYSDK_OFFSET(0x9DB2160)
#define NPA_EDITOR_WEB_NXPSHAREDMEMORYCLIENT_DISCONNECT_OFFSET UNITYSDK_OFFSET(0x9DB29A0)
#define NPA_EDITOR_WEB_NXPSHAREDMEMORYCLIENT_SEND_OFFSET UNITYSDK_OFFSET(0x9DAC530)
#define NPA_EDITOR_WEB_NXPSHAREDMEMORYCLIENT_CREATEGAMETHREADPAYLOAD_OFFSET UNITYSDK_OFFSET(0x9DB2AA0)
#define NPA_EDITOR_WEB_NXPSHAREDMEMORYCLIENT_CREATEPLEXPAYLOAD_OFFSET UNITYSDK_OFFSET(0x9DB2B40)
#define NPA_EDITOR_WEB_NXPSHAREDMEMORYCLIENT_LOGPLEXERROR_OFFSET UNITYSDK_OFFSET(0x9DB26F0)
#define NPA_EDITOR_WEB_NXPSHAREDMEMORYCLIENT_LOGPLEXEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9DB1C10)
#define NPA_EDITOR_WEB_NXPSHAREDMEMORYCLIENT_STOP_OFFSET UNITYSDK_OFFSET(0x9DB2DF0)
#define NPA_EDITOR_WEB_NXPSHAREDMEMORYCLIENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9DB2FA0)
#define NPA_EDITOR_WEB_NXPSHAREDMEMORYCLIENT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9DB3410)
#define NPA_EDITOR_WEB_NXPSHAREDMEMORYCLIENT__START_B__19_0_OFFSET UNITYSDK_OFFSET(0x9DB3500)

namespace NPA::Editor::Web
{
	inline static constexpr unsigned int NXPSharedMemoryClient_TypeDefinitionIndex = 26402;

	class NXPSharedMemoryClient : public Il2CppObject
	{
	public:
		::System::String* PlexSourcePath; // 0x0
		::System::String* PlexSource; // 0x0
		::ToyWebViewShared::SharedMemory::NXPSharedMemoryStream* _sender; // 0x10
		::ToyWebViewShared::SharedMemory::NXPSharedMemoryStream* _receiver; // 0x18
		::System::String* _namePrefix; // 0x20
		Il2CppObject* _messageHandler; // 0x28
		::System::Action* _onDisconnected; // 0x30
		::System::Threading::CancellationTokenSource* _cancellationTokenSource; // 0x38
		::System::Object* _locker; // 0x40
		::System::Boolean _isDisposing; // 0x48
		::System::Boolean _disposed; // 0x49
		::System::Threading::Tasks::Task* _runTask; // 0x50
		::System::String* OS; // 0x0
		::System::String* SystemLocale; // 0x8

		::System::Void .ctor(::System::String* str, Il2CppObject* arg, ::System::Action* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPSHAREDMEMORYCLIENT_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::String* GetSharedMemoryLibraryPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPSHAREDMEMORYCLIENT_GETSHAREDMEMORYLIBRARYPATH_OFFSET))(nullptr);
		}

		::System::Void CreateSharedMemoryStreams(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPSHAREDMEMORYCLIENT_CREATESHAREDMEMORYSTREAMS_OFFSET))(str, str, str, nullptr);
		}

		::System::Void Run()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPSHAREDMEMORYCLIENT_RUN_OFFSET))(nullptr);
		}

		::System::Threading::Tasks::Task* Start()
		{
			return (return (::System::Threading::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPSHAREDMEMORYCLIENT_START_OFFSET))(nullptr);
		}

		Il2CppObject* ConnectAsync(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPSHAREDMEMORYCLIENT_CONNECTASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Receive()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPSHAREDMEMORYCLIENT_RECEIVE_OFFSET))(nullptr);
		}

		::System::Void Disconnect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPSHAREDMEMORYCLIENT_DISCONNECT_OFFSET))(nullptr);
		}

		::System::Void Send(::ToyWebViewShared::Messages::Message* arg)
		{
			((::System::Void(*)(::ToyWebViewShared::Messages::Message*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPSHAREDMEMORYCLIENT_SEND_OFFSET))(arg, nullptr);
		}

		GameThreadPayload* CreateGameThreadPayload()
		{
			return (return (GameThreadPayload*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPSHAREDMEMORYCLIENT_CREATEGAMETHREADPAYLOAD_OFFSET))(nullptr);
		}

		Payload* CreatePlexPayload(::System::String* str, ::System::String* str)
		{
			return (return (Payload*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPSHAREDMEMORYCLIENT_CREATEPLEXPAYLOAD_OFFSET))(str, str, nullptr);
		}

		::System::Void LogPlexError(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPSHAREDMEMORYCLIENT_LOGPLEXERROR_OFFSET))(str, str, nullptr);
		}

		::System::Void LogPlexException(::System::String* str, ::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPSHAREDMEMORYCLIENT_LOGPLEXEXCEPTION_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPSHAREDMEMORYCLIENT_STOP_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPSHAREDMEMORYCLIENT_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPSHAREDMEMORYCLIENT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void _Start_b__19_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPSHAREDMEMORYCLIENT__START_B__19_0_OFFSET))(nullptr);
		}

	};
}


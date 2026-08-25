#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SignalRCore { class TransportStates; }
namespace BestHTTP::Logger { class LoggingContext; }
namespace BestHTTP::SignalRCore { class HubConnection; }
namespace BestHTTP::PlatformSupport::Memory { class BufferSegment; }
namespace BestHTTP::SignalRCore { class TransportTypes; }
namespace BestHTTP::SignalRCore { class TransferModes; }

#define BESTHTTP_SIGNALRCORE_TRANSPORTS_TRANSPORTBASE_REMOVE_ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x653160)
#define BESTHTTP_SIGNALRCORE_TRANSPORTS_TRANSPORTBASE_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x653200)
#define BESTHTTP_SIGNALRCORE_TRANSPORTS_TRANSPORTBASE_SEND_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_TRANSPORTS_TRANSPORTBASE_STARTCLOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_TRANSPORTS_TRANSPORTBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x651990)
#define BESTHTTP_SIGNALRCORE_TRANSPORTS_TRANSPORTBASE_GET_TRANSPORTTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_TRANSPORTS_TRANSPORTBASE_PARSEHANDSHAKERESPONSE_OFFSET UNITYSDK_OFFSET(0x653210)
#define BESTHTTP_SIGNALRCORE_TRANSPORTS_TRANSPORTBASE_SET_STATE_OFFSET UNITYSDK_OFFSET(0x6515D0)
#define BESTHTTP_SIGNALRCORE_TRANSPORTS_TRANSPORTBASE_GET_ERRORREASON_OFFSET UNITYSDK_OFFSET(0x653310)
#define BESTHTTP_SIGNALRCORE_TRANSPORTS_TRANSPORTBASE_STARTCONNECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_TRANSPORTS_TRANSPORTBASE_GET_TRANSFERMODE_OFFSET UNITYSDK_OFFSET(0x653320)
#define BESTHTTP_SIGNALRCORE_TRANSPORTS_TRANSPORTBASE_HANDLEHANDSHAKERESPONSE_OFFSET UNITYSDK_OFFSET(0x652CC0)
#define BESTHTTP_SIGNALRCORE_TRANSPORTS_TRANSPORTBASE_ADD_ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x653330)
#define BESTHTTP_SIGNALRCORE_TRANSPORTS_TRANSPORTBASE_GET_STATE_OFFSET UNITYSDK_OFFSET(0x6533D0)
#define BESTHTTP_SIGNALRCORE_TRANSPORTS_TRANSPORTBASE_BUILDURI_OFFSET UNITYSDK_OFFSET(0x650E70)
#define BESTHTTP_SIGNALRCORE_TRANSPORTS_TRANSPORTBASE_SET_ERRORREASON_OFFSET UNITYSDK_OFFSET(0x6533E0)
#define BESTHTTP_SIGNALRCORE_TRANSPORTS_TRANSPORTBASE_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x6533F0)

namespace BestHTTP::SignalRCore::Transports
{
	inline static constexpr unsigned int TransportBase_TypeDefinitionIndex = 21456;

	class TransportBase : public Il2CppObject
	{
	public:
		::BestHTTP::SignalRCore::TransportStates* _state; // 0x10
		::System::String* _ErrorReason_k__BackingField; // 0x18
		Il2CppObject* OnStateChanged; // 0x20
		::BestHTTP::Logger::LoggingContext* _Context_k__BackingField; // 0x28
		Il2CppObject* messages; // 0x30
		::BestHTTP::SignalRCore::HubConnection* connection; // 0x38
		::System::Text::StringBuilder* queryBuilder; // 0x40

		::System::Void remove_OnStateChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_TRANSPORTS_TRANSPORTBASE_REMOVE_ONSTATECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void set_Context(::BestHTTP::Logger::LoggingContext* arg)
		{
			((::System::Void(*)(::BestHTTP::Logger::LoggingContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_TRANSPORTS_TRANSPORTBASE_SET_CONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Void Send(::BestHTTP::PlatformSupport::Memory::BufferSegment* arg)
		{
			((::System::Void(*)(::BestHTTP::PlatformSupport::Memory::BufferSegment*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_TRANSPORTS_TRANSPORTBASE_SEND_OFFSET))(arg, nullptr);
		}

		::System::Void StartClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_TRANSPORTS_TRANSPORTBASE_STARTCLOSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SignalRCore::HubConnection* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalRCore::HubConnection*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_TRANSPORTS_TRANSPORTBASE_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SignalRCore::TransportTypes* get_TransportType()
		{
			return (return (::BestHTTP::SignalRCore::TransportTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_TRANSPORTS_TRANSPORTBASE_GET_TRANSPORTTYPE_OFFSET))(nullptr);
		}

		::System::String* ParseHandshakeResponse(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_TRANSPORTS_TRANSPORTBASE_PARSEHANDSHAKERESPONSE_OFFSET))(str, nullptr);
		}

		::System::Void set_State(::BestHTTP::SignalRCore::TransportStates* arg)
		{
			((::System::Void(*)(::BestHTTP::SignalRCore::TransportStates*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_TRANSPORTS_TRANSPORTBASE_SET_STATE_OFFSET))(arg, nullptr);
		}

		::System::String* get_ErrorReason()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_TRANSPORTS_TRANSPORTBASE_GET_ERRORREASON_OFFSET))(nullptr);
		}

		::System::Void StartConnect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_TRANSPORTS_TRANSPORTBASE_STARTCONNECT_OFFSET))(nullptr);
		}

		::BestHTTP::SignalRCore::TransferModes* get_TransferMode()
		{
			return (return (::BestHTTP::SignalRCore::TransferModes*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_TRANSPORTS_TRANSPORTBASE_GET_TRANSFERMODE_OFFSET))(nullptr);
		}

		::System::Void HandleHandshakeResponse(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_TRANSPORTS_TRANSPORTBASE_HANDLEHANDSHAKERESPONSE_OFFSET))(str, nullptr);
		}

		::System::Void add_OnStateChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_TRANSPORTS_TRANSPORTBASE_ADD_ONSTATECHANGED_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SignalRCore::TransportStates* get_State()
		{
			return (return (::BestHTTP::SignalRCore::TransportStates*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_TRANSPORTS_TRANSPORTBASE_GET_STATE_OFFSET))(nullptr);
		}

		::System::Uri* BuildUri(::System::Uri* arg)
		{
			return (return (::System::Uri*(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_TRANSPORTS_TRANSPORTBASE_BUILDURI_OFFSET))(arg, nullptr);
		}

		::System::Void set_ErrorReason(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_TRANSPORTS_TRANSPORTBASE_SET_ERRORREASON_OFFSET))(str, nullptr);
		}

		::BestHTTP::Logger::LoggingContext* get_Context()
		{
			return (return (::BestHTTP::Logger::LoggingContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_TRANSPORTS_TRANSPORTBASE_GET_CONTEXT_OFFSET))(nullptr);
		}

	};
}


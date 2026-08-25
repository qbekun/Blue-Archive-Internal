#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SocketIO3 { class IncomingPacket; }
namespace BestHTTP::SocketIO3 { class SocketManager; }
namespace BestHTTP::PlatformSupport::Memory { class BufferSegment; }
namespace BestHTTP::SocketIO3 { class TransportEventTypes; }
namespace BestHTTP::SocketIO3 { class OutgoingPacket; }
namespace BestHTTP::SocketIO3 { class Socket; }
namespace BestHTTP::SocketIO3 { class SocketIOEventTypes; }

#define BESTHTTP_SOCKETIO3_PARSERS_IPARSER_PARSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO3_PARSERS_IPARSER_PARSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO3_PARSERS_IPARSER_MERGEATTACHEMENTS_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO3_PARSERS_IPARSER_CREATEOUTGOING_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO3_PARSERS_IPARSER_CREATEOUTGOING_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO3_PARSERS_IPARSER_CREATEOUTGOING_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SocketIO3::Parsers
{
	inline static constexpr unsigned int IParser_TypeDefinitionIndex = 21411;

	class IParser : public Il2CppObject
	{
	public:
		::BestHTTP::SocketIO3::IncomingPacket* Parse(::BestHTTP::SocketIO3::SocketManager* arg, ::System::String* str)
		{
			return (return (::BestHTTP::SocketIO3::IncomingPacket*(*)(::BestHTTP::SocketIO3::SocketManager*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_PARSERS_IPARSER_PARSE_OFFSET))(arg, str, nullptr);
		}

		::BestHTTP::SocketIO3::IncomingPacket* Parse(::BestHTTP::SocketIO3::SocketManager* arg, ::BestHTTP::PlatformSupport::Memory::BufferSegment* arg, ::BestHTTP::SocketIO3::TransportEventTypes* arg)
		{
			return (return (::BestHTTP::SocketIO3::IncomingPacket*(*)(::BestHTTP::SocketIO3::SocketManager*, ::BestHTTP::PlatformSupport::Memory::BufferSegment*, ::BestHTTP::SocketIO3::TransportEventTypes*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_PARSERS_IPARSER_PARSE_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SocketIO3::IncomingPacket* MergeAttachements(::BestHTTP::SocketIO3::SocketManager* arg, ::BestHTTP::SocketIO3::IncomingPacket* arg)
		{
			return (return (::BestHTTP::SocketIO3::IncomingPacket*(*)(::BestHTTP::SocketIO3::SocketManager*, ::BestHTTP::SocketIO3::IncomingPacket*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_PARSERS_IPARSER_MERGEATTACHEMENTS_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SocketIO3::OutgoingPacket* CreateOutgoing(::BestHTTP::SocketIO3::TransportEventTypes* arg, ::System::String* str)
		{
			return (return (::BestHTTP::SocketIO3::OutgoingPacket*(*)(::BestHTTP::SocketIO3::TransportEventTypes*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_PARSERS_IPARSER_CREATEOUTGOING_OFFSET))(arg, str, nullptr);
		}

		::BestHTTP::SocketIO3::OutgoingPacket* CreateOutgoing(::BestHTTP::SocketIO3::Socket* arg, ::BestHTTP::SocketIO3::SocketIOEventTypes* arg, ::System::Int32 arg, ::System::String* str, ::System::Object* arg)
		{
			return (return (::BestHTTP::SocketIO3::OutgoingPacket*(*)(::BestHTTP::SocketIO3::Socket*, ::BestHTTP::SocketIO3::SocketIOEventTypes*, ::System::Int32, ::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_PARSERS_IPARSER_CREATEOUTGOING_OFFSET))(arg, arg, arg, str, arg, nullptr);
		}

		::BestHTTP::SocketIO3::OutgoingPacket* CreateOutgoing(::BestHTTP::SocketIO3::Socket* arg, ::BestHTTP::SocketIO3::SocketIOEventTypes* arg, ::System::Int32 arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SocketIO3::OutgoingPacket*(*)(::BestHTTP::SocketIO3::Socket*, ::BestHTTP::SocketIO3::SocketIOEventTypes*, ::System::Int32, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_PARSERS_IPARSER_CREATEOUTGOING_OFFSET))(arg, arg, arg, str, arg, nullptr);
		}

	};
}


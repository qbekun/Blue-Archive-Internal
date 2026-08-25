#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SocketIO3 { class IncomingPacket; }
namespace BestHTTP::SocketIO3 { class SocketManager; }
namespace BestHTTP::SocketIO3 { class Socket; }
namespace BestHTTP::SocketIO3::Events { class Subscription; }
namespace BestHTTP::PlatformSupport::Memory { class BufferSegment; }
namespace BestHTTP::SocketIO3 { class TransportEventTypes; }
namespace BestHTTP::SocketIO3 { class OutgoingPacket; }
namespace BestHTTP::SocketIO3 { class SocketIOEventTypes; }

#define BESTHTTP_SOCKETIO3_PARSERS_DEFAULTJSONPARSER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x640630)
#define BESTHTTP_SOCKETIO3_PARSERS_DEFAULTJSONPARSER_TOINT_OFFSET UNITYSDK_OFFSET(0x640710)
#define BESTHTTP_SOCKETIO3_PARSERS_DEFAULTJSONPARSER_PARSE_OFFSET UNITYSDK_OFFSET(0x640780)
#define BESTHTTP_SOCKETIO3_PARSERS_DEFAULTJSONPARSER_MERGEATTACHEMENTS_OFFSET UNITYSDK_OFFSET(0x641360)
#define BESTHTTP_SOCKETIO3_PARSERS_DEFAULTJSONPARSER_READDATA_OFFSET UNITYSDK_OFFSET(0x640F50)
#define BESTHTTP_SOCKETIO3_PARSERS_DEFAULTJSONPARSER_READPARAMETERS_OFFSET UNITYSDK_OFFSET(0x641960)
#define BESTHTTP_SOCKETIO3_PARSERS_DEFAULTJSONPARSER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x641C90)
#define BESTHTTP_SOCKETIO3_PARSERS_DEFAULTJSONPARSER_READPARAMETERS_OFFSET UNITYSDK_OFFSET(0x641670)
#define BESTHTTP_SOCKETIO3_PARSERS_DEFAULTJSONPARSER_PARSE_OFFSET UNITYSDK_OFFSET(0x641FD0)
#define BESTHTTP_SOCKETIO3_PARSERS_DEFAULTJSONPARSER_CREATEOUTGOING_OFFSET UNITYSDK_OFFSET(0x642390)
#define BESTHTTP_SOCKETIO3_PARSERS_DEFAULTJSONPARSER_CREATEOUTGOING_OFFSET UNITYSDK_OFFSET(0x642440)
#define BESTHTTP_SOCKETIO3_PARSERS_DEFAULTJSONPARSER_GETBINARYCOUNT_OFFSET UNITYSDK_OFFSET(0x642B60)
#define BESTHTTP_SOCKETIO3_PARSERS_DEFAULTJSONPARSER_CREATEOUTGOING_OFFSET UNITYSDK_OFFSET(0x642580)
#define BESTHTTP_SOCKETIO3_PARSERS_DEFAULTJSONPARSER_CREATEPLACEHOLDERS_OFFSET UNITYSDK_OFFSET(0x642BE0)
#define BESTHTTP_SOCKETIO3_PARSERS_DEFAULTJSONPARSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x642DC0)

namespace BestHTTP::SocketIO3::Parsers
{
	inline static constexpr unsigned int DefaultJsonParser_TypeDefinitionIndex = 21410;

	class DefaultJsonParser : public Il2CppObject
	{
	public:
		::BestHTTP::SocketIO3::IncomingPacket* PacketWithAttachment; // 0x10
		::System::Text::StringBuilder* builder; // 0x50

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_PARSERS_DEFAULTJSONPARSER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Int32 ToInt(::System::Char arg)
		{
			return (return (::System::Int32(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_PARSERS_DEFAULTJSONPARSER_TOINT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SocketIO3::IncomingPacket* Parse(::BestHTTP::SocketIO3::SocketManager* arg, ::System::String* str)
		{
			return (return (::BestHTTP::SocketIO3::IncomingPacket*(*)(::BestHTTP::SocketIO3::SocketManager*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_PARSERS_DEFAULTJSONPARSER_PARSE_OFFSET))(arg, str, nullptr);
		}

		::BestHTTP::SocketIO3::IncomingPacket* MergeAttachements(::BestHTTP::SocketIO3::SocketManager* arg, ::BestHTTP::SocketIO3::IncomingPacket* arg)
		{
			return (return (::BestHTTP::SocketIO3::IncomingPacket*(*)(::BestHTTP::SocketIO3::SocketManager*, ::BestHTTP::SocketIO3::IncomingPacket*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_PARSERS_DEFAULTJSONPARSER_MERGEATTACHEMENTS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ReadData(::BestHTTP::SocketIO3::SocketManager* arg, ::BestHTTP::SocketIO3::IncomingPacket* arg, ::System::String* str)
		{
			return (return (Il2CppObject*(*)(::BestHTTP::SocketIO3::SocketManager*, ::BestHTTP::SocketIO3::IncomingPacket*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_PARSERS_DEFAULTJSONPARSER_READDATA_OFFSET))(arg, arg, str, nullptr);
		}

		::Il2CppArray<::System::Object*>* ReadParameters(::BestHTTP::SocketIO3::Socket* arg, ::BestHTTP::SocketIO3::Events::Subscription* arg, Il2CppObject* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SocketIO3::Socket*, ::BestHTTP::SocketIO3::Events::Subscription*, Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_PARSERS_DEFAULTJSONPARSER_READPARAMETERS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Object* ConvertTo(::System::Type* arg, ::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_PARSERS_DEFAULTJSONPARSER_CONVERTTO_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ReadParameters(::BestHTTP::SocketIO3::Socket* arg, ::BestHTTP::SocketIO3::Events::Subscription* arg, ::System::IO::TextReader* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SocketIO3::Socket*, ::BestHTTP::SocketIO3::Events::Subscription*, ::System::IO::TextReader*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_PARSERS_DEFAULTJSONPARSER_READPARAMETERS_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SocketIO3::IncomingPacket* Parse(::BestHTTP::SocketIO3::SocketManager* arg, ::BestHTTP::PlatformSupport::Memory::BufferSegment* arg, ::BestHTTP::SocketIO3::TransportEventTypes* arg)
		{
			return (return (::BestHTTP::SocketIO3::IncomingPacket*(*)(::BestHTTP::SocketIO3::SocketManager*, ::BestHTTP::PlatformSupport::Memory::BufferSegment*, ::BestHTTP::SocketIO3::TransportEventTypes*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_PARSERS_DEFAULTJSONPARSER_PARSE_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SocketIO3::OutgoingPacket* CreateOutgoing(::BestHTTP::SocketIO3::TransportEventTypes* arg, ::System::String* str)
		{
			return (return (::BestHTTP::SocketIO3::OutgoingPacket*(*)(::BestHTTP::SocketIO3::TransportEventTypes*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_PARSERS_DEFAULTJSONPARSER_CREATEOUTGOING_OFFSET))(arg, str, nullptr);
		}

		::BestHTTP::SocketIO3::OutgoingPacket* CreateOutgoing(::BestHTTP::SocketIO3::Socket* arg, ::BestHTTP::SocketIO3::SocketIOEventTypes* arg, ::System::Int32 arg, ::System::String* str, ::System::Object* arg)
		{
			return (return (::BestHTTP::SocketIO3::OutgoingPacket*(*)(::BestHTTP::SocketIO3::Socket*, ::BestHTTP::SocketIO3::SocketIOEventTypes*, ::System::Int32, ::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_PARSERS_DEFAULTJSONPARSER_CREATEOUTGOING_OFFSET))(arg, arg, arg, str, arg, nullptr);
		}

		::System::Int32 GetBinaryCount(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_PARSERS_DEFAULTJSONPARSER_GETBINARYCOUNT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SocketIO3::OutgoingPacket* CreateOutgoing(::BestHTTP::SocketIO3::Socket* arg, ::BestHTTP::SocketIO3::SocketIOEventTypes* arg, ::System::Int32 arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SocketIO3::OutgoingPacket*(*)(::BestHTTP::SocketIO3::Socket*, ::BestHTTP::SocketIO3::SocketIOEventTypes*, ::System::Int32, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_PARSERS_DEFAULTJSONPARSER_CREATEOUTGOING_OFFSET))(arg, arg, arg, str, arg, nullptr);
		}

		Il2CppObject* CreatePlaceholders(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_PARSERS_DEFAULTJSONPARSER_CREATEPLACEHOLDERS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_PARSERS_DEFAULTJSONPARSER_.CTOR_OFFSET))(nullptr);
		}

	};
}


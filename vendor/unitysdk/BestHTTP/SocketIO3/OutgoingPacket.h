#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::PlatformSupport::Memory { class BufferSegment; }

#define BESTHTTP_SOCKETIO3_OUTGOINGPACKET_SET_PAYLOADDATA_OFFSET UNITYSDK_OFFSET(0x509290)
#define BESTHTTP_SOCKETIO3_OUTGOINGPACKET_SET_ISVOLATILE_OFFSET UNITYSDK_OFFSET(0x5092B0)
#define BESTHTTP_SOCKETIO3_OUTGOINGPACKET_GET_PAYLOADDATA_OFFSET UNITYSDK_OFFSET(0x5092C0)
#define BESTHTTP_SOCKETIO3_OUTGOINGPACKET_GET_ATTACHEMENTS_OFFSET UNITYSDK_OFFSET(0x5092D0)
#define BESTHTTP_SOCKETIO3_OUTGOINGPACKET_GET_ISVOLATILE_OFFSET UNITYSDK_OFFSET(0x5092E0)
#define BESTHTTP_SOCKETIO3_OUTGOINGPACKET_SET_PAYLOAD_OFFSET UNITYSDK_OFFSET(0x5092F0)
#define BESTHTTP_SOCKETIO3_OUTGOINGPACKET_SET_ATTACHEMENTS_OFFSET UNITYSDK_OFFSET(0x509300)
#define BESTHTTP_SOCKETIO3_OUTGOINGPACKET_GET_PAYLOAD_OFFSET UNITYSDK_OFFSET(0x509310)
#define BESTHTTP_SOCKETIO3_OUTGOINGPACKET_GET_ISBINARY_OFFSET UNITYSDK_OFFSET(0x509320)

namespace BestHTTP::SocketIO3
{
	inline static constexpr unsigned int OutgoingPacket_TypeDefinitionIndex = 21375;

	class OutgoingPacket : public Il2CppObject
	{
	public:
		::System::String* _Payload_k__BackingField; // 0x10
		Il2CppObject* _Attachements_k__BackingField; // 0x18
		::BestHTTP::PlatformSupport::Memory::BufferSegment* _PayloadData_k__BackingField; // 0x20
		::System::Boolean _IsVolatile_k__BackingField; // 0x30

		::System::Void set_PayloadData(::BestHTTP::PlatformSupport::Memory::BufferSegment* arg)
		{
			((::System::Void(*)(::BestHTTP::PlatformSupport::Memory::BufferSegment*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_OUTGOINGPACKET_SET_PAYLOADDATA_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsVolatile(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_OUTGOINGPACKET_SET_ISVOLATILE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::PlatformSupport::Memory::BufferSegment* get_PayloadData()
		{
			return (return (::BestHTTP::PlatformSupport::Memory::BufferSegment*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_OUTGOINGPACKET_GET_PAYLOADDATA_OFFSET))(nullptr);
		}

		Il2CppObject* get_Attachements()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_OUTGOINGPACKET_GET_ATTACHEMENTS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsVolatile()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_OUTGOINGPACKET_GET_ISVOLATILE_OFFSET))(nullptr);
		}

		::System::Void set_Payload(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_OUTGOINGPACKET_SET_PAYLOAD_OFFSET))(str, nullptr);
		}

		::System::Void set_Attachements(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_OUTGOINGPACKET_SET_ATTACHEMENTS_OFFSET))(arg, nullptr);
		}

		::System::String* get_Payload()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_OUTGOINGPACKET_GET_PAYLOAD_OFFSET))(nullptr);
		}

		::System::Boolean get_IsBinary()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_OUTGOINGPACKET_GET_ISBINARY_OFFSET))(nullptr);
		}

	};
}


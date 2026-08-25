#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SocketIO { class TransportEventTypes; }
namespace BestHTTP::SocketIO { class SocketIOEventTypes; }
namespace BestHTTP::SocketIO::JsonEncoders { class IJsonEncoder; }
namespace BestHTTP::SocketIO { class Packet; }

#define BESTHTTP_SOCKETIO_PACKET_GET_TRANSPORTEVENT_OFFSET UNITYSDK_OFFSET(0x4F79C0)
#define BESTHTTP_SOCKETIO_PACKET_SET_TRANSPORTEVENT_OFFSET UNITYSDK_OFFSET(0x4F79D0)
#define BESTHTTP_SOCKETIO_PACKET_GET_SOCKETIOEVENT_OFFSET UNITYSDK_OFFSET(0x4F79E0)
#define BESTHTTP_SOCKETIO_PACKET_SET_SOCKETIOEVENT_OFFSET UNITYSDK_OFFSET(0x4F79F0)
#define BESTHTTP_SOCKETIO_PACKET_GET_ATTACHMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x4F7A00)
#define BESTHTTP_SOCKETIO_PACKET_SET_ATTACHMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x4F7A10)
#define BESTHTTP_SOCKETIO_PACKET_GET_ID_OFFSET UNITYSDK_OFFSET(0x4F7A20)
#define BESTHTTP_SOCKETIO_PACKET_SET_ID_OFFSET UNITYSDK_OFFSET(0x4F7A30)
#define BESTHTTP_SOCKETIO_PACKET_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x4F7A40)
#define BESTHTTP_SOCKETIO_PACKET_SET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x4F7A50)
#define BESTHTTP_SOCKETIO_PACKET_GET_PAYLOAD_OFFSET UNITYSDK_OFFSET(0x4F7A60)
#define BESTHTTP_SOCKETIO_PACKET_SET_PAYLOAD_OFFSET UNITYSDK_OFFSET(0x4F7A70)
#define BESTHTTP_SOCKETIO_PACKET_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x4F7A80)
#define BESTHTTP_SOCKETIO_PACKET_SET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x4F7A90)
#define BESTHTTP_SOCKETIO_PACKET_GET_ATTACHMENTS_OFFSET UNITYSDK_OFFSET(0x4F7AA0)
#define BESTHTTP_SOCKETIO_PACKET_SET_ATTACHMENTS_OFFSET UNITYSDK_OFFSET(0x4F7AB0)
#define BESTHTTP_SOCKETIO_PACKET_GET_HASALLATTACHMENT_OFFSET UNITYSDK_OFFSET(0x4F7B20)
#define BESTHTTP_SOCKETIO_PACKET_GET_ISDECODED_OFFSET UNITYSDK_OFFSET(0x4F7B70)
#define BESTHTTP_SOCKETIO_PACKET_SET_ISDECODED_OFFSET UNITYSDK_OFFSET(0x4F7B80)
#define BESTHTTP_SOCKETIO_PACKET_GET_DECODEDARGS_OFFSET UNITYSDK_OFFSET(0x4F7B90)
#define BESTHTTP_SOCKETIO_PACKET_SET_DECODEDARGS_OFFSET UNITYSDK_OFFSET(0x4F7BA0)
#define BESTHTTP_SOCKETIO_PACKET_.CTOR_OFFSET UNITYSDK_OFFSET(0x4F7BB0)
#define BESTHTTP_SOCKETIO_PACKET_.CTOR_OFFSET UNITYSDK_OFFSET(0x4F7C10)
#define BESTHTTP_SOCKETIO_PACKET_.CTOR_OFFSET UNITYSDK_OFFSET(0x4F8080)
#define BESTHTTP_SOCKETIO_PACKET_DECODE_OFFSET UNITYSDK_OFFSET(0x4F8100)
#define BESTHTTP_SOCKETIO_PACKET_DECODEEVENTNAME_OFFSET UNITYSDK_OFFSET(0x4F8240)
#define BESTHTTP_SOCKETIO_PACKET_REMOVEEVENTNAME_OFFSET UNITYSDK_OFFSET(0x4F83C0)
#define BESTHTTP_SOCKETIO_PACKET_RECONSTRUCTATTACHMENTASINDEX_OFFSET UNITYSDK_OFFSET(0x4F8550)
#define BESTHTTP_SOCKETIO_PACKET_RECONSTRUCTATTACHMENTASBASE64_OFFSET UNITYSDK_OFFSET(0x4F8880)
#define BESTHTTP_SOCKETIO_PACKET_PARSE_OFFSET UNITYSDK_OFFSET(0x4F7C40)
#define BESTHTTP_SOCKETIO_PACKET_TOINT_OFFSET UNITYSDK_OFFSET(0x4F8940)
#define BESTHTTP_SOCKETIO_PACKET_ENCODE_OFFSET UNITYSDK_OFFSET(0x4F89B0)
#define BESTHTTP_SOCKETIO_PACKET_ENCODEBINARY_OFFSET UNITYSDK_OFFSET(0x4F8BA0)
#define BESTHTTP_SOCKETIO_PACKET_ADDATTACHMENTFROMSERVER_OFFSET UNITYSDK_OFFSET(0x4F9100)
#define BESTHTTP_SOCKETIO_PACKET_ENCODEDATA_OFFSET UNITYSDK_OFFSET(0x4F8ED0)
#define BESTHTTP_SOCKETIO_PACKET_PLACEHOLDERREPLACER_OFFSET UNITYSDK_OFFSET(0x4F85D0)
#define BESTHTTP_SOCKETIO_PACKET_TOSTRING_OFFSET UNITYSDK_OFFSET(0x4F92F0)
#define BESTHTTP_SOCKETIO_PACKET_CLONE_OFFSET UNITYSDK_OFFSET(0x4F9300)
#define BESTHTTP_SOCKETIO_PACKET__RECONSTRUCTATTACHMENTASINDEX_B__50_0_OFFSET UNITYSDK_OFFSET(0x4F93D0)
#define BESTHTTP_SOCKETIO_PACKET__RECONSTRUCTATTACHMENTASBASE64_B__51_0_OFFSET UNITYSDK_OFFSET(0x4F94B0)

namespace BestHTTP::SocketIO
{
	inline static constexpr unsigned int Packet_TypeDefinitionIndex = 21350;

	class Packet : public Il2CppObject
	{
	public:
		::System::String* Placeholder; // 0x0
		::BestHTTP::SocketIO::TransportEventTypes* _TransportEvent_k__BackingField; // 0x10
		::BestHTTP::SocketIO::SocketIOEventTypes* _SocketIOEvent_k__BackingField; // 0x14
		::System::Int32 _AttachmentCount_k__BackingField; // 0x18
		::System::Int32 _Id_k__BackingField; // 0x1C
		::System::String* _Namespace_k__BackingField; // 0x20
		::System::String* _Payload_k__BackingField; // 0x28
		::System::String* _EventName_k__BackingField; // 0x30
		Il2CppObject* attachments; // 0x38
		::System::Boolean _IsDecoded_k__BackingField; // 0x40
		::Il2CppArray<::System::Object*>* _DecodedArgs_k__BackingField; // 0x48

		::BestHTTP::SocketIO::TransportEventTypes* get_TransportEvent()
		{
			return (return (::BestHTTP::SocketIO::TransportEventTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_PACKET_GET_TRANSPORTEVENT_OFFSET))(nullptr);
		}

		::System::Void set_TransportEvent(::BestHTTP::SocketIO::TransportEventTypes* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::TransportEventTypes*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_PACKET_SET_TRANSPORTEVENT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SocketIO::SocketIOEventTypes* get_SocketIOEvent()
		{
			return (return (::BestHTTP::SocketIO::SocketIOEventTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_PACKET_GET_SOCKETIOEVENT_OFFSET))(nullptr);
		}

		::System::Void set_SocketIOEvent(::BestHTTP::SocketIO::SocketIOEventTypes* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::SocketIOEventTypes*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_PACKET_SET_SOCKETIOEVENT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_AttachmentCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_PACKET_GET_ATTACHMENTCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_AttachmentCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_PACKET_SET_ATTACHMENTCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Id()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_PACKET_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_PACKET_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::String* get_Namespace()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_PACKET_GET_NAMESPACE_OFFSET))(nullptr);
		}

		::System::Void set_Namespace(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_PACKET_SET_NAMESPACE_OFFSET))(str, nullptr);
		}

		::System::String* get_Payload()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_PACKET_GET_PAYLOAD_OFFSET))(nullptr);
		}

		::System::Void set_Payload(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_PACKET_SET_PAYLOAD_OFFSET))(str, nullptr);
		}

		::System::String* get_EventName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_PACKET_GET_EVENTNAME_OFFSET))(nullptr);
		}

		::System::Void set_EventName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_PACKET_SET_EVENTNAME_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_Attachments()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_PACKET_GET_ATTACHMENTS_OFFSET))(nullptr);
		}

		::System::Void set_Attachments(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_PACKET_SET_ATTACHMENTS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasAllAttachment()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_PACKET_GET_HASALLATTACHMENT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDecoded()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_PACKET_GET_ISDECODED_OFFSET))(nullptr);
		}

		::System::Void set_IsDecoded(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_PACKET_SET_ISDECODED_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_DecodedArgs()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_PACKET_GET_DECODEDARGS_OFFSET))(nullptr);
		}

		::System::Void set_DecodedArgs(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_PACKET_SET_DECODEDARGS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_PACKET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_PACKET_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SocketIO::TransportEventTypes* arg, ::BestHTTP::SocketIO::SocketIOEventTypes* arg, ::System::String* str, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::TransportEventTypes*, ::BestHTTP::SocketIO::SocketIOEventTypes*, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_PACKET_.CTOR_OFFSET))(arg, arg, str, str, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Decode(::BestHTTP::SocketIO::JsonEncoders::IJsonEncoder* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SocketIO::JsonEncoders::IJsonEncoder*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_PACKET_DECODE_OFFSET))(arg, nullptr);
		}

		::System::String* DecodeEventName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_PACKET_DECODEEVENTNAME_OFFSET))(nullptr);
		}

		::System::String* RemoveEventName(::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_PACKET_REMOVEEVENTNAME_OFFSET))(arg, nullptr);
		}

		::System::Boolean ReconstructAttachmentAsIndex()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_PACKET_RECONSTRUCTATTACHMENTASINDEX_OFFSET))(nullptr);
		}

		::System::Boolean ReconstructAttachmentAsBase64()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_PACKET_RECONSTRUCTATTACHMENTASBASE64_OFFSET))(nullptr);
		}

		::System::Void Parse(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_PACKET_PARSE_OFFSET))(str, nullptr);
		}

		::System::Int32 ToInt(::System::Char arg)
		{
			return (return (::System::Int32(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_PACKET_TOINT_OFFSET))(arg, nullptr);
		}

		::System::String* Encode()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_PACKET_ENCODE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* EncodeBinary()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_PACKET_ENCODEBINARY_OFFSET))(nullptr);
		}

		::System::Void AddAttachmentFromServer(::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_PACKET_ADDATTACHMENTFROMSERVER_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* EncodeData(::Il2CppArray<::System::Object*>* arg, PayloadTypes* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, PayloadTypes*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_PACKET_ENCODEDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean PlaceholderReplacer(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_PACKET_PLACEHOLDERREPLACER_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_PACKET_TOSTRING_OFFSET))(nullptr);
		}

		::BestHTTP::SocketIO::Packet* Clone()
		{
			return (return (::BestHTTP::SocketIO::Packet*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_PACKET_CLONE_OFFSET))(nullptr);
		}

		::System::Void _ReconstructAttachmentAsIndex_b__50_0(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_PACKET__RECONSTRUCTATTACHMENTASINDEX_B__50_0_OFFSET))(str, arg, nullptr);
		}

		::System::Void _ReconstructAttachmentAsBase64_b__51_0(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_PACKET__RECONSTRUCTATTACHMENTASBASE64_B__51_0_OFFSET))(str, arg, nullptr);
		}

	};
}


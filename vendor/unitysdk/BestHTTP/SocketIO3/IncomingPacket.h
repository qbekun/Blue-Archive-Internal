#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SocketIO3 { class IncomingPacket; }
namespace BestHTTP::SocketIO3 { class TransportEventTypes; }
namespace BestHTTP::SocketIO3 { class SocketIOEventTypes; }

#define BESTHTTP_SOCKETIO3_INCOMINGPACKET_GET_TRANSPORTEVENT_OFFSET UNITYSDK_OFFSET(0x509330)
#define BESTHTTP_SOCKETIO3_INCOMINGPACKET_SET_TRANSPORTEVENT_OFFSET UNITYSDK_OFFSET(0x509340)
#define BESTHTTP_SOCKETIO3_INCOMINGPACKET_GET_SOCKETIOEVENT_OFFSET UNITYSDK_OFFSET(0x509350)
#define BESTHTTP_SOCKETIO3_INCOMINGPACKET_SET_SOCKETIOEVENT_OFFSET UNITYSDK_OFFSET(0x509360)
#define BESTHTTP_SOCKETIO3_INCOMINGPACKET_GET_ID_OFFSET UNITYSDK_OFFSET(0x509370)
#define BESTHTTP_SOCKETIO3_INCOMINGPACKET_SET_ID_OFFSET UNITYSDK_OFFSET(0x509380)
#define BESTHTTP_SOCKETIO3_INCOMINGPACKET_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x509390)
#define BESTHTTP_SOCKETIO3_INCOMINGPACKET_SET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x5093A0)
#define BESTHTTP_SOCKETIO3_INCOMINGPACKET_GET_ATTACHEMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x5093B0)
#define BESTHTTP_SOCKETIO3_INCOMINGPACKET_SET_ATTACHEMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x5093C0)
#define BESTHTTP_SOCKETIO3_INCOMINGPACKET_GET_ATTACHEMENTS_OFFSET UNITYSDK_OFFSET(0x5093D0)
#define BESTHTTP_SOCKETIO3_INCOMINGPACKET_SET_ATTACHEMENTS_OFFSET UNITYSDK_OFFSET(0x5093E0)
#define BESTHTTP_SOCKETIO3_INCOMINGPACKET_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x5093F0)
#define BESTHTTP_SOCKETIO3_INCOMINGPACKET_SET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x509400)
#define BESTHTTP_SOCKETIO3_INCOMINGPACKET_GET_DECODEDARGS_OFFSET UNITYSDK_OFFSET(0x509410)
#define BESTHTTP_SOCKETIO3_INCOMINGPACKET_SET_DECODEDARGS_OFFSET UNITYSDK_OFFSET(0x509420)
#define BESTHTTP_SOCKETIO3_INCOMINGPACKET_GET_DECODEDARG_OFFSET UNITYSDK_OFFSET(0x509430)
#define BESTHTTP_SOCKETIO3_INCOMINGPACKET_SET_DECODEDARG_OFFSET UNITYSDK_OFFSET(0x509440)
#define BESTHTTP_SOCKETIO3_INCOMINGPACKET_.CTOR_OFFSET UNITYSDK_OFFSET(0x509450)
#define BESTHTTP_SOCKETIO3_INCOMINGPACKET_TOSTRING_OFFSET UNITYSDK_OFFSET(0x5095E0)
#define BESTHTTP_SOCKETIO3_INCOMINGPACKET_EQUALS_OFFSET UNITYSDK_OFFSET(0x509820)
#define BESTHTTP_SOCKETIO3_INCOMINGPACKET_EQUALS_OFFSET UNITYSDK_OFFSET(0x5098D0)
#define BESTHTTP_SOCKETIO3_INCOMINGPACKET_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x509A40)
#define BESTHTTP_SOCKETIO3_INCOMINGPACKET_GENERATEACKNOWLEDGEMENTNAMEFROMID_OFFSET UNITYSDK_OFFSET(0x509C80)
#define BESTHTTP_SOCKETIO3_INCOMINGPACKET_.CCTOR_OFFSET UNITYSDK_OFFSET(0x509CE0)

namespace BestHTTP::SocketIO3
{
	inline static constexpr unsigned int IncomingPacket_TypeDefinitionIndex = 21376;

	class IncomingPacket : public Il2CppObject
	{
	public:
		::BestHTTP::SocketIO3::IncomingPacket* Empty; // 0x0
		::BestHTTP::SocketIO3::TransportEventTypes* _TransportEvent_k__BackingField; // 0x10
		::BestHTTP::SocketIO3::SocketIOEventTypes* _SocketIOEvent_k__BackingField; // 0x14
		::System::Int32 _Id_k__BackingField; // 0x18
		::System::String* _Namespace_k__BackingField; // 0x20
		::System::Int32 _AttachementCount_k__BackingField; // 0x28
		Il2CppObject* _Attachements_k__BackingField; // 0x30
		::System::String* _EventName_k__BackingField; // 0x38
		::Il2CppArray<::System::Object*>* _DecodedArgs_k__BackingField; // 0x40
		::System::Object* _DecodedArg_k__BackingField; // 0x48

		::BestHTTP::SocketIO3::TransportEventTypes* get_TransportEvent()
		{
			return (return (::BestHTTP::SocketIO3::TransportEventTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_INCOMINGPACKET_GET_TRANSPORTEVENT_OFFSET))(nullptr);
		}

		::System::Void set_TransportEvent(::BestHTTP::SocketIO3::TransportEventTypes* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::TransportEventTypes*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_INCOMINGPACKET_SET_TRANSPORTEVENT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SocketIO3::SocketIOEventTypes* get_SocketIOEvent()
		{
			return (return (::BestHTTP::SocketIO3::SocketIOEventTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_INCOMINGPACKET_GET_SOCKETIOEVENT_OFFSET))(nullptr);
		}

		::System::Void set_SocketIOEvent(::BestHTTP::SocketIO3::SocketIOEventTypes* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::SocketIOEventTypes*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_INCOMINGPACKET_SET_SOCKETIOEVENT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Id()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_INCOMINGPACKET_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_INCOMINGPACKET_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::String* get_Namespace()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_INCOMINGPACKET_GET_NAMESPACE_OFFSET))(nullptr);
		}

		::System::Void set_Namespace(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_INCOMINGPACKET_SET_NAMESPACE_OFFSET))(str, nullptr);
		}

		::System::Int32 get_AttachementCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_INCOMINGPACKET_GET_ATTACHEMENTCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_AttachementCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_INCOMINGPACKET_SET_ATTACHEMENTCOUNT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Attachements()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_INCOMINGPACKET_GET_ATTACHEMENTS_OFFSET))(nullptr);
		}

		::System::Void set_Attachements(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_INCOMINGPACKET_SET_ATTACHEMENTS_OFFSET))(arg, nullptr);
		}

		::System::String* get_EventName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_INCOMINGPACKET_GET_EVENTNAME_OFFSET))(nullptr);
		}

		::System::Void set_EventName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_INCOMINGPACKET_SET_EVENTNAME_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_DecodedArgs()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_INCOMINGPACKET_GET_DECODEDARGS_OFFSET))(nullptr);
		}

		::System::Void set_DecodedArgs(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_INCOMINGPACKET_SET_DECODEDARGS_OFFSET))(arg, nullptr);
		}

		::System::Object* get_DecodedArg()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_INCOMINGPACKET_GET_DECODEDARG_OFFSET))(nullptr);
		}

		::System::Void set_DecodedArg(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_INCOMINGPACKET_SET_DECODEDARG_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SocketIO3::TransportEventTypes* arg, ::BestHTTP::SocketIO3::SocketIOEventTypes* arg, ::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::TransportEventTypes*, ::BestHTTP::SocketIO3::SocketIOEventTypes*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_INCOMINGPACKET_.CTOR_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_INCOMINGPACKET_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_INCOMINGPACKET_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::BestHTTP::SocketIO3::IncomingPacket* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SocketIO3::IncomingPacket*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_INCOMINGPACKET_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_INCOMINGPACKET_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* GenerateAcknowledgementNameFromId(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_INCOMINGPACKET_GENERATEACKNOWLEDGEMENTNAMEFROMID_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_INCOMINGPACKET_.CCTOR_OFFSET))(nullptr);
		}

	};
}


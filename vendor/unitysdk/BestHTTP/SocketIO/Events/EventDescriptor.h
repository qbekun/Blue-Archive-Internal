#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SocketIO { class Socket; }
namespace BestHTTP::SocketIO { class Packet; }
namespace BestHTTP::SocketIO::Events { class SocketIOCallback; }

#define BESTHTTP_SOCKETIO_EVENTS_EVENTDESCRIPTOR_SET_CALLBACKS_OFFSET UNITYSDK_OFFSET(0x507FF0)
#define BESTHTTP_SOCKETIO_EVENTS_EVENTDESCRIPTOR_GET_ONLYONCE_OFFSET UNITYSDK_OFFSET(0x508000)
#define BESTHTTP_SOCKETIO_EVENTS_EVENTDESCRIPTOR_CALL_OFFSET UNITYSDK_OFFSET(0x508010)
#define BESTHTTP_SOCKETIO_EVENTS_EVENTDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x508410)
#define BESTHTTP_SOCKETIO_EVENTS_EVENTDESCRIPTOR_SET_AUTODECODEPAYLOAD_OFFSET UNITYSDK_OFFSET(0x508530)
#define BESTHTTP_SOCKETIO_EVENTS_EVENTDESCRIPTOR_SET_ONLYONCE_OFFSET UNITYSDK_OFFSET(0x508540)
#define BESTHTTP_SOCKETIO_EVENTS_EVENTDESCRIPTOR_GET_AUTODECODEPAYLOAD_OFFSET UNITYSDK_OFFSET(0x508550)
#define BESTHTTP_SOCKETIO_EVENTS_EVENTDESCRIPTOR_GET_CALLBACKS_OFFSET UNITYSDK_OFFSET(0x508560)

namespace BestHTTP::SocketIO::Events
{
	inline static constexpr unsigned int EventDescriptor_TypeDefinitionIndex = 21367;

	class EventDescriptor : public Il2CppObject
	{
	public:
		Il2CppObject* _Callbacks_k__BackingField; // 0x10
		::System::Boolean _OnlyOnce_k__BackingField; // 0x18
		::System::Boolean _AutoDecodePayload_k__BackingField; // 0x19
		::Il2CppArray<::System::Object*>* CallbackArray; // 0x20

		::System::Void set_Callbacks(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_EVENTS_EVENTDESCRIPTOR_SET_CALLBACKS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_OnlyOnce()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_EVENTS_EVENTDESCRIPTOR_GET_ONLYONCE_OFFSET))(nullptr);
		}

		::System::Void Call(::BestHTTP::SocketIO::Socket* arg, ::BestHTTP::SocketIO::Packet* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO::Socket*, ::BestHTTP::SocketIO::Packet*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_EVENTS_EVENTDESCRIPTOR_CALL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Boolean arg, ::System::Boolean arg, ::BestHTTP::SocketIO::Events::SocketIOCallback* arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::BestHTTP::SocketIO::Events::SocketIOCallback*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_EVENTS_EVENTDESCRIPTOR_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void set_AutoDecodePayload(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_EVENTS_EVENTDESCRIPTOR_SET_AUTODECODEPAYLOAD_OFFSET))(arg, nullptr);
		}

		::System::Void set_OnlyOnce(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_EVENTS_EVENTDESCRIPTOR_SET_ONLYONCE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_AutoDecodePayload()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_EVENTS_EVENTDESCRIPTOR_GET_AUTODECODEPAYLOAD_OFFSET))(nullptr);
		}

		Il2CppObject* get_Callbacks()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_EVENTS_EVENTDESCRIPTOR_GET_CALLBACKS_OFFSET))(nullptr);
		}

	};
}


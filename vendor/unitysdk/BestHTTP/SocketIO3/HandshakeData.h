#pragma once
#include "../../unitysdk.h"

#define BESTHTTP_SOCKETIO3_HANDSHAKEDATA_GET_PINGTIMEOUT_OFFSET UNITYSDK_OFFSET(0x509200)
#define BESTHTTP_SOCKETIO3_HANDSHAKEDATA_GET_PINGINTERVAL_OFFSET UNITYSDK_OFFSET(0x509210)
#define BESTHTTP_SOCKETIO3_HANDSHAKEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x509220)
#define BESTHTTP_SOCKETIO3_HANDSHAKEDATA_GET_UPGRADES_OFFSET UNITYSDK_OFFSET(0x509230)
#define BESTHTTP_SOCKETIO3_HANDSHAKEDATA_SET_UPGRADES_OFFSET UNITYSDK_OFFSET(0x509240)
#define BESTHTTP_SOCKETIO3_HANDSHAKEDATA_SET_PINGINTERVAL_OFFSET UNITYSDK_OFFSET(0x509250)
#define BESTHTTP_SOCKETIO3_HANDSHAKEDATA_GET_SID_OFFSET UNITYSDK_OFFSET(0x509260)
#define BESTHTTP_SOCKETIO3_HANDSHAKEDATA_SET_SID_OFFSET UNITYSDK_OFFSET(0x509270)
#define BESTHTTP_SOCKETIO3_HANDSHAKEDATA_SET_PINGTIMEOUT_OFFSET UNITYSDK_OFFSET(0x509280)

namespace BestHTTP::SocketIO3
{
	inline static constexpr unsigned int HandshakeData_TypeDefinitionIndex = 21374;

	class HandshakeData : public Il2CppObject
	{
	public:
		::System::String* _Sid_k__BackingField; // 0x10
		Il2CppObject* _Upgrades_k__BackingField; // 0x18
		::System::Int32 _PingInterval_k__BackingField; // 0x20
		::System::Int32 _PingTimeout_k__BackingField; // 0x24

		::System::Int32 get_PingTimeout()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_HANDSHAKEDATA_GET_PINGTIMEOUT_OFFSET))(nullptr);
		}

		::System::Int32 get_PingInterval()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_HANDSHAKEDATA_GET_PINGINTERVAL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_HANDSHAKEDATA_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_Upgrades()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_HANDSHAKEDATA_GET_UPGRADES_OFFSET))(nullptr);
		}

		::System::Void set_Upgrades(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_HANDSHAKEDATA_SET_UPGRADES_OFFSET))(arg, nullptr);
		}

		::System::Void set_PingInterval(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_HANDSHAKEDATA_SET_PINGINTERVAL_OFFSET))(arg, nullptr);
		}

		::System::String* get_Sid()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_HANDSHAKEDATA_GET_SID_OFFSET))(nullptr);
		}

		::System::Void set_Sid(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_HANDSHAKEDATA_SET_SID_OFFSET))(str, nullptr);
		}

		::System::Void set_PingTimeout(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_HANDSHAKEDATA_SET_PINGTIMEOUT_OFFSET))(arg, nullptr);
		}

	};
}


#pragma once
#include "../../unitysdk.h"

#define BESTHTTP_SOCKETIO_HANDSHAKEDATA_SET_SID_OFFSET UNITYSDK_OFFSET(0x4F7260)
#define BESTHTTP_SOCKETIO_HANDSHAKEDATA_GETINT_OFFSET UNITYSDK_OFFSET(0x4F7270)
#define BESTHTTP_SOCKETIO_HANDSHAKEDATA_GETSTRINGLIST_OFFSET UNITYSDK_OFFSET(0x4F73B0)
#define BESTHTTP_SOCKETIO_HANDSHAKEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x4F7550)
#define BESTHTTP_SOCKETIO_HANDSHAKEDATA_GETSTRING_OFFSET UNITYSDK_OFFSET(0x4F7560)
#define BESTHTTP_SOCKETIO_HANDSHAKEDATA_GET_SID_OFFSET UNITYSDK_OFFSET(0x4F75C0)
#define BESTHTTP_SOCKETIO_HANDSHAKEDATA_SET_PINGINTERVAL_OFFSET UNITYSDK_OFFSET(0x4F75D0)
#define BESTHTTP_SOCKETIO_HANDSHAKEDATA_SET_PINGTIMEOUT_OFFSET UNITYSDK_OFFSET(0x4F75E0)
#define BESTHTTP_SOCKETIO_HANDSHAKEDATA_GET_UPGRADES_OFFSET UNITYSDK_OFFSET(0x4F75F0)
#define BESTHTTP_SOCKETIO_HANDSHAKEDATA_GET_PINGTIMEOUT_OFFSET UNITYSDK_OFFSET(0x4F7600)
#define BESTHTTP_SOCKETIO_HANDSHAKEDATA_SET_UPGRADES_OFFSET UNITYSDK_OFFSET(0x4F7610)
#define BESTHTTP_SOCKETIO_HANDSHAKEDATA_PARSE_OFFSET UNITYSDK_OFFSET(0x4F7620)
#define BESTHTTP_SOCKETIO_HANDSHAKEDATA_GET_PINGINTERVAL_OFFSET UNITYSDK_OFFSET(0x4F79B0)
#define BESTHTTP_SOCKETIO_HANDSHAKEDATA_GET_OFFSET UNITYSDK_OFFSET(0x4F72E0)

namespace BestHTTP::SocketIO
{
	inline static constexpr unsigned int HandshakeData_TypeDefinitionIndex = 21346;

	class HandshakeData : public Il2CppObject
	{
	public:
		::System::String* _Sid_k__BackingField; // 0x10
		Il2CppObject* _Upgrades_k__BackingField; // 0x18
		::System::TimeSpan* _PingInterval_k__BackingField; // 0x20
		::System::TimeSpan* _PingTimeout_k__BackingField; // 0x28

		::System::Void set_Sid(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_HANDSHAKEDATA_SET_SID_OFFSET))(str, nullptr);
		}

		::System::Int32 GetInt(Il2CppObject* arg, ::System::String* str)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_HANDSHAKEDATA_GETINT_OFFSET))(arg, str, nullptr);
		}

		Il2CppObject* GetStringList(Il2CppObject* arg, ::System::String* str)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_HANDSHAKEDATA_GETSTRINGLIST_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_HANDSHAKEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::String* GetString(Il2CppObject* arg, ::System::String* str)
		{
			return (return (::System::String*(*)(Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_HANDSHAKEDATA_GETSTRING_OFFSET))(arg, str, nullptr);
		}

		::System::String* get_Sid()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_HANDSHAKEDATA_GET_SID_OFFSET))(nullptr);
		}

		::System::Void set_PingInterval(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_HANDSHAKEDATA_SET_PINGINTERVAL_OFFSET))(arg, nullptr);
		}

		::System::Void set_PingTimeout(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_HANDSHAKEDATA_SET_PINGTIMEOUT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Upgrades()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_HANDSHAKEDATA_GET_UPGRADES_OFFSET))(nullptr);
		}

		::System::TimeSpan* get_PingTimeout()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_HANDSHAKEDATA_GET_PINGTIMEOUT_OFFSET))(nullptr);
		}

		::System::Void set_Upgrades(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_HANDSHAKEDATA_SET_UPGRADES_OFFSET))(arg, nullptr);
		}

		::System::Boolean Parse(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_HANDSHAKEDATA_PARSE_OFFSET))(str, nullptr);
		}

		::System::TimeSpan* get_PingInterval()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_HANDSHAKEDATA_GET_PINGINTERVAL_OFFSET))(nullptr);
		}

		::System::Object* Get(Il2CppObject* arg, ::System::String* str)
		{
			return (return (::System::Object*(*)(Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_HANDSHAKEDATA_GET_OFFSET))(arg, str, nullptr);
		}

	};
}


#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_IPENDPOINT_GET_ADDRESSFAMILY_OFFSET UNITYSDK_OFFSET(0x9B92C70)
#define SYSTEM_NET_IPENDPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B92CA0)
#define SYSTEM_NET_IPENDPOINT_GET_ADDRESS_OFFSET UNITYSDK_OFFSET(0x9B92D90)
#define SYSTEM_NET_IPENDPOINT_GET_PORT_OFFSET UNITYSDK_OFFSET(0x9B92DA0)
#define SYSTEM_NET_IPENDPOINT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9B92DB0)
#define SYSTEM_NET_IPENDPOINT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9B92E70)
#define SYSTEM_NET_IPENDPOINT_CREATE_OFFSET UNITYSDK_OFFSET(0x9B92F50)
#define SYSTEM_NET_IPENDPOINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B93240)
#define SYSTEM_NET_IPENDPOINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B932E0)
#define SYSTEM_NET_IPENDPOINT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B93310)

namespace System::Net
{
	inline static constexpr unsigned int IPEndPoint_TypeDefinitionIndex = 29648;

	class IPEndPoint : public Il2CppObject
	{
	public:
		::System::Net::IPAddress* _address; // 0x10
		::System::Int32 _port; // 0x18
		::System::Net::IPEndPoint* Any; // 0x0
		::System::Net::IPEndPoint* IPv6Any; // 0x8

		::System::Net::Sockets::AddressFamily* get_AddressFamily()
		{
			return (return (::System::Net::Sockets::AddressFamily*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPENDPOINT_GET_ADDRESSFAMILY_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Net::IPAddress* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Net::IPAddress*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPENDPOINT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Net::IPAddress* get_Address()
		{
			return (return (::System::Net::IPAddress*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPENDPOINT_GET_ADDRESS_OFFSET))(nullptr);
		}

		::System::Int32 get_Port()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPENDPOINT_GET_PORT_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPENDPOINT_TOSTRING_OFFSET))(nullptr);
		}

		::System::Net::SocketAddress* Serialize()
		{
			return (return (::System::Net::SocketAddress*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPENDPOINT_SERIALIZE_OFFSET))(nullptr);
		}

		::System::Net::EndPoint* Create(::System::Net::SocketAddress* arg)
		{
			return (return (::System::Net::EndPoint*(*)(::System::Net::SocketAddress*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPENDPOINT_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPENDPOINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPENDPOINT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPENDPOINT_.CCTOR_OFFSET))(nullptr);
		}

	};
}


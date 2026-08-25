#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_SOCKETADDRESS_GET_FAMILY_OFFSET UNITYSDK_OFFSET(0x9B93170)
#define SYSTEM_NET_SOCKETADDRESS_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x9BA7F80)
#define SYSTEM_NET_SOCKETADDRESS_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9BA7F90)
#define SYSTEM_NET_SOCKETADDRESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BA8010)
#define SYSTEM_NET_SOCKETADDRESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BA8120)
#define SYSTEM_NET_SOCKETADDRESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B92F00)
#define SYSTEM_NET_SOCKETADDRESS_GETIPADDRESS_OFFSET UNITYSDK_OFFSET(0x9BA8400)
#define SYSTEM_NET_SOCKETADDRESS_GETIPENDPOINT_OFFSET UNITYSDK_OFFSET(0x9B931B0)
#define SYSTEM_NET_SOCKETADDRESS_EQUALS_OFFSET UNITYSDK_OFFSET(0x9BA8640)
#define SYSTEM_NET_SOCKETADDRESS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9BA86F0)
#define SYSTEM_NET_SOCKETADDRESS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BA89F0)

namespace System::Net
{
	inline static constexpr unsigned int SocketAddress_TypeDefinitionIndex = 29693;

	class SocketAddress : public Il2CppObject
	{
	public:
		::System::Int32 m_Size; // 0x10
		::Il2CppArray<::System::Object*>* m_Buffer; // 0x18
		::System::Boolean m_changed; // 0x20
		::System::Int32 m_hash; // 0x24

		::System::Net::Sockets::AddressFamily* get_Family()
		{
			return (return (::System::Net::Sockets::AddressFamily*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETADDRESS_GET_FAMILY_OFFSET))(nullptr);
		}

		::System::Int32 get_Size()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETADDRESS_GET_SIZE_OFFSET))(nullptr);
		}

		::System::Byte get_Item(::System::Int32 arg)
		{
			return (return (::System::Byte(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETADDRESS_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Net::Sockets::AddressFamily* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Net::Sockets::AddressFamily*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETADDRESS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Net::IPAddress* arg)
		{
			((::System::Void(*)(::System::Net::IPAddress*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETADDRESS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Net::IPAddress* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Net::IPAddress*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETADDRESS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Net::IPAddress* GetIPAddress()
		{
			return (return (::System::Net::IPAddress*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETADDRESS_GETIPADDRESS_OFFSET))(nullptr);
		}

		::System::Net::IPEndPoint* GetIPEndPoint()
		{
			return (return (::System::Net::IPEndPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETADDRESS_GETIPENDPOINT_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETADDRESS_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETADDRESS_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETADDRESS_TOSTRING_OFFSET))(nullptr);
		}

	};
}


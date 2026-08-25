#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_ENDPOINT_GET_ADDRESSFAMILY_OFFSET UNITYSDK_OFFSET(0x9BA69A0)
#define SYSTEM_NET_ENDPOINT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9BA6A40)
#define SYSTEM_NET_ENDPOINT_CREATE_OFFSET UNITYSDK_OFFSET(0x9BA6AE0)
#define SYSTEM_NET_ENDPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B92D80)

namespace System::Net
{
	inline static constexpr unsigned int EndPoint_TypeDefinitionIndex = 29675;

	class EndPoint : public Il2CppObject
	{
	public:
		::System::Net::Sockets::AddressFamily* get_AddressFamily()
		{
			return (return (::System::Net::Sockets::AddressFamily*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINT_GET_ADDRESSFAMILY_OFFSET))(nullptr);
		}

		::System::Net::SocketAddress* Serialize()
		{
			return (return (::System::Net::SocketAddress*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINT_SERIALIZE_OFFSET))(nullptr);
		}

		::System::Net::EndPoint* Create(::System::Net::SocketAddress* arg)
		{
			return (return (::System::Net::EndPoint*(*)(::System::Net::SocketAddress*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINT_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_ENDPOINT_.CTOR_OFFSET))(nullptr);
		}

	};
}


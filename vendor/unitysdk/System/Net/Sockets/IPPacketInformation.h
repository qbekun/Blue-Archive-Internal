#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_SOCKETS_IPPACKETINFORMATION_EQUALS_OFFSET UNITYSDK_OFFSET(0x9AA7FD0)
#define SYSTEM_NET_SOCKETS_IPPACKETINFORMATION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9AA8070)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int IPPacketInformation_TypeDefinitionIndex = 29905;

	class IPPacketInformation : public Il2CppObject
	{
	public:
		::System::Net::IPAddress* address; // 0x10
		::System::Int32 networkInterface; // 0x18

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_IPPACKETINFORMATION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_IPPACKETINFORMATION_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}


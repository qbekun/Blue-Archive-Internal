#pragma once
#include "../../../unitysdk.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int NetBiosNodeType_TypeDefinitionIndex = 29848;

	class NetBiosNodeType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Net::NetworkInformation::NetBiosNodeType* Unknown; // 0x0
		::System::Net::NetworkInformation::NetBiosNodeType* Broadcast; // 0x0
		::System::Net::NetworkInformation::NetBiosNodeType* Peer2Peer; // 0x0
		::System::Net::NetworkInformation::NetBiosNodeType* Mixed; // 0x0
		::System::Net::NetworkInformation::NetBiosNodeType* Hybrid; // 0x0

	};
}


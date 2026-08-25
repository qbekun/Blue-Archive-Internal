#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CRAFTCOMPLETEPROCESSALLREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF42140)
#define MX_NETWORKPROTOCOL_CRAFTCOMPLETEPROCESSALLREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF42150)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CraftCompleteProcessAllRequest_TypeDefinitionIndex = 11615;

	class CraftCompleteProcessAllRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTCOMPLETEPROCESSALLREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTCOMPLETEPROCESSALLREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}


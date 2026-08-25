#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CRAFTSHIFTINGCOMPLETEPROCESSALLREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF42240)
#define MX_NETWORKPROTOCOL_CRAFTSHIFTINGCOMPLETEPROCESSALLREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF42250)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CraftShiftingCompleteProcessAllRequest_TypeDefinitionIndex = 11619;

	class CraftShiftingCompleteProcessAllRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSHIFTINGCOMPLETEPROCESSALLREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSHIFTINGCOMPLETEPROCESSALLREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}


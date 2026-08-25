#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CLANCHECKREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF3EF60)
#define MX_NETWORKPROTOCOL_CLANCHECKREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF3EF70)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ClanCheckRequest_TypeDefinitionIndex = 11522;

	class ClanCheckRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCHECKREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCHECKREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}


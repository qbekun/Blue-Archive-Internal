#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CHARACTERLISTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF15960)
#define MX_NETWORKPROTOCOL_CHARACTERLISTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF15970)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CharacterListRequest_TypeDefinitionIndex = 11460;

	class CharacterListRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERLISTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERLISTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}


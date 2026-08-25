#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CHARACTERGEARLISTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF15760)
#define MX_NETWORKPROTOCOL_CHARACTERGEARLISTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF15770)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CharacterGearListRequest_TypeDefinitionIndex = 11454;

	class CharacterGearListRequest : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERGEARLISTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERGEARLISTREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}


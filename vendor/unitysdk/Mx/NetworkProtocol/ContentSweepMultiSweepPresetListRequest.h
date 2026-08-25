#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CONTENTSWEEPMULTISWEEPPRESETLISTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF41820)
#define MX_NETWORKPROTOCOL_CONTENTSWEEPMULTISWEEPPRESETLISTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF41830)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ContentSweepMultiSweepPresetListRequest_TypeDefinitionIndex = 11589;

	class ContentSweepMultiSweepPresetListRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSWEEPMULTISWEEPPRESETLISTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSWEEPMULTISWEEPPRESETLISTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}


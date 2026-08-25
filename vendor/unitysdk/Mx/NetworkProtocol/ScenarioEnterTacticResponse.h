#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SCENARIOENTERTACTICRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4E190)
#define MX_NETWORKPROTOCOL_SCENARIOENTERTACTICRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4E1A0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ScenarioEnterTacticResponse_TypeDefinitionIndex = 12088;

	class ScenarioEnterTacticResponse : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOENTERTACTICRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOENTERTACTICRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}


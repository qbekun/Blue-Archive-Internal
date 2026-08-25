#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SCENARIOLISTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4D760)
#define MX_NETWORKPROTOCOL_SCENARIOLISTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4D770)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ScenarioListRequest_TypeDefinitionIndex = 12057;

	class ScenarioListRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOLISTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOLISTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}


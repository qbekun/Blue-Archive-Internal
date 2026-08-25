#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SCENARIOENTERRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4D920)
#define MX_NETWORKPROTOCOL_SCENARIOENTERRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4D930)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ScenarioEnterResponse_TypeDefinitionIndex = 12062;

	class ScenarioEnterResponse : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOENTERRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOENTERRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}


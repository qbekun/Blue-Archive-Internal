#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SCENARIOLOBBYSTUDENTCHANGERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4DBC0)
#define MX_NETWORKPROTOCOL_SCENARIOLOBBYSTUDENTCHANGERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4DBD0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ScenarioLobbyStudentChangeResponse_TypeDefinitionIndex = 12072;

	class ScenarioLobbyStudentChangeResponse : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOLOBBYSTUDENTCHANGERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOLOBBYSTUDENTCHANGERESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}


#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SCENARIOACCOUNTSTUDENTCHANGERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4DB40)
#define MX_NETWORKPROTOCOL_SCENARIOACCOUNTSTUDENTCHANGERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4DB50)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ScenarioAccountStudentChangeResponse_TypeDefinitionIndex = 12070;

	class ScenarioAccountStudentChangeResponse : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOACCOUNTSTUDENTCHANGERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOACCOUNTSTUDENTCHANGERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}


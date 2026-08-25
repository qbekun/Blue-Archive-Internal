#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SCENARIOSKIPRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4DA40)
#define MX_NETWORKPROTOCOL_SCENARIOSKIPRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4DA50)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ScenarioSkipResponse_TypeDefinitionIndex = 12066;

	class ScenarioSkipResponse : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOSKIPRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOSKIPRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}


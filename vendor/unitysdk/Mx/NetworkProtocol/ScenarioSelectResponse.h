#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SCENARIOSELECTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4DAC0)
#define MX_NETWORKPROTOCOL_SCENARIOSELECTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4DAD0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ScenarioSelectResponse_TypeDefinitionIndex = 12068;

	class ScenarioSelectResponse : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOSELECTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOSELECTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}


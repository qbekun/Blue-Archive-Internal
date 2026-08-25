#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SCENARIOSKIPMAINSTAGERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4E530)
#define MX_NETWORKPROTOCOL_SCENARIOSKIPMAINSTAGERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4E540)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ScenarioSkipMainStageResponse_TypeDefinitionIndex = 12098;

	class ScenarioSkipMainStageResponse : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOSKIPMAINSTAGERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOSKIPMAINSTAGERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}


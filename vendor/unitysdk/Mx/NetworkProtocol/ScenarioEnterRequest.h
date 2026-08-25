#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SCENARIOENTERREQUEST_SET_SCENARIOID_OFFSET UNITYSDK_OFFSET(0xF4D8E0)
#define MX_NETWORKPROTOCOL_SCENARIOENTERREQUEST_GET_SCENARIOID_OFFSET UNITYSDK_OFFSET(0xF4D8F0)
#define MX_NETWORKPROTOCOL_SCENARIOENTERREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4D900)
#define MX_NETWORKPROTOCOL_SCENARIOENTERREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4D910)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ScenarioEnterRequest_TypeDefinitionIndex = 12061;

	class ScenarioEnterRequest : public Il2CppObject
	{
	public:
		::System::Int64 _ScenarioId_k__BackingField; // 0x40

		::System::Void set_ScenarioId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOENTERREQUEST_SET_SCENARIOID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ScenarioId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOENTERREQUEST_GET_SCENARIOID_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOENTERREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOENTERREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}


#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SCENARIORESTARTMAINSTAGEREQUEST_SET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF4E450)
#define MX_NETWORKPROTOCOL_SCENARIORESTARTMAINSTAGEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4E460)
#define MX_NETWORKPROTOCOL_SCENARIORESTARTMAINSTAGEREQUEST_GET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF4E470)
#define MX_NETWORKPROTOCOL_SCENARIORESTARTMAINSTAGEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4E480)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ScenarioRestartMainStageRequest_TypeDefinitionIndex = 12095;

	class ScenarioRestartMainStageRequest : public Il2CppObject
	{
	public:
		::System::Int64 _StageUniqueId_k__BackingField; // 0x40

		::System::Void set_StageUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIORESTARTMAINSTAGEREQUEST_SET_STAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIORESTARTMAINSTAGEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_StageUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIORESTARTMAINSTAGEREQUEST_GET_STAGEUNIQUEID_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIORESTARTMAINSTAGEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}


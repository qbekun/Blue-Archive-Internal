#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SCENARIOGROUPHISTORYUPDATEREQUEST_GET_SCENARIOTYPE_OFFSET UNITYSDK_OFFSET(0xF4D940)
#define MX_NETWORKPROTOCOL_SCENARIOGROUPHISTORYUPDATEREQUEST_GET_SCENARIOGROUPUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF4D950)
#define MX_NETWORKPROTOCOL_SCENARIOGROUPHISTORYUPDATEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4D960)
#define MX_NETWORKPROTOCOL_SCENARIOGROUPHISTORYUPDATEREQUEST_SET_SCENARIOGROUPUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF4D970)
#define MX_NETWORKPROTOCOL_SCENARIOGROUPHISTORYUPDATEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4D980)
#define MX_NETWORKPROTOCOL_SCENARIOGROUPHISTORYUPDATEREQUEST_SET_SCENARIOTYPE_OFFSET UNITYSDK_OFFSET(0xF4D990)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ScenarioGroupHistoryUpdateRequest_TypeDefinitionIndex = 12063;

	class ScenarioGroupHistoryUpdateRequest : public Il2CppObject
	{
	public:
		::System::Int64 _ScenarioGroupUniqueId_k__BackingField; // 0x40
		::System::Int64 _ScenarioType_k__BackingField; // 0x48

		::System::Int64 get_ScenarioType()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOGROUPHISTORYUPDATEREQUEST_GET_SCENARIOTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ScenarioGroupUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOGROUPHISTORYUPDATEREQUEST_GET_SCENARIOGROUPUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOGROUPHISTORYUPDATEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ScenarioGroupUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOGROUPHISTORYUPDATEREQUEST_SET_SCENARIOGROUPUNIQUEID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOGROUPHISTORYUPDATEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ScenarioType(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOGROUPHISTORYUPDATEREQUEST_SET_SCENARIOTYPE_OFFSET))(arg, nullptr);
		}

	};
}


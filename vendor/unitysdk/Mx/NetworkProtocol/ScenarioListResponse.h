#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SCENARIOLISTRESPONSE_SET_SCENARIOGROUPHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xF4D780)
#define MX_NETWORKPROTOCOL_SCENARIOLISTRESPONSE_GET_SCENARIOCOLLECTIONDBS_OFFSET UNITYSDK_OFFSET(0xF4D790)
#define MX_NETWORKPROTOCOL_SCENARIOLISTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4D7A0)
#define MX_NETWORKPROTOCOL_SCENARIOLISTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4D7B0)
#define MX_NETWORKPROTOCOL_SCENARIOLISTRESPONSE_GET_SCENARIOHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xF4D7C0)
#define MX_NETWORKPROTOCOL_SCENARIOLISTRESPONSE_SET_SCENARIOHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xF4D7D0)
#define MX_NETWORKPROTOCOL_SCENARIOLISTRESPONSE_SET_SCENARIOCOLLECTIONDBS_OFFSET UNITYSDK_OFFSET(0xF4D7E0)
#define MX_NETWORKPROTOCOL_SCENARIOLISTRESPONSE_GET_SCENARIOGROUPHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xF4D7F0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ScenarioListResponse_TypeDefinitionIndex = 12058;

	class ScenarioListResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _ScenarioHistoryDBs_k__BackingField; // 0x50
		Il2CppObject* _ScenarioGroupHistoryDBs_k__BackingField; // 0x58
		Il2CppObject* _ScenarioCollectionDBs_k__BackingField; // 0x60

		::System::Void set_ScenarioGroupHistoryDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOLISTRESPONSE_SET_SCENARIOGROUPHISTORYDBS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ScenarioCollectionDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOLISTRESPONSE_GET_SCENARIOCOLLECTIONDBS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOLISTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOLISTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_ScenarioHistoryDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOLISTRESPONSE_GET_SCENARIOHISTORYDBS_OFFSET))(nullptr);
		}

		::System::Void set_ScenarioHistoryDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOLISTRESPONSE_SET_SCENARIOHISTORYDBS_OFFSET))(arg, nullptr);
		}

		::System::Void set_ScenarioCollectionDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOLISTRESPONSE_SET_SCENARIOCOLLECTIONDBS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ScenarioGroupHistoryDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOLISTRESPONSE_GET_SCENARIOGROUPHISTORYDBS_OFFSET))(nullptr);
		}

	};
}


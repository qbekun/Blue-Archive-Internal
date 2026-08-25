#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }
namespace MX::Campaign { class Strategy; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAMPAIGNMAPMOVERESPONSE_SET_ECHELONENTITYID_OFFSET UNITYSDK_OFFSET(0xF14A20)
#define MX_NETWORKPROTOCOL_CAMPAIGNMAPMOVERESPONSE_SET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF14A30)
#define MX_NETWORKPROTOCOL_CAMPAIGNMAPMOVERESPONSE_SET_STRATEGYOBJECTPARCELINFOS_OFFSET UNITYSDK_OFFSET(0xF14A40)
#define MX_NETWORKPROTOCOL_CAMPAIGNMAPMOVERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF14A50)
#define MX_NETWORKPROTOCOL_CAMPAIGNMAPMOVERESPONSE_GET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF14A60)
#define MX_NETWORKPROTOCOL_CAMPAIGNMAPMOVERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF14A70)
#define MX_NETWORKPROTOCOL_CAMPAIGNMAPMOVERESPONSE_GET_ECHELONENTITYID_OFFSET UNITYSDK_OFFSET(0xF14A80)
#define MX_NETWORKPROTOCOL_CAMPAIGNMAPMOVERESPONSE_GET_STRATEGYOBJECT_OFFSET UNITYSDK_OFFSET(0xF14A90)
#define MX_NETWORKPROTOCOL_CAMPAIGNMAPMOVERESPONSE_GET_STRATEGYOBJECTPARCELINFOS_OFFSET UNITYSDK_OFFSET(0xF14AA0)
#define MX_NETWORKPROTOCOL_CAMPAIGNMAPMOVERESPONSE_SET_STRATEGYOBJECT_OFFSET UNITYSDK_OFFSET(0xF14AB0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CampaignMapMoveResponse_TypeDefinitionIndex = 11423;

	class CampaignMapMoveResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::CampaignMainStageSaveDB* _SaveDataDB_k__BackingField; // 0x50
		::System::Int64 _EchelonEntityId_k__BackingField; // 0x58
		::MX::Campaign::Strategy* _StrategyObject_k__BackingField; // 0x60
		Il2CppObject* _StrategyObjectParcelInfos_k__BackingField; // 0x68

		::System::Void set_EchelonEntityId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNMAPMOVERESPONSE_SET_ECHELONENTITYID_OFFSET))(arg, nullptr);
		}

		::System::Void set_SaveDataDB(::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNMAPMOVERESPONSE_SET_SAVEDATADB_OFFSET))(arg, nullptr);
		}

		::System::Void set_StrategyObjectParcelInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNMAPMOVERESPONSE_SET_STRATEGYOBJECTPARCELINFOS_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNMAPMOVERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::CampaignMainStageSaveDB* get_SaveDataDB()
		{
			return ((::MX::GameLogic::DBModel::CampaignMainStageSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNMAPMOVERESPONSE_GET_SAVEDATADB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNMAPMOVERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_EchelonEntityId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNMAPMOVERESPONSE_GET_ECHELONENTITYID_OFFSET))(nullptr);
		}

		::MX::Campaign::Strategy* get_StrategyObject()
		{
			return ((::MX::Campaign::Strategy*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNMAPMOVERESPONSE_GET_STRATEGYOBJECT_OFFSET))(nullptr);
		}

		Il2CppObject* get_StrategyObjectParcelInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNMAPMOVERESPONSE_GET_STRATEGYOBJECTPARCELINFOS_OFFSET))(nullptr);
		}

		::System::Void set_StrategyObject(::MX::Campaign::Strategy* arg)
		{
			((::System::Void(*)(::MX::Campaign::Strategy*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNMAPMOVERESPONSE_SET_STRATEGYOBJECT_OFFSET))(arg, nullptr);
		}

	};
}


#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class EventContentMainStageSaveDB; }
namespace MX::Campaign { class Strategy; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTMAPMOVERESPONSE_GET_STRATEGYOBJECTPARCELINFOS_OFFSET UNITYSDK_OFFSET(0xF44420)
#define MX_NETWORKPROTOCOL_EVENTCONTENTMAPMOVERESPONSE_SET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF44430)
#define MX_NETWORKPROTOCOL_EVENTCONTENTMAPMOVERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF44440)
#define MX_NETWORKPROTOCOL_EVENTCONTENTMAPMOVERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF44450)
#define MX_NETWORKPROTOCOL_EVENTCONTENTMAPMOVERESPONSE_GET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF44460)
#define MX_NETWORKPROTOCOL_EVENTCONTENTMAPMOVERESPONSE_SET_ECHELONENTITYID_OFFSET UNITYSDK_OFFSET(0xF44470)
#define MX_NETWORKPROTOCOL_EVENTCONTENTMAPMOVERESPONSE_GET_ECHELONENTITYID_OFFSET UNITYSDK_OFFSET(0xF44480)
#define MX_NETWORKPROTOCOL_EVENTCONTENTMAPMOVERESPONSE_SET_STRATEGYOBJECT_OFFSET UNITYSDK_OFFSET(0xF44490)
#define MX_NETWORKPROTOCOL_EVENTCONTENTMAPMOVERESPONSE_SET_STRATEGYOBJECTPARCELINFOS_OFFSET UNITYSDK_OFFSET(0xF444A0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTMAPMOVERESPONSE_GET_STRATEGYOBJECT_OFFSET UNITYSDK_OFFSET(0xF444B0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentMapMoveResponse_TypeDefinitionIndex = 11700;

	class EventContentMapMoveResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::EventContentMainStageSaveDB* _SaveDataDB_k__BackingField; // 0x50
		::System::Int64 _EchelonEntityId_k__BackingField; // 0x58
		::MX::Campaign::Strategy* _StrategyObject_k__BackingField; // 0x60
		Il2CppObject* _StrategyObjectParcelInfos_k__BackingField; // 0x68

		Il2CppObject* get_StrategyObjectParcelInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTMAPMOVERESPONSE_GET_STRATEGYOBJECTPARCELINFOS_OFFSET))(nullptr);
		}

		::System::Void set_SaveDataDB(::MX::GameLogic::DBModel::EventContentMainStageSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTMAPMOVERESPONSE_SET_SAVEDATADB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTMAPMOVERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTMAPMOVERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::EventContentMainStageSaveDB* get_SaveDataDB()
		{
			return ((::MX::GameLogic::DBModel::EventContentMainStageSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTMAPMOVERESPONSE_GET_SAVEDATADB_OFFSET))(nullptr);
		}

		::System::Void set_EchelonEntityId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTMAPMOVERESPONSE_SET_ECHELONENTITYID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EchelonEntityId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTMAPMOVERESPONSE_GET_ECHELONENTITYID_OFFSET))(nullptr);
		}

		::System::Void set_StrategyObject(::MX::Campaign::Strategy* arg)
		{
			((::System::Void(*)(::MX::Campaign::Strategy*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTMAPMOVERESPONSE_SET_STRATEGYOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void set_StrategyObjectParcelInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTMAPMOVERESPONSE_SET_STRATEGYOBJECTPARCELINFOS_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::Strategy* get_StrategyObject()
		{
			return ((::MX::Campaign::Strategy*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTMAPMOVERESPONSE_GET_STRATEGYOBJECT_OFFSET))(nullptr);
		}

	};
}


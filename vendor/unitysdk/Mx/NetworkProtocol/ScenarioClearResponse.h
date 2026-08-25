#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ScenarioHistoryDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SCENARIOCLEARRESPONSE_SET_SCENARIOHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF4D860)
#define MX_NETWORKPROTOCOL_SCENARIOCLEARRESPONSE_GET_SCENARIOCOLLECTIONDBS_OFFSET UNITYSDK_OFFSET(0xF4D870)
#define MX_NETWORKPROTOCOL_SCENARIOCLEARRESPONSE_GET_SCENARIOHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF4D880)
#define MX_NETWORKPROTOCOL_SCENARIOCLEARRESPONSE_SET_SCENARIOCOLLECTIONDBS_OFFSET UNITYSDK_OFFSET(0xF4D890)
#define MX_NETWORKPROTOCOL_SCENARIOCLEARRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4D8A0)
#define MX_NETWORKPROTOCOL_SCENARIOCLEARRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4D8B0)
#define MX_NETWORKPROTOCOL_SCENARIOCLEARRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4D8C0)
#define MX_NETWORKPROTOCOL_SCENARIOCLEARRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4D8D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ScenarioClearResponse_TypeDefinitionIndex = 12060;

	class ScenarioClearResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ScenarioHistoryDB* _ScenarioHistoryDB_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x58
		Il2CppObject* _ScenarioCollectionDBs_k__BackingField; // 0x60

		::System::Void set_ScenarioHistoryDB(::MX::GameLogic::DBModel::ScenarioHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ScenarioHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOCLEARRESPONSE_SET_SCENARIOHISTORYDB_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ScenarioCollectionDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOCLEARRESPONSE_GET_SCENARIOCOLLECTIONDBS_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ScenarioHistoryDB* get_ScenarioHistoryDB()
		{
			return ((::MX::GameLogic::DBModel::ScenarioHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOCLEARRESPONSE_GET_SCENARIOHISTORYDB_OFFSET))(nullptr);
		}

		::System::Void set_ScenarioCollectionDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOCLEARRESPONSE_SET_SCENARIOCOLLECTIONDBS_OFFSET))(arg, nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOCLEARRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOCLEARRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOCLEARRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOCLEARRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}


#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::GameLogic::DBModel { class ConquestInfoDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CONQUESTRECEIVEREWARDSRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF40BA0)
#define MX_NETWORKPROTOCOL_CONQUESTRECEIVEREWARDSRESPONSE_GET_CONQUESTTILEDBS_OFFSET UNITYSDK_OFFSET(0xF40BB0)
#define MX_NETWORKPROTOCOL_CONQUESTRECEIVEREWARDSRESPONSE_SET_CONQUESTINFODB_OFFSET UNITYSDK_OFFSET(0xF40BC0)
#define MX_NETWORKPROTOCOL_CONQUESTRECEIVEREWARDSRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF40BD0)
#define MX_NETWORKPROTOCOL_CONQUESTRECEIVEREWARDSRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF40BE0)
#define MX_NETWORKPROTOCOL_CONQUESTRECEIVEREWARDSRESPONSE_SET_CONQUESTTILEDBS_OFFSET UNITYSDK_OFFSET(0xF40BF0)
#define MX_NETWORKPROTOCOL_CONQUESTRECEIVEREWARDSRESPONSE_GET_CONQUESTINFODB_OFFSET UNITYSDK_OFFSET(0xF40C00)
#define MX_NETWORKPROTOCOL_CONQUESTRECEIVEREWARDSRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF40C10)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ConquestReceiveRewardsResponse_TypeDefinitionIndex = 11564;

	class ConquestReceiveRewardsResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::ConquestInfoDB* _ConquestInfoDB_k__BackingField; // 0x58
		Il2CppObject* _ConquestTileDBs_k__BackingField; // 0x60

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTRECEIVEREWARDSRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_ConquestTileDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTRECEIVEREWARDSRESPONSE_GET_CONQUESTTILEDBS_OFFSET))(nullptr);
		}

		::System::Void set_ConquestInfoDB(::MX::GameLogic::DBModel::ConquestInfoDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConquestInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTRECEIVEREWARDSRESPONSE_SET_CONQUESTINFODB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTRECEIVEREWARDSRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTRECEIVEREWARDSRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ConquestTileDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTRECEIVEREWARDSRESPONSE_SET_CONQUESTTILEDBS_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ConquestInfoDB* get_ConquestInfoDB()
		{
			return ((::MX::GameLogic::DBModel::ConquestInfoDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTRECEIVEREWARDSRESPONSE_GET_CONQUESTINFODB_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTRECEIVEREWARDSRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

	};
}


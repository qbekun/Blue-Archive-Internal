#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::GameLogic::DBModel { class ConquestStageSaveDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CONQUESTEVENTOBJECTBATTLESTARTRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF40980)
#define MX_NETWORKPROTOCOL_CONQUESTEVENTOBJECTBATTLESTARTRESPONSE_SET_CONQUESTSTAGESAVEDB_OFFSET UNITYSDK_OFFSET(0xF40990)
#define MX_NETWORKPROTOCOL_CONQUESTEVENTOBJECTBATTLESTARTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF409A0)
#define MX_NETWORKPROTOCOL_CONQUESTEVENTOBJECTBATTLESTARTRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF409B0)
#define MX_NETWORKPROTOCOL_CONQUESTEVENTOBJECTBATTLESTARTRESPONSE_GET_CONQUESTSTAGESAVEDB_OFFSET UNITYSDK_OFFSET(0xF409C0)
#define MX_NETWORKPROTOCOL_CONQUESTEVENTOBJECTBATTLESTARTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF409D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ConquestEventObjectBattleStartResponse_TypeDefinitionIndex = 11560;

	class ConquestEventObjectBattleStartResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::ConquestStageSaveDB* _ConquestStageSaveDB_k__BackingField; // 0x58

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTEVENTOBJECTBATTLESTARTRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_ConquestStageSaveDB(::MX::GameLogic::DBModel::ConquestStageSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConquestStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTEVENTOBJECTBATTLESTARTRESPONSE_SET_CONQUESTSTAGESAVEDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTEVENTOBJECTBATTLESTARTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTEVENTOBJECTBATTLESTARTRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ConquestStageSaveDB* get_ConquestStageSaveDB()
		{
			return ((::MX::GameLogic::DBModel::ConquestStageSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTEVENTOBJECTBATTLESTARTRESPONSE_GET_CONQUESTSTAGESAVEDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTEVENTOBJECTBATTLESTARTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}


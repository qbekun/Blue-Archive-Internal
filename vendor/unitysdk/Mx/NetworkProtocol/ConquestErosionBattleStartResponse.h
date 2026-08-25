#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::GameLogic::DBModel { class ConquestStageSaveDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CONQUESTEROSIONBATTLESTARTRESPONSE_SET_CONQUESTSTAGESAVEDB_OFFSET UNITYSDK_OFFSET(0xF40DC0)
#define MX_NETWORKPROTOCOL_CONQUESTEROSIONBATTLESTARTRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF40DD0)
#define MX_NETWORKPROTOCOL_CONQUESTEROSIONBATTLESTARTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF40DE0)
#define MX_NETWORKPROTOCOL_CONQUESTEROSIONBATTLESTARTRESPONSE_GET_CONQUESTSTAGESAVEDB_OFFSET UNITYSDK_OFFSET(0xF40DF0)
#define MX_NETWORKPROTOCOL_CONQUESTEROSIONBATTLESTARTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF40E00)
#define MX_NETWORKPROTOCOL_CONQUESTEROSIONBATTLESTARTRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF40E10)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ConquestErosionBattleStartResponse_TypeDefinitionIndex = 11568;

	class ConquestErosionBattleStartResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::ConquestStageSaveDB* _ConquestStageSaveDB_k__BackingField; // 0x58

		::System::Void set_ConquestStageSaveDB(::MX::GameLogic::DBModel::ConquestStageSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConquestStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTEROSIONBATTLESTARTRESPONSE_SET_CONQUESTSTAGESAVEDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTEROSIONBATTLESTARTRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTEROSIONBATTLESTARTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ConquestStageSaveDB* get_ConquestStageSaveDB()
		{
			return ((::MX::GameLogic::DBModel::ConquestStageSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTEROSIONBATTLESTARTRESPONSE_GET_CONQUESTSTAGESAVEDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTEROSIONBATTLESTARTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTEROSIONBATTLESTARTRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

	};
}


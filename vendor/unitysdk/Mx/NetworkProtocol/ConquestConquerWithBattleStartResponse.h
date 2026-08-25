#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::GameLogic::DBModel { class ConquestStageSaveDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CONQUESTCONQUERWITHBATTLESTARTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF40140)
#define MX_NETWORKPROTOCOL_CONQUESTCONQUERWITHBATTLESTARTRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF40150)
#define MX_NETWORKPROTOCOL_CONQUESTCONQUERWITHBATTLESTARTRESPONSE_GET_CONQUESTSTAGESAVEDB_OFFSET UNITYSDK_OFFSET(0xF40160)
#define MX_NETWORKPROTOCOL_CONQUESTCONQUERWITHBATTLESTARTRESPONSE_SET_CONQUESTSTAGESAVEDB_OFFSET UNITYSDK_OFFSET(0xF40170)
#define MX_NETWORKPROTOCOL_CONQUESTCONQUERWITHBATTLESTARTRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF40180)
#define MX_NETWORKPROTOCOL_CONQUESTCONQUERWITHBATTLESTARTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF40190)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ConquestConquerWithBattleStartResponse_TypeDefinitionIndex = 11546;

	class ConquestConquerWithBattleStartResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::ConquestStageSaveDB* _ConquestStageSaveDB_k__BackingField; // 0x58

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCONQUERWITHBATTLESTARTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCONQUERWITHBATTLESTARTRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ConquestStageSaveDB* get_ConquestStageSaveDB()
		{
			return ((::MX::GameLogic::DBModel::ConquestStageSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCONQUERWITHBATTLESTARTRESPONSE_GET_CONQUESTSTAGESAVEDB_OFFSET))(nullptr);
		}

		::System::Void set_ConquestStageSaveDB(::MX::GameLogic::DBModel::ConquestStageSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConquestStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCONQUERWITHBATTLESTARTRESPONSE_SET_CONQUESTSTAGESAVEDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCONQUERWITHBATTLESTARTRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCONQUERWITHBATTLESTARTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}


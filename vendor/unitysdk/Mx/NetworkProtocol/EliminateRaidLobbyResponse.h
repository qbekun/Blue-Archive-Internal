#pragma once
#include "../../unitysdk.h"

namespace FlatData { class RaidSeasonType; }
namespace MX::GameLogic::DBModel { class RaidGiveUpDB; }
namespace MX::GameLogic::DBModel { class EliminateRaidLobbyInfoDB; }
namespace MX::GameLogic::DBModel { class AccountCurrencyDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ELIMINATERAIDLOBBYRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF42900)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDLOBBYRESPONSE_SET_SEASONTYPE_OFFSET UNITYSDK_OFFSET(0xF42910)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDLOBBYRESPONSE_SET_ACCOUNTCURRENCYDB_OFFSET UNITYSDK_OFFSET(0xF42920)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDLOBBYRESPONSE_SET_RAIDLOBBYINFODB_OFFSET UNITYSDK_OFFSET(0xF42930)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDLOBBYRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF42940)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDLOBBYRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF42950)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDLOBBYRESPONSE_GET_ACCOUNTCURRENCYDB_OFFSET UNITYSDK_OFFSET(0xF42960)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDLOBBYRESPONSE_GET_RAIDLOBBYINFODB_OFFSET UNITYSDK_OFFSET(0xF42970)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDLOBBYRESPONSE_GET_SEASONTYPE_OFFSET UNITYSDK_OFFSET(0xF42980)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDLOBBYRESPONSE_SET_RAIDGIVEUPDB_OFFSET UNITYSDK_OFFSET(0xF42990)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDLOBBYRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF429A0)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDLOBBYRESPONSE_GET_RAIDGIVEUPDB_OFFSET UNITYSDK_OFFSET(0xF429B0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EliminateRaidLobbyResponse_TypeDefinitionIndex = 11642;

	class EliminateRaidLobbyResponse : public Il2CppObject
	{
	public:
		::FlatData::RaidSeasonType* _SeasonType_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::RaidGiveUpDB* _RaidGiveUpDB_k__BackingField; // 0x58
		::MX::GameLogic::DBModel::EliminateRaidLobbyInfoDB* _RaidLobbyInfoDB_k__BackingField; // 0x60
		::MX::GameLogic::DBModel::AccountCurrencyDB* _AccountCurrencyDB_k__BackingField; // 0x68
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x70

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDLOBBYRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_SeasonType(::FlatData::RaidSeasonType* arg)
		{
			((::System::Void(*)(::FlatData::RaidSeasonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDLOBBYRESPONSE_SET_SEASONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_AccountCurrencyDB(::MX::GameLogic::DBModel::AccountCurrencyDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AccountCurrencyDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDLOBBYRESPONSE_SET_ACCOUNTCURRENCYDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_RaidLobbyInfoDB(::MX::GameLogic::DBModel::EliminateRaidLobbyInfoDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EliminateRaidLobbyInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDLOBBYRESPONSE_SET_RAIDLOBBYINFODB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDLOBBYRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDLOBBYRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::AccountCurrencyDB* get_AccountCurrencyDB()
		{
			return ((::MX::GameLogic::DBModel::AccountCurrencyDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDLOBBYRESPONSE_GET_ACCOUNTCURRENCYDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::EliminateRaidLobbyInfoDB* get_RaidLobbyInfoDB()
		{
			return ((::MX::GameLogic::DBModel::EliminateRaidLobbyInfoDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDLOBBYRESPONSE_GET_RAIDLOBBYINFODB_OFFSET))(nullptr);
		}

		::FlatData::RaidSeasonType* get_SeasonType()
		{
			return ((::FlatData::RaidSeasonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDLOBBYRESPONSE_GET_SEASONTYPE_OFFSET))(nullptr);
		}

		::System::Void set_RaidGiveUpDB(::MX::GameLogic::DBModel::RaidGiveUpDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::RaidGiveUpDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDLOBBYRESPONSE_SET_RAIDGIVEUPDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDLOBBYRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::RaidGiveUpDB* get_RaidGiveUpDB()
		{
			return ((::MX::GameLogic::DBModel::RaidGiveUpDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDLOBBYRESPONSE_GET_RAIDGIVEUPDB_OFFSET))(nullptr);
		}

	};
}


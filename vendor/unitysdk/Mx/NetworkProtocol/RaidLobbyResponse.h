#pragma once
#include "../../unitysdk.h"

namespace FlatData { class RaidSeasonType; }
namespace MX::GameLogic::DBModel { class RaidGiveUpDB; }
namespace MX::GameLogic::DBModel { class SingleRaidLobbyInfoDB; }
namespace MX::GameLogic::DBModel { class AccountCurrencyDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_RAIDLOBBYRESPONSE_SET_RAIDLOBBYINFODB_OFFSET UNITYSDK_OFFSET(0xF4C530)
#define MX_NETWORKPROTOCOL_RAIDLOBBYRESPONSE_SET_RAIDGIVEUPDB_OFFSET UNITYSDK_OFFSET(0xF4C540)
#define MX_NETWORKPROTOCOL_RAIDLOBBYRESPONSE_GET_ACCOUNTCURRENCYDB_OFFSET UNITYSDK_OFFSET(0xF4C550)
#define MX_NETWORKPROTOCOL_RAIDLOBBYRESPONSE_GET_SEASONTYPE_OFFSET UNITYSDK_OFFSET(0xF4C560)
#define MX_NETWORKPROTOCOL_RAIDLOBBYRESPONSE_GET_RAIDLOBBYINFODB_OFFSET UNITYSDK_OFFSET(0xF4C570)
#define MX_NETWORKPROTOCOL_RAIDLOBBYRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4C580)
#define MX_NETWORKPROTOCOL_RAIDLOBBYRESPONSE_SET_SEASONTYPE_OFFSET UNITYSDK_OFFSET(0xF4C590)
#define MX_NETWORKPROTOCOL_RAIDLOBBYRESPONSE_GET_RAIDGIVEUPDB_OFFSET UNITYSDK_OFFSET(0xF4C5A0)
#define MX_NETWORKPROTOCOL_RAIDLOBBYRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4C5B0)
#define MX_NETWORKPROTOCOL_RAIDLOBBYRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4C5C0)
#define MX_NETWORKPROTOCOL_RAIDLOBBYRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4C5D0)
#define MX_NETWORKPROTOCOL_RAIDLOBBYRESPONSE_SET_ACCOUNTCURRENCYDB_OFFSET UNITYSDK_OFFSET(0xF4C5E0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int RaidLobbyResponse_TypeDefinitionIndex = 12016;

	class RaidLobbyResponse : public Il2CppObject
	{
	public:
		::FlatData::RaidSeasonType* _SeasonType_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::RaidGiveUpDB* _RaidGiveUpDB_k__BackingField; // 0x58
		::MX::GameLogic::DBModel::SingleRaidLobbyInfoDB* _RaidLobbyInfoDB_k__BackingField; // 0x60
		::MX::GameLogic::DBModel::AccountCurrencyDB* _AccountCurrencyDB_k__BackingField; // 0x68
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x70

		::System::Void set_RaidLobbyInfoDB(::MX::GameLogic::DBModel::SingleRaidLobbyInfoDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::SingleRaidLobbyInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDLOBBYRESPONSE_SET_RAIDLOBBYINFODB_OFFSET))(arg, nullptr);
		}

		::System::Void set_RaidGiveUpDB(::MX::GameLogic::DBModel::RaidGiveUpDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::RaidGiveUpDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDLOBBYRESPONSE_SET_RAIDGIVEUPDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::AccountCurrencyDB* get_AccountCurrencyDB()
		{
			return ((::MX::GameLogic::DBModel::AccountCurrencyDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDLOBBYRESPONSE_GET_ACCOUNTCURRENCYDB_OFFSET))(nullptr);
		}

		::FlatData::RaidSeasonType* get_SeasonType()
		{
			return ((::FlatData::RaidSeasonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDLOBBYRESPONSE_GET_SEASONTYPE_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::SingleRaidLobbyInfoDB* get_RaidLobbyInfoDB()
		{
			return ((::MX::GameLogic::DBModel::SingleRaidLobbyInfoDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDLOBBYRESPONSE_GET_RAIDLOBBYINFODB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDLOBBYRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_SeasonType(::FlatData::RaidSeasonType* arg)
		{
			((::System::Void(*)(::FlatData::RaidSeasonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDLOBBYRESPONSE_SET_SEASONTYPE_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::RaidGiveUpDB* get_RaidGiveUpDB()
		{
			return ((::MX::GameLogic::DBModel::RaidGiveUpDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDLOBBYRESPONSE_GET_RAIDGIVEUPDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDLOBBYRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDLOBBYRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDLOBBYRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_AccountCurrencyDB(::MX::GameLogic::DBModel::AccountCurrencyDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AccountCurrencyDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDLOBBYRESPONSE_SET_ACCOUNTCURRENCYDB_OFFSET))(arg, nullptr);
		}

	};
}


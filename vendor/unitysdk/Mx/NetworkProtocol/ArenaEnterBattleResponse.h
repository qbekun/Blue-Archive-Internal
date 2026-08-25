#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class AccountCurrencyDB; }
namespace MX::GameLogic::DBModel { class ArenaBattleDB; }
namespace MX::GameLogic::DBModel { class ArenaPlayerInfoDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ARENAENTERBATTLERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF10DA0)
#define MX_NETWORKPROTOCOL_ARENAENTERBATTLERESPONSE_GET_ALLTIMEREWARDS_OFFSET UNITYSDK_OFFSET(0xF10DB0)
#define MX_NETWORKPROTOCOL_ARENAENTERBATTLERESPONSE_GET_ARENABATTLEDB_OFFSET UNITYSDK_OFFSET(0xF10DC0)
#define MX_NETWORKPROTOCOL_ARENAENTERBATTLERESPONSE_SET_VICTORYREWARDS_OFFSET UNITYSDK_OFFSET(0xF10DD0)
#define MX_NETWORKPROTOCOL_ARENAENTERBATTLERESPONSE_GET_ARENAPLAYERINFODB_OFFSET UNITYSDK_OFFSET(0xF10DE0)
#define MX_NETWORKPROTOCOL_ARENAENTERBATTLERESPONSE_GET_VICTORYREWARDS_OFFSET UNITYSDK_OFFSET(0xF10DF0)
#define MX_NETWORKPROTOCOL_ARENAENTERBATTLERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF10E00)
#define MX_NETWORKPROTOCOL_ARENAENTERBATTLERESPONSE_SET_ACCOUNTCURRENCYDB_OFFSET UNITYSDK_OFFSET(0xF10E10)
#define MX_NETWORKPROTOCOL_ARENAENTERBATTLERESPONSE_GET_ACCOUNTCURRENCYDB_OFFSET UNITYSDK_OFFSET(0xF10E20)
#define MX_NETWORKPROTOCOL_ARENAENTERBATTLERESPONSE_SET_ALLTIMEREWARDS_OFFSET UNITYSDK_OFFSET(0xF10E30)
#define MX_NETWORKPROTOCOL_ARENAENTERBATTLERESPONSE_SET_SEASONREWARDS_OFFSET UNITYSDK_OFFSET(0xF10E40)
#define MX_NETWORKPROTOCOL_ARENAENTERBATTLERESPONSE_SET_ARENABATTLEDB_OFFSET UNITYSDK_OFFSET(0xF10E50)
#define MX_NETWORKPROTOCOL_ARENAENTERBATTLERESPONSE_SET_ARENAPLAYERINFODB_OFFSET UNITYSDK_OFFSET(0xF10E60)
#define MX_NETWORKPROTOCOL_ARENAENTERBATTLERESPONSE_GET_SEASONREWARDS_OFFSET UNITYSDK_OFFSET(0xF10E70)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ArenaEnterBattleResponse_TypeDefinitionIndex = 11286;

	class ArenaEnterBattleResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::AccountCurrencyDB* _AccountCurrencyDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::ArenaBattleDB* _ArenaBattleDB_k__BackingField; // 0x58
		::MX::GameLogic::DBModel::ArenaPlayerInfoDB* _ArenaPlayerInfoDB_k__BackingField; // 0x60
		::MX::GameLogic::Parcel::ParcelResultDB* _VictoryRewards_k__BackingField; // 0x68
		::MX::GameLogic::Parcel::ParcelResultDB* _SeasonRewards_k__BackingField; // 0x70
		::MX::GameLogic::Parcel::ParcelResultDB* _AllTimeRewards_k__BackingField; // 0x78

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAENTERBATTLERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_AllTimeRewards()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAENTERBATTLERESPONSE_GET_ALLTIMEREWARDS_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ArenaBattleDB* get_ArenaBattleDB()
		{
			return ((::MX::GameLogic::DBModel::ArenaBattleDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAENTERBATTLERESPONSE_GET_ARENABATTLEDB_OFFSET))(nullptr);
		}

		::System::Void set_VictoryRewards(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAENTERBATTLERESPONSE_SET_VICTORYREWARDS_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ArenaPlayerInfoDB* get_ArenaPlayerInfoDB()
		{
			return ((::MX::GameLogic::DBModel::ArenaPlayerInfoDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAENTERBATTLERESPONSE_GET_ARENAPLAYERINFODB_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_VictoryRewards()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAENTERBATTLERESPONSE_GET_VICTORYREWARDS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAENTERBATTLERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_AccountCurrencyDB(::MX::GameLogic::DBModel::AccountCurrencyDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AccountCurrencyDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAENTERBATTLERESPONSE_SET_ACCOUNTCURRENCYDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::AccountCurrencyDB* get_AccountCurrencyDB()
		{
			return ((::MX::GameLogic::DBModel::AccountCurrencyDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAENTERBATTLERESPONSE_GET_ACCOUNTCURRENCYDB_OFFSET))(nullptr);
		}

		::System::Void set_AllTimeRewards(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAENTERBATTLERESPONSE_SET_ALLTIMEREWARDS_OFFSET))(arg, nullptr);
		}

		::System::Void set_SeasonRewards(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAENTERBATTLERESPONSE_SET_SEASONREWARDS_OFFSET))(arg, nullptr);
		}

		::System::Void set_ArenaBattleDB(::MX::GameLogic::DBModel::ArenaBattleDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ArenaBattleDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAENTERBATTLERESPONSE_SET_ARENABATTLEDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_ArenaPlayerInfoDB(::MX::GameLogic::DBModel::ArenaPlayerInfoDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ArenaPlayerInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAENTERBATTLERESPONSE_SET_ARENAPLAYERINFODB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_SeasonRewards()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAENTERBATTLERESPONSE_GET_SEASONREWARDS_OFFSET))(nullptr);
		}

	};
}


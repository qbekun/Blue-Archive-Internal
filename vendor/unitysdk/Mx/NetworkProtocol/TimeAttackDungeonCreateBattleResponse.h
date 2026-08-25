#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class TimeAttackDungeonRoomDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONCREATEBATTLERESPONSE_SET_ROOMDB_OFFSET UNITYSDK_OFFSET(0xF4FCD0)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONCREATEBATTLERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4FCE0)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONCREATEBATTLERESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4FCF0)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONCREATEBATTLERESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4FD00)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONCREATEBATTLERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4FD10)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONCREATEBATTLERESPONSE_GET_ROOMDB_OFFSET UNITYSDK_OFFSET(0xF4FD20)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int TimeAttackDungeonCreateBattleResponse_TypeDefinitionIndex = 12159;

	class TimeAttackDungeonCreateBattleResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB* _RoomDB_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x58

		::System::Void set_RoomDB(::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONCREATEBATTLERESPONSE_SET_ROOMDB_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONCREATEBATTLERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONCREATEBATTLERESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONCREATEBATTLERESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONCREATEBATTLERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB* get_RoomDB()
		{
			return ((::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONCREATEBATTLERESPONSE_GET_ROOMDB_OFFSET))(nullptr);
		}

	};
}


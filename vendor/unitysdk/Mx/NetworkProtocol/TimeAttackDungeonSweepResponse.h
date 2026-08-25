#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::GameLogic::DBModel { class TimeAttackDungeonRoomDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONSWEEPRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF50050)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONSWEEPRESPONSE_GET_REWARDS_OFFSET UNITYSDK_OFFSET(0xF50060)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONSWEEPRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF50070)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONSWEEPRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF50080)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONSWEEPRESPONSE_SET_ROOMDB_OFFSET UNITYSDK_OFFSET(0xF50090)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONSWEEPRESPONSE_GET_ROOMDB_OFFSET UNITYSDK_OFFSET(0xF500A0)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONSWEEPRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF500B0)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONSWEEPRESPONSE_SET_REWARDS_OFFSET UNITYSDK_OFFSET(0xF500C0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int TimeAttackDungeonSweepResponse_TypeDefinitionIndex = 12167;

	class TimeAttackDungeonSweepResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _Rewards_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x58
		::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB* _RoomDB_k__BackingField; // 0x60

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONSWEEPRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Rewards()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONSWEEPRESPONSE_GET_REWARDS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONSWEEPRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONSWEEPRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_RoomDB(::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONSWEEPRESPONSE_SET_ROOMDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB* get_RoomDB()
		{
			return ((::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONSWEEPRESPONSE_GET_ROOMDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONSWEEPRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void set_Rewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONSWEEPRESPONSE_SET_REWARDS_OFFSET))(arg, nullptr);
		}

	};
}


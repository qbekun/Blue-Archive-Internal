#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class TimeAttackDungeonRoomDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONGIVEUPRESPONSE_GET_SEASONBESTRECORD_OFFSET UNITYSDK_OFFSET(0xF4FF70)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONGIVEUPRESPONSE_GET_ACHIEVESEASONBESTRECORD_OFFSET UNITYSDK_OFFSET(0xF4FF80)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONGIVEUPRESPONSE_SET_ACHIEVESEASONBESTRECORD_OFFSET UNITYSDK_OFFSET(0xF4FF90)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONGIVEUPRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4FFA0)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONGIVEUPRESPONSE_GET_ROOMDB_OFFSET UNITYSDK_OFFSET(0xF4FFB0)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONGIVEUPRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4FFC0)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONGIVEUPRESPONSE_SET_SEASONBESTRECORD_OFFSET UNITYSDK_OFFSET(0xF4FFD0)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONGIVEUPRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4FFE0)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONGIVEUPRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4FFF0)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONGIVEUPRESPONSE_SET_ROOMDB_OFFSET UNITYSDK_OFFSET(0xF50000)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int TimeAttackDungeonGiveUpResponse_TypeDefinitionIndex = 12165;

	class TimeAttackDungeonGiveUpResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB* _RoomDB_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x58
		::System::Boolean _AchieveSeasonBestRecord_k__BackingField; // 0x60
		::System::Int64 _SeasonBestRecord_k__BackingField; // 0x68

		::System::Int64 get_SeasonBestRecord()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONGIVEUPRESPONSE_GET_SEASONBESTRECORD_OFFSET))(nullptr);
		}

		::System::Boolean get_AchieveSeasonBestRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONGIVEUPRESPONSE_GET_ACHIEVESEASONBESTRECORD_OFFSET))(nullptr);
		}

		::System::Void set_AchieveSeasonBestRecord(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONGIVEUPRESPONSE_SET_ACHIEVESEASONBESTRECORD_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONGIVEUPRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB* get_RoomDB()
		{
			return ((::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONGIVEUPRESPONSE_GET_ROOMDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONGIVEUPRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_SeasonBestRecord(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONGIVEUPRESPONSE_SET_SEASONBESTRECORD_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONGIVEUPRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONGIVEUPRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_RoomDB(::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONGIVEUPRESPONSE_SET_ROOMDB_OFFSET))(arg, nullptr);
		}

	};
}


#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class TimeAttackDungeonRoomDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONLOBBYRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4FBD0)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONLOBBYRESPONSE_SET_SEASONBESTRECORD_OFFSET UNITYSDK_OFFSET(0xF4FBE0)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONLOBBYRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4FBF0)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONLOBBYRESPONSE_GET_ACHIEVESEASONBESTRECORD_OFFSET UNITYSDK_OFFSET(0xF4FC00)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONLOBBYRESPONSE_SET_ROOMDBS_OFFSET UNITYSDK_OFFSET(0xF4FC10)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONLOBBYRESPONSE_SET_ACHIEVESEASONBESTRECORD_OFFSET UNITYSDK_OFFSET(0xF4FC20)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONLOBBYRESPONSE_GET_PREVIOUSROOMDB_OFFSET UNITYSDK_OFFSET(0xF4FC30)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONLOBBYRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4FC40)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONLOBBYRESPONSE_SET_PREVIOUSROOMDB_OFFSET UNITYSDK_OFFSET(0xF4FC50)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONLOBBYRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4FC60)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONLOBBYRESPONSE_GET_ROOMDBS_OFFSET UNITYSDK_OFFSET(0xF4FC70)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONLOBBYRESPONSE_GET_SEASONBESTRECORD_OFFSET UNITYSDK_OFFSET(0xF4FC80)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int TimeAttackDungeonLobbyResponse_TypeDefinitionIndex = 12157;

	class TimeAttackDungeonLobbyResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _RoomDBs_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB* _PreviousRoomDB_k__BackingField; // 0x58
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x60
		::System::Boolean _AchieveSeasonBestRecord_k__BackingField; // 0x68
		::System::Int64 _SeasonBestRecord_k__BackingField; // 0x70

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONLOBBYRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_SeasonBestRecord(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONLOBBYRESPONSE_SET_SEASONBESTRECORD_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONLOBBYRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Boolean get_AchieveSeasonBestRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONLOBBYRESPONSE_GET_ACHIEVESEASONBESTRECORD_OFFSET))(nullptr);
		}

		::System::Void set_RoomDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONLOBBYRESPONSE_SET_ROOMDBS_OFFSET))(arg, nullptr);
		}

		::System::Void set_AchieveSeasonBestRecord(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONLOBBYRESPONSE_SET_ACHIEVESEASONBESTRECORD_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB* get_PreviousRoomDB()
		{
			return ((::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONLOBBYRESPONSE_GET_PREVIOUSROOMDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONLOBBYRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void set_PreviousRoomDB(::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONLOBBYRESPONSE_SET_PREVIOUSROOMDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONLOBBYRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_RoomDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONLOBBYRESPONSE_GET_ROOMDBS_OFFSET))(nullptr);
		}

		::System::Int64 get_SeasonBestRecord()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONLOBBYRESPONSE_GET_SEASONBESTRECORD_OFFSET))(nullptr);
		}

	};
}


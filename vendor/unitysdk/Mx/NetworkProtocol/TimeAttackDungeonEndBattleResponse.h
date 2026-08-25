#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class TimeAttackDungeonRoomDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENDBATTLERESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4FE70)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENDBATTLERESPONSE_GET_TIMEPOINT_OFFSET UNITYSDK_OFFSET(0xF4FE80)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENDBATTLERESPONSE_GET_DEFAULTPOINT_OFFSET UNITYSDK_OFFSET(0xF4FE90)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENDBATTLERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4FEA0)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENDBATTLERESPONSE_SET_ROOMDB_OFFSET UNITYSDK_OFFSET(0xF4FEB0)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENDBATTLERESPONSE_GET_TOTALPOINT_OFFSET UNITYSDK_OFFSET(0xF4FEC0)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENDBATTLERESPONSE_SET_TOTALPOINT_OFFSET UNITYSDK_OFFSET(0xF4FED0)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENDBATTLERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4FEE0)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENDBATTLERESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4FEF0)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENDBATTLERESPONSE_SET_TIMEPOINT_OFFSET UNITYSDK_OFFSET(0xF4FF00)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENDBATTLERESPONSE_GET_ROOMDB_OFFSET UNITYSDK_OFFSET(0xF4FF10)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENDBATTLERESPONSE_SET_DEFAULTPOINT_OFFSET UNITYSDK_OFFSET(0xF4FF20)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int TimeAttackDungeonEndBattleResponse_TypeDefinitionIndex = 12163;

	class TimeAttackDungeonEndBattleResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB* _RoomDB_k__BackingField; // 0x50
		::System::Int64 _TotalPoint_k__BackingField; // 0x58
		::System::Int64 _DefaultPoint_k__BackingField; // 0x60
		::System::Int64 _TimePoint_k__BackingField; // 0x68
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x70

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENDBATTLERESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TimePoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENDBATTLERESPONSE_GET_TIMEPOINT_OFFSET))(nullptr);
		}

		::System::Int64 get_DefaultPoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENDBATTLERESPONSE_GET_DEFAULTPOINT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENDBATTLERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_RoomDB(::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENDBATTLERESPONSE_SET_ROOMDB_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TotalPoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENDBATTLERESPONSE_GET_TOTALPOINT_OFFSET))(nullptr);
		}

		::System::Void set_TotalPoint(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENDBATTLERESPONSE_SET_TOTALPOINT_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENDBATTLERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENDBATTLERESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void set_TimePoint(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENDBATTLERESPONSE_SET_TIMEPOINT_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB* get_RoomDB()
		{
			return ((::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENDBATTLERESPONSE_GET_ROOMDB_OFFSET))(nullptr);
		}

		::System::Void set_DefaultPoint(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENDBATTLERESPONSE_SET_DEFAULTPOINT_OFFSET))(arg, nullptr);
		}

	};
}


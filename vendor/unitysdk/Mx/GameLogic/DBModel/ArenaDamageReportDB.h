#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ArenaUserDB; }

#define MX_GAMELOGIC_DBMODEL_ARENADAMAGEREPORTDB_GET_WINNERACCOUNTSERVERID_OFFSET UNITYSDK_OFFSET(0xFE3160)
#define MX_GAMELOGIC_DBMODEL_ARENADAMAGEREPORTDB_GET_DEFENDERDAMAGEREPORT_OFFSET UNITYSDK_OFFSET(0xFE3170)
#define MX_GAMELOGIC_DBMODEL_ARENADAMAGEREPORTDB_SET_ATTACKERUSERDB_OFFSET UNITYSDK_OFFSET(0xFE3180)
#define MX_GAMELOGIC_DBMODEL_ARENADAMAGEREPORTDB_ISWINNER_OFFSET UNITYSDK_OFFSET(0xFE3190)
#define MX_GAMELOGIC_DBMODEL_ARENADAMAGEREPORTDB_SET_DEFENDERDAMAGEREPORT_OFFSET UNITYSDK_OFFSET(0xFE31A0)
#define MX_GAMELOGIC_DBMODEL_ARENADAMAGEREPORTDB_OPPONENTDAMAGEREPORT_OFFSET UNITYSDK_OFFSET(0xFE31B0)
#define MX_GAMELOGIC_DBMODEL_ARENADAMAGEREPORTDB_SET_DEFENDERUSERDB_OFFSET UNITYSDK_OFFSET(0xFE31D0)
#define MX_GAMELOGIC_DBMODEL_ARENADAMAGEREPORTDB_OPPONENTARENAUSERDB_OFFSET UNITYSDK_OFFSET(0xFE31E0)
#define MX_GAMELOGIC_DBMODEL_ARENADAMAGEREPORTDB_GET_ATTACKERDAMAGEREPORT_OFFSET UNITYSDK_OFFSET(0xFE3200)
#define MX_GAMELOGIC_DBMODEL_ARENADAMAGEREPORTDB_SET_ARENABATTLESERVERID_OFFSET UNITYSDK_OFFSET(0xFE3210)
#define MX_GAMELOGIC_DBMODEL_ARENADAMAGEREPORTDB_SET_BATTLEENDTIME_OFFSET UNITYSDK_OFFSET(0xFE3220)
#define MX_GAMELOGIC_DBMODEL_ARENADAMAGEREPORTDB_SET_ATTACKERDAMAGEREPORT_OFFSET UNITYSDK_OFFSET(0xFE3230)
#define MX_GAMELOGIC_DBMODEL_ARENADAMAGEREPORTDB_GET_ATTACKERUSERDB_OFFSET UNITYSDK_OFFSET(0xFE3240)
#define MX_GAMELOGIC_DBMODEL_ARENADAMAGEREPORTDB_GET_BATTLEENDTIME_OFFSET UNITYSDK_OFFSET(0xFE3250)
#define MX_GAMELOGIC_DBMODEL_ARENADAMAGEREPORTDB_GET_DEFENDERUSERDB_OFFSET UNITYSDK_OFFSET(0xFE3260)
#define MX_GAMELOGIC_DBMODEL_ARENADAMAGEREPORTDB_SET_WINNERACCOUNTSERVERID_OFFSET UNITYSDK_OFFSET(0xFE3270)
#define MX_GAMELOGIC_DBMODEL_ARENADAMAGEREPORTDB_ISATTACKER_OFFSET UNITYSDK_OFFSET(0xFE3280)
#define MX_GAMELOGIC_DBMODEL_ARENADAMAGEREPORTDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE32A0)
#define MX_GAMELOGIC_DBMODEL_ARENADAMAGEREPORTDB_GET_ARENABATTLESERVERID_OFFSET UNITYSDK_OFFSET(0xFE32B0)
#define MX_GAMELOGIC_DBMODEL_ARENADAMAGEREPORTDB_MYARENAUSERDB_OFFSET UNITYSDK_OFFSET(0xFE32C0)
#define MX_GAMELOGIC_DBMODEL_ARENADAMAGEREPORTDB_MYDAMAGEREPORT_OFFSET UNITYSDK_OFFSET(0xFE32E0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ArenaDamageReportDB_TypeDefinitionIndex = 12484;

	class ArenaDamageReportDB : public Il2CppObject
	{
	public:
		::System::Int64 _ArenaBattleServerId_k__BackingField; // 0x10
		::System::Int64 _WinnerAccountServerId_k__BackingField; // 0x18
		::MX::GameLogic::DBModel::ArenaUserDB* _AttackerUserDB_k__BackingField; // 0x20
		::MX::GameLogic::DBModel::ArenaUserDB* _DefenderUserDB_k__BackingField; // 0x28
		::System::DateTime* _BattleEndTime_k__BackingField; // 0x30
		Il2CppObject* _AttackerDamageReport_k__BackingField; // 0x38
		Il2CppObject* _DefenderDamageReport_k__BackingField; // 0x40

		::System::Int64 get_WinnerAccountServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENADAMAGEREPORTDB_GET_WINNERACCOUNTSERVERID_OFFSET))(nullptr);
		}

		Il2CppObject* get_DefenderDamageReport()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENADAMAGEREPORTDB_GET_DEFENDERDAMAGEREPORT_OFFSET))(nullptr);
		}

		::System::Void set_AttackerUserDB(::MX::GameLogic::DBModel::ArenaUserDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ArenaUserDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENADAMAGEREPORTDB_SET_ATTACKERUSERDB_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsWinner(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENADAMAGEREPORTDB_ISWINNER_OFFSET))(arg, nullptr);
		}

		::System::Void set_DefenderDamageReport(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENADAMAGEREPORTDB_SET_DEFENDERDAMAGEREPORT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OpponentDamageReport(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENADAMAGEREPORTDB_OPPONENTDAMAGEREPORT_OFFSET))(arg, nullptr);
		}

		::System::Void set_DefenderUserDB(::MX::GameLogic::DBModel::ArenaUserDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ArenaUserDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENADAMAGEREPORTDB_SET_DEFENDERUSERDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ArenaUserDB* OpponentArenaUserDB(::System::Int64 arg)
		{
			return ((::MX::GameLogic::DBModel::ArenaUserDB*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENADAMAGEREPORTDB_OPPONENTARENAUSERDB_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_AttackerDamageReport()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENADAMAGEREPORTDB_GET_ATTACKERDAMAGEREPORT_OFFSET))(nullptr);
		}

		::System::Void set_ArenaBattleServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENADAMAGEREPORTDB_SET_ARENABATTLESERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void set_BattleEndTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENADAMAGEREPORTDB_SET_BATTLEENDTIME_OFFSET))(arg, nullptr);
		}

		::System::Void set_AttackerDamageReport(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENADAMAGEREPORTDB_SET_ATTACKERDAMAGEREPORT_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ArenaUserDB* get_AttackerUserDB()
		{
			return ((::MX::GameLogic::DBModel::ArenaUserDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENADAMAGEREPORTDB_GET_ATTACKERUSERDB_OFFSET))(nullptr);
		}

		::System::DateTime* get_BattleEndTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENADAMAGEREPORTDB_GET_BATTLEENDTIME_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ArenaUserDB* get_DefenderUserDB()
		{
			return ((::MX::GameLogic::DBModel::ArenaUserDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENADAMAGEREPORTDB_GET_DEFENDERUSERDB_OFFSET))(nullptr);
		}

		::System::Void set_WinnerAccountServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENADAMAGEREPORTDB_SET_WINNERACCOUNTSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsAttacker(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENADAMAGEREPORTDB_ISATTACKER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENADAMAGEREPORTDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_ArenaBattleServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENADAMAGEREPORTDB_GET_ARENABATTLESERVERID_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ArenaUserDB* MyArenaUserDB(::System::Int64 arg)
		{
			return ((::MX::GameLogic::DBModel::ArenaUserDB*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENADAMAGEREPORTDB_MYARENAUSERDB_OFFSET))(arg, nullptr);
		}

		Il2CppObject* MyDamageReport(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENADAMAGEREPORTDB_MYDAMAGEREPORT_OFFSET))(arg, nullptr);
		}

	};
}


#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class CafeProductionDB; }
namespace MX::GameLogic::DBModel { class CafeDB; }

#define MX_GAMELOGIC_DBMODEL_CAFEDB_GET_CAFEDBID_OFFSET UNITYSDK_OFFSET(0xFE4A90)
#define MX_GAMELOGIC_DBMODEL_CAFEDB_SET_CAFEDBID_OFFSET UNITYSDK_OFFSET(0xFE4AA0)
#define MX_GAMELOGIC_DBMODEL_CAFEDB_GET_CAFEID_OFFSET UNITYSDK_OFFSET(0xFE4AB0)
#define MX_GAMELOGIC_DBMODEL_CAFEDB_SET_CAFEID_OFFSET UNITYSDK_OFFSET(0xFE4AC0)
#define MX_GAMELOGIC_DBMODEL_CAFEDB_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0xFE4AD0)
#define MX_GAMELOGIC_DBMODEL_CAFEDB_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0xFE4AE0)
#define MX_GAMELOGIC_DBMODEL_CAFEDB_GET_CAFERANK_OFFSET UNITYSDK_OFFSET(0xFE4AF0)
#define MX_GAMELOGIC_DBMODEL_CAFEDB_SET_CAFERANK_OFFSET UNITYSDK_OFFSET(0xFE4B00)
#define MX_GAMELOGIC_DBMODEL_CAFEDB_GET_LASTUPDATE_OFFSET UNITYSDK_OFFSET(0xFE4B10)
#define MX_GAMELOGIC_DBMODEL_CAFEDB_SET_LASTUPDATE_OFFSET UNITYSDK_OFFSET(0xFE4B20)
#define MX_GAMELOGIC_DBMODEL_CAFEDB_GET_LASTSUMMONDATE_OFFSET UNITYSDK_OFFSET(0xFE4B30)
#define MX_GAMELOGIC_DBMODEL_CAFEDB_SET_LASTSUMMONDATE_OFFSET UNITYSDK_OFFSET(0xFE4B40)
#define MX_GAMELOGIC_DBMODEL_CAFEDB_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0xFE4B50)
#define MX_GAMELOGIC_DBMODEL_CAFEDB_SET_ISNEW_OFFSET UNITYSDK_OFFSET(0xFE4B60)
#define MX_GAMELOGIC_DBMODEL_CAFEDB_GET_CAFEVISITCHARACTERDBS_OFFSET UNITYSDK_OFFSET(0xFE4B70)
#define MX_GAMELOGIC_DBMODEL_CAFEDB_SET_CAFEVISITCHARACTERDBS_OFFSET UNITYSDK_OFFSET(0xFE4B80)
#define MX_GAMELOGIC_DBMODEL_CAFEDB_GET_FURNITUREDBS_OFFSET UNITYSDK_OFFSET(0xFE4B90)
#define MX_GAMELOGIC_DBMODEL_CAFEDB_SET_FURNITUREDBS_OFFSET UNITYSDK_OFFSET(0xFE4BA0)
#define MX_GAMELOGIC_DBMODEL_CAFEDB_GET_PRODUCTIONAPPLIEDTIME_OFFSET UNITYSDK_OFFSET(0xFE4BB0)
#define MX_GAMELOGIC_DBMODEL_CAFEDB_SET_PRODUCTIONAPPLIEDTIME_OFFSET UNITYSDK_OFFSET(0xFE4BC0)
#define MX_GAMELOGIC_DBMODEL_CAFEDB_GET_PRODUCTIONDB_OFFSET UNITYSDK_OFFSET(0xFE4BD0)
#define MX_GAMELOGIC_DBMODEL_CAFEDB_SET_PRODUCTIONDB_OFFSET UNITYSDK_OFFSET(0xFE4BE0)
#define MX_GAMELOGIC_DBMODEL_CAFEDB_GET_CURRENCYDICT_OBSOLETE_OFFSET UNITYSDK_OFFSET(0xFE4BF0)
#define MX_GAMELOGIC_DBMODEL_CAFEDB_SET_CURRENCYDICT_OBSOLETE_OFFSET UNITYSDK_OFFSET(0xFE4C00)
#define MX_GAMELOGIC_DBMODEL_CAFEDB_GET_UPDATETIMEDICT_OBSOLETE_OFFSET UNITYSDK_OFFSET(0xFE4C10)
#define MX_GAMELOGIC_DBMODEL_CAFEDB_SET_UPDATETIMEDICT_OBSOLETE_OFFSET UNITYSDK_OFFSET(0xFE4C20)
#define MX_GAMELOGIC_DBMODEL_CAFEDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE4C30)
#define MX_GAMELOGIC_DBMODEL_CAFEDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE4DA0)
#define MX_GAMELOGIC_DBMODEL_CAFEDB_CLONE_OFFSET UNITYSDK_OFFSET(0xFE56A0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int CafeDB_TypeDefinitionIndex = 12497;

	class CafeDB : public Il2CppObject
	{
	public:
		::System::Int64 _CafeDBId_k__BackingField; // 0x10
		::System::Int64 _CafeId_k__BackingField; // 0x18
		::System::Int64 _AccountId_k__BackingField; // 0x20
		::System::Int32 _CafeRank_k__BackingField; // 0x28
		::System::DateTime* _LastUpdate_k__BackingField; // 0x30
		Il2CppObject* _LastSummonDate_k__BackingField; // 0x38
		::System::Boolean _IsNew_k__BackingField; // 0x48
		Il2CppObject* _CafeVisitCharacterDBs_k__BackingField; // 0x50
		Il2CppObject* _FurnitureDBs_k__BackingField; // 0x58
		::System::DateTime* _ProductionAppliedTime_k__BackingField; // 0x60
		::MX::GameLogic::DBModel::CafeProductionDB* _ProductionDB_k__BackingField; // 0x68
		Il2CppObject* _CurrencyDict_Obsolete_k__BackingField; // 0x70
		Il2CppObject* _UpdateTimeDict_Obsolete_k__BackingField; // 0x78

		::System::Int64 get_CafeDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEDB_GET_CAFEDBID_OFFSET))(nullptr);
		}

		::System::Void set_CafeDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEDB_SET_CAFEDBID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CafeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEDB_GET_CAFEID_OFFSET))(nullptr);
		}

		::System::Void set_CafeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEDB_SET_CAFEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEDB_GET_ACCOUNTID_OFFSET))(nullptr);
		}

		::System::Void set_AccountId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEDB_SET_ACCOUNTID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CafeRank()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEDB_GET_CAFERANK_OFFSET))(nullptr);
		}

		::System::Void set_CafeRank(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEDB_SET_CAFERANK_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_LastUpdate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEDB_GET_LASTUPDATE_OFFSET))(nullptr);
		}

		::System::Void set_LastUpdate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEDB_SET_LASTUPDATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_LastSummonDate()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEDB_GET_LASTSUMMONDATE_OFFSET))(nullptr);
		}

		::System::Void set_LastSummonDate(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEDB_SET_LASTSUMMONDATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEDB_GET_ISNEW_OFFSET))(nullptr);
		}

		::System::Void set_IsNew(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEDB_SET_ISNEW_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CafeVisitCharacterDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEDB_GET_CAFEVISITCHARACTERDBS_OFFSET))(nullptr);
		}

		::System::Void set_CafeVisitCharacterDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEDB_SET_CAFEVISITCHARACTERDBS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_FurnitureDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEDB_GET_FURNITUREDBS_OFFSET))(nullptr);
		}

		::System::Void set_FurnitureDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEDB_SET_FURNITUREDBS_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_ProductionAppliedTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEDB_GET_PRODUCTIONAPPLIEDTIME_OFFSET))(nullptr);
		}

		::System::Void set_ProductionAppliedTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEDB_SET_PRODUCTIONAPPLIEDTIME_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::CafeProductionDB* get_ProductionDB()
		{
			return ((::MX::GameLogic::DBModel::CafeProductionDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEDB_GET_PRODUCTIONDB_OFFSET))(nullptr);
		}

		::System::Void set_ProductionDB(::MX::GameLogic::DBModel::CafeProductionDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CafeProductionDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEDB_SET_PRODUCTIONDB_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CurrencyDict_Obsolete()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEDB_GET_CURRENCYDICT_OBSOLETE_OFFSET))(nullptr);
		}

		::System::Void set_CurrencyDict_Obsolete(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEDB_SET_CURRENCYDICT_OBSOLETE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_UpdateTimeDict_Obsolete()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEDB_GET_UPDATETIMEDICT_OBSOLETE_OFFSET))(nullptr);
		}

		::System::Void set_UpdateTimeDict_Obsolete(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEDB_SET_UPDATETIMEDICT_OBSOLETE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::DBModel::CafeDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CafeDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEDB_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::CafeDB* Clone()
		{
			return ((::MX::GameLogic::DBModel::CafeDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEDB_CLONE_OFFSET))(nullptr);
		}

	};
}


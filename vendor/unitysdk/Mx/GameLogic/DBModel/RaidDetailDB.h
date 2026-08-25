#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_RAIDDETAILDB_GET_DAMAGETABLE_OFFSET UNITYSDK_OFFSET(0x1009B30)
#define MX_GAMELOGIC_DBMODEL_RAIDDETAILDB_SHOULDSERIALIZEDAMAGETABLE_OFFSET UNITYSDK_OFFSET(0x1009B40)
#define MX_GAMELOGIC_DBMODEL_RAIDDETAILDB_GET_RAIDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1009B80)
#define MX_GAMELOGIC_DBMODEL_RAIDDETAILDB_SET_ENDDATE_OFFSET UNITYSDK_OFFSET(0x1009B90)
#define MX_GAMELOGIC_DBMODEL_RAIDDETAILDB_SET_DAMAGETABLE_OFFSET UNITYSDK_OFFSET(0x1009BA0)
#define MX_GAMELOGIC_DBMODEL_RAIDDETAILDB_SET_RAIDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1009BB0)
#define MX_GAMELOGIC_DBMODEL_RAIDDETAILDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1009BC0)
#define MX_GAMELOGIC_DBMODEL_RAIDDETAILDB_GET_ENDDATE_OFFSET UNITYSDK_OFFSET(0x1009C50)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int RaidDetailDB_TypeDefinitionIndex = 12703;

	class RaidDetailDB : public Il2CppObject
	{
	public:
		::System::Int64 _RaidUniqueId_k__BackingField; // 0x10
		::System::DateTime* _EndDate_k__BackingField; // 0x18
		Il2CppObject* _DamageTable_k__BackingField; // 0x20

		Il2CppObject* get_DamageTable()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDETAILDB_GET_DAMAGETABLE_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeDamageTable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDETAILDB_SHOULDSERIALIZEDAMAGETABLE_OFFSET))(nullptr);
		}

		::System::Int64 get_RaidUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDETAILDB_GET_RAIDUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_EndDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDETAILDB_SET_ENDDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_DamageTable(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDETAILDB_SET_DAMAGETABLE_OFFSET))(arg, nullptr);
		}

		::System::Void set_RaidUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDETAILDB_SET_RAIDUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::DateTime* arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDETAILDB_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::DateTime* get_EndDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDETAILDB_GET_ENDDATE_OFFSET))(nullptr);
		}

	};
}


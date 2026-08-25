#pragma once
#include "../../../unitysdk.h"

namespace MX::Data { class WorldRaidSeasonInfo; }

#define MX_GAMELOGIC_DBMODEL_WORLDRAIDPROGRESSDB_SET_PHASEID_OFFSET UNITYSDK_OFFSET(0x1013AF0)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDPROGRESSDB_GET_PHASEID_OFFSET UNITYSDK_OFFSET(0x1013B00)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDPROGRESSDB_GET_MAPS_OFFSET UNITYSDK_OFFSET(0x1013B10)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDPROGRESSDB_GET_CARRIERSKILLS_OFFSET UNITYSDK_OFFSET(0x1013B20)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDPROGRESSDB_GET_CLEARCONDITIONIDS_OFFSET UNITYSDK_OFFSET(0x1013B30)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDPROGRESSDB_SET_CARRIERSKILLS_OFFSET UNITYSDK_OFFSET(0x1013B40)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDPROGRESSDB_GET_ISMAPDATAINVALID_OFFSET UNITYSDK_OFFSET(0x1013B50)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDPROGRESSDB_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1013C70)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDPROGRESSDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1013C80)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDPROGRESSDB_GET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0x1013BE0)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDPROGRESSDB_SET_CLEARCONDITIONIDS_OFFSET UNITYSDK_OFFSET(0x1013C90)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDPROGRESSDB_SET_MAPS_OFFSET UNITYSDK_OFFSET(0x1013CA0)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDPROGRESSDB_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1013CB0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int WorldRaidProgressDB_TypeDefinitionIndex = 12760;

	class WorldRaidProgressDB : public Il2CppObject
	{
	public:
		::System::Int64 _SeasonId_k__BackingField; // 0x10
		::System::Int64 _PhaseId_k__BackingField; // 0x18
		Il2CppObject* _Maps_k__BackingField; // 0x20
		Il2CppObject* _CarrierSkills_k__BackingField; // 0x28
		Il2CppObject* _ClearConditionIds_k__BackingField; // 0x30
		::System::Boolean WasPhaseIdUpdated; // 0x38
		::MX::Data::WorldRaidSeasonInfo* _seasonInfoCache; // 0x40

		::System::Void set_PhaseId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDPROGRESSDB_SET_PHASEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_PhaseId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDPROGRESSDB_GET_PHASEID_OFFSET))(nullptr);
		}

		Il2CppObject* get_Maps()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDPROGRESSDB_GET_MAPS_OFFSET))(nullptr);
		}

		Il2CppObject* get_CarrierSkills()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDPROGRESSDB_GET_CARRIERSKILLS_OFFSET))(nullptr);
		}

		Il2CppObject* get_ClearConditionIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDPROGRESSDB_GET_CLEARCONDITIONIDS_OFFSET))(nullptr);
		}

		::System::Void set_CarrierSkills(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDPROGRESSDB_SET_CARRIERSKILLS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsMapDataInvalid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDPROGRESSDB_GET_ISMAPDATAINVALID_OFFSET))(nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDPROGRESSDB_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDPROGRESSDB_.CTOR_OFFSET))(nullptr);
		}

		::MX::Data::WorldRaidSeasonInfo* get_SeasonInfo()
		{
			return ((::MX::Data::WorldRaidSeasonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDPROGRESSDB_GET_SEASONINFO_OFFSET))(nullptr);
		}

		::System::Void set_ClearConditionIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDPROGRESSDB_SET_CLEARCONDITIONIDS_OFFSET))(arg, nullptr);
		}

		::System::Void set_Maps(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDPROGRESSDB_SET_MAPS_OFFSET))(arg, nullptr);
		}

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDPROGRESSDB_SET_SEASONID_OFFSET))(arg, nullptr);
		}

	};
}


#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_SCENARIOHISTORYDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x100AC30)
#define MX_GAMELOGIC_DBMODEL_SCENARIOHISTORYDB_GET_SCENARIOUNIQUEID_OFFSET UNITYSDK_OFFSET(0x100AC40)
#define MX_GAMELOGIC_DBMODEL_SCENARIOHISTORYDB_SET_SCENARIOUNIQUEID_OFFSET UNITYSDK_OFFSET(0x100AC50)
#define MX_GAMELOGIC_DBMODEL_SCENARIOHISTORYDB_GET_CLEARDATETIME_OFFSET UNITYSDK_OFFSET(0x100AC60)
#define MX_GAMELOGIC_DBMODEL_SCENARIOHISTORYDB_SET_CLEARDATETIME_OFFSET UNITYSDK_OFFSET(0x100AC70)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ScenarioHistoryDB_TypeDefinitionIndex = 12715;

	class ScenarioHistoryDB : public Il2CppObject
	{
	public:
		::System::Int64 _ScenarioUniqueId_k__BackingField; // 0x10
		::System::DateTime* _ClearDateTime_k__BackingField; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SCENARIOHISTORYDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_ScenarioUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SCENARIOHISTORYDB_GET_SCENARIOUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_ScenarioUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SCENARIOHISTORYDB_SET_SCENARIOUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_ClearDateTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SCENARIOHISTORYDB_GET_CLEARDATETIME_OFFSET))(nullptr);
		}

		::System::Void set_ClearDateTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SCENARIOHISTORYDB_SET_CLEARDATETIME_OFFSET))(arg, nullptr);
		}

	};
}


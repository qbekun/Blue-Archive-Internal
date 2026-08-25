#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_SCENARIOGROUPHISTORYDB_GET_SCENARIOGROUPUNIQUEID_OFFSET UNITYSDK_OFFSET(0x100AC80)
#define MX_GAMELOGIC_DBMODEL_SCENARIOGROUPHISTORYDB_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x100AC90)
#define MX_GAMELOGIC_DBMODEL_SCENARIOGROUPHISTORYDB_GET_SCENARIOTYPE_OFFSET UNITYSDK_OFFSET(0x100ACA0)
#define MX_GAMELOGIC_DBMODEL_SCENARIOGROUPHISTORYDB_SET_CLEARDATETIME_OFFSET UNITYSDK_OFFSET(0x100ACB0)
#define MX_GAMELOGIC_DBMODEL_SCENARIOGROUPHISTORYDB_GET_CLEARDATETIME_OFFSET UNITYSDK_OFFSET(0x100ACC0)
#define MX_GAMELOGIC_DBMODEL_SCENARIOGROUPHISTORYDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x100ACD0)
#define MX_GAMELOGIC_DBMODEL_SCENARIOGROUPHISTORYDB_SET_SCENARIOTYPE_OFFSET UNITYSDK_OFFSET(0x100ACE0)
#define MX_GAMELOGIC_DBMODEL_SCENARIOGROUPHISTORYDB_SET_ISRETURN_OFFSET UNITYSDK_OFFSET(0x100ACF0)
#define MX_GAMELOGIC_DBMODEL_SCENARIOGROUPHISTORYDB_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x100AD00)
#define MX_GAMELOGIC_DBMODEL_SCENARIOGROUPHISTORYDB_GET_ISRETURN_OFFSET UNITYSDK_OFFSET(0x100AD10)
#define MX_GAMELOGIC_DBMODEL_SCENARIOGROUPHISTORYDB_SET_SCENARIOGROUPUNIQUEID_OFFSET UNITYSDK_OFFSET(0x100AD20)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ScenarioGroupHistoryDB_TypeDefinitionIndex = 12716;

	class ScenarioGroupHistoryDB : public Il2CppObject
	{
	public:
		::System::Int64 _ScenarioGroupUniqueId_k__BackingField; // 0x10
		::System::Int64 _ScenarioType_k__BackingField; // 0x18
		Il2CppObject* _EventContentId_k__BackingField; // 0x20
		::System::DateTime* _ClearDateTime_k__BackingField; // 0x30
		::System::Boolean _IsReturn_k__BackingField; // 0x38

		::System::Int64 get_ScenarioGroupUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SCENARIOGROUPHISTORYDB_GET_SCENARIOGROUPUNIQUEID_OFFSET))(nullptr);
		}

		Il2CppObject* get_EventContentId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SCENARIOGROUPHISTORYDB_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_ScenarioType()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SCENARIOGROUPHISTORYDB_GET_SCENARIOTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ClearDateTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SCENARIOGROUPHISTORYDB_SET_CLEARDATETIME_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_ClearDateTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SCENARIOGROUPHISTORYDB_GET_CLEARDATETIME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SCENARIOGROUPHISTORYDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ScenarioType(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SCENARIOGROUPHISTORYDB_SET_SCENARIOTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsReturn(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SCENARIOGROUPHISTORYDB_SET_ISRETURN_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SCENARIOGROUPHISTORYDB_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsReturn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SCENARIOGROUPHISTORYDB_GET_ISRETURN_OFFSET))(nullptr);
		}

		::System::Void set_ScenarioGroupUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SCENARIOGROUPHISTORYDB_SET_SCENARIOGROUPUNIQUEID_OFFSET))(arg, nullptr);
		}

	};
}


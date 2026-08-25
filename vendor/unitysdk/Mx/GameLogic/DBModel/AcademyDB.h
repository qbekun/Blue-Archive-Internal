#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_ACADEMYDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE0C50)
#define MX_GAMELOGIC_DBMODEL_ACADEMYDB_SHOULDSERIALIZEZONEVISITCHARACTERDBS_OFFSET UNITYSDK_OFFSET(0xFE0C60)
#define MX_GAMELOGIC_DBMODEL_ACADEMYDB_GET_ZONESCHEDULEGROUPRECORDS_OFFSET UNITYSDK_OFFSET(0xFE0CA0)
#define MX_GAMELOGIC_DBMODEL_ACADEMYDB_GET_LASTUPDATE_OFFSET UNITYSDK_OFFSET(0xFE0CB0)
#define MX_GAMELOGIC_DBMODEL_ACADEMYDB_SET_ZONESCHEDULEGROUPRECORDS_OFFSET UNITYSDK_OFFSET(0xFE0CC0)
#define MX_GAMELOGIC_DBMODEL_ACADEMYDB_SHOULDSERIALIZEZONESCHEDULEGROUPRECORDS_OFFSET UNITYSDK_OFFSET(0xFE0CD0)
#define MX_GAMELOGIC_DBMODEL_ACADEMYDB_SET_ZONEVISITCHARACTERDBS_OFFSET UNITYSDK_OFFSET(0xFE0D10)
#define MX_GAMELOGIC_DBMODEL_ACADEMYDB_GET_ZONEVISITCHARACTERDBS_OFFSET UNITYSDK_OFFSET(0xFE0D20)
#define MX_GAMELOGIC_DBMODEL_ACADEMYDB_SET_LASTUPDATE_OFFSET UNITYSDK_OFFSET(0xFE0D30)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int AcademyDB_TypeDefinitionIndex = 12463;

	class AcademyDB : public Il2CppObject
	{
	public:
		::System::DateTime* _LastUpdate_k__BackingField; // 0x10
		Il2CppObject* _ZoneVisitCharacterDBs_k__BackingField; // 0x18
		Il2CppObject* _ZoneScheduleGroupRecords_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACADEMYDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeZoneVisitCharacterDBs()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACADEMYDB_SHOULDSERIALIZEZONEVISITCHARACTERDBS_OFFSET))(nullptr);
		}

		Il2CppObject* get_ZoneScheduleGroupRecords()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACADEMYDB_GET_ZONESCHEDULEGROUPRECORDS_OFFSET))(nullptr);
		}

		::System::DateTime* get_LastUpdate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACADEMYDB_GET_LASTUPDATE_OFFSET))(nullptr);
		}

		::System::Void set_ZoneScheduleGroupRecords(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACADEMYDB_SET_ZONESCHEDULEGROUPRECORDS_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldSerializeZoneScheduleGroupRecords()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACADEMYDB_SHOULDSERIALIZEZONESCHEDULEGROUPRECORDS_OFFSET))(nullptr);
		}

		::System::Void set_ZoneVisitCharacterDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACADEMYDB_SET_ZONEVISITCHARACTERDBS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ZoneVisitCharacterDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACADEMYDB_GET_ZONEVISITCHARACTERDBS_OFFSET))(nullptr);
		}

		::System::Void set_LastUpdate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACADEMYDB_SET_LASTUPDATE_OFFSET))(arg, nullptr);
		}

	};
}


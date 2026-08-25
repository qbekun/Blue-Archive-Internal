#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class WeekDungeonType; }
namespace FlatData { class ContentType; }

#define MX_GAMELOGIC_DBMODEL_WEEKDUNGEONSAVEDB_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1012C90)
#define MX_GAMELOGIC_DBMODEL_WEEKDUNGEONSAVEDB_SET_SEQUENCE_OFFSET UNITYSDK_OFFSET(0x1012CA0)
#define MX_GAMELOGIC_DBMODEL_WEEKDUNGEONSAVEDB_GET_SEED_OFFSET UNITYSDK_OFFSET(0x1012CB0)
#define MX_GAMELOGIC_DBMODEL_WEEKDUNGEONSAVEDB_SET_SEED_OFFSET UNITYSDK_OFFSET(0x1012CC0)
#define MX_GAMELOGIC_DBMODEL_WEEKDUNGEONSAVEDB_SET_WEEKDUNGEONTYPE_OFFSET UNITYSDK_OFFSET(0x1012CD0)
#define MX_GAMELOGIC_DBMODEL_WEEKDUNGEONSAVEDB_GET_WEEKDUNGEONTYPE_OFFSET UNITYSDK_OFFSET(0x1012CE0)
#define MX_GAMELOGIC_DBMODEL_WEEKDUNGEONSAVEDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1012CF0)
#define MX_GAMELOGIC_DBMODEL_WEEKDUNGEONSAVEDB_GET_SEQUENCE_OFFSET UNITYSDK_OFFSET(0x1012D00)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int WeekDungeonSaveDB_TypeDefinitionIndex = 12749;

	class WeekDungeonSaveDB : public Il2CppObject
	{
	public:
		::FlatData::WeekDungeonType* _WeekDungeonType_k__BackingField; // 0x78
		::System::Int32 _Seed_k__BackingField; // 0x7C
		::System::Int32 _Sequence_k__BackingField; // 0x80

		::FlatData::ContentType* get_ContentType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WEEKDUNGEONSAVEDB_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_Sequence(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WEEKDUNGEONSAVEDB_SET_SEQUENCE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Seed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WEEKDUNGEONSAVEDB_GET_SEED_OFFSET))(nullptr);
		}

		::System::Void set_Seed(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WEEKDUNGEONSAVEDB_SET_SEED_OFFSET))(arg, nullptr);
		}

		::System::Void set_WeekDungeonType(::FlatData::WeekDungeonType* arg)
		{
			((::System::Void(*)(::FlatData::WeekDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WEEKDUNGEONSAVEDB_SET_WEEKDUNGEONTYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::WeekDungeonType* get_WeekDungeonType()
		{
			return ((::FlatData::WeekDungeonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WEEKDUNGEONSAVEDB_GET_WEEKDUNGEONTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WEEKDUNGEONSAVEDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_Sequence()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WEEKDUNGEONSAVEDB_GET_SEQUENCE_OFFSET))(nullptr);
		}

	};
}


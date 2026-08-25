#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class StageDifficulty; }
namespace FlatData { class TileState; }
namespace MX::GameLogic::DBModel { class ConquestTileDB; }

#define MX_GAMELOGIC_DBMODEL_CONQUESTTILEDB_SET_CREATETIME_OFFSET UNITYSDK_OFFSET(0xFEEFC0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTTILEDB_GET_ISANYSTARCLEAR_OFFSET UNITYSDK_OFFSET(0xFEEFD0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTTILEDB_GET_STARFLAGS_OFFSET UNITYSDK_OFFSET(0xFEF0E0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTTILEDB_GET_TILESTATE_OFFSET UNITYSDK_OFFSET(0xFEF0F0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTTILEDB_GET_CREATETIME_OFFSET UNITYSDK_OFFSET(0xFEF100)
#define MX_GAMELOGIC_DBMODEL_CONQUESTTILEDB_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xFEF110)
#define MX_GAMELOGIC_DBMODEL_CONQUESTTILEDB_GET_BESTSTARRECORD_OFFSET UNITYSDK_OFFSET(0xFEF120)
#define MX_GAMELOGIC_DBMODEL_CONQUESTTILEDB_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xFEF240)
#define MX_GAMELOGIC_DBMODEL_CONQUESTTILEDB_CLONE_OFFSET UNITYSDK_OFFSET(0xFEF250)
#define MX_GAMELOGIC_DBMODEL_CONQUESTTILEDB_GET_ISTHREESTARCLEAR_OFFSET UNITYSDK_OFFSET(0xFEF3C0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTTILEDB_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xFEF4D0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTTILEDB_COPYFROM_OFFSET UNITYSDK_OFFSET(0xFEF4E0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTTILEDB_GET_TILEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFEF590)
#define MX_GAMELOGIC_DBMODEL_CONQUESTTILEDB_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xFEF5A0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTTILEDB_SET_TILESTATE_OFFSET UNITYSDK_OFFSET(0xFEF5B0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTTILEDB_SET_TILEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFEF5C0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTTILEDB_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xFEF5D0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTTILEDB_SET_STARFLAGS_OFFSET UNITYSDK_OFFSET(0xFEF5E0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTTILEDB_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xFEF5F0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTTILEDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFEF360)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ConquestTileDB_TypeDefinitionIndex = 12545;

	class ConquestTileDB : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x10
		::FlatData::StageDifficulty* _Difficulty_k__BackingField; // 0x18
		::System::Int64 _TileUniqueId_k__BackingField; // 0x20
		::FlatData::TileState* _TileState_k__BackingField; // 0x28
		::System::Int64 _Level_k__BackingField; // 0x30
		::Il2CppArray<::System::Object*>* _StarFlags_k__BackingField; // 0x38
		::System::DateTime* _CreateTime_k__BackingField; // 0x40

		::System::Void set_CreateTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTTILEDB_SET_CREATETIME_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsAnyStarClear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTTILEDB_GET_ISANYSTARCLEAR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_StarFlags()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTTILEDB_GET_STARFLAGS_OFFSET))(nullptr);
		}

		::FlatData::TileState* get_TileState()
		{
			return ((::FlatData::TileState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTTILEDB_GET_TILESTATE_OFFSET))(nullptr);
		}

		::System::DateTime* get_CreateTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTTILEDB_GET_CREATETIME_OFFSET))(nullptr);
		}

		::System::Void set_Level(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTTILEDB_SET_LEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_BestStarRecord()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTTILEDB_GET_BESTSTARRECORD_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTTILEDB_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ConquestTileDB* Clone()
		{
			return ((::MX::GameLogic::DBModel::ConquestTileDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTTILEDB_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsThreeStarClear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTTILEDB_GET_ISTHREESTARCLEAR_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTTILEDB_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void CopyFrom(::MX::GameLogic::DBModel::ConquestTileDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConquestTileDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTTILEDB_COPYFROM_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TileUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTTILEDB_GET_TILEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_Difficulty(::FlatData::StageDifficulty* arg)
		{
			((::System::Void(*)(::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTTILEDB_SET_DIFFICULTY_OFFSET))(arg, nullptr);
		}

		::System::Void set_TileState(::FlatData::TileState* arg)
		{
			((::System::Void(*)(::FlatData::TileState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTTILEDB_SET_TILESTATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_TileUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTTILEDB_SET_TILEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::FlatData::StageDifficulty* get_Difficulty()
		{
			return ((::FlatData::StageDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTTILEDB_GET_DIFFICULTY_OFFSET))(nullptr);
		}

		::System::Void set_StarFlags(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTTILEDB_SET_STARFLAGS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Level()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTTILEDB_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTTILEDB_.CTOR_OFFSET))(nullptr);
		}

	};
}


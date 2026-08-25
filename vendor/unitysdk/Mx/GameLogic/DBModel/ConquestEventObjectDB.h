#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class StageDifficulty; }
namespace MX::GameLogic::DBModel { class ConquestEventObjectDB; }
namespace MX::Data { class ConquestEventObjectType; }

#define MX_GAMELOGIC_DBMODEL_CONQUESTEVENTOBJECTDB_SET_CONQUESTOBJECTDBID_OFFSET UNITYSDK_OFFSET(0xFEE870)
#define MX_GAMELOGIC_DBMODEL_CONQUESTEVENTOBJECTDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFEE7D0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTEVENTOBJECTDB_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xFEE880)
#define MX_GAMELOGIC_DBMODEL_CONQUESTEVENTOBJECTDB_GET_OBJECTID_OFFSET UNITYSDK_OFFSET(0xFEE890)
#define MX_GAMELOGIC_DBMODEL_CONQUESTEVENTOBJECTDB_CLONE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMELOGIC_DBMODEL_CONQUESTEVENTOBJECTDB_GET_TILEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFEE8A0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTEVENTOBJECTDB_GET_CONQUESTOBJECTDBID_OFFSET UNITYSDK_OFFSET(0xFEE8B0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTEVENTOBJECTDB_COPYFROM_OFFSET UNITYSDK_OFFSET(0xFEE8C0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTEVENTOBJECTDB_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xFEE8F0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTEVENTOBJECTDB_GET_ISALIVE_OFFSET UNITYSDK_OFFSET(0xFEE900)
#define MX_GAMELOGIC_DBMODEL_CONQUESTEVENTOBJECTDB_SET_OBJECTID_OFFSET UNITYSDK_OFFSET(0xFEE910)
#define MX_GAMELOGIC_DBMODEL_CONQUESTEVENTOBJECTDB_SET_TILEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFEE920)
#define MX_GAMELOGIC_DBMODEL_CONQUESTEVENTOBJECTDB_GET_OBJECTTYPE_OFFSET UNITYSDK_OFFSET(0xFEE930)
#define MX_GAMELOGIC_DBMODEL_CONQUESTEVENTOBJECTDB_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xFEE940)
#define MX_GAMELOGIC_DBMODEL_CONQUESTEVENTOBJECTDB_CREATEBASECLONE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMELOGIC_DBMODEL_CONQUESTEVENTOBJECTDB_SET_ISALIVE_OFFSET UNITYSDK_OFFSET(0xFEE950)
#define MX_GAMELOGIC_DBMODEL_CONQUESTEVENTOBJECTDB_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xFEE960)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ConquestEventObjectDB_TypeDefinitionIndex = 12537;

	class ConquestEventObjectDB : public Il2CppObject
	{
	public:
		::System::Int64 _ConquestObjectDBId_k__BackingField; // 0x10
		::System::Int64 _EventContentId_k__BackingField; // 0x18
		::FlatData::StageDifficulty* _Difficulty_k__BackingField; // 0x20
		::System::Int64 _TileUniqueId_k__BackingField; // 0x28
		::System::Int64 _ObjectId_k__BackingField; // 0x30
		::System::Boolean _IsAlive_k__BackingField; // 0x38

		::System::Void set_ConquestObjectDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTEVENTOBJECTDB_SET_CONQUESTOBJECTDBID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTEVENTOBJECTDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTEVENTOBJECTDB_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_ObjectId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTEVENTOBJECTDB_GET_OBJECTID_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ConquestEventObjectDB* Clone()
		{
			return ((::MX::GameLogic::DBModel::ConquestEventObjectDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTEVENTOBJECTDB_CLONE_OFFSET))(nullptr);
		}

		::System::Int64 get_TileUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTEVENTOBJECTDB_GET_TILEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_ConquestObjectDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTEVENTOBJECTDB_GET_CONQUESTOBJECTDBID_OFFSET))(nullptr);
		}

		::System::Void CopyFrom(::MX::GameLogic::DBModel::ConquestEventObjectDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConquestEventObjectDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTEVENTOBJECTDB_COPYFROM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Difficulty(::FlatData::StageDifficulty* arg)
		{
			((::System::Void(*)(::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTEVENTOBJECTDB_SET_DIFFICULTY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsAlive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTEVENTOBJECTDB_GET_ISALIVE_OFFSET))(nullptr);
		}

		::System::Void set_ObjectId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTEVENTOBJECTDB_SET_OBJECTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_TileUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTEVENTOBJECTDB_SET_TILEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::MX::Data::ConquestEventObjectType* get_ObjectType()
		{
			return ((::MX::Data::ConquestEventObjectType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTEVENTOBJECTDB_GET_OBJECTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTEVENTOBJECTDB_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CreateBaseClone(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTEVENTOBJECTDB_CREATEBASECLONE_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsAlive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTEVENTOBJECTDB_SET_ISALIVE_OFFSET))(arg, nullptr);
		}

		::FlatData::StageDifficulty* get_Difficulty()
		{
			return ((::FlatData::StageDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTEVENTOBJECTDB_GET_DIFFICULTY_OFFSET))(nullptr);
		}

	};
}


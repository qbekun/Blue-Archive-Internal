#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ContentType; }

#define MX_GAMELOGIC_DBMODEL_WORLDRAIDWORLDBOSSDB_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1013790)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDWORLDBOSSDB_SET_HP_OFFSET UNITYSDK_OFFSET(0x10137A0)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDWORLDBOSSDB_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x10137B0)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDWORLDBOSSDB_GET_PARTICIPANTS_OFFSET UNITYSDK_OFFSET(0x10137C0)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDWORLDBOSSDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x10137D0)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDWORLDBOSSDB_GET_HP_OFFSET UNITYSDK_OFFSET(0x10137E0)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDWORLDBOSSDB_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x10137F0)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDWORLDBOSSDB_SET_PARTICIPANTS_OFFSET UNITYSDK_OFFSET(0x1013800)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDWORLDBOSSDB_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1013810)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int WorldRaidWorldBossDB_TypeDefinitionIndex = 12755;

	class WorldRaidWorldBossDB : public Il2CppObject
	{
	public:
		::FlatData::ContentType* _ContentType_k__BackingField; // 0x10
		::System::Int64 _GroupId_k__BackingField; // 0x18
		::System::Int64 _HP_k__BackingField; // 0x20
		::System::Int64 _Participants_k__BackingField; // 0x28

		::System::Int64 get_GroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDWORLDBOSSDB_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Void set_HP(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDWORLDBOSSDB_SET_HP_OFFSET))(arg, nullptr);
		}

		::System::Void set_GroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDWORLDBOSSDB_SET_GROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Participants()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDWORLDBOSSDB_GET_PARTICIPANTS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDWORLDBOSSDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_HP()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDWORLDBOSSDB_GET_HP_OFFSET))(nullptr);
		}

		::System::Void set_ContentType(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDWORLDBOSSDB_SET_CONTENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Participants(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDWORLDBOSSDB_SET_PARTICIPANTS_OFFSET))(arg, nullptr);
		}

		::FlatData::ContentType* get_ContentType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDWORLDBOSSDB_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

	};
}


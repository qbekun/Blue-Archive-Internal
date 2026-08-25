#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ContentType; }
namespace FlatData { class ContentsChangeType; }

#define MX_GAMELOGIC_DBMODEL_WORLDRAIDBOSSGROUP_SET_BOSSSPAWNTIME_OFFSET UNITYSDK_OFFSET(0x1013900)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDBOSSGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x1013910)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDBOSSGROUP_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1013A40)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDBOSSGROUP_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1013A50)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDBOSSGROUP_SET_ELIMINATETIME_OFFSET UNITYSDK_OFFSET(0x1013A60)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDBOSSGROUP_GET_ELIMINATETIME_OFFSET UNITYSDK_OFFSET(0x1013A70)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDBOSSGROUP_GET_BOSSSPAWNTIME_OFFSET UNITYSDK_OFFSET(0x1013A80)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDBOSSGROUP_GET_CONTENTSCHANGETYPE_OFFSET UNITYSDK_OFFSET(0x1013A90)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDBOSSGROUP_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1013AA0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int WorldRaidBossGroup_TypeDefinitionIndex = 12758;

	class WorldRaidBossGroup : public Il2CppObject
	{
	public:
		::FlatData::ContentType* _ContentType_k__BackingField; // 0x10
		::System::Int64 _GroupId_k__BackingField; // 0x18
		::System::DateTime* _BossSpawnTime_k__BackingField; // 0x20
		::System::DateTime* _EliminateTime_k__BackingField; // 0x28

		::System::Void set_BossSpawnTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDBOSSGROUP_SET_BOSSSPAWNTIME_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::FlatData::ContentType* arg, ::System::Int64 arg2, ::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::System::Int64, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDBOSSGROUP_.CTOR_OFFSET))(arg, arg2, str, str2, nullptr);
		}

		::System::Void set_GroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDBOSSGROUP_SET_GROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDBOSSGROUP_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Void set_EliminateTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDBOSSGROUP_SET_ELIMINATETIME_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_EliminateTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDBOSSGROUP_GET_ELIMINATETIME_OFFSET))(nullptr);
		}

		::System::DateTime* get_BossSpawnTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDBOSSGROUP_GET_BOSSSPAWNTIME_OFFSET))(nullptr);
		}

		::FlatData::ContentsChangeType* get_ContentsChangeType()
		{
			return ((::FlatData::ContentsChangeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDBOSSGROUP_GET_CONTENTSCHANGETYPE_OFFSET))(nullptr);
		}

		::FlatData::ContentType* get_ContentType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDBOSSGROUP_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

	};
}


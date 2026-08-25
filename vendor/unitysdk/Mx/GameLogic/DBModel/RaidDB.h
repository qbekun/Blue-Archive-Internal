#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class RaidMemberDescription; }
namespace FlatData { class ContentType; }
namespace FlatData { class RaidStatus; }
namespace FlatData { class Difficulty; }

#define MX_GAMELOGIC_DBMODEL_RAIDDB_SET_END_OFFSET UNITYSDK_OFFSET(0x1007840)
#define MX_GAMELOGIC_DBMODEL_RAIDDB_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1007850)
#define MX_GAMELOGIC_DBMODEL_RAIDDB_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1007860)
#define MX_GAMELOGIC_DBMODEL_RAIDDB_SET_SERVERID_OFFSET UNITYSDK_OFFSET(0x1007870)
#define MX_GAMELOGIC_DBMODEL_RAIDDB_GET_SECRETCODE_OFFSET UNITYSDK_OFFSET(0x1007880)
#define MX_GAMELOGIC_DBMODEL_RAIDDB_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1007890)
#define MX_GAMELOGIC_DBMODEL_RAIDDB_GET_OWNERNICKNAME_OFFSET UNITYSDK_OFFSET(0x10078A0)
#define MX_GAMELOGIC_DBMODEL_RAIDDB_SET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0x1007900)
#define MX_GAMELOGIC_DBMODEL_RAIDDB_GET_PLAYERCOUNT_OFFSET UNITYSDK_OFFSET(0x1007910)
#define MX_GAMELOGIC_DBMODEL_RAIDDB_GET_ISENTERROOM_OFFSET UNITYSDK_OFFSET(0x1007920)
#define MX_GAMELOGIC_DBMODEL_RAIDDB_GET_PARTICIPATECHARACTERSERVERIDS_OFFSET UNITYSDK_OFFSET(0x1007930)
#define MX_GAMELOGIC_DBMODEL_RAIDDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1005FA0)
#define MX_GAMELOGIC_DBMODEL_RAIDDB_SET_SECRETCODE_OFFSET UNITYSDK_OFFSET(0x1007940)
#define MX_GAMELOGIC_DBMODEL_RAIDDB_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0x1007950)
#define MX_GAMELOGIC_DBMODEL_RAIDDB_SET_PLAYERCOUNT_OFFSET UNITYSDK_OFFSET(0x1007960)
#define MX_GAMELOGIC_DBMODEL_RAIDDB_GET_LASTBOSSINDEX_OFFSET UNITYSDK_OFFSET(0x1007970)
#define MX_GAMELOGIC_DBMODEL_RAIDDB_GET_TAGS_OFFSET UNITYSDK_OFFSET(0x1007A10)
#define MX_GAMELOGIC_DBMODEL_RAIDDB_SET_TAGS_OFFSET UNITYSDK_OFFSET(0x1007A20)
#define MX_GAMELOGIC_DBMODEL_RAIDDB_GET_OWNERACCOUNTSERVERID_OFFSET UNITYSDK_OFFSET(0x1007A30)
#define MX_GAMELOGIC_DBMODEL_RAIDDB_SET_ACCOUNTLEVELWHENCREATEDB_OFFSET UNITYSDK_OFFSET(0x1007A50)
#define MX_GAMELOGIC_DBMODEL_RAIDDB_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1007A60)
#define MX_GAMELOGIC_DBMODEL_RAIDDB_SHOULDSERIALIZERAIDBOSSDBS_OFFSET UNITYSDK_OFFSET(0x1007A70)
#define MX_GAMELOGIC_DBMODEL_RAIDDB_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1007AB0)
#define MX_GAMELOGIC_DBMODEL_RAIDDB_GET_ACCOUNTLEVELWHENCREATEDB_OFFSET UNITYSDK_OFFSET(0x1007AC0)
#define MX_GAMELOGIC_DBMODEL_RAIDDB_GET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0x1007AD0)
#define MX_GAMELOGIC_DBMODEL_RAIDDB_GET_BOSSGROUP_OFFSET UNITYSDK_OFFSET(0x1007AE0)
#define MX_GAMELOGIC_DBMODEL_RAIDDB_CALCBOSSSESSIONHITPOINT_OFFSET UNITYSDK_OFFSET(0x1007B80)
#define MX_GAMELOGIC_DBMODEL_RAIDDB_SET_RAIDSTATE_OFFSET UNITYSDK_OFFSET(0x1007D20)
#define MX_GAMELOGIC_DBMODEL_RAIDDB_SHOULDSERIALIZEPARTICIPATECHARACTERSERVERIDS_OFFSET UNITYSDK_OFFSET(0x1007D30)
#define MX_GAMELOGIC_DBMODEL_RAIDDB_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1007D70)
#define MX_GAMELOGIC_DBMODEL_RAIDDB_GET_BEGIN_OFFSET UNITYSDK_OFFSET(0x1007D80)
#define MX_GAMELOGIC_DBMODEL_RAIDDB_GET_END_OFFSET UNITYSDK_OFFSET(0x1007D90)
#define MX_GAMELOGIC_DBMODEL_RAIDDB_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x1007DA0)
#define MX_GAMELOGIC_DBMODEL_RAIDDB_GET_CLANASSISTUSED_OFFSET UNITYSDK_OFFSET(0x1007DB0)
#define MX_GAMELOGIC_DBMODEL_RAIDDB_GET_RAIDSTATE_OFFSET UNITYSDK_OFFSET(0x1007DC0)
#define MX_GAMELOGIC_DBMODEL_RAIDDB_GET_SESSIONHITPOINT_OFFSET UNITYSDK_OFFSET(0x1007DD0)
#define MX_GAMELOGIC_DBMODEL_RAIDDB_SET_PARTICIPATECHARACTERSERVERIDS_OFFSET UNITYSDK_OFFSET(0x1007DE0)
#define MX_GAMELOGIC_DBMODEL_RAIDDB_SET_CLANASSISTUSED_OFFSET UNITYSDK_OFFSET(0x1007DF0)
#define MX_GAMELOGIC_DBMODEL_RAIDDB_SET_BEGIN_OFFSET UNITYSDK_OFFSET(0x1007E00)
#define MX_GAMELOGIC_DBMODEL_RAIDDB_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x1007E10)
#define MX_GAMELOGIC_DBMODEL_RAIDDB_SET_RAIDBOSSDBS_OFFSET UNITYSDK_OFFSET(0x1007E20)
#define MX_GAMELOGIC_DBMODEL_RAIDDB_GET_RAIDBOSSDBS_OFFSET UNITYSDK_OFFSET(0x1007E30)
#define MX_GAMELOGIC_DBMODEL_RAIDDB_SET_ISENTERROOM_OFFSET UNITYSDK_OFFSET(0x1007E40)
#define MX_GAMELOGIC_DBMODEL_RAIDDB_GET_BOSSDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1007E50)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int RaidDB_TypeDefinitionIndex = 12688;

	class RaidDB : public Il2CppObject
	{
	public:
		::MX::Logic::Data::RaidMemberDescription* _Owner_k__BackingField; // 0x10
		::FlatData::ContentType* _ContentType_k__BackingField; // 0x18
		::System::Int64 _ServerId_k__BackingField; // 0x20
		::System::Int64 _UniqueId_k__BackingField; // 0x28
		::System::Int64 _SeasonId_k__BackingField; // 0x30
		::System::DateTime* _Begin_k__BackingField; // 0x38
		::System::DateTime* _End_k__BackingField; // 0x40
		::System::Int64 _PlayerCount_k__BackingField; // 0x48
		Il2CppObject* _Tags_k__BackingField; // 0x50
		::System::String* _SecretCode_k__BackingField; // 0x58
		::FlatData::RaidStatus* _RaidState_k__BackingField; // 0x60
		::System::Boolean _IsPractice_k__BackingField; // 0x64
		Il2CppObject* _RaidBossDBs_k__BackingField; // 0x68
		Il2CppObject* _ParticipateCharacterServerIds_k__BackingField; // 0x70
		::System::Boolean _IsEnterRoom_k__BackingField; // 0x78
		::System::Int64 _AccountLevelWhenCreateDB_k__BackingField; // 0x80
		::System::Boolean _ClanAssistUsed_k__BackingField; // 0x88

		::System::Void set_End(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDB_SET_END_OFFSET))(arg, nullptr);
		}

		::System::Void set_ContentType(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDB_SET_CONTENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDB_SET_SEASONID_OFFSET))(arg, nullptr);
		}

		::System::Void set_ServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDB_SET_SERVERID_OFFSET))(arg, nullptr);
		}

		::System::String* get_SecretCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDB_GET_SECRETCODE_OFFSET))(nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDB_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::String* get_OwnerNickname()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDB_GET_OWNERNICKNAME_OFFSET))(nullptr);
		}

		::System::Void set_IsPractice(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDB_SET_ISPRACTICE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_PlayerCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDB_GET_PLAYERCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsEnterRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDB_GET_ISENTERROOM_OFFSET))(nullptr);
		}

		Il2CppObject* get_ParticipateCharacterServerIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDB_GET_PARTICIPATECHARACTERSERVERIDS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_SecretCode(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDB_SET_SECRETCODE_OFFSET))(str, nullptr);
		}

		::System::Int64 get_ServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDB_GET_SERVERID_OFFSET))(nullptr);
		}

		::System::Void set_PlayerCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDB_SET_PLAYERCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_LastBossIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDB_GET_LASTBOSSINDEX_OFFSET))(nullptr);
		}

		Il2CppObject* get_Tags()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDB_GET_TAGS_OFFSET))(nullptr);
		}

		::System::Void set_Tags(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDB_SET_TAGS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_OwnerAccountServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDB_GET_OWNERACCOUNTSERVERID_OFFSET))(nullptr);
		}

		::System::Void set_AccountLevelWhenCreateDB(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDB_SET_ACCOUNTLEVELWHENCREATEDB_OFFSET))(arg, nullptr);
		}

		::FlatData::ContentType* get_ContentType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDB_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeRaidBossDBs()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDB_SHOULDSERIALIZERAIDBOSSDBS_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDB_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AccountLevelWhenCreateDB()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDB_GET_ACCOUNTLEVELWHENCREATEDB_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPractice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDB_GET_ISPRACTICE_OFFSET))(nullptr);
		}

		::System::String* get_BossGroup()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDB_GET_BOSSGROUP_OFFSET))(nullptr);
		}

		::System::Int64 CalcBossSessionHitPoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDB_CALCBOSSSESSIONHITPOINT_OFFSET))(nullptr);
		}

		::System::Void set_RaidState(::FlatData::RaidStatus* arg)
		{
			((::System::Void(*)(::FlatData::RaidStatus*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDB_SET_RAIDSTATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldSerializeParticipateCharacterServerIds()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDB_SHOULDSERIALIZEPARTICIPATECHARACTERSERVERIDS_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDB_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::DateTime* get_Begin()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDB_GET_BEGIN_OFFSET))(nullptr);
		}

		::System::DateTime* get_End()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDB_GET_END_OFFSET))(nullptr);
		}

		::MX::Logic::Data::RaidMemberDescription* get_Owner()
		{
			return ((::MX::Logic::Data::RaidMemberDescription*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDB_GET_OWNER_OFFSET))(nullptr);
		}

		::System::Boolean get_ClanAssistUsed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDB_GET_CLANASSISTUSED_OFFSET))(nullptr);
		}

		::FlatData::RaidStatus* get_RaidState()
		{
			return ((::FlatData::RaidStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDB_GET_RAIDSTATE_OFFSET))(nullptr);
		}

		::System::Int64 get_SessionHitPoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDB_GET_SESSIONHITPOINT_OFFSET))(nullptr);
		}

		::System::Void set_ParticipateCharacterServerIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDB_SET_PARTICIPATECHARACTERSERVERIDS_OFFSET))(arg, nullptr);
		}

		::System::Void set_ClanAssistUsed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDB_SET_CLANASSISTUSED_OFFSET))(arg, nullptr);
		}

		::System::Void set_Begin(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDB_SET_BEGIN_OFFSET))(arg, nullptr);
		}

		::System::Void set_Owner(::MX::Logic::Data::RaidMemberDescription* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::RaidMemberDescription*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDB_SET_OWNER_OFFSET))(arg, nullptr);
		}

		::System::Void set_RaidBossDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDB_SET_RAIDBOSSDBS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_RaidBossDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDB_GET_RAIDBOSSDBS_OFFSET))(nullptr);
		}

		::System::Void set_IsEnterRoom(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDB_SET_ISENTERROOM_OFFSET))(arg, nullptr);
		}

		::FlatData::Difficulty* get_BossDifficulty()
		{
			return ((::FlatData::Difficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDDB_GET_BOSSDIFFICULTY_OFFSET))(nullptr);
		}

	};
}


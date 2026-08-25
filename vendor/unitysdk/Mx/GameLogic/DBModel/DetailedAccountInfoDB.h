#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class AccountDB; }

#define MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0xFF5BF0)
#define MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0xFF5C00)
#define MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_GET_NICKNAME_OFFSET UNITYSDK_OFFSET(0xFF5C10)
#define MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_SET_NICKNAME_OFFSET UNITYSDK_OFFSET(0xFF5C20)
#define MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xFF5C30)
#define MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xFF5C40)
#define MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_GET_CLANNAME_OFFSET UNITYSDK_OFFSET(0xFF5C50)
#define MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_SET_CLANNAME_OFFSET UNITYSDK_OFFSET(0xFF5C60)
#define MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_GET_COMMENT_OFFSET UNITYSDK_OFFSET(0xFF5C70)
#define MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_SET_COMMENT_OFFSET UNITYSDK_OFFSET(0xFF5C80)
#define MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_GET_FRIENDCOUNT_OFFSET UNITYSDK_OFFSET(0xFF5C90)
#define MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_SET_FRIENDCOUNT_OFFSET UNITYSDK_OFFSET(0xFF5CA0)
#define MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_GET_FRIENDCODE_OFFSET UNITYSDK_OFFSET(0xFF5CB0)
#define MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_SET_FRIENDCODE_OFFSET UNITYSDK_OFFSET(0xFF5CC0)
#define MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_GET_REPRESENTCHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFF5CD0)
#define MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_SET_REPRESENTCHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFF5CE0)
#define MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_GET_CHARACTERCOUNT_OFFSET UNITYSDK_OFFSET(0xFF5CF0)
#define MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_SET_CHARACTERCOUNT_OFFSET UNITYSDK_OFFSET(0xFF5D00)
#define MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_GET_LASTNORMALCAMPAIGNCLEARSTAGEID_OFFSET UNITYSDK_OFFSET(0xFF5D10)
#define MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_SET_LASTNORMALCAMPAIGNCLEARSTAGEID_OFFSET UNITYSDK_OFFSET(0xFF5D20)
#define MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_GET_LASTHARDCAMPAIGNCLEARSTAGEID_OFFSET UNITYSDK_OFFSET(0xFF5D30)
#define MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_SET_LASTHARDCAMPAIGNCLEARSTAGEID_OFFSET UNITYSDK_OFFSET(0xFF5D40)
#define MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_GET_ARENARANKING_OFFSET UNITYSDK_OFFSET(0xFF5D50)
#define MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_SET_ARENARANKING_OFFSET UNITYSDK_OFFSET(0xFF5D60)
#define MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_GET_RAIDRANKING_OFFSET UNITYSDK_OFFSET(0xFF5D70)
#define MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_SET_RAIDRANKING_OFFSET UNITYSDK_OFFSET(0xFF5D80)
#define MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_GET_RAIDTIER_OFFSET UNITYSDK_OFFSET(0xFF5D90)
#define MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_SET_RAIDTIER_OFFSET UNITYSDK_OFFSET(0xFF5DA0)
#define MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_GET_ELIMINATERAIDRANKING_OFFSET UNITYSDK_OFFSET(0xFF5DB0)
#define MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_SET_ELIMINATERAIDRANKING_OFFSET UNITYSDK_OFFSET(0xFF5DC0)
#define MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_GET_ELIMINATERAIDTIER_OFFSET UNITYSDK_OFFSET(0xFF5DD0)
#define MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_SET_ELIMINATERAIDTIER_OFFSET UNITYSDK_OFFSET(0xFF5DE0)
#define MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_GET_MULTIFLOORRAIDCLEAREDDIFFICULTY_OFFSET UNITYSDK_OFFSET(0xFF5DF0)
#define MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_SET_MULTIFLOORRAIDCLEAREDDIFFICULTY_OFFSET UNITYSDK_OFFSET(0xFF5E00)
#define MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_GET_ASSISTCHARACTERDBS_OFFSET UNITYSDK_OFFSET(0xFF5E10)
#define MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_SET_ASSISTCHARACTERDBS_OFFSET UNITYSDK_OFFSET(0xFF5E20)
#define MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFF5E40)
#define MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFF5E50)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int DetailedAccountInfoDB_TypeDefinitionIndex = 12578;

	class DetailedAccountInfoDB : public Il2CppObject
	{
	public:
		::System::Int64 _AccountId_k__BackingField; // 0x10
		::System::String* _Nickname_k__BackingField; // 0x18
		::System::Int64 _Level_k__BackingField; // 0x20
		::System::String* _ClanName_k__BackingField; // 0x28
		::System::String* _Comment_k__BackingField; // 0x30
		::System::Int64 _FriendCount_k__BackingField; // 0x38
		::System::String* _FriendCode_k__BackingField; // 0x40
		::System::Int64 _RepresentCharacterUniqueId_k__BackingField; // 0x48
		::System::Int64 _CharacterCount_k__BackingField; // 0x50
		Il2CppObject* _LastNormalCampaignClearStageId_k__BackingField; // 0x58
		Il2CppObject* _LastHardCampaignClearStageId_k__BackingField; // 0x68
		Il2CppObject* _ArenaRanking_k__BackingField; // 0x78
		Il2CppObject* _RaidRanking_k__BackingField; // 0x88
		Il2CppObject* _RaidTier_k__BackingField; // 0x98
		Il2CppObject* _EliminateRaidRanking_k__BackingField; // 0xA0
		Il2CppObject* _EliminateRaidTier_k__BackingField; // 0xB0
		Il2CppObject* _MultiFloorRaidClearedDifficulty_k__BackingField; // 0xB8
		::Il2CppArray<::System::Object*>* _AssistCharacterDBs_k__BackingField; // 0xC8

		::System::Int64 get_AccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_GET_ACCOUNTID_OFFSET))(nullptr);
		}

		::System::Void set_AccountId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_SET_ACCOUNTID_OFFSET))(arg, nullptr);
		}

		::System::String* get_Nickname()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_GET_NICKNAME_OFFSET))(nullptr);
		}

		::System::Void set_Nickname(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_SET_NICKNAME_OFFSET))(str, nullptr);
		}

		::System::Int64 get_Level()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Void set_Level(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_SET_LEVEL_OFFSET))(arg, nullptr);
		}

		::System::String* get_ClanName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_GET_CLANNAME_OFFSET))(nullptr);
		}

		::System::Void set_ClanName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_SET_CLANNAME_OFFSET))(str, nullptr);
		}

		::System::String* get_Comment()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_GET_COMMENT_OFFSET))(nullptr);
		}

		::System::Void set_Comment(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_SET_COMMENT_OFFSET))(str, nullptr);
		}

		::System::Int64 get_FriendCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_GET_FRIENDCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_FriendCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_SET_FRIENDCOUNT_OFFSET))(arg, nullptr);
		}

		::System::String* get_FriendCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_GET_FRIENDCODE_OFFSET))(nullptr);
		}

		::System::Void set_FriendCode(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_SET_FRIENDCODE_OFFSET))(str, nullptr);
		}

		::System::Int64 get_RepresentCharacterUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_GET_REPRESENTCHARACTERUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_RepresentCharacterUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_SET_REPRESENTCHARACTERUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CharacterCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_GET_CHARACTERCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_CharacterCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_SET_CHARACTERCOUNT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_LastNormalCampaignClearStageId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_GET_LASTNORMALCAMPAIGNCLEARSTAGEID_OFFSET))(nullptr);
		}

		::System::Void set_LastNormalCampaignClearStageId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_SET_LASTNORMALCAMPAIGNCLEARSTAGEID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_LastHardCampaignClearStageId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_GET_LASTHARDCAMPAIGNCLEARSTAGEID_OFFSET))(nullptr);
		}

		::System::Void set_LastHardCampaignClearStageId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_SET_LASTHARDCAMPAIGNCLEARSTAGEID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ArenaRanking()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_GET_ARENARANKING_OFFSET))(nullptr);
		}

		::System::Void set_ArenaRanking(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_SET_ARENARANKING_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_RaidRanking()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_GET_RAIDRANKING_OFFSET))(nullptr);
		}

		::System::Void set_RaidRanking(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_SET_RAIDRANKING_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_RaidTier()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_GET_RAIDTIER_OFFSET))(nullptr);
		}

		::System::Void set_RaidTier(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_SET_RAIDTIER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_EliminateRaidRanking()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_GET_ELIMINATERAIDRANKING_OFFSET))(nullptr);
		}

		::System::Void set_EliminateRaidRanking(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_SET_ELIMINATERAIDRANKING_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_EliminateRaidTier()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_GET_ELIMINATERAIDTIER_OFFSET))(nullptr);
		}

		::System::Void set_EliminateRaidTier(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_SET_ELIMINATERAIDTIER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_MultiFloorRaidClearedDifficulty()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_GET_MULTIFLOORRAIDCLEAREDDIFFICULTY_OFFSET))(nullptr);
		}

		::System::Void set_MultiFloorRaidClearedDifficulty(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_SET_MULTIFLOORRAIDCLEAREDDIFFICULTY_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_AssistCharacterDBs()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_GET_ASSISTCHARACTERDBS_OFFSET))(nullptr);
		}

		::System::Void set_AssistCharacterDBs(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_SET_ASSISTCHARACTERDBS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::DBModel::AccountDB* arg, ::System::String* str, ::System::Int32 arg2, ::System::String* str2, Il2CppObject* arg3, Il2CppObject* arg4, Il2CppObject* arg5, Il2CppObject* arg6, Il2CppObject* arg7, Il2CppObject* arg8, Il2CppObject* arg9, Il2CppObject* arg10, Il2CppObject* arg11)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AccountDB*, ::System::String*, ::System::Int32, ::System::String*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_DETAILEDACCOUNTINFODB_.CTOR_OFFSET))(arg, str, arg2, str2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, nullptr);
		}

	};
}


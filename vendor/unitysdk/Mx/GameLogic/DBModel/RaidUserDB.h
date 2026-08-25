#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class AccountAttachmentDB; }
namespace MX::GameLogic::DBModel { class RaidUserDB; }

#define MX_GAMELOGIC_DBMODEL_RAIDUSERDB_SET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x1008320)
#define MX_GAMELOGIC_DBMODEL_RAIDUSERDB_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1008330)
#define MX_GAMELOGIC_DBMODEL_RAIDUSERDB_GET_REPRESENTCHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1008340)
#define MX_GAMELOGIC_DBMODEL_RAIDUSERDB_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1008350)
#define MX_GAMELOGIC_DBMODEL_RAIDUSERDB_GET_RANK_OFFSET UNITYSDK_OFFSET(0x1008360)
#define MX_GAMELOGIC_DBMODEL_RAIDUSERDB_SET_TIER_OFFSET UNITYSDK_OFFSET(0x1008370)
#define MX_GAMELOGIC_DBMODEL_RAIDUSERDB_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x1008380)
#define MX_GAMELOGIC_DBMODEL_RAIDUSERDB_GET_REPRESENTCHARACTERCOSTUMEID_OFFSET UNITYSDK_OFFSET(0x1008390)
#define MX_GAMELOGIC_DBMODEL_RAIDUSERDB_SET_BESTRANKINGPOINTDETAIL_OFFSET UNITYSDK_OFFSET(0x10083A0)
#define MX_GAMELOGIC_DBMODEL_RAIDUSERDB_SYSTEM.ICLONEABLE.CLONE_OFFSET UNITYSDK_OFFSET(0x10083B0)
#define MX_GAMELOGIC_DBMODEL_RAIDUSERDB_SET_BESTRANKINGPOINT_OFFSET UNITYSDK_OFFSET(0x10083D0)
#define MX_GAMELOGIC_DBMODEL_RAIDUSERDB_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x10083E0)
#define MX_GAMELOGIC_DBMODEL_RAIDUSERDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x10083F0)
#define MX_GAMELOGIC_DBMODEL_RAIDUSERDB_GET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x1008400)
#define MX_GAMELOGIC_DBMODEL_RAIDUSERDB_CLONE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMELOGIC_DBMODEL_RAIDUSERDB_SET_ACCOUNTATTACHMENTDB_OFFSET UNITYSDK_OFFSET(0x1008410)
#define MX_GAMELOGIC_DBMODEL_RAIDUSERDB_GET_BESTRANKINGPOINTDETAIL_OFFSET UNITYSDK_OFFSET(0x1008420)
#define MX_GAMELOGIC_DBMODEL_RAIDUSERDB_GET_TIER_OFFSET UNITYSDK_OFFSET(0x1008430)
#define MX_GAMELOGIC_DBMODEL_RAIDUSERDB_GET_ACCOUNTATTACHMENTDB_OFFSET UNITYSDK_OFFSET(0x1008440)
#define MX_GAMELOGIC_DBMODEL_RAIDUSERDB_SET_REPRESENTCHARACTERCOSTUMEID_OFFSET UNITYSDK_OFFSET(0x1008450)
#define MX_GAMELOGIC_DBMODEL_RAIDUSERDB_SET_RANK_OFFSET UNITYSDK_OFFSET(0x1008460)
#define MX_GAMELOGIC_DBMODEL_RAIDUSERDB_GET_BESTRANKINGPOINT_OFFSET UNITYSDK_OFFSET(0x1008470)
#define MX_GAMELOGIC_DBMODEL_RAIDUSERDB_SET_REPRESENTCHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1008480)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int RaidUserDB_TypeDefinitionIndex = 12693;

	class RaidUserDB : public Il2CppObject
	{
	public:
		::System::Int64 _AccountId_k__BackingField; // 0x10
		::System::Int64 _RepresentCharacterUniqueId_k__BackingField; // 0x18
		::System::Int64 _RepresentCharacterCostumeId_k__BackingField; // 0x20
		::System::Int64 _Level_k__BackingField; // 0x28
		::System::String* _Nickname_k__BackingField; // 0x30
		::System::Int32 _Tier_k__BackingField; // 0x38
		::System::Int64 _Rank_k__BackingField; // 0x40
		::System::Int64 _BestRankingPoint_k__BackingField; // 0x48
		::System::Double _BestRankingPointDetail_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::AccountAttachmentDB* _AccountAttachmentDB_k__BackingField; // 0x58

		::System::Void set_Nickname(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDUSERDB_SET_NICKNAME_OFFSET))(str, nullptr);
		}

		::System::Void set_Level(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDUSERDB_SET_LEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RepresentCharacterUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDUSERDB_GET_REPRESENTCHARACTERUNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_Level()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDUSERDB_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Int64 get_Rank()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDUSERDB_GET_RANK_OFFSET))(nullptr);
		}

		::System::Void set_Tier(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDUSERDB_SET_TIER_OFFSET))(arg, nullptr);
		}

		::System::Void set_AccountId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDUSERDB_SET_ACCOUNTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RepresentCharacterCostumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDUSERDB_GET_REPRESENTCHARACTERCOSTUMEID_OFFSET))(nullptr);
		}

		::System::Void set_BestRankingPointDetail(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDUSERDB_SET_BESTRANKINGPOINTDETAIL_OFFSET))(arg, nullptr);
		}

		::System::Object* System.ICloneable.Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDUSERDB_SYSTEM.ICLONEABLE.CLONE_OFFSET))(nullptr);
		}

		::System::Void set_BestRankingPoint(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDUSERDB_SET_BESTRANKINGPOINT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDUSERDB_GET_ACCOUNTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDUSERDB_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_Nickname()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDUSERDB_GET_NICKNAME_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::RaidUserDB* Clone()
		{
			return ((::MX::GameLogic::DBModel::RaidUserDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDUSERDB_CLONE_OFFSET))(nullptr);
		}

		::System::Void set_AccountAttachmentDB(::MX::GameLogic::DBModel::AccountAttachmentDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AccountAttachmentDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDUSERDB_SET_ACCOUNTATTACHMENTDB_OFFSET))(arg, nullptr);
		}

		::System::Double get_BestRankingPointDetail()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDUSERDB_GET_BESTRANKINGPOINTDETAIL_OFFSET))(nullptr);
		}

		::System::Int32 get_Tier()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDUSERDB_GET_TIER_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::AccountAttachmentDB* get_AccountAttachmentDB()
		{
			return ((::MX::GameLogic::DBModel::AccountAttachmentDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDUSERDB_GET_ACCOUNTATTACHMENTDB_OFFSET))(nullptr);
		}

		::System::Void set_RepresentCharacterCostumeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDUSERDB_SET_REPRESENTCHARACTERCOSTUMEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_Rank(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDUSERDB_SET_RANK_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_BestRankingPoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDUSERDB_GET_BESTRANKINGPOINT_OFFSET))(nullptr);
		}

		::System::Void set_RepresentCharacterUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDUSERDB_SET_REPRESENTCHARACTERUNIQUEID_OFFSET))(arg, nullptr);
		}

	};
}


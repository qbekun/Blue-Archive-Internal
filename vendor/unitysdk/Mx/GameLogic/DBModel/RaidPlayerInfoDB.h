#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_RAIDPLAYERINFODB_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x1009DA0)
#define MX_GAMELOGIC_DBMODEL_RAIDPLAYERINFODB_SET_RAIDSERVERID_OFFSET UNITYSDK_OFFSET(0x1009DB0)
#define MX_GAMELOGIC_DBMODEL_RAIDPLAYERINFODB_SET_DAMAGEAMOUNT_OFFSET UNITYSDK_OFFSET(0x1009DC0)
#define MX_GAMELOGIC_DBMODEL_RAIDPLAYERINFODB_SET_RAIDPLAYCOUNT_OFFSET UNITYSDK_OFFSET(0x1009DD0)
#define MX_GAMELOGIC_DBMODEL_RAIDPLAYERINFODB_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1009DE0)
#define MX_GAMELOGIC_DBMODEL_RAIDPLAYERINFODB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1009DF0)
#define MX_GAMELOGIC_DBMODEL_RAIDPLAYERINFODB_SET_COSTUMEID_OFFSET UNITYSDK_OFFSET(0x1009E00)
#define MX_GAMELOGIC_DBMODEL_RAIDPLAYERINFODB_GET_COSTUMEID_OFFSET UNITYSDK_OFFSET(0x1009E10)
#define MX_GAMELOGIC_DBMODEL_RAIDPLAYERINFODB_GET_JOINDATE_OFFSET UNITYSDK_OFFSET(0x1009E20)
#define MX_GAMELOGIC_DBMODEL_RAIDPLAYERINFODB_GET_ACCOUNTLEVEL_OFFSET UNITYSDK_OFFSET(0x1009E30)
#define MX_GAMELOGIC_DBMODEL_RAIDPLAYERINFODB_SET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x1009E40)
#define MX_GAMELOGIC_DBMODEL_RAIDPLAYERINFODB_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x1009E50)
#define MX_GAMELOGIC_DBMODEL_RAIDPLAYERINFODB_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1009E60)
#define MX_GAMELOGIC_DBMODEL_RAIDPLAYERINFODB_GET_RAIDPLAYCOUNT_OFFSET UNITYSDK_OFFSET(0x1009E70)
#define MX_GAMELOGIC_DBMODEL_RAIDPLAYERINFODB_SET_RAIDENDREWARDFLAG_OFFSET UNITYSDK_OFFSET(0x1009E80)
#define MX_GAMELOGIC_DBMODEL_RAIDPLAYERINFODB_SET_ACCOUNTLEVEL_OFFSET UNITYSDK_OFFSET(0x1009E90)
#define MX_GAMELOGIC_DBMODEL_RAIDPLAYERINFODB_GET_DAMAGEAMOUNT_OFFSET UNITYSDK_OFFSET(0x1009EA0)
#define MX_GAMELOGIC_DBMODEL_RAIDPLAYERINFODB_GET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x1009EB0)
#define MX_GAMELOGIC_DBMODEL_RAIDPLAYERINFODB_SET_JOINDATE_OFFSET UNITYSDK_OFFSET(0x1009EC0)
#define MX_GAMELOGIC_DBMODEL_RAIDPLAYERINFODB_GET_RAIDENDREWARDFLAG_OFFSET UNITYSDK_OFFSET(0x1009ED0)
#define MX_GAMELOGIC_DBMODEL_RAIDPLAYERINFODB_GET_RAIDSERVERID_OFFSET UNITYSDK_OFFSET(0x1009EE0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int RaidPlayerInfoDB_TypeDefinitionIndex = 12706;

	class RaidPlayerInfoDB : public Il2CppObject
	{
	public:
		::System::Int64 _RaidServerId_k__BackingField; // 0x10
		::System::Int64 _AccountId_k__BackingField; // 0x18
		::System::DateTime* _JoinDate_k__BackingField; // 0x20
		::System::Int64 _DamageAmount_k__BackingField; // 0x28
		::System::Int32 _RaidEndRewardFlag_k__BackingField; // 0x30
		::System::Int32 _RaidPlayCount_k__BackingField; // 0x34
		::System::String* _Nickname_k__BackingField; // 0x38
		::System::Int64 _CharacterId_k__BackingField; // 0x40
		::System::Int64 _CostumeId_k__BackingField; // 0x48
		Il2CppObject* _AccountLevel_k__BackingField; // 0x50

		::System::Void set_AccountId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDPLAYERINFODB_SET_ACCOUNTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_RaidServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDPLAYERINFODB_SET_RAIDSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void set_DamageAmount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDPLAYERINFODB_SET_DAMAGEAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_RaidPlayCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDPLAYERINFODB_SET_RAIDPLAYCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_CharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDPLAYERINFODB_SET_CHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDPLAYERINFODB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CostumeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDPLAYERINFODB_SET_COSTUMEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CostumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDPLAYERINFODB_GET_COSTUMEID_OFFSET))(nullptr);
		}

		::System::DateTime* get_JoinDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDPLAYERINFODB_GET_JOINDATE_OFFSET))(nullptr);
		}

		Il2CppObject* get_AccountLevel()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDPLAYERINFODB_GET_ACCOUNTLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_Nickname(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDPLAYERINFODB_SET_NICKNAME_OFFSET))(str, nullptr);
		}

		::System::Int64 get_AccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDPLAYERINFODB_GET_ACCOUNTID_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDPLAYERINFODB_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Int32 get_RaidPlayCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDPLAYERINFODB_GET_RAIDPLAYCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_RaidEndRewardFlag(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDPLAYERINFODB_SET_RAIDENDREWARDFLAG_OFFSET))(arg, nullptr);
		}

		::System::Void set_AccountLevel(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDPLAYERINFODB_SET_ACCOUNTLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_DamageAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDPLAYERINFODB_GET_DAMAGEAMOUNT_OFFSET))(nullptr);
		}

		::System::String* get_Nickname()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDPLAYERINFODB_GET_NICKNAME_OFFSET))(nullptr);
		}

		::System::Void set_JoinDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDPLAYERINFODB_SET_JOINDATE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RaidEndRewardFlag()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDPLAYERINFODB_GET_RAIDENDREWARDFLAG_OFFSET))(nullptr);
		}

		::System::Int64 get_RaidServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDPLAYERINFODB_GET_RAIDSERVERID_OFFSET))(nullptr);
		}

	};
}


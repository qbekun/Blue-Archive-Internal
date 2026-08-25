#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class AccountState; }
namespace MX::GameLogic::DBModel { class AccountDB; }
namespace FlatData { class TargetGroup; }

#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0xFE16E0)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_SET_SERVERID_OFFSET UNITYSDK_OFFSET(0xFE16F0)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_GET_NICKNAME_OFFSET UNITYSDK_OFFSET(0xFE1700)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_SET_NICKNAME_OFFSET UNITYSDK_OFFSET(0xFE1710)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_GET_CALLNAME_OFFSET UNITYSDK_OFFSET(0xFE1720)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_SET_CALLNAME_OFFSET UNITYSDK_OFFSET(0xFE1730)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_GET_CALLNAMEKATAKANA_OFFSET UNITYSDK_OFFSET(0xFE1740)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_SET_CALLNAMEKATAKANA_OFFSET UNITYSDK_OFFSET(0xFE1750)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_GET_CALLNAMEKOREAN_OFFSET UNITYSDK_OFFSET(0xFE1760)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_SET_CALLNAMEKOREAN_OFFSET UNITYSDK_OFFSET(0xFE1770)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_GET_DEVID_OFFSET UNITYSDK_OFFSET(0xFE1780)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_SET_DEVID_OFFSET UNITYSDK_OFFSET(0xFE1790)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_GET_STATE_OFFSET UNITYSDK_OFFSET(0xFE17A0)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_SET_STATE_OFFSET UNITYSDK_OFFSET(0xFE17B0)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xFE17C0)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xFE17D0)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_GET_EXP_OFFSET UNITYSDK_OFFSET(0xFE17E0)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_SET_EXP_OFFSET UNITYSDK_OFFSET(0xFE17F0)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_GET_COMMENT_OFFSET UNITYSDK_OFFSET(0xFE1800)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_SET_COMMENT_OFFSET UNITYSDK_OFFSET(0xFE1810)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_GET_LOBBYMODE_OFFSET UNITYSDK_OFFSET(0xFE1820)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_SET_LOBBYMODE_OFFSET UNITYSDK_OFFSET(0xFE1830)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_GET_REPRESENTCHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0xFE1840)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_SET_REPRESENTCHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0xFE1850)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_GET_MEMORYLOBBYUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFE1860)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_SET_MEMORYLOBBYUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFE1870)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_GET_LASTCONNECTTIME_OFFSET UNITYSDK_OFFSET(0xFE1880)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_SET_LASTCONNECTTIME_OFFSET UNITYSDK_OFFSET(0xFE1890)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_GET_BIRTHDAY_OFFSET UNITYSDK_OFFSET(0xFE18A0)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_SET_BIRTHDAY_OFFSET UNITYSDK_OFFSET(0xFE18B0)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_GET_CALLNAMEUPDATETIME_OFFSET UNITYSDK_OFFSET(0xFE18C0)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_SET_CALLNAMEUPDATETIME_OFFSET UNITYSDK_OFFSET(0xFE18D0)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_GET_PUBLISHERACCOUNTID_OFFSET UNITYSDK_OFFSET(0xFE18E0)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_SET_PUBLISHERACCOUNTID_OFFSET UNITYSDK_OFFSET(0xFE18F0)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_GET_RETENTIONDAYS_OFFSET UNITYSDK_OFFSET(0xFE1900)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_SET_RETENTIONDAYS_OFFSET UNITYSDK_OFFSET(0xFE1910)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_GET_VIPLEVEL_OFFSET UNITYSDK_OFFSET(0xFE1920)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_SET_VIPLEVEL_OFFSET UNITYSDK_OFFSET(0xFE1930)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_GET_CREATEDATE_OFFSET UNITYSDK_OFFSET(0xFE1940)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_SET_CREATEDATE_OFFSET UNITYSDK_OFFSET(0xFE1950)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_GET_UNREADMAILCOUNT_OFFSET UNITYSDK_OFFSET(0xFE1960)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_SET_UNREADMAILCOUNT_OFFSET UNITYSDK_OFFSET(0xFE1970)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_GET_LINKREWARDDATE_OFFSET UNITYSDK_OFFSET(0xFE1980)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_SET_LINKREWARDDATE_OFFSET UNITYSDK_OFFSET(0xFE1990)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_GET_LASTRETURNINGDATE_OFFSET UNITYSDK_OFFSET(0xFE19A0)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_SET_LASTRETURNINGDATE_OFFSET UNITYSDK_OFFSET(0xFE19B0)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_EXPTRANSACTIONCLONE_OFFSET UNITYSDK_OFFSET(0xFE19C0)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_ISLEVELOREXPHIGHERTHAN_OFFSET UNITYSDK_OFFSET(0xFE1A40)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_ISSTATEMATCH_OFFSET UNITYSDK_OFFSET(0xFE1A60)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_ISSTATEMATCH_OFFSET UNITYSDK_OFFSET(0xFE1B40)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE1A30)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int AccountDB_TypeDefinitionIndex = 12473;

	class AccountDB : public Il2CppObject
	{
	public:
		::System::Int64 _ServerId_k__BackingField; // 0x10
		::System::String* _Nickname_k__BackingField; // 0x18
		::System::String* _CallName_k__BackingField; // 0x20
		::System::String* _CallNameKatakana_k__BackingField; // 0x28
		::System::String* _CallNameKorean_k__BackingField; // 0x30
		::System::String* _DevId_k__BackingField; // 0x38
		::FlatData::AccountState* _State_k__BackingField; // 0x40
		::System::Int32 _Level_k__BackingField; // 0x44
		::System::Int64 _Exp_k__BackingField; // 0x48
		::System::String* _Comment_k__BackingField; // 0x50
		::System::Int32 _LobbyMode_k__BackingField; // 0x58
		::System::Int64 _RepresentCharacterServerId_k__BackingField; // 0x60
		::System::Int64 _MemoryLobbyUniqueId_k__BackingField; // 0x68
		::System::DateTime* _LastConnectTime_k__BackingField; // 0x70
		::System::DateTime* _BirthDay_k__BackingField; // 0x78
		::System::DateTime* _CallNameUpdateTime_k__BackingField; // 0x80
		::System::Int64 _PublisherAccountId_k__BackingField; // 0x88
		Il2CppObject* _RetentionDays_k__BackingField; // 0x90
		Il2CppObject* _VIPLevel_k__BackingField; // 0x98
		::System::DateTime* _CreateDate_k__BackingField; // 0xA0
		Il2CppObject* _UnReadMailCount_k__BackingField; // 0xA8
		Il2CppObject* _LinkRewardDate_k__BackingField; // 0xB0
		Il2CppObject* _LastReturningDate_k__BackingField; // 0xC0

		::System::Int64 get_ServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_GET_SERVERID_OFFSET))(nullptr);
		}

		::System::Void set_ServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_SET_SERVERID_OFFSET))(arg, nullptr);
		}

		::System::String* get_Nickname()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_GET_NICKNAME_OFFSET))(nullptr);
		}

		::System::Void set_Nickname(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_SET_NICKNAME_OFFSET))(str, nullptr);
		}

		::System::String* get_CallName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_GET_CALLNAME_OFFSET))(nullptr);
		}

		::System::Void set_CallName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_SET_CALLNAME_OFFSET))(str, nullptr);
		}

		::System::String* get_CallNameKatakana()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_GET_CALLNAMEKATAKANA_OFFSET))(nullptr);
		}

		::System::Void set_CallNameKatakana(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_SET_CALLNAMEKATAKANA_OFFSET))(str, nullptr);
		}

		::System::String* get_CallNameKorean()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_GET_CALLNAMEKOREAN_OFFSET))(nullptr);
		}

		::System::Void set_CallNameKorean(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_SET_CALLNAMEKOREAN_OFFSET))(str, nullptr);
		}

		::System::String* get_DevId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_GET_DEVID_OFFSET))(nullptr);
		}

		::System::Void set_DevId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_SET_DEVID_OFFSET))(str, nullptr);
		}

		::FlatData::AccountState* get_State()
		{
			return ((::FlatData::AccountState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_GET_STATE_OFFSET))(nullptr);
		}

		::System::Void set_State(::FlatData::AccountState* arg)
		{
			((::System::Void(*)(::FlatData::AccountState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_SET_STATE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Void set_Level(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_SET_LEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Exp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_GET_EXP_OFFSET))(nullptr);
		}

		::System::Void set_Exp(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_SET_EXP_OFFSET))(arg, nullptr);
		}

		::System::String* get_Comment()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_GET_COMMENT_OFFSET))(nullptr);
		}

		::System::Void set_Comment(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_SET_COMMENT_OFFSET))(str, nullptr);
		}

		::System::Int32 get_LobbyMode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_GET_LOBBYMODE_OFFSET))(nullptr);
		}

		::System::Void set_LobbyMode(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_SET_LOBBYMODE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RepresentCharacterServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_GET_REPRESENTCHARACTERSERVERID_OFFSET))(nullptr);
		}

		::System::Void set_RepresentCharacterServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_SET_REPRESENTCHARACTERSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MemoryLobbyUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_GET_MEMORYLOBBYUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_MemoryLobbyUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_SET_MEMORYLOBBYUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_LastConnectTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_GET_LASTCONNECTTIME_OFFSET))(nullptr);
		}

		::System::Void set_LastConnectTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_SET_LASTCONNECTTIME_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_BirthDay()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_GET_BIRTHDAY_OFFSET))(nullptr);
		}

		::System::Void set_BirthDay(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_SET_BIRTHDAY_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_CallNameUpdateTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_GET_CALLNAMEUPDATETIME_OFFSET))(nullptr);
		}

		::System::Void set_CallNameUpdateTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_SET_CALLNAMEUPDATETIME_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_PublisherAccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_GET_PUBLISHERACCOUNTID_OFFSET))(nullptr);
		}

		::System::Void set_PublisherAccountId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_SET_PUBLISHERACCOUNTID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_RetentionDays()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_GET_RETENTIONDAYS_OFFSET))(nullptr);
		}

		::System::Void set_RetentionDays(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_SET_RETENTIONDAYS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_VIPLevel()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_GET_VIPLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_VIPLevel(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_SET_VIPLEVEL_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_CreateDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_GET_CREATEDATE_OFFSET))(nullptr);
		}

		::System::Void set_CreateDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_SET_CREATEDATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_UnReadMailCount()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_GET_UNREADMAILCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_UnReadMailCount(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_SET_UNREADMAILCOUNT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_LinkRewardDate()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_GET_LINKREWARDDATE_OFFSET))(nullptr);
		}

		::System::Void set_LinkRewardDate(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_SET_LINKREWARDDATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_LastReturningDate()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_GET_LASTRETURNINGDATE_OFFSET))(nullptr);
		}

		::System::Void set_LastReturningDate(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_SET_LASTRETURNINGDATE_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::AccountDB* ExpTransactionClone()
		{
			return ((::MX::GameLogic::DBModel::AccountDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_EXPTRANSACTIONCLONE_OFFSET))(nullptr);
		}

		::System::Boolean IsLevelOrExpHigherThan(::MX::GameLogic::DBModel::AccountDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::AccountDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_ISLEVELOREXPHIGHERTHAN_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsStateMatch(::FlatData::TargetGroup* arg, ::FlatData::AccountState* arg2)
		{
			return ((::System::Boolean(*)(::FlatData::TargetGroup*, ::FlatData::AccountState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_ISSTATEMATCH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsStateMatch(::FlatData::TargetGroup* arg)
		{
			return ((::System::Boolean(*)(::FlatData::TargetGroup*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_ISSTATEMATCH_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTDB_.CTOR_OFFSET))(nullptr);
		}

	};
}


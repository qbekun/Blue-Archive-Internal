#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class SessionKey; }
namespace FlatData { class AccountState; }
namespace MX::GameLogic::DBModel { class AccountDB; }
namespace MX::GameLogic::DBModel { class AccountRestrictionsDB; }
namespace MX::GameLogic::DBModel { class OptionDB; }
namespace MX::GameLogic::DBModel { class WelcomeCampaignDB; }

#define ACCOUNTINFO_GET_FRIENDCODE_OFFSET UNITYSDK_OFFSET(0x181D950)
#define ACCOUNTINFO_GET_FRIENDCOUNT_OFFSET UNITYSDK_OFFSET(0x181D960)
#define ACCOUNTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x181D970)
#define ACCOUNTINFO_SET_RECEIVEDLEVELREWARDIDS_OFFSET UNITYSDK_OFFSET(0x181DA30)
#define ACCOUNTINFO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x181DA50)
#define ACCOUNTINFO_SET_EXP_OFFSET UNITYSDK_OFFSET(0x181DC00)
#define ACCOUNTINFO_GET_WELCOMECAMPAIGNINFO_OFFSET UNITYSDK_OFFSET(0x181DC10)
#define ACCOUNTINFO_GET_ACCOUNTSERVERID_OFFSET UNITYSDK_OFFSET(0x181DC20)
#define ACCOUNTINFO_SET_FRIENDCOUNT_OFFSET UNITYSDK_OFFSET(0x181DC30)
#define ACCOUNTINFO_GET_ISSUEALERTINFODBLIST_OFFSET UNITYSDK_OFFSET(0x181DC40)
#define ACCOUNTINFO_SET_MEMORYLOBBYID_OFFSET UNITYSDK_OFFSET(0x181DC50)
#define ACCOUNTINFO_GET_LOBBYMODE_OFFSET UNITYSDK_OFFSET(0x181DC60)
#define ACCOUNTINFO_GET_CALLNAMEKOREAN_OFFSET UNITYSDK_OFFSET(0x181DC80)
#define ACCOUNTINFO_GET_CALLNAMEKATAKANA_OFFSET UNITYSDK_OFFSET(0x181DC90)
#define ACCOUNTINFO_GET_REPRESENTCHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0x181DCA0)
#define ACCOUNTINFO_GET_EXP_OFFSET UNITYSDK_OFFSET(0x181DCB0)
#define ACCOUNTINFO_SET_STATE_OFFSET UNITYSDK_OFFSET(0x181DCC0)
#define ACCOUNTINFO_GET_STATE_OFFSET UNITYSDK_OFFSET(0x181DCD0)
#define ACCOUNTINFO_GET_SESSIONKEY_OFFSET UNITYSDK_OFFSET(0x181DCE0)
#define ACCOUNTINFO_GETCURRENTEXPRATIO_OFFSET UNITYSDK_OFFSET(0x181DCF0)
#define ACCOUNTINFO_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x181DDA0)
#define ACCOUNTINFO_GET_REPRESENTCHARACTERCOSTUMEID_OFFSET UNITYSDK_OFFSET(0x181DDB0)
#define ACCOUNTINFO_GET_TUTORIALCOMPLETIONIDS_OFFSET UNITYSDK_OFFSET(0x181DE40)
#define ACCOUNTINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0x181DE50)
#define ACCOUNTINFO_SYNCISSUEALERTINFOS_OFFSET UNITYSDK_OFFSET(0x181DE60)
#define ACCOUNTINFO_SET_CALLNAME_OFFSET UNITYSDK_OFFSET(0x181DEF0)
#define ACCOUNTINFO_SYNCACCOUNTRESTRICTIONS_OFFSET UNITYSDK_OFFSET(0x181DF00)
#define ACCOUNTINFO_SET_REPRESENTCHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0x181DF20)
#define ACCOUNTINFO_GET_DEVID_OFFSET UNITYSDK_OFFSET(0x181DF30)
#define ACCOUNTINFO_ISMAXLEVELEXP_OFFSET UNITYSDK_OFFSET(0x181DF40)
#define ACCOUNTINFO_GET_ISARENAANONYMOUS_OFFSET UNITYSDK_OFFSET(0x181DFE0)
#define ACCOUNTINFO_GETCURRENTEXPSTRING_OFFSET UNITYSDK_OFFSET(0x181DFF0)
#define ACCOUNTINFO_SET_LINKREWARDDATE_OFFSET UNITYSDK_OFFSET(0x181E110)
#define ACCOUNTINFO_SET_CALLNAMEKOREAN_OFFSET UNITYSDK_OFFSET(0x181E120)
#define ACCOUNTINFO_SET_CALLNAMEKATAKANA_OFFSET UNITYSDK_OFFSET(0x181E130)
#define ACCOUNTINFO_GETVOICESETCALLNAME_OFFSET UNITYSDK_OFFSET(0x181E140)
#define ACCOUNTINFO_GET_ACCOUNTRESTRICTIONSDB_OFFSET UNITYSDK_OFFSET(0x181E200)
#define ACCOUNTINFO_SET_ACCOUNTRESTRICTIONSDB_OFFSET UNITYSDK_OFFSET(0x181E210)
#define ACCOUNTINFO_SYNCACCOUNTINFO_OFFSET UNITYSDK_OFFSET(0x181E230)
#define ACCOUNTINFO_SET_ACCOUNTSERVERID_OFFSET UNITYSDK_OFFSET(0x181E600)
#define ACCOUNTINFO_SET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x181E610)
#define ACCOUNTINFO_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x181E620)
#define ACCOUNTINFO_SET_ISSUEALERTINFODBLIST_OFFSET UNITYSDK_OFFSET(0x181E630)
#define ACCOUNTINFO_SET_ISARENAANONYMOUS_OFFSET UNITYSDK_OFFSET(0x181E650)
#define ACCOUNTINFO_SET_BIRTHDAY_OFFSET UNITYSDK_OFFSET(0x181E660)
#define ACCOUNTINFO_GET_BIRTHDAY_OFFSET UNITYSDK_OFFSET(0x181E670)
#define ACCOUNTINFO_GET_CALLNAME_OFFSET UNITYSDK_OFFSET(0x181E680)
#define ACCOUNTINFO_CHECKCOMMENTREPRESENTATIVETOSYNC_OFFSET UNITYSDK_OFFSET(0x181E690)
#define ACCOUNTINFO_SET_SESSIONKEY_OFFSET UNITYSDK_OFFSET(0x181E980)
#define ACCOUNTINFO_SET_TUTORIALCOMPLETIONIDS_OFFSET UNITYSDK_OFFSET(0x181E990)
#define ACCOUNTINFO_SET_DEVID_OFFSET UNITYSDK_OFFSET(0x181E9B0)
#define ACCOUNTINFO_SET_FRIENDCODE_OFFSET UNITYSDK_OFFSET(0x181E9C0)
#define ACCOUNTINFO_SET_COMMENT_OFFSET UNITYSDK_OFFSET(0x181E9E0)
#define ACCOUNTINFO_SET_WELCOMECAMPAIGNINFO_OFFSET UNITYSDK_OFFSET(0x181E9F0)
#define ACCOUNTINFO_GET_MEMORYLOBBYID_OFFSET UNITYSDK_OFFSET(0x181EA10)
#define ACCOUNTINFO_GET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x181EA20)
#define ACCOUNTINFO_GET_COMMENT_OFFSET UNITYSDK_OFFSET(0x181EA30)
#define ACCOUNTINFO_GET_LINKREWARDDATE_OFFSET UNITYSDK_OFFSET(0x181EA40)
#define ACCOUNTINFO_GET_RECEIVEDLEVELREWARDIDS_OFFSET UNITYSDK_OFFSET(0x181EA50)
#define ACCOUNTINFO_GET_REPRESENTCHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x181EA60)

	inline static constexpr unsigned int AccountInfo_TypeDefinitionIndex = 1281;

	class AccountInfo : public Il2CppObject
	{
	public:
		::System::Int64 _AccountServerId_k__BackingField; // 0x10
		::MX::GameLogic::DBModel::SessionKey* _SessionKey_k__BackingField; // 0x18
		::System::String* _Nickname_k__BackingField; // 0x20
		::System::String* _Callname_k__BackingField; // 0x28
		::System::String* _CallNameKatakana_k__BackingField; // 0x30
		::System::String* _CallNameKorean_k__BackingField; // 0x38
		::System::DateTime* _BirthDay_k__BackingField; // 0x40
		::System::String* _DevId_k__BackingField; // 0x48
		::FlatData::AccountState* _State_k__BackingField; // 0x50
		::System::Int32 _Level_k__BackingField; // 0x54
		::System::Int64 _Exp_k__BackingField; // 0x58
		::System::String* _Comment_k__BackingField; // 0x60
		::System::Int64 _RepresentCharacterServerId_k__BackingField; // 0x68
		::System::Int64 _MemoryLobbyId_k__BackingField; // 0x70
		Il2CppObject* _LinkRewardDate_k__BackingField; // 0x78
		Il2CppObject* _TutorialCompletionIds_k__BackingField; // 0x88
		Il2CppObject* _ReceivedLevelRewardIds_k__BackingField; // 0x90
		::System::Int64 _FriendCount_k__BackingField; // 0x98
		::System::String* _FriendCode_k__BackingField; // 0xA0
		::System::Boolean _IsArenaAnonymous_k__BackingField; // 0xA8
		::MX::GameLogic::DBModel::AccountDB* AccountDB; // 0xB0
		::MX::GameLogic::DBModel::AccountRestrictionsDB* _AccountRestrictionsDB_k__BackingField; // 0xB8
		Il2CppObject* _IssueAlertInfoDBList_k__BackingField; // 0xC0
		::MX::GameLogic::DBModel::OptionDB* OptionDB; // 0xC8
		::MX::GameLogic::DBModel::WelcomeCampaignDB* _WelcomeCampaignInfo_k__BackingField; // 0xD0

		::System::String* get_FriendCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_GET_FRIENDCODE_OFFSET))(nullptr);
		}

		::System::Int64 get_FriendCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_GET_FRIENDCOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ReceivedLevelRewardIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_SET_RECEIVEDLEVELREWARDIDS_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void set_Exp(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_SET_EXP_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::WelcomeCampaignDB* get_WelcomeCampaignInfo()
		{
			return ((::MX::GameLogic::DBModel::WelcomeCampaignDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_GET_WELCOMECAMPAIGNINFO_OFFSET))(nullptr);
		}

		::System::Int64 get_AccountServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_GET_ACCOUNTSERVERID_OFFSET))(nullptr);
		}

		::System::Void set_FriendCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_SET_FRIENDCOUNT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_IssueAlertInfoDBList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_GET_ISSUEALERTINFODBLIST_OFFSET))(nullptr);
		}

		::System::Void set_MemoryLobbyId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_SET_MEMORYLOBBYID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_LobbyMode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_GET_LOBBYMODE_OFFSET))(nullptr);
		}

		::System::String* get_CallNameKorean()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_GET_CALLNAMEKOREAN_OFFSET))(nullptr);
		}

		::System::String* get_CallNameKatakana()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_GET_CALLNAMEKATAKANA_OFFSET))(nullptr);
		}

		::System::Int64 get_RepresentCharacterServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_GET_REPRESENTCHARACTERSERVERID_OFFSET))(nullptr);
		}

		::System::Int64 get_Exp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_GET_EXP_OFFSET))(nullptr);
		}

		::System::Void set_State(::FlatData::AccountState* arg)
		{
			((::System::Void(*)(::FlatData::AccountState*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_SET_STATE_OFFSET))(arg, nullptr);
		}

		::FlatData::AccountState* get_State()
		{
			return ((::FlatData::AccountState*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_GET_STATE_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::SessionKey* get_SessionKey()
		{
			return ((::MX::GameLogic::DBModel::SessionKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_GET_SESSIONKEY_OFFSET))(nullptr);
		}

		::System::Single GetCurrentExpRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_GETCURRENTEXPRATIO_OFFSET))(nullptr);
		}

		::System::Int32 get_Level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Int64 get_RepresentCharacterCostumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_GET_REPRESENTCHARACTERCOSTUMEID_OFFSET))(nullptr);
		}

		Il2CppObject* get_TutorialCompletionIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_GET_TUTORIALCOMPLETIONIDS_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_CLEAR_OFFSET))(nullptr);
		}

		::System::Void SyncIssueAlertInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_SYNCISSUEALERTINFOS_OFFSET))(arg, nullptr);
		}

		::System::Void set_Callname(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_SET_CALLNAME_OFFSET))(str, nullptr);
		}

		::System::Void SyncAccountRestrictions(::MX::GameLogic::DBModel::AccountRestrictionsDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AccountRestrictionsDB*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_SYNCACCOUNTRESTRICTIONS_OFFSET))(arg, nullptr);
		}

		::System::Void set_RepresentCharacterServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_SET_REPRESENTCHARACTERSERVERID_OFFSET))(arg, nullptr);
		}

		::System::String* get_DevId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_GET_DEVID_OFFSET))(nullptr);
		}

		::System::Boolean IsMaxLevelExp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_ISMAXLEVELEXP_OFFSET))(nullptr);
		}

		::System::Boolean get_IsArenaAnonymous()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_GET_ISARENAANONYMOUS_OFFSET))(nullptr);
		}

		::System::String* GetCurrentExpString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_GETCURRENTEXPSTRING_OFFSET))(nullptr);
		}

		::System::Void set_LinkRewardDate(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_SET_LINKREWARDDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_CallNameKorean(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_SET_CALLNAMEKOREAN_OFFSET))(str, nullptr);
		}

		::System::Void set_CallNameKatakana(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_SET_CALLNAMEKATAKANA_OFFSET))(str, nullptr);
		}

		::System::String* GetVoiceSetCallName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_GETVOICESETCALLNAME_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::AccountRestrictionsDB* get_AccountRestrictionsDB()
		{
			return ((::MX::GameLogic::DBModel::AccountRestrictionsDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_GET_ACCOUNTRESTRICTIONSDB_OFFSET))(nullptr);
		}

		::System::Void set_AccountRestrictionsDB(::MX::GameLogic::DBModel::AccountRestrictionsDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AccountRestrictionsDB*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_SET_ACCOUNTRESTRICTIONSDB_OFFSET))(arg, nullptr);
		}

		::System::Void SyncAccountInfo(::MX::GameLogic::DBModel::SessionKey* arg, ::MX::GameLogic::DBModel::AccountDB* arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::SessionKey*, ::MX::GameLogic::DBModel::AccountDB*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_SYNCACCOUNTINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_AccountServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_SET_ACCOUNTSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void set_Nickname(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_SET_NICKNAME_OFFSET))(str, nullptr);
		}

		::System::Void set_Level(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_SET_LEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void set_IssueAlertInfoDBList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_SET_ISSUEALERTINFODBLIST_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsArenaAnonymous(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_SET_ISARENAANONYMOUS_OFFSET))(arg, nullptr);
		}

		::System::Void set_BirthDay(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_SET_BIRTHDAY_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_BirthDay()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_GET_BIRTHDAY_OFFSET))(nullptr);
		}

		::System::String* get_Callname()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_GET_CALLNAME_OFFSET))(nullptr);
		}

		::System::Void CheckCommentRepresentativeToSync(::System::String* str, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_CHECKCOMMENTREPRESENTATIVETOSYNC_OFFSET))(str, arg, nullptr);
		}

		::System::Void set_SessionKey(::MX::GameLogic::DBModel::SessionKey* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::SessionKey*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_SET_SESSIONKEY_OFFSET))(arg, nullptr);
		}

		::System::Void set_TutorialCompletionIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_SET_TUTORIALCOMPLETIONIDS_OFFSET))(arg, nullptr);
		}

		::System::Void set_DevId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_SET_DEVID_OFFSET))(str, nullptr);
		}

		::System::Void set_FriendCode(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_SET_FRIENDCODE_OFFSET))(str, nullptr);
		}

		::System::Void set_Comment(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_SET_COMMENT_OFFSET))(str, nullptr);
		}

		::System::Void set_WelcomeCampaignInfo(::MX::GameLogic::DBModel::WelcomeCampaignDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::WelcomeCampaignDB*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_SET_WELCOMECAMPAIGNINFO_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MemoryLobbyId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_GET_MEMORYLOBBYID_OFFSET))(nullptr);
		}

		::System::String* get_Nickname()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_GET_NICKNAME_OFFSET))(nullptr);
		}

		::System::String* get_Comment()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_GET_COMMENT_OFFSET))(nullptr);
		}

		Il2CppObject* get_LinkRewardDate()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_GET_LINKREWARDDATE_OFFSET))(nullptr);
		}

		Il2CppObject* get_ReceivedLevelRewardIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_GET_RECEIVEDLEVELREWARDIDS_OFFSET))(nullptr);
		}

		::System::Int64 get_RepresentCharacterUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINFO_GET_REPRESENTCHARACTERUNIQUEID_OFFSET))(nullptr);
		}

	};


#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ArenaTeamSettingDB; }
namespace MX::GameLogic::DBModel { class AccountAttachmentDB; }

#define MX_GAMELOGIC_DBMODEL_ARENAUSERDB_GET_EXP_OFFSET UNITYSDK_OFFSET(0xFE2540)
#define MX_GAMELOGIC_DBMODEL_ARENAUSERDB_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xFE2550)
#define MX_GAMELOGIC_DBMODEL_ARENAUSERDB_SET_ISANONYMOUS_OFFSET UNITYSDK_OFFSET(0xFE2560)
#define MX_GAMELOGIC_DBMODEL_ARENAUSERDB_GET_TEAMSETTINGDB_OFFSET UNITYSDK_OFFSET(0xFE2570)
#define MX_GAMELOGIC_DBMODEL_ARENAUSERDB_SET_TEAMSETTINGDB_OFFSET UNITYSDK_OFFSET(0xFE2580)
#define MX_GAMELOGIC_DBMODEL_ARENAUSERDB_SET_REPRESENTCHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFE2590)
#define MX_GAMELOGIC_DBMODEL_ARENAUSERDB_GET_ACCOUNTSERVERID_OFFSET UNITYSDK_OFFSET(0xFE25A0)
#define MX_GAMELOGIC_DBMODEL_ARENAUSERDB_GET_REPRESENTCHARACTERCOSTUMEID_OFFSET UNITYSDK_OFFSET(0xFE25B0)
#define MX_GAMELOGIC_DBMODEL_ARENAUSERDB_GET_ISANONYMOUS_OFFSET UNITYSDK_OFFSET(0xFE25C0)
#define MX_GAMELOGIC_DBMODEL_ARENAUSERDB_SET_REPRESENTCHARACTERCOSTUMEID_OFFSET UNITYSDK_OFFSET(0xFE25D0)
#define MX_GAMELOGIC_DBMODEL_ARENAUSERDB_GET_ACCOUNTATTACHMENTDB_OFFSET UNITYSDK_OFFSET(0xFE25E0)
#define MX_GAMELOGIC_DBMODEL_ARENAUSERDB_GET_REPRESENTCHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFE25F0)
#define MX_GAMELOGIC_DBMODEL_ARENAUSERDB_SET_RANK_OFFSET UNITYSDK_OFFSET(0xFE2600)
#define MX_GAMELOGIC_DBMODEL_ARENAUSERDB_SET_EXP_OFFSET UNITYSDK_OFFSET(0xFE2610)
#define MX_GAMELOGIC_DBMODEL_ARENAUSERDB_SET_ACCOUNTATTACHMENTDB_OFFSET UNITYSDK_OFFSET(0xFE2620)
#define MX_GAMELOGIC_DBMODEL_ARENAUSERDB_SET_ACCOUNTSERVERID_OFFSET UNITYSDK_OFFSET(0xFE2630)
#define MX_GAMELOGIC_DBMODEL_ARENAUSERDB_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xFE2640)
#define MX_GAMELOGIC_DBMODEL_ARENAUSERDB_SET_NICKNAME_OFFSET UNITYSDK_OFFSET(0xFE2650)
#define MX_GAMELOGIC_DBMODEL_ARENAUSERDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE2660)
#define MX_GAMELOGIC_DBMODEL_ARENAUSERDB_GET_DISPLAYREPRESENTCHARACTERID_OFFSET UNITYSDK_OFFSET(0xFE2780)
#define MX_GAMELOGIC_DBMODEL_ARENAUSERDB_GET_RANK_OFFSET UNITYSDK_OFFSET(0xFE27A0)
#define MX_GAMELOGIC_DBMODEL_ARENAUSERDB_GET_USERNAME_OFFSET UNITYSDK_OFFSET(0xFE27B0)
#define MX_GAMELOGIC_DBMODEL_ARENAUSERDB_GET_NICKNAME_OFFSET UNITYSDK_OFFSET(0xFE28C0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ArenaUserDB_TypeDefinitionIndex = 12481;

	class ArenaUserDB : public Il2CppObject
	{
	public:
		::System::Int64 _AccountServerId_k__BackingField; // 0x10
		::System::Int64 _RepresentCharacterUniqueId_k__BackingField; // 0x18
		::System::Int64 _RepresentCharacterCostumeId_k__BackingField; // 0x20
		::System::String* _NickName_k__BackingField; // 0x28
		::System::Int64 _Rank_k__BackingField; // 0x30
		::System::Int64 _Level_k__BackingField; // 0x38
		::System::Int64 _Exp_k__BackingField; // 0x40
		::MX::GameLogic::DBModel::ArenaTeamSettingDB* _TeamSettingDB_k__BackingField; // 0x48
		::MX::GameLogic::DBModel::AccountAttachmentDB* _AccountAttachmentDB_k__BackingField; // 0x50
		::System::Boolean _IsAnonymous_k__BackingField; // 0x58

		::System::Int64 get_Exp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAUSERDB_GET_EXP_OFFSET))(nullptr);
		}

		::System::Int64 get_Level()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAUSERDB_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Void set_IsAnonymous(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAUSERDB_SET_ISANONYMOUS_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ArenaTeamSettingDB* get_TeamSettingDB()
		{
			return ((::MX::GameLogic::DBModel::ArenaTeamSettingDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAUSERDB_GET_TEAMSETTINGDB_OFFSET))(nullptr);
		}

		::System::Void set_TeamSettingDB(::MX::GameLogic::DBModel::ArenaTeamSettingDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ArenaTeamSettingDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAUSERDB_SET_TEAMSETTINGDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_RepresentCharacterUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAUSERDB_SET_REPRESENTCHARACTERUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AccountServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAUSERDB_GET_ACCOUNTSERVERID_OFFSET))(nullptr);
		}

		::System::Int64 get_RepresentCharacterCostumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAUSERDB_GET_REPRESENTCHARACTERCOSTUMEID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsAnonymous()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAUSERDB_GET_ISANONYMOUS_OFFSET))(nullptr);
		}

		::System::Void set_RepresentCharacterCostumeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAUSERDB_SET_REPRESENTCHARACTERCOSTUMEID_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::AccountAttachmentDB* get_AccountAttachmentDB()
		{
			return ((::MX::GameLogic::DBModel::AccountAttachmentDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAUSERDB_GET_ACCOUNTATTACHMENTDB_OFFSET))(nullptr);
		}

		::System::Int64 get_RepresentCharacterUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAUSERDB_GET_REPRESENTCHARACTERUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_Rank(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAUSERDB_SET_RANK_OFFSET))(arg, nullptr);
		}

		::System::Void set_Exp(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAUSERDB_SET_EXP_OFFSET))(arg, nullptr);
		}

		::System::Void set_AccountAttachmentDB(::MX::GameLogic::DBModel::AccountAttachmentDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AccountAttachmentDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAUSERDB_SET_ACCOUNTATTACHMENTDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_AccountServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAUSERDB_SET_ACCOUNTSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void set_Level(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAUSERDB_SET_LEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void set_NickName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAUSERDB_SET_NICKNAME_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAUSERDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_DisplayRepresentCharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAUSERDB_GET_DISPLAYREPRESENTCHARACTERID_OFFSET))(nullptr);
		}

		::System::Int64 get_Rank()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAUSERDB_GET_RANK_OFFSET))(nullptr);
		}

		::System::String* get_UserName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAUSERDB_GET_USERNAME_OFFSET))(nullptr);
		}

		::System::String* get_NickName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENAUSERDB_GET_NICKNAME_OFFSET))(nullptr);
		}

	};
}


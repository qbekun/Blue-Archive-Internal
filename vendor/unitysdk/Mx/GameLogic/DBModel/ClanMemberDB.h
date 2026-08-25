#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ClanSocialGrade; }
namespace MX::GameLogic::DBModel { class AccountAttachmentDB; }

#define MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_SET_CLANDBID_OFFSET UNITYSDK_OFFSET(0xFEBEB0)
#define MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_GET_APPLIEDDATE_OFFSET UNITYSDK_OFFSET(0xFEBEC0)
#define MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_SET_ATTENDANCECOUNT_OFFSET UNITYSDK_OFFSET(0xFEBED0)
#define MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_SET_GAMELOGINDATE_OFFSET UNITYSDK_OFFSET(0xFEBEE0)
#define MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_GET_ATTENDANCECOUNT_OFFSET UNITYSDK_OFFSET(0xFEBEF0)
#define MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_SET_LASTLOGINDATE_OFFSET UNITYSDK_OFFSET(0xFEBF00)
#define MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFEBF10)
#define MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_GET_CLANSOCIALGRADE_OFFSET UNITYSDK_OFFSET(0xFEBF20)
#define MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_GET_ATTACHMENTDB_OFFSET UNITYSDK_OFFSET(0xFEBF30)
#define MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_SET_CLANSOCIALGRADE_OFFSET UNITYSDK_OFFSET(0xFEBF40)
#define MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_GET_SOCIALGRADEUPDATETIME_OFFSET UNITYSDK_OFFSET(0xFEBF50)
#define MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_SET_CAFECOMFORTVALUE_OFFSET UNITYSDK_OFFSET(0xFEBF60)
#define MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0xFEBF70)
#define MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_GET_CAFECOMFORTVALUE_OFFSET UNITYSDK_OFFSET(0xFEBF80)
#define MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_GET_REPRESENTCHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFEBF90)
#define MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_SET_ATTACHMENTDB_OFFSET UNITYSDK_OFFSET(0xFEBFA0)
#define MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_GET_ACCOUNTLEVEL_OFFSET UNITYSDK_OFFSET(0xFEBFB0)
#define MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_GET_ACCOUNTNICKNAME_OFFSET UNITYSDK_OFFSET(0xFEBFC0)
#define MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_GET_REPRESENTCHARACTERCOSTUMEID_OFFSET UNITYSDK_OFFSET(0xFEBFD0)
#define MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_GET_GAMELOGINDATE_OFFSET UNITYSDK_OFFSET(0xFEBFE0)
#define MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_SET_JOINDATE_OFFSET UNITYSDK_OFFSET(0xFEBFF0)
#define MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_GET_CLANDBID_OFFSET UNITYSDK_OFFSET(0xFEC000)
#define MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0xFEC010)
#define MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_SET_REPRESENTCHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFEC020)
#define MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_GET_LASTLOGINDATE_OFFSET UNITYSDK_OFFSET(0xFEC030)
#define MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_SET_REPRESENTCHARACTERCOSTUMEID_OFFSET UNITYSDK_OFFSET(0xFEC040)
#define MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_GET_JOINDATE_OFFSET UNITYSDK_OFFSET(0xFEC050)
#define MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_SET_ACCOUNTNICKNAME_OFFSET UNITYSDK_OFFSET(0xFEC060)
#define MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_SET_APPLIEDDATE_OFFSET UNITYSDK_OFFSET(0xFEC070)
#define MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_SET_ACCOUNTLEVEL_OFFSET UNITYSDK_OFFSET(0xFEC080)
#define MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_SET_SOCIALGRADEUPDATETIME_OFFSET UNITYSDK_OFFSET(0xFEC090)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ClanMemberDB_TypeDefinitionIndex = 12524;

	class ClanMemberDB : public Il2CppObject
	{
	public:
		::System::Int64 _AccountId_k__BackingField; // 0x10
		::System::Int64 _AccountLevel_k__BackingField; // 0x18
		::System::String* _AccountNickName_k__BackingField; // 0x20
		::System::Int64 _ClanDBId_k__BackingField; // 0x28
		::System::Int64 _RepresentCharacterUniqueId_k__BackingField; // 0x30
		::System::Int64 _RepresentCharacterCostumeId_k__BackingField; // 0x38
		::System::Int64 _AttendanceCount_k__BackingField; // 0x40
		::System::Int64 _CafeComfortValue_k__BackingField; // 0x48
		::FlatData::ClanSocialGrade* _ClanSocialGrade_k__BackingField; // 0x50
		::System::DateTime* _JoinDate_k__BackingField; // 0x58
		::System::DateTime* _SocialGradeUpdateTime_k__BackingField; // 0x60
		::System::DateTime* _LastLoginDate_k__BackingField; // 0x68
		::System::DateTime* _GameLoginDate_k__BackingField; // 0x70
		::System::DateTime* _AppliedDate_k__BackingField; // 0x78
		::MX::GameLogic::DBModel::AccountAttachmentDB* _AttachmentDB_k__BackingField; // 0x80

		::System::Void set_ClanDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_SET_CLANDBID_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_AppliedDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_GET_APPLIEDDATE_OFFSET))(nullptr);
		}

		::System::Void set_AttendanceCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_SET_ATTENDANCECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_GameLoginDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_SET_GAMELOGINDATE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AttendanceCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_GET_ATTENDANCECOUNT_OFFSET))(nullptr);
		}

		::System::Void set_LastLoginDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_SET_LASTLOGINDATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::ClanSocialGrade* get_ClanSocialGrade()
		{
			return ((::FlatData::ClanSocialGrade*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_GET_CLANSOCIALGRADE_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::AccountAttachmentDB* get_AttachmentDB()
		{
			return ((::MX::GameLogic::DBModel::AccountAttachmentDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_GET_ATTACHMENTDB_OFFSET))(nullptr);
		}

		::System::Void set_ClanSocialGrade(::FlatData::ClanSocialGrade* arg)
		{
			((::System::Void(*)(::FlatData::ClanSocialGrade*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_SET_CLANSOCIALGRADE_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_SocialGradeUpdateTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_GET_SOCIALGRADEUPDATETIME_OFFSET))(nullptr);
		}

		::System::Void set_CafeComfortValue(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_SET_CAFECOMFORTVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void set_AccountId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_SET_ACCOUNTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CafeComfortValue()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_GET_CAFECOMFORTVALUE_OFFSET))(nullptr);
		}

		::System::Int64 get_RepresentCharacterUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_GET_REPRESENTCHARACTERUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_AttachmentDB(::MX::GameLogic::DBModel::AccountAttachmentDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AccountAttachmentDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_SET_ATTACHMENTDB_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AccountLevel()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_GET_ACCOUNTLEVEL_OFFSET))(nullptr);
		}

		::System::String* get_AccountNickName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_GET_ACCOUNTNICKNAME_OFFSET))(nullptr);
		}

		::System::Int64 get_RepresentCharacterCostumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_GET_REPRESENTCHARACTERCOSTUMEID_OFFSET))(nullptr);
		}

		::System::DateTime* get_GameLoginDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_GET_GAMELOGINDATE_OFFSET))(nullptr);
		}

		::System::Void set_JoinDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_SET_JOINDATE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ClanDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_GET_CLANDBID_OFFSET))(nullptr);
		}

		::System::Int64 get_AccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_GET_ACCOUNTID_OFFSET))(nullptr);
		}

		::System::Void set_RepresentCharacterUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_SET_REPRESENTCHARACTERUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_LastLoginDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_GET_LASTLOGINDATE_OFFSET))(nullptr);
		}

		::System::Void set_RepresentCharacterCostumeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_SET_REPRESENTCHARACTERCOSTUMEID_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_JoinDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_GET_JOINDATE_OFFSET))(nullptr);
		}

		::System::Void set_AccountNickName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_SET_ACCOUNTNICKNAME_OFFSET))(str, nullptr);
		}

		::System::Void set_AppliedDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_SET_APPLIEDDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_AccountLevel(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_SET_ACCOUNTLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void set_SocialGradeUpdateTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLANMEMBERDB_SET_SOCIALGRADEUPDATETIME_OFFSET))(arg, nullptr);
		}

	};
}


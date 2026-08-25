#pragma once
#include "unitysdk.h"

namespace FlatData { class ClanSocialGrade; }
namespace MX::GameLogic::DBModel { class ClanMemberDB; }

#define CLANMEMBEROBJECT_GET_LASTLONGDATE_OFFSET UNITYSDK_OFFSET(0x1AD3C90)
#define CLANMEMBEROBJECT_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x1AD3CA0)
#define CLANMEMBEROBJECT_SET_ACCOUNTLEVEL_OFFSET UNITYSDK_OFFSET(0x1AD3CB0)
#define CLANMEMBEROBJECT_SET_EMBLEMID_OFFSET UNITYSDK_OFFSET(0x1AD3CC0)
#define CLANMEMBEROBJECT_SET_ATTENDANCECOUNT_OFFSET UNITYSDK_OFFSET(0x1AD3CD0)
#define CLANMEMBEROBJECT_GET_SOCIALGRADEUPDATETIME_OFFSET UNITYSDK_OFFSET(0x1AD3CE0)
#define CLANMEMBEROBJECT_SET_APPLIEDDATE_OFFSET UNITYSDK_OFFSET(0x1AD3CF0)
#define CLANMEMBEROBJECT_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x1AD3D00)
#define CLANMEMBEROBJECT_SET_SOCIALGRADEUPDATETIME_OFFSET UNITYSDK_OFFSET(0x1AD3D10)
#define CLANMEMBEROBJECT_SET_JOINDATE_OFFSET UNITYSDK_OFFSET(0x1AD3D20)
#define CLANMEMBEROBJECT_GET_JOINDATE_OFFSET UNITYSDK_OFFSET(0x1AD3D30)
#define CLANMEMBEROBJECT_SET_CLANSOCIALGRADE_OFFSET UNITYSDK_OFFSET(0x1AD3D40)
#define CLANMEMBEROBJECT_GETCLANMEMBERGAMELOGINPERIOD_OFFSET UNITYSDK_OFFSET(0x1AD3D50)
#define CLANMEMBEROBJECT_GET_APPLIEDDATE_OFFSET UNITYSDK_OFFSET(0x1AD3E60)
#define CLANMEMBEROBJECT_SET_ACCOUNTNICKNAME_OFFSET UNITYSDK_OFFSET(0x1AD3E70)
#define CLANMEMBEROBJECT_SET_REPRESENTCHARACTERCOSTUMEID_OFFSET UNITYSDK_OFFSET(0x1AD3E80)
#define CLANMEMBEROBJECT_GET_ACCOUNTLEVEL_OFFSET UNITYSDK_OFFSET(0x1AD3E90)
#define CLANMEMBEROBJECT_SET_REPRESENTCHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1AD3EA0)
#define CLANMEMBEROBJECT_GET_CLANSOCIALGRADE_OFFSET UNITYSDK_OFFSET(0x1AD3EB0)
#define CLANMEMBEROBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AD3EC0)
#define CLANMEMBEROBJECT_GET_REPRESENTCHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1AD3FF0)
#define CLANMEMBEROBJECT_SET_CLANDBID_OFFSET UNITYSDK_OFFSET(0x1AD4000)
#define CLANMEMBEROBJECT_GET_ATTENDANCECOUNT_OFFSET UNITYSDK_OFFSET(0x1AD4010)
#define CLANMEMBEROBJECT_GETCLANMEMBERCLANCONNECTIONPERIOD_OFFSET UNITYSDK_OFFSET(0x1AD4020)
#define CLANMEMBEROBJECT_GET_REPRESENTCHARACTERCOSTUMEID_OFFSET UNITYSDK_OFFSET(0x1AD4180)
#define CLANMEMBEROBJECT_GET_EMBLEMID_OFFSET UNITYSDK_OFFSET(0x1AD4190)
#define CLANMEMBEROBJECT_SET_LASTLONGDATE_OFFSET UNITYSDK_OFFSET(0x1AD41A0)
#define CLANMEMBEROBJECT_SET_GAMELOGINDATE_OFFSET UNITYSDK_OFFSET(0x1AD41B0)
#define CLANMEMBEROBJECT_GET_CLANDBID_OFFSET UNITYSDK_OFFSET(0x1AD41C0)
#define CLANMEMBEROBJECT_GET_GAMELOGINDATE_OFFSET UNITYSDK_OFFSET(0x1AD41D0)
#define CLANMEMBEROBJECT_GET_ACCOUNTNICKNAME_OFFSET UNITYSDK_OFFSET(0x1AD41E0)

	inline static constexpr unsigned int ClanMemberObject_TypeDefinitionIndex = 1429;

	class ClanMemberObject : public Il2CppObject
	{
	public:
		::System::Int64 _AccountId_k__BackingField; // 0x10
		::System::Int64 _AccountLevel_k__BackingField; // 0x18
		::System::String* _AccountNickName_k__BackingField; // 0x20
		::System::Int64 _ClanDBId_k__BackingField; // 0x28
		::System::Int64 _RepresentCharacterUniqueId_k__BackingField; // 0x30
		::System::Int64 _RepresentCharacterCostumeId_k__BackingField; // 0x38
		::FlatData::ClanSocialGrade* _ClanSocialGrade_k__BackingField; // 0x40
		::System::DateTime* _SocialGradeUpdateTime_k__BackingField; // 0x48
		::System::Int64 _AttendanceCount_k__BackingField; // 0x50
		::System::DateTime* _JoinDate_k__BackingField; // 0x58
		::System::DateTime* _LastLongDate_k__BackingField; // 0x60
		::System::DateTime* _AppliedDate_k__BackingField; // 0x68
		::System::DateTime* _GameLoginDate_k__BackingField; // 0x70
		::System::Int64 _EmblemId_k__BackingField; // 0x78

		::System::DateTime* get_LastLongDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBEROBJECT_GET_LASTLONGDATE_OFFSET))(nullptr);
		}

		::System::Void set_AccountId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBEROBJECT_SET_ACCOUNTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_AccountLevel(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBEROBJECT_SET_ACCOUNTLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void set_EmblemId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBEROBJECT_SET_EMBLEMID_OFFSET))(arg, nullptr);
		}

		::System::Void set_AttendanceCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBEROBJECT_SET_ATTENDANCECOUNT_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_SocialGradeUpdateTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBEROBJECT_GET_SOCIALGRADEUPDATETIME_OFFSET))(nullptr);
		}

		::System::Void set_AppliedDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBEROBJECT_SET_APPLIEDDATE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBEROBJECT_GET_ACCOUNTID_OFFSET))(nullptr);
		}

		::System::Void set_SocialGradeUpdateTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBEROBJECT_SET_SOCIALGRADEUPDATETIME_OFFSET))(arg, nullptr);
		}

		::System::Void set_JoinDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBEROBJECT_SET_JOINDATE_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_JoinDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBEROBJECT_GET_JOINDATE_OFFSET))(nullptr);
		}

		::System::Void set_ClanSocialGrade(::FlatData::ClanSocialGrade* arg)
		{
			((::System::Void(*)(::FlatData::ClanSocialGrade*, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBEROBJECT_SET_CLANSOCIALGRADE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetClanMemberGameLoginPeriod()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBEROBJECT_GETCLANMEMBERGAMELOGINPERIOD_OFFSET))(nullptr);
		}

		::System::DateTime* get_AppliedDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBEROBJECT_GET_APPLIEDDATE_OFFSET))(nullptr);
		}

		::System::Void set_AccountNickName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBEROBJECT_SET_ACCOUNTNICKNAME_OFFSET))(str, nullptr);
		}

		::System::Void set_RepresentCharacterCostumeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBEROBJECT_SET_REPRESENTCHARACTERCOSTUMEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AccountLevel()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBEROBJECT_GET_ACCOUNTLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_RepresentCharacterUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBEROBJECT_SET_REPRESENTCHARACTERUNIQUEID_OFFSET))(arg, nullptr);
		}

		::FlatData::ClanSocialGrade* get_ClanSocialGrade()
		{
			return ((::FlatData::ClanSocialGrade*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBEROBJECT_GET_CLANSOCIALGRADE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::DBModel::ClanMemberDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanMemberDB*, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBEROBJECT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RepresentCharacterUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBEROBJECT_GET_REPRESENTCHARACTERUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_ClanDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBEROBJECT_SET_CLANDBID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AttendanceCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBEROBJECT_GET_ATTENDANCECOUNT_OFFSET))(nullptr);
		}

		::System::Int32 GetClanMemberClanConnectionPeriod()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBEROBJECT_GETCLANMEMBERCLANCONNECTIONPERIOD_OFFSET))(nullptr);
		}

		::System::Int64 get_RepresentCharacterCostumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBEROBJECT_GET_REPRESENTCHARACTERCOSTUMEID_OFFSET))(nullptr);
		}

		::System::Int64 get_EmblemId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBEROBJECT_GET_EMBLEMID_OFFSET))(nullptr);
		}

		::System::Void set_LastLongDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBEROBJECT_SET_LASTLONGDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_GameLoginDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBEROBJECT_SET_GAMELOGINDATE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ClanDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBEROBJECT_GET_CLANDBID_OFFSET))(nullptr);
		}

		::System::DateTime* get_GameLoginDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBEROBJECT_GET_GAMELOGINDATE_OFFSET))(nullptr);
		}

		::System::String* get_AccountNickName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMEMBEROBJECT_GET_ACCOUNTNICKNAME_OFFSET))(nullptr);
		}

	};


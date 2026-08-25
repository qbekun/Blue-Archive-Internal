#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_ACCOUNTBANBYNEXONDB_GET_BANSTARTDATE_OFFSET UNITYSDK_OFFSET(0xFE1230)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTBANBYNEXONDB_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0xFE1240)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTBANBYNEXONDB_GET_BANDAY_OFFSET UNITYSDK_OFFSET(0xFE1250)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTBANBYNEXONDB_SET_BANENDDATE_OFFSET UNITYSDK_OFFSET(0xFE1260)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTBANBYNEXONDB_GET_BANENDDATE_OFFSET UNITYSDK_OFFSET(0xFE1270)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTBANBYNEXONDB_GET_NPSN_OFFSET UNITYSDK_OFFSET(0xFE1280)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTBANBYNEXONDB_SET_BANDAY_OFFSET UNITYSDK_OFFSET(0xFE1290)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTBANBYNEXONDB_SET_BANTYPE_OFFSET UNITYSDK_OFFSET(0xFE12A0)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTBANBYNEXONDB_SET_BANSTARTDATE_OFFSET UNITYSDK_OFFSET(0xFE12B0)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTBANBYNEXONDB_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0xFE12C0)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTBANBYNEXONDB_GET_ACCOUNTBANID_OFFSET UNITYSDK_OFFSET(0xFE12D0)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTBANBYNEXONDB_SET_NPSN_OFFSET UNITYSDK_OFFSET(0xFE12E0)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTBANBYNEXONDB_SET_DELETEFLAG_OFFSET UNITYSDK_OFFSET(0xFE12F0)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTBANBYNEXONDB_GET_BANCOMMENT_OFFSET UNITYSDK_OFFSET(0xFE1300)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTBANBYNEXONDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE1310)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTBANBYNEXONDB_GET_BANTYPE_OFFSET UNITYSDK_OFFSET(0xFE1320)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTBANBYNEXONDB_GET_DELETEFLAG_OFFSET UNITYSDK_OFFSET(0xFE1330)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTBANBYNEXONDB_SET_BANCOMMENT_OFFSET UNITYSDK_OFFSET(0xFE1340)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTBANBYNEXONDB_SET_ACCOUNTBANID_OFFSET UNITYSDK_OFFSET(0xFE1350)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int AccountBanByNexonDB_TypeDefinitionIndex = 12470;

	class AccountBanByNexonDB : public Il2CppObject
	{
	public:
		::System::Int64 _AccountId_k__BackingField; // 0x10
		::System::Int64 _Npsn_k__BackingField; // 0x18
		::System::Int64 _AccountBanId_k__BackingField; // 0x20
		::System::Int32 _BanType_k__BackingField; // 0x28
		::System::Int32 _BanDay_k__BackingField; // 0x2C
		::System::DateTime* _BanStartDate_k__BackingField; // 0x30
		::System::DateTime* _BanEndDate_k__BackingField; // 0x38
		::System::String* _BanComment_k__BackingField; // 0x40
		::System::Int32 _DeleteFlag_k__BackingField; // 0x48

		::System::DateTime* get_BanStartDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTBANBYNEXONDB_GET_BANSTARTDATE_OFFSET))(nullptr);
		}

		::System::Void set_AccountId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTBANBYNEXONDB_SET_ACCOUNTID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BanDay()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTBANBYNEXONDB_GET_BANDAY_OFFSET))(nullptr);
		}

		::System::Void set_BanEndDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTBANBYNEXONDB_SET_BANENDDATE_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_BanEndDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTBANBYNEXONDB_GET_BANENDDATE_OFFSET))(nullptr);
		}

		::System::Int64 get_Npsn()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTBANBYNEXONDB_GET_NPSN_OFFSET))(nullptr);
		}

		::System::Void set_BanDay(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTBANBYNEXONDB_SET_BANDAY_OFFSET))(arg, nullptr);
		}

		::System::Void set_BanType(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTBANBYNEXONDB_SET_BANTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_BanStartDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTBANBYNEXONDB_SET_BANSTARTDATE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTBANBYNEXONDB_GET_ACCOUNTID_OFFSET))(nullptr);
		}

		::System::Int64 get_AccountBanId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTBANBYNEXONDB_GET_ACCOUNTBANID_OFFSET))(nullptr);
		}

		::System::Void set_Npsn(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTBANBYNEXONDB_SET_NPSN_OFFSET))(arg, nullptr);
		}

		::System::Void set_DeleteFlag(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTBANBYNEXONDB_SET_DELETEFLAG_OFFSET))(arg, nullptr);
		}

		::System::String* get_BanComment()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTBANBYNEXONDB_GET_BANCOMMENT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTBANBYNEXONDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_BanType()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTBANBYNEXONDB_GET_BANTYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_DeleteFlag()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTBANBYNEXONDB_GET_DELETEFLAG_OFFSET))(nullptr);
		}

		::System::Void set_BanComment(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTBANBYNEXONDB_SET_BANCOMMENT_OFFSET))(str, nullptr);
		}

		::System::Void set_AccountBanId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTBANBYNEXONDB_SET_ACCOUNTBANID_OFFSET))(arg, nullptr);
		}

	};
}


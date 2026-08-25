#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_BANDB_GET_REGISTERDATE_OFFSET UNITYSDK_OFFSET(0xFE43C0)
#define MX_GAMELOGIC_DBMODEL_BANDB_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xFE43D0)
#define MX_GAMELOGIC_DBMODEL_BANDB_SET_CANCELFLAG_OFFSET UNITYSDK_OFFSET(0xFE43E0)
#define MX_GAMELOGIC_DBMODEL_BANDB_SET_REASON_OFFSET UNITYSDK_OFFSET(0xFE43F0)
#define MX_GAMELOGIC_DBMODEL_BANDB_GET_REASON_OFFSET UNITYSDK_OFFSET(0xFE4400)
#define MX_GAMELOGIC_DBMODEL_BANDB_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0xFE4410)
#define MX_GAMELOGIC_DBMODEL_BANDB_SET_BANSTARTDATE_OFFSET UNITYSDK_OFFSET(0xFE4420)
#define MX_GAMELOGIC_DBMODEL_BANDB_SET_SERVERID_OFFSET UNITYSDK_OFFSET(0xFE4430)
#define MX_GAMELOGIC_DBMODEL_BANDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE4440)
#define MX_GAMELOGIC_DBMODEL_BANDB_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xFE4450)
#define MX_GAMELOGIC_DBMODEL_BANDB_GET_BANENDDATE_OFFSET UNITYSDK_OFFSET(0xFE4460)
#define MX_GAMELOGIC_DBMODEL_BANDB_GET_BANSTARTDATE_OFFSET UNITYSDK_OFFSET(0xFE4470)
#define MX_GAMELOGIC_DBMODEL_BANDB_GET_CANCELDATE_OFFSET UNITYSDK_OFFSET(0xFE4480)
#define MX_GAMELOGIC_DBMODEL_BANDB_SET_REGISTERDATE_OFFSET UNITYSDK_OFFSET(0xFE4490)
#define MX_GAMELOGIC_DBMODEL_BANDB_GET_CANCELFLAG_OFFSET UNITYSDK_OFFSET(0xFE44A0)
#define MX_GAMELOGIC_DBMODEL_BANDB_SET_BANENDDATE_OFFSET UNITYSDK_OFFSET(0xFE44B0)
#define MX_GAMELOGIC_DBMODEL_BANDB_SET_CANCELDATE_OFFSET UNITYSDK_OFFSET(0xFE44C0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int BanDB_TypeDefinitionIndex = 12489;

	class BanDB : public Il2CppObject
	{
	public:
		::System::Int64 _ServerId_k__BackingField; // 0x10
		::System::Int64 _UniqueId_k__BackingField; // 0x18
		::System::DateTime* _BanStartDate_k__BackingField; // 0x20
		::System::DateTime* _BanEndDate_k__BackingField; // 0x28
		::System::DateTime* _RegisterDate_k__BackingField; // 0x30
		::System::Byte _CancelFlag_k__BackingField; // 0x38
		::System::DateTime* _CancelDate_k__BackingField; // 0x40
		::System::String* _Reason_k__BackingField; // 0x48

		::System::DateTime* get_RegisterDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BANDB_GET_REGISTERDATE_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BANDB_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_CancelFlag(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BANDB_SET_CANCELFLAG_OFFSET))(arg, nullptr);
		}

		::System::Void set_Reason(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BANDB_SET_REASON_OFFSET))(str, nullptr);
		}

		::System::String* get_Reason()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BANDB_GET_REASON_OFFSET))(nullptr);
		}

		::System::Int64 get_ServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BANDB_GET_SERVERID_OFFSET))(nullptr);
		}

		::System::Void set_BanStartDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BANDB_SET_BANSTARTDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_ServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BANDB_SET_SERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BANDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BANDB_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_BanEndDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BANDB_GET_BANENDDATE_OFFSET))(nullptr);
		}

		::System::DateTime* get_BanStartDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BANDB_GET_BANSTARTDATE_OFFSET))(nullptr);
		}

		::System::DateTime* get_CancelDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BANDB_GET_CANCELDATE_OFFSET))(nullptr);
		}

		::System::Void set_RegisterDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BANDB_SET_REGISTERDATE_OFFSET))(arg, nullptr);
		}

		::System::Byte get_CancelFlag()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BANDB_GET_CANCELFLAG_OFFSET))(nullptr);
		}

		::System::Void set_BanEndDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BANDB_SET_BANENDDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_CancelDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BANDB_SET_CANCELDATE_OFFSET))(arg, nullptr);
		}

	};
}


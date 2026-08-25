#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_ACCOUNTLIMITEDGACHADB_SET_ENDDATE_OFFSET UNITYSDK_OFFSET(0xFE1CB0)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTLIMITEDGACHADB_SET_STARTDATE_OFFSET UNITYSDK_OFFSET(0xFE1CC0)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTLIMITEDGACHADB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE1CD0)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTLIMITEDGACHADB_SET_ID_OFFSET UNITYSDK_OFFSET(0xFE1CE0)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTLIMITEDGACHADB_GET_ID_OFFSET UNITYSDK_OFFSET(0xFE1CF0)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTLIMITEDGACHADB_GET_ENDDATE_OFFSET UNITYSDK_OFFSET(0xFE1D00)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTLIMITEDGACHADB_GET_STARTDATE_OFFSET UNITYSDK_OFFSET(0xFE1D10)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int AccountLimitedGachaDB_TypeDefinitionIndex = 12476;

	class AccountLimitedGachaDB : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		::System::DateTime* _StartDate_k__BackingField; // 0x18
		::System::DateTime* _EndDate_k__BackingField; // 0x20

		::System::Void set_EndDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTLIMITEDGACHADB_SET_ENDDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_StartDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTLIMITEDGACHADB_SET_STARTDATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTLIMITEDGACHADB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTLIMITEDGACHADB_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTLIMITEDGACHADB_GET_ID_OFFSET))(nullptr);
		}

		::System::DateTime* get_EndDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTLIMITEDGACHADB_GET_ENDDATE_OFFSET))(nullptr);
		}

		::System::DateTime* get_StartDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTLIMITEDGACHADB_GET_STARTDATE_OFFSET))(nullptr);
		}

	};
}


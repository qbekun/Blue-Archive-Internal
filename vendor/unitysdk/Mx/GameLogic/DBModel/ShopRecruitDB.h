#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_SHOPRECRUITDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x100ED40)
#define MX_GAMELOGIC_DBMODEL_SHOPRECRUITDB_SET_ID_OFFSET UNITYSDK_OFFSET(0x100ED50)
#define MX_GAMELOGIC_DBMODEL_SHOPRECRUITDB_GET_ID_OFFSET UNITYSDK_OFFSET(0x100ED60)
#define MX_GAMELOGIC_DBMODEL_SHOPRECRUITDB_GET_UPDATEDATE_OFFSET UNITYSDK_OFFSET(0x100ED70)
#define MX_GAMELOGIC_DBMODEL_SHOPRECRUITDB_SET_SALESENDDATE_OFFSET UNITYSDK_OFFSET(0x100ED80)
#define MX_GAMELOGIC_DBMODEL_SHOPRECRUITDB_SET_SALESSTARTDATE_OFFSET UNITYSDK_OFFSET(0x100ED90)
#define MX_GAMELOGIC_DBMODEL_SHOPRECRUITDB_GET_SALESSTARTDATE_OFFSET UNITYSDK_OFFSET(0x100EDA0)
#define MX_GAMELOGIC_DBMODEL_SHOPRECRUITDB_GET_SALESENDDATE_OFFSET UNITYSDK_OFFSET(0x100EDB0)
#define MX_GAMELOGIC_DBMODEL_SHOPRECRUITDB_SET_UPDATEDATE_OFFSET UNITYSDK_OFFSET(0x100EDC0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ShopRecruitDB_TypeDefinitionIndex = 12728;

	class ShopRecruitDB : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		::System::DateTime* _SalesStartDate_k__BackingField; // 0x18
		::System::DateTime* _SalesEndDate_k__BackingField; // 0x20
		::System::DateTime* _UpdateDate_k__BackingField; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPRECRUITDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPRECRUITDB_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPRECRUITDB_GET_ID_OFFSET))(nullptr);
		}

		::System::DateTime* get_UpdateDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPRECRUITDB_GET_UPDATEDATE_OFFSET))(nullptr);
		}

		::System::Void set_SalesEndDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPRECRUITDB_SET_SALESENDDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_SalesStartDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPRECRUITDB_SET_SALESSTARTDATE_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_SalesStartDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPRECRUITDB_GET_SALESSTARTDATE_OFFSET))(nullptr);
		}

		::System::DateTime* get_SalesEndDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPRECRUITDB_GET_SALESENDDATE_OFFSET))(nullptr);
		}

		::System::Void set_UpdateDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHOPRECRUITDB_SET_UPDATEDATE_OFFSET))(arg, nullptr);
		}

	};
}


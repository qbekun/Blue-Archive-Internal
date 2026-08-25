#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_ACCOUNTLIMITEDFLASHSALEDB_GET_SALEFROM_OFFSET UNITYSDK_OFFSET(0xFE1B80)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTLIMITEDFLASHSALEDB_SET_SALETO_OFFSET UNITYSDK_OFFSET(0xFE1B90)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTLIMITEDFLASHSALEDB_SET_SALEFROM_OFFSET UNITYSDK_OFFSET(0xFE1BA0)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTLIMITEDFLASHSALEDB_ISSALE_OFFSET UNITYSDK_OFFSET(0xFE1BB0)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTLIMITEDFLASHSALEDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE1C40)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTLIMITEDFLASHSALEDB_GET_SHOPEXCELID_OFFSET UNITYSDK_OFFSET(0xFE1C80)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTLIMITEDFLASHSALEDB_GET_SALETO_OFFSET UNITYSDK_OFFSET(0xFE1C90)
#define MX_GAMELOGIC_DBMODEL_ACCOUNTLIMITEDFLASHSALEDB_SET_SHOPEXCELID_OFFSET UNITYSDK_OFFSET(0xFE1CA0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int AccountLimitedFlashSaleDB_TypeDefinitionIndex = 12475;

	class AccountLimitedFlashSaleDB : public Il2CppObject
	{
	public:
		::System::Int64 _ShopExcelId_k__BackingField; // 0x10
		::System::DateTime* _SaleFrom_k__BackingField; // 0x18
		::System::DateTime* _SaleTo_k__BackingField; // 0x20

		::System::DateTime* get_SaleFrom()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTLIMITEDFLASHSALEDB_GET_SALEFROM_OFFSET))(nullptr);
		}

		::System::Void set_SaleTo(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTLIMITEDFLASHSALEDB_SET_SALETO_OFFSET))(arg, nullptr);
		}

		::System::Void set_SaleFrom(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTLIMITEDFLASHSALEDB_SET_SALEFROM_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSale(::System::DateTime* arg)
		{
			return ((::System::Boolean(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTLIMITEDFLASHSALEDB_ISSALE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::DateTime* arg2, ::System::DateTime* arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::DateTime*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTLIMITEDFLASHSALEDB_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int64 get_ShopExcelId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTLIMITEDFLASHSALEDB_GET_SHOPEXCELID_OFFSET))(nullptr);
		}

		::System::DateTime* get_SaleTo()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTLIMITEDFLASHSALEDB_GET_SALETO_OFFSET))(nullptr);
		}

		::System::Void set_ShopExcelId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACCOUNTLIMITEDFLASHSALEDB_SET_SHOPEXCELID_OFFSET))(arg, nullptr);
		}

	};
}


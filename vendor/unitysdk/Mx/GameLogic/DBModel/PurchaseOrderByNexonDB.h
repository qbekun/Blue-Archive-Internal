#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_PURCHASEORDERBYNEXONDB_GET_STATE_OFFSET UNITYSDK_OFFSET(0x10067B0)
#define MX_GAMELOGIC_DBMODEL_PURCHASEORDERBYNEXONDB_GET_PURCHASEORDERID_OFFSET UNITYSDK_OFFSET(0x10067C0)
#define MX_GAMELOGIC_DBMODEL_PURCHASEORDERBYNEXONDB_SET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0x10067D0)
#define MX_GAMELOGIC_DBMODEL_PURCHASEORDERBYNEXONDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x10067E0)
#define MX_GAMELOGIC_DBMODEL_PURCHASEORDERBYNEXONDB_GET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0x10067F0)
#define MX_GAMELOGIC_DBMODEL_PURCHASEORDERBYNEXONDB_SET_PURCHASEORDERID_OFFSET UNITYSDK_OFFSET(0x1006800)
#define MX_GAMELOGIC_DBMODEL_PURCHASEORDERBYNEXONDB_SET_STATE_OFFSET UNITYSDK_OFFSET(0x1006810)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int PurchaseOrderByNexonDB_TypeDefinitionIndex = 12683;

	class PurchaseOrderByNexonDB : public Il2CppObject
	{
	public:
		::System::Int64 _ProductId_k__BackingField; // 0x10
		::System::Int32 _state_k__BackingField; // 0x18
		::System::Int64 _PurchaseOrderId_k__BackingField; // 0x20

		::System::Int32 get_state()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PURCHASEORDERBYNEXONDB_GET_STATE_OFFSET))(nullptr);
		}

		::System::Int64 get_PurchaseOrderId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PURCHASEORDERBYNEXONDB_GET_PURCHASEORDERID_OFFSET))(nullptr);
		}

		::System::Void set_ProductId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PURCHASEORDERBYNEXONDB_SET_PRODUCTID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PURCHASEORDERBYNEXONDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_ProductId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PURCHASEORDERBYNEXONDB_GET_PRODUCTID_OFFSET))(nullptr);
		}

		::System::Void set_PurchaseOrderId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PURCHASEORDERBYNEXONDB_SET_PURCHASEORDERID_OFFSET))(arg, nullptr);
		}

		::System::Void set_state(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PURCHASEORDERBYNEXONDB_SET_STATE_OFFSET))(arg, nullptr);
		}

	};
}


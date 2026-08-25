#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class PurchaseStatusCode; }

#define MX_GAMELOGIC_DBMODEL_PURCHASEORDERDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1006820)
#define MX_GAMELOGIC_DBMODEL_PURCHASEORDERDB_GET_STATUSCODE_OFFSET UNITYSDK_OFFSET(0x1006830)
#define MX_GAMELOGIC_DBMODEL_PURCHASEORDERDB_GET_SHOPCASHID_OFFSET UNITYSDK_OFFSET(0x1006840)
#define MX_GAMELOGIC_DBMODEL_PURCHASEORDERDB_GET_PURCHASEORDERID_OFFSET UNITYSDK_OFFSET(0x1006850)
#define MX_GAMELOGIC_DBMODEL_PURCHASEORDERDB_SET_PURCHASEORDERID_OFFSET UNITYSDK_OFFSET(0x1006860)
#define MX_GAMELOGIC_DBMODEL_PURCHASEORDERDB_SET_STATUSCODE_OFFSET UNITYSDK_OFFSET(0x1006870)
#define MX_GAMELOGIC_DBMODEL_PURCHASEORDERDB_SET_SHOPCASHID_OFFSET UNITYSDK_OFFSET(0x1006880)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int PurchaseOrderDB_TypeDefinitionIndex = 12684;

	class PurchaseOrderDB : public Il2CppObject
	{
	public:
		::System::Int64 _ShopCashId_k__BackingField; // 0x10
		::FlatData::PurchaseStatusCode* _StatusCode_k__BackingField; // 0x18
		::System::Int64 _PurchaseOrderId_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PURCHASEORDERDB_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::PurchaseStatusCode* get_StatusCode()
		{
			return ((::FlatData::PurchaseStatusCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PURCHASEORDERDB_GET_STATUSCODE_OFFSET))(nullptr);
		}

		::System::Int64 get_ShopCashId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PURCHASEORDERDB_GET_SHOPCASHID_OFFSET))(nullptr);
		}

		::System::Int64 get_PurchaseOrderId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PURCHASEORDERDB_GET_PURCHASEORDERID_OFFSET))(nullptr);
		}

		::System::Void set_PurchaseOrderId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PURCHASEORDERDB_SET_PURCHASEORDERID_OFFSET))(arg, nullptr);
		}

		::System::Void set_StatusCode(::FlatData::PurchaseStatusCode* arg)
		{
			((::System::Void(*)(::FlatData::PurchaseStatusCode*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PURCHASEORDERDB_SET_STATUSCODE_OFFSET))(arg, nullptr);
		}

		::System::Void set_ShopCashId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_PURCHASEORDERDB_SET_SHOPCASHID_OFFSET))(arg, nullptr);
		}

	};
}


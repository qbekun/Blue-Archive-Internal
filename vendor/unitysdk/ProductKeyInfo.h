#pragma once
#include "unitysdk.h"

namespace FlatData { class StoreType; }
namespace FlatData { class PurchasePeriodType; }

#define PRODUCTKEYINFO_GET_PURCHASEPERIODTYPE_OFFSET UNITYSDK_OFFSET(0x1947240)
#define PRODUCTKEYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1947250)
#define PRODUCTKEYINFO_GET_STORETYPE_OFFSET UNITYSDK_OFFSET(0x19472A0)
#define PRODUCTKEYINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x19472B0)
#define PRODUCTKEYINFO_GET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0x19472C0)
#define PRODUCTKEYINFO_GET_ISSHAREDPRODUCT_OFFSET UNITYSDK_OFFSET(0x19472D0)
#define PRODUCTKEYINFO_GET_PURCHASEPERIODLIMIT_OFFSET UNITYSDK_OFFSET(0x19472E0)

	inline static constexpr unsigned int ProductKeyInfo_TypeDefinitionIndex = 16373;

	class ProductKeyInfo : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		::System::String* _ProductId_k__BackingField; // 0x18
		::System::Boolean _IsSharedProduct_k__BackingField; // 0x20
		::FlatData::StoreType* _StoreType_k__BackingField; // 0x24
		::System::Int64 _PurchasePeriodLimit_k__BackingField; // 0x28
		::FlatData::PurchasePeriodType* _PurchasePeriodType_k__BackingField; // 0x30

		::FlatData::PurchasePeriodType* get_PurchasePeriodType()
		{
			return (return (::FlatData::PurchasePeriodType*(*)(::PVOID))((::PBYTE)hIl2Cpp + PRODUCTKEYINFO_GET_PURCHASEPERIODTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::String* str, ::System::Boolean arg, ::FlatData::StoreType* arg, ::System::Int64 arg, ::FlatData::PurchasePeriodType* arg)
		{
			((::System::Void(*)(::System::Int64, ::System::String*, ::System::Boolean, ::FlatData::StoreType*, ::System::Int64, ::FlatData::PurchasePeriodType*, ::PVOID))((::PBYTE)hIl2Cpp + PRODUCTKEYINFO_.CTOR_OFFSET))(arg, str, arg, arg, arg, arg, nullptr);
		}

		::FlatData::StoreType* get_StoreType()
		{
			return (return (::FlatData::StoreType*(*)(::PVOID))((::PBYTE)hIl2Cpp + PRODUCTKEYINFO_GET_STORETYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PRODUCTKEYINFO_GET_ID_OFFSET))(nullptr);
		}

		::System::String* get_ProductId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PRODUCTKEYINFO_GET_PRODUCTID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSharedProduct()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PRODUCTKEYINFO_GET_ISSHAREDPRODUCT_OFFSET))(nullptr);
		}

		::System::Int64 get_PurchasePeriodLimit()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PRODUCTKEYINFO_GET_PURCHASEPERIODLIMIT_OFFSET))(nullptr);
		}

	};


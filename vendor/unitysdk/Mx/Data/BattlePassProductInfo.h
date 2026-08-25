#pragma once
#include "../../unitysdk.h"

#define MX_DATA_BATTLEPASSPRODUCTINFO_GET_SHOPCASHID_OFFSET UNITYSDK_OFFSET(0x1831660)
#define MX_DATA_BATTLEPASSPRODUCTINFO_SET_SHOPCASHID_OFFSET UNITYSDK_OFFSET(0x1831670)
#define MX_DATA_BATTLEPASSPRODUCTINFO_CANBUYPRODUCT_OFFSET UNITYSDK_OFFSET(0x1831680)
#define MX_DATA_BATTLEPASSPRODUCTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1831820)
#define MX_DATA_BATTLEPASSPRODUCTINFO_SET_PRODUCTGROUPID_OFFSET UNITYSDK_OFFSET(0x1831830)
#define MX_DATA_BATTLEPASSPRODUCTINFO_ISPREMIUMPRODUCT_OFFSET UNITYSDK_OFFSET(0x1831840)
#define MX_DATA_BATTLEPASSPRODUCTINFO_SET_REQUIREDPRODUCTS_OFFSET UNITYSDK_OFFSET(0x1831850)
#define MX_DATA_BATTLEPASSPRODUCTINFO_GET_PRODUCTGROUPID_OFFSET UNITYSDK_OFFSET(0x1831860)
#define MX_DATA_BATTLEPASSPRODUCTINFO_SET_PROHIBITEDPRODUCTS_OFFSET UNITYSDK_OFFSET(0x1831870)
#define MX_DATA_BATTLEPASSPRODUCTINFO_SET_PRODUCTTYPE_OFFSET UNITYSDK_OFFSET(0x1831880)
#define MX_DATA_BATTLEPASSPRODUCTINFO_GET_BATTLEPASSID_OFFSET UNITYSDK_OFFSET(0x1831890)
#define MX_DATA_BATTLEPASSPRODUCTINFO_SET_BATTLEPASSID_OFFSET UNITYSDK_OFFSET(0x18318A0)
#define MX_DATA_BATTLEPASSPRODUCTINFO_GET_REQUIREDPRODUCTS_OFFSET UNITYSDK_OFFSET(0x18318B0)
#define MX_DATA_BATTLEPASSPRODUCTINFO_GET_PROHIBITEDPRODUCTS_OFFSET UNITYSDK_OFFSET(0x18318C0)
#define MX_DATA_BATTLEPASSPRODUCTINFO_GET_PRODUCTTYPE_OFFSET UNITYSDK_OFFSET(0x18318D0)

namespace MX::Data
{
	inline static constexpr unsigned int BattlePassProductInfo_TypeDefinitionIndex = 15726;

	class BattlePassProductInfo : public Il2CppObject
	{
	public:
		::System::Int64 _BattlePassId_k__BackingField; // 0x10
		::System::Int64 _ShopCashId_k__BackingField; // 0x18
		::System::Int64 _ProductGroupId_k__BackingField; // 0x20
		PassProductType* _ProductType_k__BackingField; // 0x28
		Il2CppObject* _RequiredProducts_k__BackingField; // 0x30
		Il2CppObject* _ProhibitedProducts_k__BackingField; // 0x38

		::System::Int64 get_ShopCashId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSPRODUCTINFO_GET_SHOPCASHID_OFFSET))(nullptr);
		}

		::System::Void set_ShopCashId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSPRODUCTINFO_SET_SHOPCASHID_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanBuyProduct(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSPRODUCTINFO_CANBUYPRODUCT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSPRODUCTINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ProductGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSPRODUCTINFO_SET_PRODUCTGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPremiumProduct()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSPRODUCTINFO_ISPREMIUMPRODUCT_OFFSET))(nullptr);
		}

		::System::Void set_RequiredProducts(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSPRODUCTINFO_SET_REQUIREDPRODUCTS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ProductGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSPRODUCTINFO_GET_PRODUCTGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_ProhibitedProducts(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSPRODUCTINFO_SET_PROHIBITEDPRODUCTS_OFFSET))(arg, nullptr);
		}

		::System::Void set_ProductType(PassProductType* arg)
		{
			((::System::Void(*)(PassProductType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSPRODUCTINFO_SET_PRODUCTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_BattlePassId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSPRODUCTINFO_GET_BATTLEPASSID_OFFSET))(nullptr);
		}

		::System::Void set_BattlePassId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSPRODUCTINFO_SET_BATTLEPASSID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_RequiredProducts()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSPRODUCTINFO_GET_REQUIREDPRODUCTS_OFFSET))(nullptr);
		}

		Il2CppObject* get_ProhibitedProducts()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSPRODUCTINFO_GET_PROHIBITEDPRODUCTS_OFFSET))(nullptr);
		}

		PassProductType* get_ProductType()
		{
			return (return (PassProductType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPASSPRODUCTINFO_GET_PRODUCTTYPE_OFFSET))(nullptr);
		}

	};
}


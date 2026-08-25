#pragma once
#include "unitysdk.h"

#define REQUESTINFO_SET_ISREFRESHGOODS_OFFSET UNITYSDK_OFFSET(0xABE0F0)
#define REQUESTINFO_SET_PURCHASECOUNT_OFFSET UNITYSDK_OFFSET(0xABE100)
#define REQUESTINFO_SET_GOODSUNIQUEID_OFFSET UNITYSDK_OFFSET(0xABE110)
#define REQUESTINFO_GET_GOODSUNIQUEID_OFFSET UNITYSDK_OFFSET(0xABE120)
#define REQUESTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xABE130)
#define REQUESTINFO_GET_ISREFRESHGOODS_OFFSET UNITYSDK_OFFSET(0xABE140)
#define REQUESTINFO_GET_PURCHASECOUNT_OFFSET UNITYSDK_OFFSET(0xABE150)
#define REQUESTINFO_SET_SHOPUNIQUEID_OFFSET UNITYSDK_OFFSET(0xABE160)
#define REQUESTINFO_GET_SHOPUNIQUEID_OFFSET UNITYSDK_OFFSET(0xABE170)

	inline static constexpr unsigned int RequestInfo_TypeDefinitionIndex = 8021;

	class RequestInfo : public Il2CppObject
	{
	public:
		::System::Boolean _IsRefreshGoods_k__BackingField; // 0x10
		::System::Int64 _ShopUniqueId_k__BackingField; // 0x18
		::System::Int64 _GoodsUniqueId_k__BackingField; // 0x20
		::System::Int64 _PurchaseCount_k__BackingField; // 0x28

		::System::Void set_IsRefreshGoods(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + REQUESTINFO_SET_ISREFRESHGOODS_OFFSET))(arg, nullptr);
		}

		::System::Void set_PurchaseCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + REQUESTINFO_SET_PURCHASECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_GoodsUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + REQUESTINFO_SET_GOODSUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GoodsUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + REQUESTINFO_GET_GOODSUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REQUESTINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsRefreshGoods()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + REQUESTINFO_GET_ISREFRESHGOODS_OFFSET))(nullptr);
		}

		::System::Int64 get_PurchaseCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + REQUESTINFO_GET_PURCHASECOUNT_OFFSET))(nullptr);
		}

		::System::Void set_ShopUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + REQUESTINFO_SET_SHOPUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ShopUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + REQUESTINFO_GET_SHOPUNIQUEID_OFFSET))(nullptr);
		}

	};


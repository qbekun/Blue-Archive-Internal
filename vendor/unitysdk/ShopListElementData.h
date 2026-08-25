#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class ShopProductDB; }
namespace MX::Data { class ShopRefreshExcelData; }

#define SHOPLISTELEMENTDATA_GET_ISREFRESH_OFFSET UNITYSDK_OFFSET(0xAB4090)
#define SHOPLISTELEMENTDATA_GET_SHOPID_OFFSET UNITYSDK_OFFSET(0xAB2D80)
#define SHOPLISTELEMENTDATA_GET_REFRESHEXCELDATA_OFFSET UNITYSDK_OFFSET(0xAB40A0)
#define SHOPLISTELEMENTDATA_SET_GOODSID_OFFSET UNITYSDK_OFFSET(0xAB40B0)
#define SHOPLISTELEMENTDATA_GET_CONSUMEPARCELLIST_OFFSET UNITYSDK_OFFSET(0xAB40C0)
#define SHOPLISTELEMENTDATA_GET_REWARDPARCELLIST_OFFSET UNITYSDK_OFFSET(0xAB40D0)
#define SHOPLISTELEMENTDATA_GET_GOODSID_OFFSET UNITYSDK_OFFSET(0xAB40E0)
#define SHOPLISTELEMENTDATA_CHECKPURCHASABLE_OFFSET UNITYSDK_OFFSET(0xAAAFD0)
#define SHOPLISTELEMENTDATA_GET_ISCANBUYSECRETSTONE_OFFSET UNITYSDK_OFFSET(0xAB40F0)
#define SHOPLISTELEMENTDATA_GET_SHOPPRODUCT_OFFSET UNITYSDK_OFFSET(0xAB4100)
#define SHOPLISTELEMENTDATA_GET_CANBUYCOUNT_OFFSET UNITYSDK_OFFSET(0xAB4110)
#define SHOPLISTELEMENTDATA_SET_CANBUYCOUNT_OFFSET UNITYSDK_OFFSET(0xAB4120)
#define SHOPLISTELEMENTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xAACF80)
#define SHOPLISTELEMENTDATA_SET_SHOPPRODUCT_OFFSET UNITYSDK_OFFSET(0xAB4130)
#define SHOPLISTELEMENTDATA_SET_REFRESHEXCELDATA_OFFSET UNITYSDK_OFFSET(0xAB4140)
#define SHOPLISTELEMENTDATA_SET_ISREFRESH_OFFSET UNITYSDK_OFFSET(0xAB4150)
#define SHOPLISTELEMENTDATA_SET_REWARDPARCELLIST_OFFSET UNITYSDK_OFFSET(0xAB4160)
#define SHOPLISTELEMENTDATA_SET_ISSECRETSTONE_OFFSET UNITYSDK_OFFSET(0xAB4170)
#define SHOPLISTELEMENTDATA_SET_ISCANBUYSECRETSTONE_OFFSET UNITYSDK_OFFSET(0xAB4180)
#define SHOPLISTELEMENTDATA_SET_CONSUMEPARCELLIST_OFFSET UNITYSDK_OFFSET(0xAB4190)
#define SHOPLISTELEMENTDATA_TRYGETREWARDPARCELKEYS_OFFSET UNITYSDK_OFFSET(0xAB0820)
#define SHOPLISTELEMENTDATA_GET_ISSECRETSTONE_OFFSET UNITYSDK_OFFSET(0xAB41A0)

	inline static constexpr unsigned int ShopListElementData_TypeDefinitionIndex = 7994;

	class ShopListElementData : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ShopProductDB* _ShopProduct_k__BackingField; // 0x10
		::System::Boolean _IsRefresh_k__BackingField; // 0x18
		::System::Int64 _GoodsId_k__BackingField; // 0x20
		Il2CppObject* _ConsumeParcelList_k__BackingField; // 0x28
		Il2CppObject* _RewardParcelList_k__BackingField; // 0x30
		::System::Boolean _IsSecretStone_k__BackingField; // 0x38
		::System::Int64 _CanBuyCount_k__BackingField; // 0x40
		::System::Boolean _IsCanBuySecretStone_k__BackingField; // 0x48
		::System::Boolean IsSelectBoxChecked; // 0x49
		::MX::Data::ShopRefreshExcelData* _RefreshExcelData_k__BackingField; // 0x50

		::System::Boolean get_IsRefresh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPLISTELEMENTDATA_GET_ISREFRESH_OFFSET))(nullptr);
		}

		::System::Int64 get_ShopId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPLISTELEMENTDATA_GET_SHOPID_OFFSET))(nullptr);
		}

		::MX::Data::ShopRefreshExcelData* get_RefreshExcelData()
		{
			return ((::MX::Data::ShopRefreshExcelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPLISTELEMENTDATA_GET_REFRESHEXCELDATA_OFFSET))(nullptr);
		}

		::System::Void set_GoodsId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SHOPLISTELEMENTDATA_SET_GOODSID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ConsumeParcelList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPLISTELEMENTDATA_GET_CONSUMEPARCELLIST_OFFSET))(nullptr);
		}

		Il2CppObject* get_RewardParcelList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPLISTELEMENTDATA_GET_REWARDPARCELLIST_OFFSET))(nullptr);
		}

		::System::Int64 get_GoodsId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPLISTELEMENTDATA_GET_GOODSID_OFFSET))(nullptr);
		}

		::System::Boolean CheckPurchasable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPLISTELEMENTDATA_CHECKPURCHASABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsCanBuySecretStone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPLISTELEMENTDATA_GET_ISCANBUYSECRETSTONE_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ShopProductDB* get_ShopProduct()
		{
			return ((::MX::GameLogic::DBModel::ShopProductDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPLISTELEMENTDATA_GET_SHOPPRODUCT_OFFSET))(nullptr);
		}

		::System::Int64 get_CanBuyCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPLISTELEMENTDATA_GET_CANBUYCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_CanBuyCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SHOPLISTELEMENTDATA_SET_CANBUYCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::DBModel::ShopProductDB* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ShopProductDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SHOPLISTELEMENTDATA_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_ShopProduct(::MX::GameLogic::DBModel::ShopProductDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ShopProductDB*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPLISTELEMENTDATA_SET_SHOPPRODUCT_OFFSET))(arg, nullptr);
		}

		::System::Void set_RefreshExcelData(::MX::Data::ShopRefreshExcelData* arg)
		{
			((::System::Void(*)(::MX::Data::ShopRefreshExcelData*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPLISTELEMENTDATA_SET_REFRESHEXCELDATA_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsRefresh(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SHOPLISTELEMENTDATA_SET_ISREFRESH_OFFSET))(arg, nullptr);
		}

		::System::Void set_RewardParcelList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPLISTELEMENTDATA_SET_REWARDPARCELLIST_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsSecretStone(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SHOPLISTELEMENTDATA_SET_ISSECRETSTONE_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsCanBuySecretStone(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SHOPLISTELEMENTDATA_SET_ISCANBUYSECRETSTONE_OFFSET))(arg, nullptr);
		}

		::System::Void set_ConsumeParcelList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPLISTELEMENTDATA_SET_CONSUMEPARCELLIST_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetRewardParcelKeys(Il2CppObject&* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPLISTELEMENTDATA_TRYGETREWARDPARCELKEYS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsSecretStone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPLISTELEMENTDATA_GET_ISSECRETSTONE_OFFSET))(nullptr);
		}

	};


#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ProductSelectSubType; }
namespace FlatData { class StoreType; }
namespace MX::Data::Excel { class ProductSelectionGroupExcel&; }
namespace MX::Data::Excel { class ProductAutoSelectionGroupExcel&; }
namespace MX::Data::Excel { class ProductSelectExcel&; }
namespace MX::GameLogic::Parcel { class ParcelKeyPair&; }

#define MX_DATA_PRODUCTDATA_TRYGETPRODUCTSELECTIONGROUPREWARDS_OFFSET UNITYSDK_OFFSET(0x1923520)
#define MX_DATA_PRODUCTDATA_GETLISTFROMSTORETYPE_OFFSET UNITYSDK_OFFSET(0x1923930)
#define MX_DATA_PRODUCTDATA_TRYGETPRODUCTSELECTIONGROUPSBYGROUPID_OFFSET UNITYSDK_OFFSET(0x1923B30)
#define MX_DATA_PRODUCTDATA_GET_IDS_OFFSET UNITYSDK_OFFSET(0x1923B90)
#define MX_DATA_PRODUCTDATA_GETPURCHASEPERIODTYPENONEPRODUCTDATA_OFFSET UNITYSDK_OFFSET(0x1923BE0)
#define MX_DATA_PRODUCTDATA_GETLIST_OFFSET UNITYSDK_OFFSET(0x1923E10)
#define MX_DATA_PRODUCTDATA_TRYGETPRODUCTSELECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x1923F60)
#define MX_DATA_PRODUCTDATA_GET_PRODUCTAUTOSELECTIONGROUPEXCELS_OFFSET UNITYSDK_OFFSET(0x1923FD0)
#define MX_DATA_PRODUCTDATA_TRYGETPRODUCTAUTOSELECTIONGROUPSBYGROUPID_OFFSET UNITYSDK_OFFSET(0x1924020)
#define MX_DATA_PRODUCTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1924080)
#define MX_DATA_PRODUCTDATA_GET_PRODUCTSELECTIDS_OFFSET UNITYSDK_OFFSET(0x1924290)
#define MX_DATA_PRODUCTDATA_GETPRODUCT_OFFSET UNITYSDK_OFFSET(0x19242E0)
#define MX_DATA_PRODUCTDATA_TRYGETPRODUCTAUTOSELECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x1924370)
#define MX_DATA_PRODUCTDATA_HASPRODUCT_OFFSET UNITYSDK_OFFSET(0x19243E0)
#define MX_DATA_PRODUCTDATA_TRYGETPRODUCTSELECT_OFFSET UNITYSDK_OFFSET(0x1924430)
#define MX_DATA_PRODUCTDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x1924490)
#define MX_DATA_PRODUCTDATA_TRYGETPRODUCTSELECTIONGROUPCONDITIONPARCELKEYPAIR_OFFSET UNITYSDK_OFFSET(0x19259E0)
#define MX_DATA_PRODUCTDATA_PREPAREINITIALDATA_OFFSET UNITYSDK_OFFSET(0x19245A0)
#define MX_DATA_PRODUCTDATA_GET_PRODUCTSELECTIONGROUPEXCELS_OFFSET UNITYSDK_OFFSET(0x1925BA0)

namespace MX::Data
{
	inline static constexpr unsigned int ProductData_TypeDefinitionIndex = 16301;

	class ProductData : public Il2CppObject
	{
	public:
		Il2CppObject* productDic; // 0x28
		Il2CppObject* productSelectDic; // 0x30
		Il2CppObject* productSelectionGroupByCompositeKey; // 0x38
		Il2CppObject* productAutoSelectionGroupByCompositeKey; // 0x40
		Il2CppObject* productSelectionGroupsByGroupId; // 0x48
		Il2CppObject* productAutoSelectionGroupsByGroupId; // 0x50

		::System::Boolean TryGetProductSelectionGroupRewards(::FlatData::ProductSelectSubType* arg, ::System::Int64 arg, ::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::ProductSelectSubType*, ::System::Int64, ::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTDATA_TRYGETPRODUCTSELECTIONGROUPREWARDS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* GetListFromStoreType(::FlatData::StoreType* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::StoreType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTDATA_GETLISTFROMSTORETYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetProductSelectionGroupsByGroupId(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTDATA_TRYGETPRODUCTSELECTIONGROUPSBYGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* get_Ids()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTDATA_GET_IDS_OFFSET))(nullptr);
		}

		Il2CppObject* GetPurchasePeriodTypeNoneProductData()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTDATA_GETPURCHASEPERIODTYPENONEPRODUCTDATA_OFFSET))(nullptr);
		}

		Il2CppObject* GetList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTDATA_GETLIST_OFFSET))(nullptr);
		}

		::System::Boolean TryGetProductSelectionGroup(::System::Int64 arg, ::System::Int64 arg, ::MX::Data::Excel::ProductSelectionGroupExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::MX::Data::Excel::ProductSelectionGroupExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTDATA_TRYGETPRODUCTSELECTIONGROUP_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* get_ProductAutoSelectionGroupExcels()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTDATA_GET_PRODUCTAUTOSELECTIONGROUPEXCELS_OFFSET))(nullptr);
		}

		::System::Boolean TryGetProductAutoSelectionGroupsByGroupId(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTDATA_TRYGETPRODUCTAUTOSELECTIONGROUPSBYGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTDATA_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_ProductSelectIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTDATA_GET_PRODUCTSELECTIDS_OFFSET))(nullptr);
		}

		Il2CppObject* GetProduct(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTDATA_GETPRODUCT_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetProductAutoSelectionGroup(::System::Int64 arg, ::System::Int64 arg, ::MX::Data::Excel::ProductAutoSelectionGroupExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::MX::Data::Excel::ProductAutoSelectionGroupExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTDATA_TRYGETPRODUCTAUTOSELECTIONGROUP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean HasProduct(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTDATA_HASPRODUCT_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetProductSelect(::System::Int64 arg, ::MX::Data::Excel::ProductSelectExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::ProductSelectExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTDATA_TRYGETPRODUCTSELECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Boolean TryGetProductSelectionGroupConditionParcelKeyPair(::FlatData::ProductSelectSubType* arg, ::System::Int64 arg, ::System::Int64 arg, ::MX::GameLogic::Parcel::ParcelKeyPair&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::ProductSelectSubType*, ::System::Int64, ::System::Int64, ::MX::GameLogic::Parcel::ParcelKeyPair&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTDATA_TRYGETPRODUCTSELECTIONGROUPCONDITIONPARCELKEYPAIR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void PrepareInitialData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTDATA_PREPAREINITIALDATA_OFFSET))(nullptr);
		}

		Il2CppObject* get_ProductSelectionGroupExcels()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTDATA_GET_PRODUCTSELECTIONGROUPEXCELS_OFFSET))(nullptr);
		}

	};
}


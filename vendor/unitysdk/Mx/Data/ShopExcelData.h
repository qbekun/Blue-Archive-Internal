#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ShopCategoryType; }
namespace FlatData { class PurchaseCountResetType; }
namespace FlatData { class ProductDisplayTag; }
namespace MX::Data::Excel { class ShopExcel; }
namespace MX::Data::Excel { class EventContentShopExcel; }

#define MX_DATA_SHOPEXCELDATA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x185B980)
#define MX_DATA_SHOPEXCELDATA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x185B990)
#define MX_DATA_SHOPEXCELDATA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x185B9A0)
#define MX_DATA_SHOPEXCELDATA_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x185B9B0)
#define MX_DATA_SHOPEXCELDATA_GET_CATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x185B9C0)
#define MX_DATA_SHOPEXCELDATA_SET_CATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x185B9D0)
#define MX_DATA_SHOPEXCELDATA_GET_ISLEGACY_OFFSET UNITYSDK_OFFSET(0x185B9E0)
#define MX_DATA_SHOPEXCELDATA_SET_ISLEGACY_OFFSET UNITYSDK_OFFSET(0x185B9F0)
#define MX_DATA_SHOPEXCELDATA_GET_USEBIGPOPUP_OFFSET UNITYSDK_OFFSET(0x185BA00)
#define MX_DATA_SHOPEXCELDATA_SET_USEBIGPOPUP_OFFSET UNITYSDK_OFFSET(0x185BA10)
#define MX_DATA_SHOPEXCELDATA_GET_GOODSID_OFFSET UNITYSDK_OFFSET(0x185BA20)
#define MX_DATA_SHOPEXCELDATA_SET_GOODSID_OFFSET UNITYSDK_OFFSET(0x185BA30)
#define MX_DATA_SHOPEXCELDATA_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x185BA40)
#define MX_DATA_SHOPEXCELDATA_SET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x185BA50)
#define MX_DATA_SHOPEXCELDATA_GET_SALEPERIODFROM_OFFSET UNITYSDK_OFFSET(0x185BA60)
#define MX_DATA_SHOPEXCELDATA_SET_SALEPERIODFROM_OFFSET UNITYSDK_OFFSET(0x185BA70)
#define MX_DATA_SHOPEXCELDATA_GET_SALEPERIODTO_OFFSET UNITYSDK_OFFSET(0x185BA80)
#define MX_DATA_SHOPEXCELDATA_SET_SALEPERIODTO_OFFSET UNITYSDK_OFFSET(0x185BA90)
#define MX_DATA_SHOPEXCELDATA_GET_PURCHASECOOLTIMEMIN_OFFSET UNITYSDK_OFFSET(0x185BAA0)
#define MX_DATA_SHOPEXCELDATA_SET_PURCHASECOOLTIMEMIN_OFFSET UNITYSDK_OFFSET(0x185BAB0)
#define MX_DATA_SHOPEXCELDATA_GET_PURCHASECOUNTLIMIT_OFFSET UNITYSDK_OFFSET(0x185BAC0)
#define MX_DATA_SHOPEXCELDATA_SET_PURCHASECOUNTLIMIT_OFFSET UNITYSDK_OFFSET(0x185BAD0)
#define MX_DATA_SHOPEXCELDATA_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x185BAE0)
#define MX_DATA_SHOPEXCELDATA_SET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x185BAF0)
#define MX_DATA_SHOPEXCELDATA_GET_PURCHASECOUNTRESETTYPE_OFFSET UNITYSDK_OFFSET(0x185BB00)
#define MX_DATA_SHOPEXCELDATA_SET_PURCHASECOUNTRESETTYPE_OFFSET UNITYSDK_OFFSET(0x185BB10)
#define MX_DATA_SHOPEXCELDATA_GET_BUYREPORTEVENTNAME_OFFSET UNITYSDK_OFFSET(0x185BB20)
#define MX_DATA_SHOPEXCELDATA_SET_BUYREPORTEVENTNAME_OFFSET UNITYSDK_OFFSET(0x185BB30)
#define MX_DATA_SHOPEXCELDATA_GET_RESTRICTBUYWHENINVENTORYFULL_OFFSET UNITYSDK_OFFSET(0x185BB40)
#define MX_DATA_SHOPEXCELDATA_SET_RESTRICTBUYWHENINVENTORYFULL_OFFSET UNITYSDK_OFFSET(0x185BB50)
#define MX_DATA_SHOPEXCELDATA_GET_DISPLAYTAG_OFFSET UNITYSDK_OFFSET(0x185BB60)
#define MX_DATA_SHOPEXCELDATA_SET_DISPLAYTAG_OFFSET UNITYSDK_OFFSET(0x185BB70)
#define MX_DATA_SHOPEXCELDATA_GET_SHOPUPDATEGROUPID_OFFSET UNITYSDK_OFFSET(0x185BB80)
#define MX_DATA_SHOPEXCELDATA_SET_SHOPUPDATEGROUPID_OFFSET UNITYSDK_OFFSET(0x185BB90)
#define MX_DATA_SHOPEXCELDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x185BBA0)
#define MX_DATA_SHOPEXCELDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x185BE30)

namespace MX::Data
{
	inline static constexpr unsigned int ShopExcelData_TypeDefinitionIndex = 15887;

	class ShopExcelData : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x10
		::System::Int64 _UniqueId_k__BackingField; // 0x18
		::FlatData::ShopCategoryType* _CategoryType_k__BackingField; // 0x20
		::System::Boolean _IsLegacy_k__BackingField; // 0x24
		::System::Boolean _UseBigPopup_k__BackingField; // 0x25
		::Il2CppArray<::System::Object*>* _GoodsId_k__BackingField; // 0x28
		::System::Int64 _DisplayOrder_k__BackingField; // 0x30
		Il2CppObject* _SalePeriodFrom_k__BackingField; // 0x38
		Il2CppObject* _SalePeriodTo_k__BackingField; // 0x48
		::System::Int64 _PurchaseCooltimeMin_k__BackingField; // 0x58
		::System::Int64 _PurchaseCountLimit_k__BackingField; // 0x60
		::System::UInt32 _LocalizeEtcId_k__BackingField; // 0x68
		::FlatData::PurchaseCountResetType* _PurchaseCountResetType_k__BackingField; // 0x6C
		::System::String* _BuyReportEventName_k__BackingField; // 0x70
		::System::Boolean _RestrictBuyWhenInventoryFull_k__BackingField; // 0x78
		::FlatData::ProductDisplayTag* _DisplayTag_k__BackingField; // 0x7C
		::System::Int32 _ShopUpdateGroupId_k__BackingField; // 0x80

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPEXCELDATA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPEXCELDATA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPEXCELDATA_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPEXCELDATA_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::FlatData::ShopCategoryType* get_CategoryType()
		{
			return (return (::FlatData::ShopCategoryType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPEXCELDATA_GET_CATEGORYTYPE_OFFSET))(nullptr);
		}

		::System::Void set_CategoryType(::FlatData::ShopCategoryType* arg)
		{
			((::System::Void(*)(::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPEXCELDATA_SET_CATEGORYTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsLegacy()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPEXCELDATA_GET_ISLEGACY_OFFSET))(nullptr);
		}

		::System::Void set_IsLegacy(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPEXCELDATA_SET_ISLEGACY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UseBigPopup()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPEXCELDATA_GET_USEBIGPOPUP_OFFSET))(nullptr);
		}

		::System::Void set_UseBigPopup(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPEXCELDATA_SET_USEBIGPOPUP_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_GoodsId()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPEXCELDATA_GET_GOODSID_OFFSET))(nullptr);
		}

		::System::Void set_GoodsId(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPEXCELDATA_SET_GOODSID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_DisplayOrder()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPEXCELDATA_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::System::Void set_DisplayOrder(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPEXCELDATA_SET_DISPLAYORDER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_SalePeriodFrom()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPEXCELDATA_GET_SALEPERIODFROM_OFFSET))(nullptr);
		}

		::System::Void set_SalePeriodFrom(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPEXCELDATA_SET_SALEPERIODFROM_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_SalePeriodTo()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPEXCELDATA_GET_SALEPERIODTO_OFFSET))(nullptr);
		}

		::System::Void set_SalePeriodTo(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPEXCELDATA_SET_SALEPERIODTO_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_PurchaseCooltimeMin()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPEXCELDATA_GET_PURCHASECOOLTIMEMIN_OFFSET))(nullptr);
		}

		::System::Void set_PurchaseCooltimeMin(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPEXCELDATA_SET_PURCHASECOOLTIMEMIN_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_PurchaseCountLimit()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPEXCELDATA_GET_PURCHASECOUNTLIMIT_OFFSET))(nullptr);
		}

		::System::Void set_PurchaseCountLimit(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPEXCELDATA_SET_PURCHASECOUNTLIMIT_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_LocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPEXCELDATA_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		::System::Void set_LocalizeEtcId(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPEXCELDATA_SET_LOCALIZEETCID_OFFSET))(arg, nullptr);
		}

		::FlatData::PurchaseCountResetType* get_PurchaseCountResetType()
		{
			return (return (::FlatData::PurchaseCountResetType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPEXCELDATA_GET_PURCHASECOUNTRESETTYPE_OFFSET))(nullptr);
		}

		::System::Void set_PurchaseCountResetType(::FlatData::PurchaseCountResetType* arg)
		{
			((::System::Void(*)(::FlatData::PurchaseCountResetType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPEXCELDATA_SET_PURCHASECOUNTRESETTYPE_OFFSET))(arg, nullptr);
		}

		::System::String* get_BuyReportEventName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPEXCELDATA_GET_BUYREPORTEVENTNAME_OFFSET))(nullptr);
		}

		::System::Void set_BuyReportEventName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPEXCELDATA_SET_BUYREPORTEVENTNAME_OFFSET))(str, nullptr);
		}

		::System::Boolean get_RestrictBuyWhenInventoryFull()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPEXCELDATA_GET_RESTRICTBUYWHENINVENTORYFULL_OFFSET))(nullptr);
		}

		::System::Void set_RestrictBuyWhenInventoryFull(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPEXCELDATA_SET_RESTRICTBUYWHENINVENTORYFULL_OFFSET))(arg, nullptr);
		}

		::FlatData::ProductDisplayTag* get_DisplayTag()
		{
			return (return (::FlatData::ProductDisplayTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPEXCELDATA_GET_DISPLAYTAG_OFFSET))(nullptr);
		}

		::System::Void set_DisplayTag(::FlatData::ProductDisplayTag* arg)
		{
			((::System::Void(*)(::FlatData::ProductDisplayTag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPEXCELDATA_SET_DISPLAYTAG_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ShopUpdateGroupId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPEXCELDATA_GET_SHOPUPDATEGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_ShopUpdateGroupId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPEXCELDATA_SET_SHOPUPDATEGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::ShopExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ShopExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPEXCELDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::EventContentShopExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentShopExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPEXCELDATA_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}


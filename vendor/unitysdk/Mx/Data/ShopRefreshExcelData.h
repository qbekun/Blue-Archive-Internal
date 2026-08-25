#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ShopCategoryType; }
namespace FlatData { class ProductDisplayTag; }
namespace FlatData { class ShopPurchasePopupType; }
namespace MX::Data::Excel { class ShopRefreshExcel; }
namespace MX::Data::Excel { class EventContentShopRefreshExcel; }

#define MX_DATA_SHOPREFRESHEXCELDATA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x185E6B0)
#define MX_DATA_SHOPREFRESHEXCELDATA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x185E6C0)
#define MX_DATA_SHOPREFRESHEXCELDATA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x185E6D0)
#define MX_DATA_SHOPREFRESHEXCELDATA_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x185E6E0)
#define MX_DATA_SHOPREFRESHEXCELDATA_GET_CATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x185E6F0)
#define MX_DATA_SHOPREFRESHEXCELDATA_SET_CATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x185E700)
#define MX_DATA_SHOPREFRESHEXCELDATA_GET_ISLEGACY_OFFSET UNITYSDK_OFFSET(0x185E710)
#define MX_DATA_SHOPREFRESHEXCELDATA_SET_ISLEGACY_OFFSET UNITYSDK_OFFSET(0x185E720)
#define MX_DATA_SHOPREFRESHEXCELDATA_GET_GOODSID_OFFSET UNITYSDK_OFFSET(0x185E730)
#define MX_DATA_SHOPREFRESHEXCELDATA_SET_GOODSID_OFFSET UNITYSDK_OFFSET(0x185E740)
#define MX_DATA_SHOPREFRESHEXCELDATA_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x185E750)
#define MX_DATA_SHOPREFRESHEXCELDATA_SET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x185E760)
#define MX_DATA_SHOPREFRESHEXCELDATA_GET_REFRESHGROUP_OFFSET UNITYSDK_OFFSET(0x185E770)
#define MX_DATA_SHOPREFRESHEXCELDATA_SET_REFRESHGROUP_OFFSET UNITYSDK_OFFSET(0x185E780)
#define MX_DATA_SHOPREFRESHEXCELDATA_GET_PROB_OFFSET UNITYSDK_OFFSET(0x185E790)
#define MX_DATA_SHOPREFRESHEXCELDATA_SET_PROB_OFFSET UNITYSDK_OFFSET(0x185E7A0)
#define MX_DATA_SHOPREFRESHEXCELDATA_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x185E7B0)
#define MX_DATA_SHOPREFRESHEXCELDATA_SET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x185E7C0)
#define MX_DATA_SHOPREFRESHEXCELDATA_GET_BUYREPORTEVENTNAME_OFFSET UNITYSDK_OFFSET(0x185E7D0)
#define MX_DATA_SHOPREFRESHEXCELDATA_SET_BUYREPORTEVENTNAME_OFFSET UNITYSDK_OFFSET(0x185E7E0)
#define MX_DATA_SHOPREFRESHEXCELDATA_GET_DISPLAYTAG_OFFSET UNITYSDK_OFFSET(0x185E7F0)
#define MX_DATA_SHOPREFRESHEXCELDATA_SET_DISPLAYTAG_OFFSET UNITYSDK_OFFSET(0x185E800)
#define MX_DATA_SHOPREFRESHEXCELDATA_GET_ISBUNDLE_OFFSET UNITYSDK_OFFSET(0x185E810)
#define MX_DATA_SHOPREFRESHEXCELDATA_SET_ISBUNDLE_OFFSET UNITYSDK_OFFSET(0x185E820)
#define MX_DATA_SHOPREFRESHEXCELDATA_GET_SHOPPURCHASEPOPUPTYPE_OFFSET UNITYSDK_OFFSET(0x185E830)
#define MX_DATA_SHOPREFRESHEXCELDATA_SET_SHOPPURCHASEPOPUPTYPE_OFFSET UNITYSDK_OFFSET(0x185E840)
#define MX_DATA_SHOPREFRESHEXCELDATA_GET_VISIBLEAMOUNT_OFFSET UNITYSDK_OFFSET(0x185E850)
#define MX_DATA_SHOPREFRESHEXCELDATA_SET_VISIBLEAMOUNT_OFFSET UNITYSDK_OFFSET(0x185E860)
#define MX_DATA_SHOPREFRESHEXCELDATA_GET_PURCHASECOUNTLIMIT_OFFSET UNITYSDK_OFFSET(0x185E870)
#define MX_DATA_SHOPREFRESHEXCELDATA_SET_PURCHASECOUNTLIMIT_OFFSET UNITYSDK_OFFSET(0x185E880)
#define MX_DATA_SHOPREFRESHEXCELDATA_GET_PRODUCTUPDATETIME_OFFSET UNITYSDK_OFFSET(0x185E890)
#define MX_DATA_SHOPREFRESHEXCELDATA_SET_PRODUCTUPDATETIME_OFFSET UNITYSDK_OFFSET(0x185E8A0)
#define MX_DATA_SHOPREFRESHEXCELDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x185E8B0)
#define MX_DATA_SHOPREFRESHEXCELDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x185E8C0)
#define MX_DATA_SHOPREFRESHEXCELDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x185EA60)

namespace MX::Data
{
	inline static constexpr unsigned int ShopRefreshExcelData_TypeDefinitionIndex = 15895;

	class ShopRefreshExcelData : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x10
		::System::Int64 _UniqueId_k__BackingField; // 0x18
		::FlatData::ShopCategoryType* _CategoryType_k__BackingField; // 0x20
		::System::Boolean _IsLegacy_k__BackingField; // 0x24
		::System::Int64 _GoodsId_k__BackingField; // 0x28
		::System::Int64 _DisplayOrder_k__BackingField; // 0x30
		::System::Int32 _RefreshGroup_k__BackingField; // 0x38
		::System::Int64 _Prob_k__BackingField; // 0x40
		::System::UInt32 _LocalizeEtcId_k__BackingField; // 0x48
		::System::String* _BuyReportEventName_k__BackingField; // 0x50
		::FlatData::ProductDisplayTag* _DisplayTag_k__BackingField; // 0x58
		::System::Boolean _IsBundle_k__BackingField; // 0x5C
		::FlatData::ShopPurchasePopupType* _ShopPurchasePopupType_k__BackingField; // 0x60
		::System::Int64 _VisibleAmount_k__BackingField; // 0x68
		::System::Int64 _PurchaseCountLimit_k__BackingField; // 0x70
		::System::DateTime* _ProductUpdateTime_k__BackingField; // 0x78

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPREFRESHEXCELDATA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPREFRESHEXCELDATA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPREFRESHEXCELDATA_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPREFRESHEXCELDATA_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::FlatData::ShopCategoryType* get_CategoryType()
		{
			return (return (::FlatData::ShopCategoryType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPREFRESHEXCELDATA_GET_CATEGORYTYPE_OFFSET))(nullptr);
		}

		::System::Void set_CategoryType(::FlatData::ShopCategoryType* arg)
		{
			((::System::Void(*)(::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPREFRESHEXCELDATA_SET_CATEGORYTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsLegacy()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPREFRESHEXCELDATA_GET_ISLEGACY_OFFSET))(nullptr);
		}

		::System::Void set_IsLegacy(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPREFRESHEXCELDATA_SET_ISLEGACY_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GoodsId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPREFRESHEXCELDATA_GET_GOODSID_OFFSET))(nullptr);
		}

		::System::Void set_GoodsId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPREFRESHEXCELDATA_SET_GOODSID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_DisplayOrder()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPREFRESHEXCELDATA_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::System::Void set_DisplayOrder(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPREFRESHEXCELDATA_SET_DISPLAYORDER_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RefreshGroup()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPREFRESHEXCELDATA_GET_REFRESHGROUP_OFFSET))(nullptr);
		}

		::System::Void set_RefreshGroup(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPREFRESHEXCELDATA_SET_REFRESHGROUP_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Prob()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPREFRESHEXCELDATA_GET_PROB_OFFSET))(nullptr);
		}

		::System::Void set_Prob(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPREFRESHEXCELDATA_SET_PROB_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_LocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPREFRESHEXCELDATA_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		::System::Void set_LocalizeEtcId(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPREFRESHEXCELDATA_SET_LOCALIZEETCID_OFFSET))(arg, nullptr);
		}

		::System::String* get_BuyReportEventName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPREFRESHEXCELDATA_GET_BUYREPORTEVENTNAME_OFFSET))(nullptr);
		}

		::System::Void set_BuyReportEventName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPREFRESHEXCELDATA_SET_BUYREPORTEVENTNAME_OFFSET))(str, nullptr);
		}

		::FlatData::ProductDisplayTag* get_DisplayTag()
		{
			return (return (::FlatData::ProductDisplayTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPREFRESHEXCELDATA_GET_DISPLAYTAG_OFFSET))(nullptr);
		}

		::System::Void set_DisplayTag(::FlatData::ProductDisplayTag* arg)
		{
			((::System::Void(*)(::FlatData::ProductDisplayTag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPREFRESHEXCELDATA_SET_DISPLAYTAG_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsBundle()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPREFRESHEXCELDATA_GET_ISBUNDLE_OFFSET))(nullptr);
		}

		::System::Void set_IsBundle(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPREFRESHEXCELDATA_SET_ISBUNDLE_OFFSET))(arg, nullptr);
		}

		::FlatData::ShopPurchasePopupType* get_ShopPurchasePopupType()
		{
			return (return (::FlatData::ShopPurchasePopupType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPREFRESHEXCELDATA_GET_SHOPPURCHASEPOPUPTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ShopPurchasePopupType(::FlatData::ShopPurchasePopupType* arg)
		{
			((::System::Void(*)(::FlatData::ShopPurchasePopupType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPREFRESHEXCELDATA_SET_SHOPPURCHASEPOPUPTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_VisibleAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPREFRESHEXCELDATA_GET_VISIBLEAMOUNT_OFFSET))(nullptr);
		}

		::System::Void set_VisibleAmount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPREFRESHEXCELDATA_SET_VISIBLEAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_PurchaseCountLimit()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPREFRESHEXCELDATA_GET_PURCHASECOUNTLIMIT_OFFSET))(nullptr);
		}

		::System::Void set_PurchaseCountLimit(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPREFRESHEXCELDATA_SET_PURCHASECOUNTLIMIT_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_ProductUpdateTime()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPREFRESHEXCELDATA_GET_PRODUCTUPDATETIME_OFFSET))(nullptr);
		}

		::System::Void set_ProductUpdateTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPREFRESHEXCELDATA_SET_PRODUCTUPDATETIME_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPREFRESHEXCELDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::ShopRefreshExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ShopRefreshExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPREFRESHEXCELDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::EventContentShopRefreshExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentShopRefreshExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPREFRESHEXCELDATA_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}


#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ShopCategoryType; }
namespace FlatData { class ShopGroupType; }
namespace FlatData { class ShopRefresherType; }
namespace FlatData { class ShopRefreshPeriodType; }
namespace FlatData { class ParcelType; }
namespace MX::Data::Excel { class ShopInfoExcel; }
namespace MX::Data::Excel { class EventContentShopInfoExcel; }

#define MX_DATA_SHOPINFOEXCELDATA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x185CE40)
#define MX_DATA_SHOPINFOEXCELDATA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x185CE50)
#define MX_DATA_SHOPINFOEXCELDATA_GET_ISSOLDOUTDIMMED_OFFSET UNITYSDK_OFFSET(0x185CE60)
#define MX_DATA_SHOPINFOEXCELDATA_SET_ISSOLDOUTDIMMED_OFFSET UNITYSDK_OFFSET(0x185CE70)
#define MX_DATA_SHOPINFOEXCELDATA_GET_COSTPARCELID_OFFSET UNITYSDK_OFFSET(0x185CE80)
#define MX_DATA_SHOPINFOEXCELDATA_SET_COSTPARCELID_OFFSET UNITYSDK_OFFSET(0x185CE90)
#define MX_DATA_SHOPINFOEXCELDATA_GET_COSTPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x185CEA0)
#define MX_DATA_SHOPINFOEXCELDATA_SET_COSTPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x185CEB0)
#define MX_DATA_SHOPINFOEXCELDATA_GET_CATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x185CEC0)
#define MX_DATA_SHOPINFOEXCELDATA_SET_CATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x185CED0)
#define MX_DATA_SHOPINFOEXCELDATA_GET_SHOPGROUPTYPE_OFFSET UNITYSDK_OFFSET(0x185CEE0)
#define MX_DATA_SHOPINFOEXCELDATA_SET_SHOPGROUPTYPE_OFFSET UNITYSDK_OFFSET(0x185CEF0)
#define MX_DATA_SHOPINFOEXCELDATA_GET_REFRESHERTYPE_OFFSET UNITYSDK_OFFSET(0x185CF00)
#define MX_DATA_SHOPINFOEXCELDATA_SET_REFRESHERTYPE_OFFSET UNITYSDK_OFFSET(0x185CF10)
#define MX_DATA_SHOPINFOEXCELDATA_GET_REFRESHPERIODTYPE_OFFSET UNITYSDK_OFFSET(0x185CF20)
#define MX_DATA_SHOPINFOEXCELDATA_SET_REFRESHPERIODTYPE_OFFSET UNITYSDK_OFFSET(0x185CF30)
#define MX_DATA_SHOPINFOEXCELDATA_GET_OPENPERIODFROM_OFFSET UNITYSDK_OFFSET(0x185CF40)
#define MX_DATA_SHOPINFOEXCELDATA_SET_OPENPERIODFROM_OFFSET UNITYSDK_OFFSET(0x185CF50)
#define MX_DATA_SHOPINFOEXCELDATA_GET_OPENPERIODTO_OFFSET UNITYSDK_OFFSET(0x185CF60)
#define MX_DATA_SHOPINFOEXCELDATA_SET_OPENPERIODTO_OFFSET UNITYSDK_OFFSET(0x185CF70)
#define MX_DATA_SHOPINFOEXCELDATA_GET_SHOPPRODUCTUPDATETIME_OFFSET UNITYSDK_OFFSET(0x185CF80)
#define MX_DATA_SHOPINFOEXCELDATA_SET_SHOPPRODUCTUPDATETIME_OFFSET UNITYSDK_OFFSET(0x185CF90)
#define MX_DATA_SHOPINFOEXCELDATA_GET_REFRESHPERIODBASETIME_OFFSET UNITYSDK_OFFSET(0x185CFA0)
#define MX_DATA_SHOPINFOEXCELDATA_SET_REFRESHPERIODBASETIME_OFFSET UNITYSDK_OFFSET(0x185CFB0)
#define MX_DATA_SHOPINFOEXCELDATA_GET_REFRESHSERVICEGOODSIDS_OFFSET UNITYSDK_OFFSET(0x185CFC0)
#define MX_DATA_SHOPINFOEXCELDATA_SET_REFRESHSERVICEGOODSIDS_OFFSET UNITYSDK_OFFSET(0x185CFD0)
#define MX_DATA_SHOPINFOEXCELDATA_GET_ISPRODUCTLISTALWAYSSAME_OFFSET UNITYSDK_OFFSET(0x185CFE0)
#define MX_DATA_SHOPINFOEXCELDATA_SET_ISPRODUCTLISTALWAYSSAME_OFFSET UNITYSDK_OFFSET(0x185CFF0)
#define MX_DATA_SHOPINFOEXCELDATA_GET_DISPLAYPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x185D000)
#define MX_DATA_SHOPINFOEXCELDATA_SET_DISPLAYPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x185D010)
#define MX_DATA_SHOPINFOEXCELDATA_GET_DISPLAYPARCELID_OFFSET UNITYSDK_OFFSET(0x185D020)
#define MX_DATA_SHOPINFOEXCELDATA_SET_DISPLAYPARCELID_OFFSET UNITYSDK_OFFSET(0x185D030)
#define MX_DATA_SHOPINFOEXCELDATA_GET_ISSHOPVISIBLE_OFFSET UNITYSDK_OFFSET(0x185D040)
#define MX_DATA_SHOPINFOEXCELDATA_SET_ISSHOPVISIBLE_OFFSET UNITYSDK_OFFSET(0x185D050)
#define MX_DATA_SHOPINFOEXCELDATA_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x185D060)
#define MX_DATA_SHOPINFOEXCELDATA_SET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x185D070)
#define MX_DATA_SHOPINFOEXCELDATA_GET_ISREFRESH_OFFSET UNITYSDK_OFFSET(0x185D080)
#define MX_DATA_SHOPINFOEXCELDATA_SET_ISREFRESH_OFFSET UNITYSDK_OFFSET(0x185D090)
#define MX_DATA_SHOPINFOEXCELDATA_GET_AUTOREFRESHCOOLTIME_OFFSET UNITYSDK_OFFSET(0x185D0A0)
#define MX_DATA_SHOPINFOEXCELDATA_SET_AUTOREFRESHCOOLTIME_OFFSET UNITYSDK_OFFSET(0x185D0B0)
#define MX_DATA_SHOPINFOEXCELDATA_GET_REFRESHABLECOUNT_OFFSET UNITYSDK_OFFSET(0x185D0C0)
#define MX_DATA_SHOPINFOEXCELDATA_SET_REFRESHABLECOUNT_OFFSET UNITYSDK_OFFSET(0x185D0D0)
#define MX_DATA_SHOPINFOEXCELDATA_GET_SHOPUPDATEDATE_OFFSET UNITYSDK_OFFSET(0x185D0E0)
#define MX_DATA_SHOPINFOEXCELDATA_SET_SHOPUPDATEDATE_OFFSET UNITYSDK_OFFSET(0x185D0F0)
#define MX_DATA_SHOPINFOEXCELDATA_GET_SHOPUPDATEGROUPIDS_OFFSET UNITYSDK_OFFSET(0x185D100)
#define MX_DATA_SHOPINFOEXCELDATA_SET_SHOPUPDATEGROUPIDS_OFFSET UNITYSDK_OFFSET(0x185D110)
#define MX_DATA_SHOPINFOEXCELDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x185D130)
#define MX_DATA_SHOPINFOEXCELDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x185D740)
#define MX_DATA_SHOPINFOEXCELDATA_CALCRECENTREFRESHTIME_OFFSET UNITYSDK_OFFSET(0x185DB30)
#define MX_DATA_SHOPINFOEXCELDATA_CALCNEXTREFRESHTIME_OFFSET UNITYSDK_OFFSET(0x185E020)
#define MX_DATA_SHOPINFOEXCELDATA_GETCURRENTGROUPID_OFFSET UNITYSDK_OFFSET(0x185E200)
#define MX_DATA_SHOPINFOEXCELDATA_GETCURRENTREFRESHSEED_OFFSET UNITYSDK_OFFSET(0x185E290)
#define MX_DATA_SHOPINFOEXCELDATA_ISOPEN_OFFSET UNITYSDK_OFFSET(0x185E300)

namespace MX::Data
{
	inline static constexpr unsigned int ShopInfoExcelData_TypeDefinitionIndex = 15893;

	class ShopInfoExcelData : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x10
		::System::Boolean _IsSoldOutDimmed_k__BackingField; // 0x18
		::Il2CppArray<::System::Object*>* _CostParcelId_k__BackingField; // 0x20
		::Il2CppArray<::System::Object*>* _CostParcelType_k__BackingField; // 0x28
		::FlatData::ShopCategoryType* _CategoryType_k__BackingField; // 0x30
		::FlatData::ShopGroupType* _ShopGroupType_k__BackingField; // 0x34
		::FlatData::ShopRefresherType* _RefresherType_k__BackingField; // 0x38
		::FlatData::ShopRefreshPeriodType* _RefreshPeriodType_k__BackingField; // 0x3C
		::System::DateTime* _OpenPeriodFrom_k__BackingField; // 0x40
		::System::DateTime* _OpenPeriodTo_k__BackingField; // 0x48
		::System::DateTime* _ShopProductUpdateTime_k__BackingField; // 0x50
		::System::DateTime* _RefreshPeriodBaseTime_k__BackingField; // 0x58
		::Il2CppArray<::System::Object*>* _RefreshServiceGoodsIds_k__BackingField; // 0x60
		::System::Boolean _IsProductListAlwaysSame_k__BackingField; // 0x68
		::FlatData::ParcelType* _DisplayParcelType_k__BackingField; // 0x6C
		::System::Int64 _DisplayParcelId_k__BackingField; // 0x70
		::System::Boolean _IsShopVisible_k__BackingField; // 0x78
		::System::Int32 _DisplayOrder_k__BackingField; // 0x7C
		::System::Boolean _IsRefresh_k__BackingField; // 0x80
		::System::Int64 _AutoRefreshCoolTime_k__BackingField; // 0x88
		::System::Int64 _RefreshableCount_k__BackingField; // 0x90
		::System::Int32 _ShopUpdateDate_k__BackingField; // 0x98
		::Il2CppArray<::System::Object*>* _ShopUpdateGroupIds_k__BackingField; // 0xA0

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsSoldOutDimmed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_GET_ISSOLDOUTDIMMED_OFFSET))(nullptr);
		}

		::System::Void set_IsSoldOutDimmed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_SET_ISSOLDOUTDIMMED_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_CostParcelId()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_GET_COSTPARCELID_OFFSET))(nullptr);
		}

		::System::Void set_CostParcelId(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_SET_COSTPARCELID_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_CostParcelType()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_GET_COSTPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Void set_CostParcelType(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_SET_COSTPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::ShopCategoryType* get_CategoryType()
		{
			return (return (::FlatData::ShopCategoryType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_GET_CATEGORYTYPE_OFFSET))(nullptr);
		}

		::System::Void set_CategoryType(::FlatData::ShopCategoryType* arg)
		{
			((::System::Void(*)(::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_SET_CATEGORYTYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::ShopGroupType* get_ShopGroupType()
		{
			return (return (::FlatData::ShopGroupType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_GET_SHOPGROUPTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ShopGroupType(::FlatData::ShopGroupType* arg)
		{
			((::System::Void(*)(::FlatData::ShopGroupType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_SET_SHOPGROUPTYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::ShopRefresherType* get_RefresherType()
		{
			return (return (::FlatData::ShopRefresherType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_GET_REFRESHERTYPE_OFFSET))(nullptr);
		}

		::System::Void set_RefresherType(::FlatData::ShopRefresherType* arg)
		{
			((::System::Void(*)(::FlatData::ShopRefresherType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_SET_REFRESHERTYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::ShopRefreshPeriodType* get_RefreshPeriodType()
		{
			return (return (::FlatData::ShopRefreshPeriodType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_GET_REFRESHPERIODTYPE_OFFSET))(nullptr);
		}

		::System::Void set_RefreshPeriodType(::FlatData::ShopRefreshPeriodType* arg)
		{
			((::System::Void(*)(::FlatData::ShopRefreshPeriodType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_SET_REFRESHPERIODTYPE_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_OpenPeriodFrom()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_GET_OPENPERIODFROM_OFFSET))(nullptr);
		}

		::System::Void set_OpenPeriodFrom(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_SET_OPENPERIODFROM_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_OpenPeriodTo()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_GET_OPENPERIODTO_OFFSET))(nullptr);
		}

		::System::Void set_OpenPeriodTo(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_SET_OPENPERIODTO_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_ShopProductUpdateTime()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_GET_SHOPPRODUCTUPDATETIME_OFFSET))(nullptr);
		}

		::System::Void set_ShopProductUpdateTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_SET_SHOPPRODUCTUPDATETIME_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_RefreshPeriodBaseTime()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_GET_REFRESHPERIODBASETIME_OFFSET))(nullptr);
		}

		::System::Void set_RefreshPeriodBaseTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_SET_REFRESHPERIODBASETIME_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_RefreshServiceGoodsIds()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_GET_REFRESHSERVICEGOODSIDS_OFFSET))(nullptr);
		}

		::System::Void set_RefreshServiceGoodsIds(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_SET_REFRESHSERVICEGOODSIDS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsProductListAlwaysSame()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_GET_ISPRODUCTLISTALWAYSSAME_OFFSET))(nullptr);
		}

		::System::Void set_IsProductListAlwaysSame(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_SET_ISPRODUCTLISTALWAYSSAME_OFFSET))(arg, nullptr);
		}

		::FlatData::ParcelType* get_DisplayParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_GET_DISPLAYPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Void set_DisplayParcelType(::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_SET_DISPLAYPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_DisplayParcelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_GET_DISPLAYPARCELID_OFFSET))(nullptr);
		}

		::System::Void set_DisplayParcelId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_SET_DISPLAYPARCELID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsShopVisible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_GET_ISSHOPVISIBLE_OFFSET))(nullptr);
		}

		::System::Void set_IsShopVisible(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_SET_ISSHOPVISIBLE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DisplayOrder()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::System::Void set_DisplayOrder(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_SET_DISPLAYORDER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsRefresh()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_GET_ISREFRESH_OFFSET))(nullptr);
		}

		::System::Void set_IsRefresh(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_SET_ISREFRESH_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AutoRefreshCoolTime()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_GET_AUTOREFRESHCOOLTIME_OFFSET))(nullptr);
		}

		::System::Void set_AutoRefreshCoolTime(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_SET_AUTOREFRESHCOOLTIME_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RefreshableCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_GET_REFRESHABLECOUNT_OFFSET))(nullptr);
		}

		::System::Void set_RefreshableCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_SET_REFRESHABLECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ShopUpdateDate()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_GET_SHOPUPDATEDATE_OFFSET))(nullptr);
		}

		::System::Void set_ShopUpdateDate(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_SET_SHOPUPDATEDATE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ShopUpdateGroupIds()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_GET_SHOPUPDATEGROUPIDS_OFFSET))(nullptr);
		}

		::System::Void set_ShopUpdateGroupIds(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_SET_SHOPUPDATEGROUPIDS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::ShopInfoExcel* arg, ::FlatData::ShopGroupType* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ShopInfoExcel*, ::FlatData::ShopGroupType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::EventContentShopInfoExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentShopInfoExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::DateTime* CalcRecentRefreshTime(::System::DateTime* arg)
		{
			return (return (::System::DateTime*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_CALCRECENTREFRESHTIME_OFFSET))(arg, nullptr);
		}

		::System::DateTime* CalcNextRefreshTime(::System::DateTime* arg)
		{
			return (return (::System::DateTime*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_CALCNEXTREFRESHTIME_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetCurrentGroupId(::System::DateTime* arg)
		{
			return (return (::System::Int32(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_GETCURRENTGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetCurrentRefreshSeed(::System::DateTime* arg)
		{
			return (return (::System::Int32(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_GETCURRENTREFRESHSEED_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsOpen(::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPINFOEXCELDATA_ISOPEN_OFFSET))(arg, nullptr);
		}

	};
}


#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ShopRefreshExcel; }
namespace FlatData { class ShopPurchasePopupType; }
namespace FlatData { class ShopCategoryType; }
namespace FlatData { class ProductDisplayTag; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_SHOPREFRESHEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C81F20)
#define MX_DATA_EXCEL_SHOPREFRESHEXCEL_GETROOTASSHOPREFRESHEXCEL_OFFSET UNITYSDK_OFFSET(0x1C81F30)
#define MX_DATA_EXCEL_SHOPREFRESHEXCEL_GETROOTASSHOPREFRESHEXCEL_OFFSET UNITYSDK_OFFSET(0x1C81F90)
#define MX_DATA_EXCEL_SHOPREFRESHEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C82020)
#define MX_DATA_EXCEL_SHOPREFRESHEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C81FF0)
#define MX_DATA_EXCEL_SHOPREFRESHEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C82040)
#define MX_DATA_EXCEL_SHOPREFRESHEXCEL_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1C82090)
#define MX_DATA_EXCEL_SHOPREFRESHEXCEL_GET_ISLEGACY_OFFSET UNITYSDK_OFFSET(0x1C820E0)
#define MX_DATA_EXCEL_SHOPREFRESHEXCEL_GET_GOODSID_OFFSET UNITYSDK_OFFSET(0x1C82130)
#define MX_DATA_EXCEL_SHOPREFRESHEXCEL_GET_ISBUNDLE_OFFSET UNITYSDK_OFFSET(0x1C82180)
#define MX_DATA_EXCEL_SHOPREFRESHEXCEL_GET_SHOPPURCHASEPOPUPTYPE_OFFSET UNITYSDK_OFFSET(0x1C821D0)
#define MX_DATA_EXCEL_SHOPREFRESHEXCEL_GET_VISIBLEAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C82220)
#define MX_DATA_EXCEL_SHOPREFRESHEXCEL_GET_PURCHASECOUNTLIMIT_OFFSET UNITYSDK_OFFSET(0x1C82270)
#define MX_DATA_EXCEL_SHOPREFRESHEXCEL_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1C822C0)
#define MX_DATA_EXCEL_SHOPREFRESHEXCEL_GET_CATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x1C82310)
#define MX_DATA_EXCEL_SHOPREFRESHEXCEL_GET_REFRESHGROUP_OFFSET UNITYSDK_OFFSET(0x1C82360)
#define MX_DATA_EXCEL_SHOPREFRESHEXCEL_GET_PROB_OFFSET UNITYSDK_OFFSET(0x1C823B0)
#define MX_DATA_EXCEL_SHOPREFRESHEXCEL_GET_BUYREPORTEVENTNAME_OFFSET UNITYSDK_OFFSET(0x1C82400)
#define MX_DATA_EXCEL_SHOPREFRESHEXCEL_GETBUYREPORTEVENTNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1C82440)
#define MX_DATA_EXCEL_SHOPREFRESHEXCEL_GET_PRODUCTUPDATETIME_OFFSET UNITYSDK_OFFSET(0x1C82460)
#define MX_DATA_EXCEL_SHOPREFRESHEXCEL_GETPRODUCTUPDATETIMEBYTES_OFFSET UNITYSDK_OFFSET(0x1C824A0)
#define MX_DATA_EXCEL_SHOPREFRESHEXCEL_GET_DISPLAYTAG_OFFSET UNITYSDK_OFFSET(0x1C824C0)
#define MX_DATA_EXCEL_SHOPREFRESHEXCEL_CREATESHOPREFRESHEXCEL_OFFSET UNITYSDK_OFFSET(0x1C82510)
#define MX_DATA_EXCEL_SHOPREFRESHEXCEL_STARTSHOPREFRESHEXCEL_OFFSET UNITYSDK_OFFSET(0x1C82AD0)
#define MX_DATA_EXCEL_SHOPREFRESHEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1C82870)
#define MX_DATA_EXCEL_SHOPREFRESHEXCEL_ADDLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1C829F0)
#define MX_DATA_EXCEL_SHOPREFRESHEXCEL_ADDISLEGACY_OFFSET UNITYSDK_OFFSET(0x1C82A50)
#define MX_DATA_EXCEL_SHOPREFRESHEXCEL_ADDGOODSID_OFFSET UNITYSDK_OFFSET(0x1C82840)
#define MX_DATA_EXCEL_SHOPREFRESHEXCEL_ADDISBUNDLE_OFFSET UNITYSDK_OFFSET(0x1C82A20)
#define MX_DATA_EXCEL_SHOPREFRESHEXCEL_ADDSHOPPURCHASEPOPUPTYPE_OFFSET UNITYSDK_OFFSET(0x1C829C0)
#define MX_DATA_EXCEL_SHOPREFRESHEXCEL_ADDVISIBLEAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C82810)
#define MX_DATA_EXCEL_SHOPREFRESHEXCEL_ADDPURCHASECOUNTLIMIT_OFFSET UNITYSDK_OFFSET(0x1C827E0)
#define MX_DATA_EXCEL_SHOPREFRESHEXCEL_ADDDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1C827B0)
#define MX_DATA_EXCEL_SHOPREFRESHEXCEL_ADDCATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x1C82990)
#define MX_DATA_EXCEL_SHOPREFRESHEXCEL_ADDREFRESHGROUP_OFFSET UNITYSDK_OFFSET(0x1C82960)
#define MX_DATA_EXCEL_SHOPREFRESHEXCEL_ADDPROB_OFFSET UNITYSDK_OFFSET(0x1C82930)
#define MX_DATA_EXCEL_SHOPREFRESHEXCEL_ADDBUYREPORTEVENTNAME_OFFSET UNITYSDK_OFFSET(0x1C82900)
#define MX_DATA_EXCEL_SHOPREFRESHEXCEL_ADDPRODUCTUPDATETIME_OFFSET UNITYSDK_OFFSET(0x1C828D0)
#define MX_DATA_EXCEL_SHOPREFRESHEXCEL_ADDDISPLAYTAG_OFFSET UNITYSDK_OFFSET(0x1C828A0)
#define MX_DATA_EXCEL_SHOPREFRESHEXCEL_ENDSHOPREFRESHEXCEL_OFFSET UNITYSDK_OFFSET(0x1C82A80)
#define MX_DATA_EXCEL_SHOPREFRESHEXCEL_FINISHSHOPREFRESHEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C82AF0)
#define MX_DATA_EXCEL_SHOPREFRESHEXCEL_FINISHSIZEPREFIXEDSHOPREFRESHEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C82B10)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ShopRefreshExcel_TypeDefinitionIndex = 19440;

	class ShopRefreshExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ShopRefreshExcel* GetRootAsShopRefreshExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ShopRefreshExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCEL_GETROOTASSHOPREFRESHEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ShopRefreshExcel* GetRootAsShopRefreshExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ShopRefreshExcel* arg)
		{
			return (return (::MX::Data::Excel::ShopRefreshExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ShopRefreshExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCEL_GETROOTASSHOPREFRESHEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ShopRefreshExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ShopRefreshExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCEL_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLegacy()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCEL_GET_ISLEGACY_OFFSET))(nullptr);
		}

		::System::Int64 get_GoodsId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCEL_GET_GOODSID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsBundle()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCEL_GET_ISBUNDLE_OFFSET))(nullptr);
		}

		::FlatData::ShopPurchasePopupType* get_ShopPurchasePopupType()
		{
			return (return (::FlatData::ShopPurchasePopupType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCEL_GET_SHOPPURCHASEPOPUPTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_VisibleAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCEL_GET_VISIBLEAMOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_PurchaseCountLimit()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCEL_GET_PURCHASECOUNTLIMIT_OFFSET))(nullptr);
		}

		::System::Int64 get_DisplayOrder()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCEL_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::FlatData::ShopCategoryType* get_CategoryType()
		{
			return (return (::FlatData::ShopCategoryType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCEL_GET_CATEGORYTYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_RefreshGroup()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCEL_GET_REFRESHGROUP_OFFSET))(nullptr);
		}

		::System::Int32 get_Prob()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCEL_GET_PROB_OFFSET))(nullptr);
		}

		::System::String* get_BuyReportEventName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCEL_GET_BUYREPORTEVENTNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetBuyReportEventNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCEL_GETBUYREPORTEVENTNAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ProductUpdateTime()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCEL_GET_PRODUCTUPDATETIME_OFFSET))(nullptr);
		}

		Il2CppObject* GetProductUpdateTimeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCEL_GETPRODUCTUPDATETIMEBYTES_OFFSET))(nullptr);
		}

		::FlatData::ProductDisplayTag* get_DisplayTag()
		{
			return (return (::FlatData::ProductDisplayTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCEL_GET_DISPLAYTAG_OFFSET))(nullptr);
		}

		Il2CppObject* CreateShopRefreshExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::UInt32 arg, ::System::Boolean arg, ::System::Int64 arg, ::System::Boolean arg, ::FlatData::ShopPurchasePopupType* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::ShopCategoryType* arg, ::System::Int32 arg, ::System::Int32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatData::ProductDisplayTag* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::UInt32, ::System::Boolean, ::System::Int64, ::System::Boolean, ::FlatData::ShopPurchasePopupType*, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatData::ShopCategoryType*, ::System::Int32, ::System::Int32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatData::ProductDisplayTag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCEL_CREATESHOPREFRESHEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartShopRefreshExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCEL_STARTSHOPREFRESHEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeEtcId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCEL_ADDLOCALIZEETCID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsLegacy(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCEL_ADDISLEGACY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGoodsId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCEL_ADDGOODSID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsBundle(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCEL_ADDISBUNDLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShopPurchasePopupType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ShopPurchasePopupType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ShopPurchasePopupType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCEL_ADDSHOPPURCHASEPOPUPTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVisibleAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCEL_ADDVISIBLEAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPurchaseCountLimit(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCEL_ADDPURCHASECOUNTLIMIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCEL_ADDDISPLAYORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCategoryType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ShopCategoryType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCEL_ADDCATEGORYTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRefreshGroup(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCEL_ADDREFRESHGROUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProb(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCEL_ADDPROB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBuyReportEventName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCEL_ADDBUYREPORTEVENTNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProductUpdateTime(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCEL_ADDPRODUCTUPDATETIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayTag(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ProductDisplayTag* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ProductDisplayTag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCEL_ADDDISPLAYTAG_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndShopRefreshExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCEL_ENDSHOPREFRESHEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishShopRefreshExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCEL_FINISHSHOPREFRESHEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedShopRefreshExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCEL_FINISHSIZEPREFIXEDSHOPREFRESHEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


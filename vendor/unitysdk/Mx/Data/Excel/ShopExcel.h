#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ShopExcel; }
namespace FlatData { class ShopCategoryType; }
namespace FlatData { class PurchaseCountResetType; }
namespace FlatData { class ProductDisplayTag; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_SHOPEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C745F0)
#define MX_DATA_EXCEL_SHOPEXCEL_GETROOTASSHOPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C74600)
#define MX_DATA_EXCEL_SHOPEXCEL_GETROOTASSHOPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C74660)
#define MX_DATA_EXCEL_SHOPEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C746F0)
#define MX_DATA_EXCEL_SHOPEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C746C0)
#define MX_DATA_EXCEL_SHOPEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C74710)
#define MX_DATA_EXCEL_SHOPEXCEL_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1C74760)
#define MX_DATA_EXCEL_SHOPEXCEL_GET_CATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x1C747B0)
#define MX_DATA_EXCEL_SHOPEXCEL_GET_ISLEGACY_OFFSET UNITYSDK_OFFSET(0x1C74800)
#define MX_DATA_EXCEL_SHOPEXCEL_GET_USEBIGPOPUP_OFFSET UNITYSDK_OFFSET(0x1C74850)
#define MX_DATA_EXCEL_SHOPEXCEL_GOODSID_OFFSET UNITYSDK_OFFSET(0x1C748A0)
#define MX_DATA_EXCEL_SHOPEXCEL_GET_GOODSIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1C74900)
#define MX_DATA_EXCEL_SHOPEXCEL_GETGOODSIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C74940)
#define MX_DATA_EXCEL_SHOPEXCEL_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1C74960)
#define MX_DATA_EXCEL_SHOPEXCEL_GET_SALEPERIODFROM_OFFSET UNITYSDK_OFFSET(0x1C749B0)
#define MX_DATA_EXCEL_SHOPEXCEL_GETSALEPERIODFROMBYTES_OFFSET UNITYSDK_OFFSET(0x1C749F0)
#define MX_DATA_EXCEL_SHOPEXCEL_GET_SALEPERIODTO_OFFSET UNITYSDK_OFFSET(0x1C74A10)
#define MX_DATA_EXCEL_SHOPEXCEL_GETSALEPERIODTOBYTES_OFFSET UNITYSDK_OFFSET(0x1C74A50)
#define MX_DATA_EXCEL_SHOPEXCEL_GET_PURCHASECOOLTIMEMIN_OFFSET UNITYSDK_OFFSET(0x1C74A70)
#define MX_DATA_EXCEL_SHOPEXCEL_GET_PURCHASECOUNTLIMIT_OFFSET UNITYSDK_OFFSET(0x1C74AC0)
#define MX_DATA_EXCEL_SHOPEXCEL_GET_PURCHASECOUNTRESETTYPE_OFFSET UNITYSDK_OFFSET(0x1C74B10)
#define MX_DATA_EXCEL_SHOPEXCEL_GET_BUYREPORTEVENTNAME_OFFSET UNITYSDK_OFFSET(0x1C74B60)
#define MX_DATA_EXCEL_SHOPEXCEL_GETBUYREPORTEVENTNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1C74BA0)
#define MX_DATA_EXCEL_SHOPEXCEL_GET_RESTRICTBUYWHENINVENTORYFULL_OFFSET UNITYSDK_OFFSET(0x1C74BC0)
#define MX_DATA_EXCEL_SHOPEXCEL_GET_DISPLAYTAG_OFFSET UNITYSDK_OFFSET(0x1C74C10)
#define MX_DATA_EXCEL_SHOPEXCEL_GET_SHOPUPDATEGROUPID_OFFSET UNITYSDK_OFFSET(0x1C74C60)
#define MX_DATA_EXCEL_SHOPEXCEL_CREATESHOPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C74CB0)
#define MX_DATA_EXCEL_SHOPEXCEL_STARTSHOPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C752D0)
#define MX_DATA_EXCEL_SHOPEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1C75010)
#define MX_DATA_EXCEL_SHOPEXCEL_ADDLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1C751C0)
#define MX_DATA_EXCEL_SHOPEXCEL_ADDCATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x1C75190)
#define MX_DATA_EXCEL_SHOPEXCEL_ADDISLEGACY_OFFSET UNITYSDK_OFFSET(0x1C75250)
#define MX_DATA_EXCEL_SHOPEXCEL_ADDUSEBIGPOPUP_OFFSET UNITYSDK_OFFSET(0x1C75220)
#define MX_DATA_EXCEL_SHOPEXCEL_ADDGOODSID_OFFSET UNITYSDK_OFFSET(0x1C75160)
#define MX_DATA_EXCEL_SHOPEXCEL_CREATEGOODSIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C752F0)
#define MX_DATA_EXCEL_SHOPEXCEL_STARTGOODSIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C75380)
#define MX_DATA_EXCEL_SHOPEXCEL_ADDDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1C74FE0)
#define MX_DATA_EXCEL_SHOPEXCEL_ADDSALEPERIODFROM_OFFSET UNITYSDK_OFFSET(0x1C75130)
#define MX_DATA_EXCEL_SHOPEXCEL_ADDSALEPERIODTO_OFFSET UNITYSDK_OFFSET(0x1C75100)
#define MX_DATA_EXCEL_SHOPEXCEL_ADDPURCHASECOOLTIMEMIN_OFFSET UNITYSDK_OFFSET(0x1C74FB0)
#define MX_DATA_EXCEL_SHOPEXCEL_ADDPURCHASECOUNTLIMIT_OFFSET UNITYSDK_OFFSET(0x1C74F80)
#define MX_DATA_EXCEL_SHOPEXCEL_ADDPURCHASECOUNTRESETTYPE_OFFSET UNITYSDK_OFFSET(0x1C750D0)
#define MX_DATA_EXCEL_SHOPEXCEL_ADDBUYREPORTEVENTNAME_OFFSET UNITYSDK_OFFSET(0x1C750A0)
#define MX_DATA_EXCEL_SHOPEXCEL_ADDRESTRICTBUYWHENINVENTORYFULL_OFFSET UNITYSDK_OFFSET(0x1C751F0)
#define MX_DATA_EXCEL_SHOPEXCEL_ADDDISPLAYTAG_OFFSET UNITYSDK_OFFSET(0x1C75070)
#define MX_DATA_EXCEL_SHOPEXCEL_ADDSHOPUPDATEGROUPID_OFFSET UNITYSDK_OFFSET(0x1C75040)
#define MX_DATA_EXCEL_SHOPEXCEL_ENDSHOPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C75280)
#define MX_DATA_EXCEL_SHOPEXCEL_FINISHSHOPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C753C0)
#define MX_DATA_EXCEL_SHOPEXCEL_FINISHSIZEPREFIXEDSHOPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C753E0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ShopExcel_TypeDefinitionIndex = 19381;

	class ShopExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ShopExcel* GetRootAsShopExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ShopExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL_GETROOTASSHOPEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ShopExcel* GetRootAsShopExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ShopExcel* arg)
		{
			return (return (::MX::Data::Excel::ShopExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ShopExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL_GETROOTASSHOPEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ShopExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ShopExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		::FlatData::ShopCategoryType* get_CategoryType()
		{
			return (return (::FlatData::ShopCategoryType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL_GET_CATEGORYTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLegacy()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL_GET_ISLEGACY_OFFSET))(nullptr);
		}

		::System::Boolean get_UseBigPopup()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL_GET_USEBIGPOPUP_OFFSET))(nullptr);
		}

		::System::Int64 GoodsId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL_GOODSID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_GoodsIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL_GET_GOODSIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetGoodsIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL_GETGOODSIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_DisplayOrder()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::System::String* get_SalePeriodFrom()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL_GET_SALEPERIODFROM_OFFSET))(nullptr);
		}

		Il2CppObject* GetSalePeriodFromBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL_GETSALEPERIODFROMBYTES_OFFSET))(nullptr);
		}

		::System::String* get_SalePeriodTo()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL_GET_SALEPERIODTO_OFFSET))(nullptr);
		}

		Il2CppObject* GetSalePeriodToBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL_GETSALEPERIODTOBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_PurchaseCooltimeMin()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL_GET_PURCHASECOOLTIMEMIN_OFFSET))(nullptr);
		}

		::System::Int64 get_PurchaseCountLimit()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL_GET_PURCHASECOUNTLIMIT_OFFSET))(nullptr);
		}

		::FlatData::PurchaseCountResetType* get_PurchaseCountResetType()
		{
			return (return (::FlatData::PurchaseCountResetType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL_GET_PURCHASECOUNTRESETTYPE_OFFSET))(nullptr);
		}

		::System::String* get_BuyReportEventName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL_GET_BUYREPORTEVENTNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetBuyReportEventNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL_GETBUYREPORTEVENTNAMEBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_RestrictBuyWhenInventoryFull()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL_GET_RESTRICTBUYWHENINVENTORYFULL_OFFSET))(nullptr);
		}

		::FlatData::ProductDisplayTag* get_DisplayTag()
		{
			return (return (::FlatData::ProductDisplayTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL_GET_DISPLAYTAG_OFFSET))(nullptr);
		}

		::System::Int32 get_ShopUpdateGroupId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL_GET_SHOPUPDATEGROUPID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateShopExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::UInt32 arg, ::FlatData::ShopCategoryType* arg, ::System::Boolean arg, ::System::Boolean arg, ::FlatBuffers::VectorOffset* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::PurchaseCountResetType* arg, ::FlatBuffers::StringOffset* arg, ::System::Boolean arg, ::FlatData::ProductDisplayTag* arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::UInt32, ::FlatData::ShopCategoryType*, ::System::Boolean, ::System::Boolean, ::FlatBuffers::VectorOffset*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Int64, ::FlatData::PurchaseCountResetType*, ::FlatBuffers::StringOffset*, ::System::Boolean, ::FlatData::ProductDisplayTag*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL_CREATESHOPEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartShopExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL_STARTSHOPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeEtcId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL_ADDLOCALIZEETCID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCategoryType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ShopCategoryType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL_ADDCATEGORYTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsLegacy(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL_ADDISLEGACY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUseBigPopup(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL_ADDUSEBIGPOPUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGoodsId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL_ADDGOODSID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateGoodsIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL_CREATEGOODSIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartGoodsIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL_STARTGOODSIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL_ADDDISPLAYORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSalePeriodFrom(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL_ADDSALEPERIODFROM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSalePeriodTo(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL_ADDSALEPERIODTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPurchaseCooltimeMin(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL_ADDPURCHASECOOLTIMEMIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPurchaseCountLimit(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL_ADDPURCHASECOUNTLIMIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPurchaseCountResetType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::PurchaseCountResetType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::PurchaseCountResetType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL_ADDPURCHASECOUNTRESETTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBuyReportEventName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL_ADDBUYREPORTEVENTNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRestrictBuyWhenInventoryFull(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL_ADDRESTRICTBUYWHENINVENTORYFULL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayTag(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ProductDisplayTag* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ProductDisplayTag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL_ADDDISPLAYTAG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShopUpdateGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL_ADDSHOPUPDATEGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndShopExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL_ENDSHOPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishShopExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL_FINISHSHOPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedShopExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCEL_FINISHSIZEPREFIXEDSHOPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


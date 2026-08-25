#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentShopExcel; }
namespace FlatData { class ShopCategoryType; }
namespace FlatData { class PurchaseCountResetType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1AFC9F0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_GETROOTASEVENTCONTENTSHOPEXCEL_OFFSET UNITYSDK_OFFSET(0x1AFCA00)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_GETROOTASEVENTCONTENTSHOPEXCEL_OFFSET UNITYSDK_OFFSET(0x1AFCA60)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1AFCAF0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1AFCAC0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AFCB10)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1AFCB60)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1AFCBB0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_GET_CATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x1AFCC00)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_GET_ISLEGACY_OFFSET UNITYSDK_OFFSET(0x1AFCC50)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_GOODSID_OFFSET UNITYSDK_OFFSET(0x1AFCCA0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_GET_GOODSIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1AFCD00)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_GETGOODSIDBYTES_OFFSET UNITYSDK_OFFSET(0x1AFCD40)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1AFCD60)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_GET_SALEPERIODFROM_OFFSET UNITYSDK_OFFSET(0x1AFCDB0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_GETSALEPERIODFROMBYTES_OFFSET UNITYSDK_OFFSET(0x1AFCDF0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_GET_SALEPERIODTO_OFFSET UNITYSDK_OFFSET(0x1AFCE10)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_GETSALEPERIODTOBYTES_OFFSET UNITYSDK_OFFSET(0x1AFCE50)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_GET_PURCHASECOOLTIMEMIN_OFFSET UNITYSDK_OFFSET(0x1AFCE70)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_GET_PURCHASECOUNTLIMIT_OFFSET UNITYSDK_OFFSET(0x1AFCEC0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_GET_PURCHASECOUNTRESETTYPE_OFFSET UNITYSDK_OFFSET(0x1AFCF10)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_GET_BUYREPORTEVENTNAME_OFFSET UNITYSDK_OFFSET(0x1AFCF60)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_GETBUYREPORTEVENTNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1AFCFA0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_GET_RESTRICTBUYWHENINVENTORYFULL_OFFSET UNITYSDK_OFFSET(0x1AFCFC0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_CREATEEVENTCONTENTSHOPEXCEL_OFFSET UNITYSDK_OFFSET(0x1AFD010)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_STARTEVENTCONTENTSHOPEXCEL_OFFSET UNITYSDK_OFFSET(0x1AFD570)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AFD340)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1AFD310)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_ADDLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1AFD490)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_ADDCATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x1AFD460)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_ADDISLEGACY_OFFSET UNITYSDK_OFFSET(0x1AFD4F0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_ADDGOODSID_OFFSET UNITYSDK_OFFSET(0x1AFD430)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_CREATEGOODSIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1AFD590)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_STARTGOODSIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1AFD620)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_ADDDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1AFD2E0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_ADDSALEPERIODFROM_OFFSET UNITYSDK_OFFSET(0x1AFD400)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_ADDSALEPERIODTO_OFFSET UNITYSDK_OFFSET(0x1AFD3D0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_ADDPURCHASECOOLTIMEMIN_OFFSET UNITYSDK_OFFSET(0x1AFD2B0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_ADDPURCHASECOUNTLIMIT_OFFSET UNITYSDK_OFFSET(0x1AFD280)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_ADDPURCHASECOUNTRESETTYPE_OFFSET UNITYSDK_OFFSET(0x1AFD3A0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_ADDBUYREPORTEVENTNAME_OFFSET UNITYSDK_OFFSET(0x1AFD370)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_ADDRESTRICTBUYWHENINVENTORYFULL_OFFSET UNITYSDK_OFFSET(0x1AFD4C0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_ENDEVENTCONTENTSHOPEXCEL_OFFSET UNITYSDK_OFFSET(0x1AFD520)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_FINISHEVENTCONTENTSHOPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AFD660)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTSHOPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AFD680)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentShopExcel_TypeDefinitionIndex = 17819;

	class EventContentShopExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentShopExcel* GetRootAsEventContentShopExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentShopExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_GETROOTASEVENTCONTENTSHOPEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentShopExcel* GetRootAsEventContentShopExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentShopExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentShopExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentShopExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_GETROOTASEVENTCONTENTSHOPEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentShopExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentShopExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		::FlatData::ShopCategoryType* get_CategoryType()
		{
			return (return (::FlatData::ShopCategoryType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_GET_CATEGORYTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLegacy()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_GET_ISLEGACY_OFFSET))(nullptr);
		}

		::System::Int64 GoodsId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_GOODSID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_GoodsIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_GET_GOODSIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetGoodsIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_GETGOODSIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_DisplayOrder()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::System::String* get_SalePeriodFrom()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_GET_SALEPERIODFROM_OFFSET))(nullptr);
		}

		Il2CppObject* GetSalePeriodFromBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_GETSALEPERIODFROMBYTES_OFFSET))(nullptr);
		}

		::System::String* get_SalePeriodTo()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_GET_SALEPERIODTO_OFFSET))(nullptr);
		}

		Il2CppObject* GetSalePeriodToBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_GETSALEPERIODTOBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_PurchaseCooltimeMin()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_GET_PURCHASECOOLTIMEMIN_OFFSET))(nullptr);
		}

		::System::Int64 get_PurchaseCountLimit()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_GET_PURCHASECOUNTLIMIT_OFFSET))(nullptr);
		}

		::FlatData::PurchaseCountResetType* get_PurchaseCountResetType()
		{
			return (return (::FlatData::PurchaseCountResetType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_GET_PURCHASECOUNTRESETTYPE_OFFSET))(nullptr);
		}

		::System::String* get_BuyReportEventName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_GET_BUYREPORTEVENTNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetBuyReportEventNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_GETBUYREPORTEVENTNAMEBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_RestrictBuyWhenInventoryFull()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_GET_RESTRICTBUYWHENINVENTORYFULL_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentShopExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::UInt32 arg, ::FlatData::ShopCategoryType* arg, ::System::Boolean arg, ::FlatBuffers::VectorOffset* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::PurchaseCountResetType* arg, ::FlatBuffers::StringOffset* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::UInt32, ::FlatData::ShopCategoryType*, ::System::Boolean, ::FlatBuffers::VectorOffset*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Int64, ::FlatData::PurchaseCountResetType*, ::FlatBuffers::StringOffset*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_CREATEEVENTCONTENTSHOPEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentShopExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_STARTEVENTCONTENTSHOPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeEtcId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_ADDLOCALIZEETCID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCategoryType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ShopCategoryType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_ADDCATEGORYTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsLegacy(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_ADDISLEGACY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGoodsId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_ADDGOODSID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateGoodsIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_CREATEGOODSIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartGoodsIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_STARTGOODSIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_ADDDISPLAYORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSalePeriodFrom(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_ADDSALEPERIODFROM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSalePeriodTo(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_ADDSALEPERIODTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPurchaseCooltimeMin(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_ADDPURCHASECOOLTIMEMIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPurchaseCountLimit(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_ADDPURCHASECOUNTLIMIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPurchaseCountResetType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::PurchaseCountResetType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::PurchaseCountResetType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_ADDPURCHASECOUNTRESETTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBuyReportEventName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_ADDBUYREPORTEVENTNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRestrictBuyWhenInventoryFull(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_ADDRESTRICTBUYWHENINVENTORYFULL_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentShopExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_ENDEVENTCONTENTSHOPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentShopExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_FINISHEVENTCONTENTSHOPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentShopExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTSHOPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


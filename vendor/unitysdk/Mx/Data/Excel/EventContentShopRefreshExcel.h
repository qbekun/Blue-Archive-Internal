#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentShopRefreshExcel; }
namespace FlatData { class ShopCategoryType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B00F20)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_GETROOTASEVENTCONTENTSHOPREFRESHEXCEL_OFFSET UNITYSDK_OFFSET(0x1B00F30)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_GETROOTASEVENTCONTENTSHOPREFRESHEXCEL_OFFSET UNITYSDK_OFFSET(0x1B00F90)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B01020)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B00FF0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B01040)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B01090)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1B010E0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_GET_ISLEGACY_OFFSET UNITYSDK_OFFSET(0x1B01130)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_GET_GOODSID_OFFSET UNITYSDK_OFFSET(0x1B01180)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1B011D0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_GET_CATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x1B01220)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_GET_REFRESHGROUP_OFFSET UNITYSDK_OFFSET(0x1B01270)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_GET_PROB_OFFSET UNITYSDK_OFFSET(0x1B012C0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_GET_BUYREPORTEVENTNAME_OFFSET UNITYSDK_OFFSET(0x1B01310)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_GETBUYREPORTEVENTNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1B01350)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_GET_PRODUCTUPDATETIME_OFFSET UNITYSDK_OFFSET(0x1B01370)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_GETPRODUCTUPDATETIMEBYTES_OFFSET UNITYSDK_OFFSET(0x1B013B0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_CREATEEVENTCONTENTSHOPREFRESHEXCEL_OFFSET UNITYSDK_OFFSET(0x1B013D0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_STARTEVENTCONTENTSHOPREFRESHEXCEL_OFFSET UNITYSDK_OFFSET(0x1B01830)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B01660)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1B01630)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_ADDLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1B01780)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_ADDISLEGACY_OFFSET UNITYSDK_OFFSET(0x1B017B0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_ADDGOODSID_OFFSET UNITYSDK_OFFSET(0x1B01600)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_ADDDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1B015D0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_ADDCATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x1B01750)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_ADDREFRESHGROUP_OFFSET UNITYSDK_OFFSET(0x1B01720)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_ADDPROB_OFFSET UNITYSDK_OFFSET(0x1B016F0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_ADDBUYREPORTEVENTNAME_OFFSET UNITYSDK_OFFSET(0x1B016C0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_ADDPRODUCTUPDATETIME_OFFSET UNITYSDK_OFFSET(0x1B01690)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_ENDEVENTCONTENTSHOPREFRESHEXCEL_OFFSET UNITYSDK_OFFSET(0x1B017E0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_FINISHEVENTCONTENTSHOPREFRESHEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B01850)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTSHOPREFRESHEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B01870)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentShopRefreshExcel_TypeDefinitionIndex = 17836;

	class EventContentShopRefreshExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentShopRefreshExcel* GetRootAsEventContentShopRefreshExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentShopRefreshExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_GETROOTASEVENTCONTENTSHOPREFRESHEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentShopRefreshExcel* GetRootAsEventContentShopRefreshExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentShopRefreshExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentShopRefreshExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentShopRefreshExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_GETROOTASEVENTCONTENTSHOPREFRESHEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentShopRefreshExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentShopRefreshExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLegacy()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_GET_ISLEGACY_OFFSET))(nullptr);
		}

		::System::Int64 get_GoodsId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_GET_GOODSID_OFFSET))(nullptr);
		}

		::System::Int64 get_DisplayOrder()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::FlatData::ShopCategoryType* get_CategoryType()
		{
			return (return (::FlatData::ShopCategoryType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_GET_CATEGORYTYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_RefreshGroup()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_GET_REFRESHGROUP_OFFSET))(nullptr);
		}

		::System::Int32 get_Prob()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_GET_PROB_OFFSET))(nullptr);
		}

		::System::String* get_BuyReportEventName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_GET_BUYREPORTEVENTNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetBuyReportEventNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_GETBUYREPORTEVENTNAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ProductUpdateTime()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_GET_PRODUCTUPDATETIME_OFFSET))(nullptr);
		}

		Il2CppObject* GetProductUpdateTimeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_GETPRODUCTUPDATETIMEBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentShopRefreshExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::UInt32 arg, ::System::Boolean arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::ShopCategoryType* arg, ::System::Int32 arg, ::System::Int32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::UInt32, ::System::Boolean, ::System::Int64, ::System::Int64, ::FlatData::ShopCategoryType*, ::System::Int32, ::System::Int32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_CREATEEVENTCONTENTSHOPREFRESHEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentShopRefreshExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_STARTEVENTCONTENTSHOPREFRESHEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeEtcId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_ADDLOCALIZEETCID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsLegacy(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_ADDISLEGACY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGoodsId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_ADDGOODSID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_ADDDISPLAYORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCategoryType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ShopCategoryType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_ADDCATEGORYTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRefreshGroup(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_ADDREFRESHGROUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProb(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_ADDPROB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBuyReportEventName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_ADDBUYREPORTEVENTNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProductUpdateTime(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_ADDPRODUCTUPDATETIME_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentShopRefreshExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_ENDEVENTCONTENTSHOPREFRESHEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentShopRefreshExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_FINISHEVENTCONTENTSHOPREFRESHEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentShopRefreshExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTSHOPREFRESHEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


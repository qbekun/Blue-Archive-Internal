#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentShopInfoExcel; }
namespace FlatData { class ShopCategoryType; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1AFE3B0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_GETROOTASEVENTCONTENTSHOPINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1AFE3C0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_GETROOTASEVENTCONTENTSHOPINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1AFE420)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1AFE4B0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1AFE480)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AFE4D0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_GET_CATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x1AFE520)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_GET_LOCALIZECODE_OFFSET UNITYSDK_OFFSET(0x1AFE570)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_COSTPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1AFE5C0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_GET_COSTPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1AFE620)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_GETCOSTPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1AFE660)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_COSTPARCELID_OFFSET UNITYSDK_OFFSET(0x1AFE680)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_GET_COSTPARCELIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1AFE6E0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_GETCOSTPARCELIDBYTES_OFFSET UNITYSDK_OFFSET(0x1AFE720)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_GET_ISREFRESH_OFFSET UNITYSDK_OFFSET(0x1AFE740)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_GET_ISSOLDOUTDIMMED_OFFSET UNITYSDK_OFFSET(0x1AFE790)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_GET_AUTOREFRESHCOOLTIME_OFFSET UNITYSDK_OFFSET(0x1AFE7E0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_GET_REFRESHABLECOUNT_OFFSET UNITYSDK_OFFSET(0x1AFE830)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_GOODSID_OFFSET UNITYSDK_OFFSET(0x1AFE880)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_GET_GOODSIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1AFE8E0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_GETGOODSIDBYTES_OFFSET UNITYSDK_OFFSET(0x1AFE920)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_GET_OPENPERIODFROM_OFFSET UNITYSDK_OFFSET(0x1AFE940)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_GETOPENPERIODFROMBYTES_OFFSET UNITYSDK_OFFSET(0x1AFE980)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_GET_OPENPERIODTO_OFFSET UNITYSDK_OFFSET(0x1AFE9A0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_GETOPENPERIODTOBYTES_OFFSET UNITYSDK_OFFSET(0x1AFE9E0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_GET_SHOPPRODUCTUPDATEDATE_OFFSET UNITYSDK_OFFSET(0x1AFEA00)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_GETSHOPPRODUCTUPDATEDATEBYTES_OFFSET UNITYSDK_OFFSET(0x1AFEA40)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_CREATEEVENTCONTENTSHOPINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1AFEA60)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_STARTEVENTCONTENTSHOPINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1AFEF70)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AFED10)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_ADDCATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x1AFEE90)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_ADDLOCALIZECODE_OFFSET UNITYSDK_OFFSET(0x1AFEE60)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_ADDCOSTPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1AFEE30)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_CREATECOSTPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1AFEF90)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_STARTCOSTPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1AFF020)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_ADDCOSTPARCELID_OFFSET UNITYSDK_OFFSET(0x1AFEE00)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_CREATECOSTPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1AFF060)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_STARTCOSTPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1AFF0F0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_ADDISREFRESH_OFFSET UNITYSDK_OFFSET(0x1AFEEF0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_ADDISSOLDOUTDIMMED_OFFSET UNITYSDK_OFFSET(0x1AFEEC0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_ADDAUTOREFRESHCOOLTIME_OFFSET UNITYSDK_OFFSET(0x1AFECE0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_ADDREFRESHABLECOUNT_OFFSET UNITYSDK_OFFSET(0x1AFECB0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_ADDGOODSID_OFFSET UNITYSDK_OFFSET(0x1AFEDD0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_CREATEGOODSIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1AFF130)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_STARTGOODSIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1AFF1C0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_ADDOPENPERIODFROM_OFFSET UNITYSDK_OFFSET(0x1AFEDA0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_ADDOPENPERIODTO_OFFSET UNITYSDK_OFFSET(0x1AFED70)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_ADDSHOPPRODUCTUPDATEDATE_OFFSET UNITYSDK_OFFSET(0x1AFED40)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_ENDEVENTCONTENTSHOPINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1AFEF20)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_FINISHEVENTCONTENTSHOPINFOEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AFF200)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTSHOPINFOEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AFF220)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentShopInfoExcel_TypeDefinitionIndex = 17826;

	class EventContentShopInfoExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentShopInfoExcel* GetRootAsEventContentShopInfoExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentShopInfoExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_GETROOTASEVENTCONTENTSHOPINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentShopInfoExcel* GetRootAsEventContentShopInfoExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentShopInfoExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentShopInfoExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentShopInfoExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_GETROOTASEVENTCONTENTSHOPINFOEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentShopInfoExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentShopInfoExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::FlatData::ShopCategoryType* get_CategoryType()
		{
			return (return (::FlatData::ShopCategoryType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_GET_CATEGORYTYPE_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeCode()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_GET_LOCALIZECODE_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* CostParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_COSTPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CostParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_GET_COSTPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetCostParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_GETCOSTPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 CostParcelId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_COSTPARCELID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CostParcelIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_GET_COSTPARCELIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetCostParcelIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_GETCOSTPARCELIDBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_IsRefresh()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_GET_ISREFRESH_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSoldOutDimmed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_GET_ISSOLDOUTDIMMED_OFFSET))(nullptr);
		}

		::System::Int64 get_AutoRefreshCoolTime()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_GET_AUTOREFRESHCOOLTIME_OFFSET))(nullptr);
		}

		::System::Int64 get_RefreshAbleCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_GET_REFRESHABLECOUNT_OFFSET))(nullptr);
		}

		::System::Int64 GoodsId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_GOODSID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_GoodsIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_GET_GOODSIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetGoodsIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_GETGOODSIDBYTES_OFFSET))(nullptr);
		}

		::System::String* get_OpenPeriodFrom()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_GET_OPENPERIODFROM_OFFSET))(nullptr);
		}

		Il2CppObject* GetOpenPeriodFromBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_GETOPENPERIODFROMBYTES_OFFSET))(nullptr);
		}

		::System::String* get_OpenPeriodTo()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_GET_OPENPERIODTO_OFFSET))(nullptr);
		}

		Il2CppObject* GetOpenPeriodToBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_GETOPENPERIODTOBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ShopProductUpdateDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_GET_SHOPPRODUCTUPDATEDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetShopProductUpdateDateBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_GETSHOPPRODUCTUPDATEDATEBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentShopInfoExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::ShopCategoryType* arg, ::System::UInt32 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::ShopCategoryType*, ::System::UInt32, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::System::Boolean, ::System::Boolean, ::System::Int64, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_CREATEEVENTCONTENTSHOPINFOEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentShopInfoExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_STARTEVENTCONTENTSHOPINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCategoryType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ShopCategoryType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_ADDCATEGORYTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeCode(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_ADDLOCALIZECODE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCostParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_ADDCOSTPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateCostParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_CREATECOSTPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartCostParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_STARTCOSTPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCostParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_ADDCOSTPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateCostParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_CREATECOSTPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartCostParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_STARTCOSTPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsRefresh(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_ADDISREFRESH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsSoldOutDimmed(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_ADDISSOLDOUTDIMMED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAutoRefreshCoolTime(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_ADDAUTOREFRESHCOOLTIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRefreshAbleCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_ADDREFRESHABLECOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGoodsId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_ADDGOODSID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateGoodsIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_CREATEGOODSIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartGoodsIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_STARTGOODSIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOpenPeriodFrom(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_ADDOPENPERIODFROM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOpenPeriodTo(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_ADDOPENPERIODTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShopProductUpdateDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_ADDSHOPPRODUCTUPDATEDATE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentShopInfoExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_ENDEVENTCONTENTSHOPINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentShopInfoExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_FINISHEVENTCONTENTSHOPINFOEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentShopInfoExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTSHOPINFOEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


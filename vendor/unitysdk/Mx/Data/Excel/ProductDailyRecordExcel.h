#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ProductDailyRecordExcel; }
namespace FlatData { class StoreType; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C353D0)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_GETROOTASPRODUCTDAILYRECORDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C353E0)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_GETROOTASPRODUCTDAILYRECORDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C35440)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C354D0)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C354A0)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C354F0)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_GET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0x1C35540)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_GETPRODUCTIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C35580)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_GET_TEENPRODUCTID_OFFSET UNITYSDK_OFFSET(0x1C355A0)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_GETTEENPRODUCTIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C355E0)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_GET_STORETYPE_OFFSET UNITYSDK_OFFSET(0x1C35600)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_GET_PRICE_OFFSET UNITYSDK_OFFSET(0x1C35650)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_GET_PURCHASECOUNTLIMIT_OFFSET UNITYSDK_OFFSET(0x1C356A0)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x1C356F0)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_PARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C35740)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_GET_PARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1C357A0)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_GETPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1C357E0)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_PARCELID_OFFSET UNITYSDK_OFFSET(0x1C35800)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_GET_PARCELIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1C35860)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_GETPARCELIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C358A0)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_PARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C358C0)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_GET_PARCELAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1C35920)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_GETPARCELAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1C35960)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_GET_TITLEIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1C35980)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_GETTITLEIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1C359C0)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_CREATEPRODUCTDAILYRECORDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C359E0)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_STARTPRODUCTDAILYRECORDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C35E40)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1C35C70)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_ADDPRODUCTID_OFFSET UNITYSDK_OFFSET(0x1C35DC0)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_ADDTEENPRODUCTID_OFFSET UNITYSDK_OFFSET(0x1C35D90)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_ADDSTORETYPE_OFFSET UNITYSDK_OFFSET(0x1C35D60)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_ADDPRICE_OFFSET UNITYSDK_OFFSET(0x1C35C40)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_ADDPURCHASECOUNTLIMIT_OFFSET UNITYSDK_OFFSET(0x1C35C10)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_ADDREWARDID_OFFSET UNITYSDK_OFFSET(0x1C35BE0)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_ADDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C35D30)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_CREATEPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C35E60)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_STARTPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C35EF0)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_ADDPARCELID_OFFSET UNITYSDK_OFFSET(0x1C35D00)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_CREATEPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C35F30)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_STARTPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C35FC0)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_ADDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C35CD0)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_CREATEPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1C36000)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_STARTPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1C36090)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_ADDTITLEIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1C35CA0)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_ENDPRODUCTDAILYRECORDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C35DF0)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_FINISHPRODUCTDAILYRECORDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C360D0)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_FINISHSIZEPREFIXEDPRODUCTDAILYRECORDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C360F0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ProductDailyRecordExcel_TypeDefinitionIndex = 19099;

	class ProductDailyRecordExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ProductDailyRecordExcel* GetRootAsProductDailyRecordExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ProductDailyRecordExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_GETROOTASPRODUCTDAILYRECORDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ProductDailyRecordExcel* GetRootAsProductDailyRecordExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ProductDailyRecordExcel* arg)
		{
			return (return (::MX::Data::Excel::ProductDailyRecordExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ProductDailyRecordExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_GETROOTASPRODUCTDAILYRECORDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ProductDailyRecordExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ProductDailyRecordExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::String* get_ProductId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_GET_PRODUCTID_OFFSET))(nullptr);
		}

		Il2CppObject* GetProductIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_GETPRODUCTIDBYTES_OFFSET))(nullptr);
		}

		::System::String* get_TeenProductId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_GET_TEENPRODUCTID_OFFSET))(nullptr);
		}

		Il2CppObject* GetTeenProductIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_GETTEENPRODUCTIDBYTES_OFFSET))(nullptr);
		}

		::FlatData::StoreType* get_StoreType()
		{
			return (return (::FlatData::StoreType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_GET_STORETYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_Price()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_GET_PRICE_OFFSET))(nullptr);
		}

		::System::Int64 get_PurchaseCountLimit()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_GET_PURCHASECOUNTLIMIT_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_GET_REWARDID_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* ParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_PARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_GET_PARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_GETPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ParcelId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_PARCELID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ParcelIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_GET_PARCELIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetParcelIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_GETPARCELIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ParcelAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_PARCELAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ParcelAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_GET_PARCELAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetParcelAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_GETPARCELAMOUNTBYTES_OFFSET))(nullptr);
		}

		::System::String* get_TitleImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_GET_TITLEIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetTitleImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_GETTITLEIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateProductDailyRecordExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatData::StoreType* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatData::StoreType*, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_CREATEPRODUCTDAILYRECORDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartProductDailyRecordExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_STARTPRODUCTDAILYRECORDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProductId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_ADDPRODUCTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTeenProductId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_ADDTEENPRODUCTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStoreType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::StoreType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::StoreType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_ADDSTORETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPrice(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_ADDPRICE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPurchaseCountLimit(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_ADDPURCHASECOUNTLIMIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_ADDREWARDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_ADDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_CREATEPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_STARTPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_ADDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_CREATEPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_STARTPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_ADDPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_CREATEPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_STARTPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTitleImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_ADDTITLEIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndProductDailyRecordExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_ENDPRODUCTDAILYRECORDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishProductDailyRecordExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_FINISHPRODUCTDAILYRECORDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedProductDailyRecordExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCEL_FINISHSIZEPREFIXEDPRODUCTDAILYRECORDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


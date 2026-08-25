#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ProductExcel; }
namespace FlatData { class StoreType; }
namespace FlatData { class PurchasePeriodType; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_PRODUCTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C3A4B0)
#define MX_DATA_EXCEL_PRODUCTEXCEL_GETROOTASPRODUCTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C3A4C0)
#define MX_DATA_EXCEL_PRODUCTEXCEL_GETROOTASPRODUCTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C3A520)
#define MX_DATA_EXCEL_PRODUCTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C3A5B0)
#define MX_DATA_EXCEL_PRODUCTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C3A580)
#define MX_DATA_EXCEL_PRODUCTEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C3A5D0)
#define MX_DATA_EXCEL_PRODUCTEXCEL_GET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0x1C3A620)
#define MX_DATA_EXCEL_PRODUCTEXCEL_GETPRODUCTIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C3A660)
#define MX_DATA_EXCEL_PRODUCTEXCEL_GET_TEENPRODUCTID_OFFSET UNITYSDK_OFFSET(0x1C3A680)
#define MX_DATA_EXCEL_PRODUCTEXCEL_GETTEENPRODUCTIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C3A6C0)
#define MX_DATA_EXCEL_PRODUCTEXCEL_GET_STORETYPE_OFFSET UNITYSDK_OFFSET(0x1C3A6E0)
#define MX_DATA_EXCEL_PRODUCTEXCEL_GET_PRICE_OFFSET UNITYSDK_OFFSET(0x1C3A730)
#define MX_DATA_EXCEL_PRODUCTEXCEL_GET_PRICEREFERENCE_OFFSET UNITYSDK_OFFSET(0x1C3A780)
#define MX_DATA_EXCEL_PRODUCTEXCEL_GETPRICEREFERENCEBYTES_OFFSET UNITYSDK_OFFSET(0x1C3A7C0)
#define MX_DATA_EXCEL_PRODUCTEXCEL_GET_PURCHASEPERIODTYPE_OFFSET UNITYSDK_OFFSET(0x1C3A7E0)
#define MX_DATA_EXCEL_PRODUCTEXCEL_GET_PURCHASEPERIODLIMIT_OFFSET UNITYSDK_OFFSET(0x1C3A830)
#define MX_DATA_EXCEL_PRODUCTEXCEL_PARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C3A880)
#define MX_DATA_EXCEL_PRODUCTEXCEL_GET_PARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1C3A8E0)
#define MX_DATA_EXCEL_PRODUCTEXCEL_GETPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1C3A920)
#define MX_DATA_EXCEL_PRODUCTEXCEL_PARCELID_OFFSET UNITYSDK_OFFSET(0x1C3A940)
#define MX_DATA_EXCEL_PRODUCTEXCEL_GET_PARCELIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1C3A9A0)
#define MX_DATA_EXCEL_PRODUCTEXCEL_GETPARCELIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C3A9E0)
#define MX_DATA_EXCEL_PRODUCTEXCEL_PARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C3AA00)
#define MX_DATA_EXCEL_PRODUCTEXCEL_GET_PARCELAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1C3AA60)
#define MX_DATA_EXCEL_PRODUCTEXCEL_GETPARCELAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1C3AAA0)
#define MX_DATA_EXCEL_PRODUCTEXCEL_CREATEPRODUCTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C3AAC0)
#define MX_DATA_EXCEL_PRODUCTEXCEL_STARTPRODUCTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C3AF10)
#define MX_DATA_EXCEL_PRODUCTEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1C3AD10)
#define MX_DATA_EXCEL_PRODUCTEXCEL_ADDPRODUCTID_OFFSET UNITYSDK_OFFSET(0x1C3AE90)
#define MX_DATA_EXCEL_PRODUCTEXCEL_ADDTEENPRODUCTID_OFFSET UNITYSDK_OFFSET(0x1C3AE60)
#define MX_DATA_EXCEL_PRODUCTEXCEL_ADDSTORETYPE_OFFSET UNITYSDK_OFFSET(0x1C3AE30)
#define MX_DATA_EXCEL_PRODUCTEXCEL_ADDPRICE_OFFSET UNITYSDK_OFFSET(0x1C3ACE0)
#define MX_DATA_EXCEL_PRODUCTEXCEL_ADDPRICEREFERENCE_OFFSET UNITYSDK_OFFSET(0x1C3AE00)
#define MX_DATA_EXCEL_PRODUCTEXCEL_ADDPURCHASEPERIODTYPE_OFFSET UNITYSDK_OFFSET(0x1C3ADD0)
#define MX_DATA_EXCEL_PRODUCTEXCEL_ADDPURCHASEPERIODLIMIT_OFFSET UNITYSDK_OFFSET(0x1C3ACB0)
#define MX_DATA_EXCEL_PRODUCTEXCEL_ADDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C3ADA0)
#define MX_DATA_EXCEL_PRODUCTEXCEL_CREATEPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C3AF30)
#define MX_DATA_EXCEL_PRODUCTEXCEL_STARTPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C3AFC0)
#define MX_DATA_EXCEL_PRODUCTEXCEL_ADDPARCELID_OFFSET UNITYSDK_OFFSET(0x1C3AD70)
#define MX_DATA_EXCEL_PRODUCTEXCEL_CREATEPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C3B000)
#define MX_DATA_EXCEL_PRODUCTEXCEL_STARTPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C3B090)
#define MX_DATA_EXCEL_PRODUCTEXCEL_ADDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C3AD40)
#define MX_DATA_EXCEL_PRODUCTEXCEL_CREATEPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1C3B0D0)
#define MX_DATA_EXCEL_PRODUCTEXCEL_STARTPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1C3B160)
#define MX_DATA_EXCEL_PRODUCTEXCEL_ENDPRODUCTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C3AEC0)
#define MX_DATA_EXCEL_PRODUCTEXCEL_FINISHPRODUCTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C3B1A0)
#define MX_DATA_EXCEL_PRODUCTEXCEL_FINISHSIZEPREFIXEDPRODUCTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C3B1C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ProductExcel_TypeDefinitionIndex = 19123;

	class ProductExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ProductExcel* GetRootAsProductExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ProductExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCEL_GETROOTASPRODUCTEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ProductExcel* GetRootAsProductExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ProductExcel* arg)
		{
			return (return (::MX::Data::Excel::ProductExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ProductExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCEL_GETROOTASPRODUCTEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ProductExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ProductExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::String* get_ProductId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCEL_GET_PRODUCTID_OFFSET))(nullptr);
		}

		Il2CppObject* GetProductIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCEL_GETPRODUCTIDBYTES_OFFSET))(nullptr);
		}

		::System::String* get_TeenProductId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCEL_GET_TEENPRODUCTID_OFFSET))(nullptr);
		}

		Il2CppObject* GetTeenProductIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCEL_GETTEENPRODUCTIDBYTES_OFFSET))(nullptr);
		}

		::FlatData::StoreType* get_StoreType()
		{
			return (return (::FlatData::StoreType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCEL_GET_STORETYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_Price()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCEL_GET_PRICE_OFFSET))(nullptr);
		}

		::System::String* get_PriceReference()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCEL_GET_PRICEREFERENCE_OFFSET))(nullptr);
		}

		Il2CppObject* GetPriceReferenceBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCEL_GETPRICEREFERENCEBYTES_OFFSET))(nullptr);
		}

		::FlatData::PurchasePeriodType* get_PurchasePeriodType()
		{
			return (return (::FlatData::PurchasePeriodType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCEL_GET_PURCHASEPERIODTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_PurchasePeriodLimit()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCEL_GET_PURCHASEPERIODLIMIT_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* ParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCEL_PARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCEL_GET_PARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCEL_GETPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ParcelId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCEL_PARCELID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ParcelIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCEL_GET_PARCELIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetParcelIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCEL_GETPARCELIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ParcelAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCEL_PARCELAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ParcelAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCEL_GET_PARCELAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetParcelAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCEL_GETPARCELAMOUNTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateProductExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatData::StoreType* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatData::PurchasePeriodType* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatData::StoreType*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatData::PurchasePeriodType*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCEL_CREATEPRODUCTEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartProductExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCEL_STARTPRODUCTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProductId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCEL_ADDPRODUCTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTeenProductId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCEL_ADDTEENPRODUCTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStoreType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::StoreType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::StoreType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCEL_ADDSTORETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPrice(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCEL_ADDPRICE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPriceReference(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCEL_ADDPRICEREFERENCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPurchasePeriodType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::PurchasePeriodType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::PurchasePeriodType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCEL_ADDPURCHASEPERIODTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPurchasePeriodLimit(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCEL_ADDPURCHASEPERIODLIMIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCEL_ADDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCEL_CREATEPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCEL_STARTPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCEL_ADDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCEL_CREATEPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCEL_STARTPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCEL_ADDPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCEL_CREATEPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCEL_STARTPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndProductExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCEL_ENDPRODUCTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishProductExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCEL_FINISHPRODUCTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedProductExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTEXCEL_FINISHSIZEPREFIXEDPRODUCTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


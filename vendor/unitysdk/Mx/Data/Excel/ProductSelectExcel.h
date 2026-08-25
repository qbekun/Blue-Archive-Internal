#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ProductSelectExcel; }
namespace FlatData { class ProductSelectSubType; }
namespace FlatData { class AutoSelectPopupType; }
namespace FlatData { class StoreType; }
namespace FlatData { class PurchasePeriodType; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C3E0C0)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GETROOTASPRODUCTSELECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C3E0D0)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GETROOTASPRODUCTSELECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C3E130)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C3E1C0)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C3E190)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C3E1E0)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GET_PRODUCTSELECTSUBTYPE_OFFSET UNITYSDK_OFFSET(0x1C3E230)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GET_AUTOSELECTPOPUPTYPE_OFFSET UNITYSDK_OFFSET(0x1C3E280)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0x1C3E2D0)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GETPRODUCTIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C3E310)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GET_TEENPRODUCTID_OFFSET UNITYSDK_OFFSET(0x1C3E330)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GETTEENPRODUCTIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C3E370)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GET_STORETYPE_OFFSET UNITYSDK_OFFSET(0x1C3E390)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GET_PRICE_OFFSET UNITYSDK_OFFSET(0x1C3E3E0)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GET_PRICEREFERENCE_OFFSET UNITYSDK_OFFSET(0x1C3E430)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GETPRICEREFERENCEBYTES_OFFSET UNITYSDK_OFFSET(0x1C3E470)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GET_PURCHASEPERIODTYPE_OFFSET UNITYSDK_OFFSET(0x1C3E490)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GET_PURCHASEPERIODLIMIT_OFFSET UNITYSDK_OFFSET(0x1C3E4E0)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_PARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C3E530)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GET_PARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1C3E590)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GETPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1C3E5D0)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_PARCELID_OFFSET UNITYSDK_OFFSET(0x1C3E5F0)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GET_PARCELIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1C3E650)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GETPARCELIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C3E690)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_PARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C3E6B0)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GET_PARCELAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1C3E710)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GETPARCELAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1C3E750)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_PRODUCTSELECTIONSLOT_OFFSET UNITYSDK_OFFSET(0x1C3E770)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GET_PRODUCTSELECTIONSLOTLENGTH_OFFSET UNITYSDK_OFFSET(0x1C3E7D0)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GETPRODUCTSELECTIONSLOTBYTES_OFFSET UNITYSDK_OFFSET(0x1C3E810)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_CREATEPRODUCTSELECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C3E830)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_STARTPRODUCTSELECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C3ED90)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1C3EB00)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_ADDPRODUCTSELECTSUBTYPE_OFFSET UNITYSDK_OFFSET(0x1C3ED10)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_ADDAUTOSELECTPOPUPTYPE_OFFSET UNITYSDK_OFFSET(0x1C3ECE0)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_ADDPRODUCTID_OFFSET UNITYSDK_OFFSET(0x1C3ECB0)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_ADDTEENPRODUCTID_OFFSET UNITYSDK_OFFSET(0x1C3EC80)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_ADDSTORETYPE_OFFSET UNITYSDK_OFFSET(0x1C3EC50)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_ADDPRICE_OFFSET UNITYSDK_OFFSET(0x1C3EAD0)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_ADDPRICEREFERENCE_OFFSET UNITYSDK_OFFSET(0x1C3EC20)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_ADDPURCHASEPERIODTYPE_OFFSET UNITYSDK_OFFSET(0x1C3EBF0)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_ADDPURCHASEPERIODLIMIT_OFFSET UNITYSDK_OFFSET(0x1C3EAA0)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_ADDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C3EBC0)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_CREATEPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C3EDB0)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_STARTPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C3EE40)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_ADDPARCELID_OFFSET UNITYSDK_OFFSET(0x1C3EB90)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_CREATEPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C3EE80)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_STARTPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C3EF10)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_ADDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C3EB60)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_CREATEPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1C3EF50)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_STARTPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1C3EFE0)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_ADDPRODUCTSELECTIONSLOT_OFFSET UNITYSDK_OFFSET(0x1C3EB30)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_CREATEPRODUCTSELECTIONSLOTVECTOR_OFFSET UNITYSDK_OFFSET(0x1C3F020)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_STARTPRODUCTSELECTIONSLOTVECTOR_OFFSET UNITYSDK_OFFSET(0x1C3F0B0)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_ENDPRODUCTSELECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C3ED40)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_FINISHPRODUCTSELECTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C3F0F0)
#define MX_DATA_EXCEL_PRODUCTSELECTEXCEL_FINISHSIZEPREFIXEDPRODUCTSELECTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C3F110)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ProductSelectExcel_TypeDefinitionIndex = 19137;

	class ProductSelectExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ProductSelectExcel* GetRootAsProductSelectExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ProductSelectExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GETROOTASPRODUCTSELECTEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ProductSelectExcel* GetRootAsProductSelectExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ProductSelectExcel* arg)
		{
			return (return (::MX::Data::Excel::ProductSelectExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ProductSelectExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GETROOTASPRODUCTSELECTEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ProductSelectExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ProductSelectExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::FlatData::ProductSelectSubType* get_ProductSelectSubType()
		{
			return (return (::FlatData::ProductSelectSubType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GET_PRODUCTSELECTSUBTYPE_OFFSET))(nullptr);
		}

		::FlatData::AutoSelectPopupType* get_AutoSelectPopupType()
		{
			return (return (::FlatData::AutoSelectPopupType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GET_AUTOSELECTPOPUPTYPE_OFFSET))(nullptr);
		}

		::System::String* get_ProductId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GET_PRODUCTID_OFFSET))(nullptr);
		}

		Il2CppObject* GetProductIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GETPRODUCTIDBYTES_OFFSET))(nullptr);
		}

		::System::String* get_TeenProductId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GET_TEENPRODUCTID_OFFSET))(nullptr);
		}

		Il2CppObject* GetTeenProductIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GETTEENPRODUCTIDBYTES_OFFSET))(nullptr);
		}

		::FlatData::StoreType* get_StoreType()
		{
			return (return (::FlatData::StoreType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GET_STORETYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_Price()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GET_PRICE_OFFSET))(nullptr);
		}

		::System::String* get_PriceReference()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GET_PRICEREFERENCE_OFFSET))(nullptr);
		}

		Il2CppObject* GetPriceReferenceBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GETPRICEREFERENCEBYTES_OFFSET))(nullptr);
		}

		::FlatData::PurchasePeriodType* get_PurchasePeriodType()
		{
			return (return (::FlatData::PurchasePeriodType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GET_PURCHASEPERIODTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_PurchasePeriodLimit()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GET_PURCHASEPERIODLIMIT_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* ParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_PARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GET_PARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GETPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ParcelId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_PARCELID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ParcelIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GET_PARCELIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetParcelIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GETPARCELIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ParcelAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_PARCELAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ParcelAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GET_PARCELAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetParcelAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GETPARCELAMOUNTBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ProductSelectionSlot(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_PRODUCTSELECTIONSLOT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ProductSelectionSlotLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GET_PRODUCTSELECTIONSLOTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetProductSelectionSlotBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_GETPRODUCTSELECTIONSLOTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateProductSelectExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::ProductSelectSubType* arg, ::FlatData::AutoSelectPopupType* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatData::StoreType* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatData::PurchasePeriodType* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::ProductSelectSubType*, ::FlatData::AutoSelectPopupType*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatData::StoreType*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatData::PurchasePeriodType*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_CREATEPRODUCTSELECTEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartProductSelectExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_STARTPRODUCTSELECTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProductSelectSubType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ProductSelectSubType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ProductSelectSubType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_ADDPRODUCTSELECTSUBTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAutoSelectPopupType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::AutoSelectPopupType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::AutoSelectPopupType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_ADDAUTOSELECTPOPUPTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProductId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_ADDPRODUCTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTeenProductId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_ADDTEENPRODUCTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStoreType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::StoreType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::StoreType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_ADDSTORETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPrice(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_ADDPRICE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPriceReference(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_ADDPRICEREFERENCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPurchasePeriodType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::PurchasePeriodType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::PurchasePeriodType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_ADDPURCHASEPERIODTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPurchasePeriodLimit(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_ADDPURCHASEPERIODLIMIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_ADDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_CREATEPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_STARTPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_ADDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_CREATEPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_STARTPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_ADDPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_CREATEPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_STARTPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProductSelectionSlot(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_ADDPRODUCTSELECTIONSLOT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateProductSelectionSlotVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_CREATEPRODUCTSELECTIONSLOTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartProductSelectionSlotVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_STARTPRODUCTSELECTIONSLOTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndProductSelectExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_ENDPRODUCTSELECTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishProductSelectExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_FINISHPRODUCTSELECTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedProductSelectExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTEXCEL_FINISHSIZEPREFIXEDPRODUCTSELECTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


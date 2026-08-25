#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ProductMonthlyExcel; }
namespace FlatData { class StoreType; }
namespace FlatData { class ProductTagType; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C3BEF0)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GETROOTASPRODUCTMONTHLYEXCEL_OFFSET UNITYSDK_OFFSET(0x1C3BF00)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GETROOTASPRODUCTMONTHLYEXCEL_OFFSET UNITYSDK_OFFSET(0x1C3BF60)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C3BFF0)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C3BFC0)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C3C010)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0x1C3C060)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GETPRODUCTIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C3C0A0)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GET_TEENPRODUCTID_OFFSET UNITYSDK_OFFSET(0x1C3C0C0)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GETTEENPRODUCTIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C3C100)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GET_STORETYPE_OFFSET UNITYSDK_OFFSET(0x1C3C120)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GET_PRICE_OFFSET UNITYSDK_OFFSET(0x1C3C170)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GET_PRICEREFERENCE_OFFSET UNITYSDK_OFFSET(0x1C3C1C0)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GETPRICEREFERENCEBYTES_OFFSET UNITYSDK_OFFSET(0x1C3C200)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GET_PRODUCTTAGTYPE_OFFSET UNITYSDK_OFFSET(0x1C3C220)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GET_MONTHLYDAYS_OFFSET UNITYSDK_OFFSET(0x1C3C270)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GET_USEMONTHLYPRODUCTCHECK_OFFSET UNITYSDK_OFFSET(0x1C3C2C0)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GET_PURCHASECOUNTLIMIT_OFFSET UNITYSDK_OFFSET(0x1C3C310)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_PARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C3C360)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GET_PARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1C3C3C0)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GETPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1C3C400)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_PARCELID_OFFSET UNITYSDK_OFFSET(0x1C3C420)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GET_PARCELIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1C3C480)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GETPARCELIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C3C4C0)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_PARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C3C4E0)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GET_PARCELAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1C3C540)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GETPARCELAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1C3C580)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GET_ENTERCOSTREDUCEGROUPID_OFFSET UNITYSDK_OFFSET(0x1C3C5A0)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_DAILYPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C3C5F0)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GET_DAILYPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1C3C650)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GETDAILYPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1C3C690)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_DAILYPARCELID_OFFSET UNITYSDK_OFFSET(0x1C3C6B0)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GET_DAILYPARCELIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1C3C710)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GETDAILYPARCELIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C3C750)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_DAILYPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C3C770)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GET_DAILYPARCELAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1C3C7D0)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GETDAILYPARCELAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1C3C810)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_CREATEPRODUCTMONTHLYEXCEL_OFFSET UNITYSDK_OFFSET(0x1C3C830)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_STARTPRODUCTMONTHLYEXCEL_OFFSET UNITYSDK_OFFSET(0x1C3CEA0)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1C3CBE0)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_ADDPRODUCTID_OFFSET UNITYSDK_OFFSET(0x1C3CDF0)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_ADDTEENPRODUCTID_OFFSET UNITYSDK_OFFSET(0x1C3CDC0)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_ADDSTORETYPE_OFFSET UNITYSDK_OFFSET(0x1C3CD90)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_ADDPRICE_OFFSET UNITYSDK_OFFSET(0x1C3CBB0)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_ADDPRICEREFERENCE_OFFSET UNITYSDK_OFFSET(0x1C3CD60)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_ADDPRODUCTTAGTYPE_OFFSET UNITYSDK_OFFSET(0x1C3CD30)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_ADDMONTHLYDAYS_OFFSET UNITYSDK_OFFSET(0x1C3CB80)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_ADDUSEMONTHLYPRODUCTCHECK_OFFSET UNITYSDK_OFFSET(0x1C3CE20)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_ADDPURCHASECOUNTLIMIT_OFFSET UNITYSDK_OFFSET(0x1C3CB50)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_ADDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C3CD00)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_CREATEPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C3CEC0)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_STARTPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C3CF50)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_ADDPARCELID_OFFSET UNITYSDK_OFFSET(0x1C3CCD0)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_CREATEPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C3CF90)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_STARTPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C3D020)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_ADDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C3CCA0)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_CREATEPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1C3D060)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_STARTPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1C3D0F0)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_ADDENTERCOSTREDUCEGROUPID_OFFSET UNITYSDK_OFFSET(0x1C3CB20)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_ADDDAILYPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C3CC70)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_CREATEDAILYPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C3D130)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_STARTDAILYPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C3D1C0)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_ADDDAILYPARCELID_OFFSET UNITYSDK_OFFSET(0x1C3CC40)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_CREATEDAILYPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C3D200)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_STARTDAILYPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C3D290)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_ADDDAILYPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C3CC10)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_CREATEDAILYPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1C3D2D0)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_STARTDAILYPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1C3D360)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_ENDPRODUCTMONTHLYEXCEL_OFFSET UNITYSDK_OFFSET(0x1C3CE50)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_FINISHPRODUCTMONTHLYEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C3D3A0)
#define MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_FINISHSIZEPREFIXEDPRODUCTMONTHLYEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C3D3C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ProductMonthlyExcel_TypeDefinitionIndex = 19130;

	class ProductMonthlyExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ProductMonthlyExcel* GetRootAsProductMonthlyExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ProductMonthlyExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GETROOTASPRODUCTMONTHLYEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ProductMonthlyExcel* GetRootAsProductMonthlyExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ProductMonthlyExcel* arg)
		{
			return (return (::MX::Data::Excel::ProductMonthlyExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ProductMonthlyExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GETROOTASPRODUCTMONTHLYEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ProductMonthlyExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ProductMonthlyExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::String* get_ProductId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GET_PRODUCTID_OFFSET))(nullptr);
		}

		Il2CppObject* GetProductIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GETPRODUCTIDBYTES_OFFSET))(nullptr);
		}

		::System::String* get_TeenProductId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GET_TEENPRODUCTID_OFFSET))(nullptr);
		}

		Il2CppObject* GetTeenProductIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GETTEENPRODUCTIDBYTES_OFFSET))(nullptr);
		}

		::FlatData::StoreType* get_StoreType()
		{
			return (return (::FlatData::StoreType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GET_STORETYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_Price()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GET_PRICE_OFFSET))(nullptr);
		}

		::System::String* get_PriceReference()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GET_PRICEREFERENCE_OFFSET))(nullptr);
		}

		Il2CppObject* GetPriceReferenceBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GETPRICEREFERENCEBYTES_OFFSET))(nullptr);
		}

		::FlatData::ProductTagType* get_ProductTagType()
		{
			return (return (::FlatData::ProductTagType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GET_PRODUCTTAGTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_MonthlyDays()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GET_MONTHLYDAYS_OFFSET))(nullptr);
		}

		::System::Boolean get_UseMonthlyProductCheck()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GET_USEMONTHLYPRODUCTCHECK_OFFSET))(nullptr);
		}

		::System::Int64 get_PurchaseCountLimit()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GET_PURCHASECOUNTLIMIT_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* ParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_PARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GET_PARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GETPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ParcelId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_PARCELID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ParcelIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GET_PARCELIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetParcelIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GETPARCELIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ParcelAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_PARCELAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ParcelAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GET_PARCELAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetParcelAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GETPARCELAMOUNTBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_EnterCostReduceGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GET_ENTERCOSTREDUCEGROUPID_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* DailyParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_DAILYPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DailyParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GET_DAILYPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetDailyParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GETDAILYPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 DailyParcelId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_DAILYPARCELID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DailyParcelIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GET_DAILYPARCELIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetDailyParcelIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GETDAILYPARCELIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 DailyParcelAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_DAILYPARCELAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DailyParcelAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GET_DAILYPARCELAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetDailyParcelAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_GETDAILYPARCELAMOUNTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateProductMonthlyExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatData::StoreType* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatData::ProductTagType* arg, ::System::Int64 arg, ::System::Boolean arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatData::StoreType*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatData::ProductTagType*, ::System::Int64, ::System::Boolean, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_CREATEPRODUCTMONTHLYEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartProductMonthlyExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_STARTPRODUCTMONTHLYEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProductId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_ADDPRODUCTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTeenProductId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_ADDTEENPRODUCTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStoreType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::StoreType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::StoreType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_ADDSTORETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPrice(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_ADDPRICE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPriceReference(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_ADDPRICEREFERENCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProductTagType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ProductTagType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ProductTagType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_ADDPRODUCTTAGTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMonthlyDays(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_ADDMONTHLYDAYS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUseMonthlyProductCheck(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_ADDUSEMONTHLYPRODUCTCHECK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPurchaseCountLimit(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_ADDPURCHASECOUNTLIMIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_ADDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_CREATEPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_STARTPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_ADDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_CREATEPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_STARTPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_ADDPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_CREATEPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_STARTPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnterCostReduceGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_ADDENTERCOSTREDUCEGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDailyParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_ADDDAILYPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDailyParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_CREATEDAILYPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartDailyParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_STARTDAILYPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDailyParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_ADDDAILYPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDailyParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_CREATEDAILYPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartDailyParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_STARTDAILYPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDailyParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_ADDDAILYPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDailyParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_CREATEDAILYPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartDailyParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_STARTDAILYPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndProductMonthlyExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_ENDPRODUCTMONTHLYEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishProductMonthlyExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_FINISHPRODUCTMONTHLYEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedProductMonthlyExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTMONTHLYEXCEL_FINISHSIZEPREFIXEDPRODUCTMONTHLYEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


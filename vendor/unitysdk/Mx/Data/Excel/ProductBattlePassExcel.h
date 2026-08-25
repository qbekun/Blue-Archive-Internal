#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ProductBattlePassExcel; }
namespace FlatData { class StoreType; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C33A40)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_GETROOTASPRODUCTBATTLEPASSEXCEL_OFFSET UNITYSDK_OFFSET(0x1C33A50)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_GETROOTASPRODUCTBATTLEPASSEXCEL_OFFSET UNITYSDK_OFFSET(0x1C33AB0)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C33B40)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C33B10)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C33B60)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_GET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0x1C33BB0)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_GETPRODUCTIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C33BF0)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_GET_TEENPRODUCTID_OFFSET UNITYSDK_OFFSET(0x1C33C10)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_GETTEENPRODUCTIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C33C50)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_GET_STORETYPE_OFFSET UNITYSDK_OFFSET(0x1C33C70)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_GET_PRICE_OFFSET UNITYSDK_OFFSET(0x1C33CC0)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_GET_PURCHASECOUNTLIMIT_OFFSET UNITYSDK_OFFSET(0x1C33D10)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_GET_BATTLEPASSPRODUCTGROUPID_OFFSET UNITYSDK_OFFSET(0x1C33D60)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_PARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C33DB0)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_GET_PARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1C33E10)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_GETPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1C33E50)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_PARCELID_OFFSET UNITYSDK_OFFSET(0x1C33E70)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_GET_PARCELIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1C33ED0)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_GETPARCELIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C33F10)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_PARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C33F30)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_GET_PARCELAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1C33F90)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_GETPARCELAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1C33FD0)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_CREATEPRODUCTBATTLEPASSEXCEL_OFFSET UNITYSDK_OFFSET(0x1C33FF0)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_STARTPRODUCTBATTLEPASSEXCEL_OFFSET UNITYSDK_OFFSET(0x1C343F0)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1C34250)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_ADDPRODUCTID_OFFSET UNITYSDK_OFFSET(0x1C34370)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_ADDTEENPRODUCTID_OFFSET UNITYSDK_OFFSET(0x1C34340)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_ADDSTORETYPE_OFFSET UNITYSDK_OFFSET(0x1C34310)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_ADDPRICE_OFFSET UNITYSDK_OFFSET(0x1C34220)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_ADDPURCHASECOUNTLIMIT_OFFSET UNITYSDK_OFFSET(0x1C341F0)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_ADDBATTLEPASSPRODUCTGROUPID_OFFSET UNITYSDK_OFFSET(0x1C341C0)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_ADDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C342E0)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_CREATEPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C34410)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_STARTPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C344A0)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_ADDPARCELID_OFFSET UNITYSDK_OFFSET(0x1C342B0)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_CREATEPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C344E0)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_STARTPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C34570)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_ADDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C34280)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_CREATEPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1C345B0)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_STARTPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1C34640)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_ENDPRODUCTBATTLEPASSEXCEL_OFFSET UNITYSDK_OFFSET(0x1C343A0)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_FINISHPRODUCTBATTLEPASSEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C34680)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_FINISHSIZEPREFIXEDPRODUCTBATTLEPASSEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C346A0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ProductBattlePassExcel_TypeDefinitionIndex = 19092;

	class ProductBattlePassExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ProductBattlePassExcel* GetRootAsProductBattlePassExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ProductBattlePassExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_GETROOTASPRODUCTBATTLEPASSEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ProductBattlePassExcel* GetRootAsProductBattlePassExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ProductBattlePassExcel* arg)
		{
			return (return (::MX::Data::Excel::ProductBattlePassExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ProductBattlePassExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_GETROOTASPRODUCTBATTLEPASSEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ProductBattlePassExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ProductBattlePassExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::String* get_ProductId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_GET_PRODUCTID_OFFSET))(nullptr);
		}

		Il2CppObject* GetProductIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_GETPRODUCTIDBYTES_OFFSET))(nullptr);
		}

		::System::String* get_TeenProductId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_GET_TEENPRODUCTID_OFFSET))(nullptr);
		}

		Il2CppObject* GetTeenProductIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_GETTEENPRODUCTIDBYTES_OFFSET))(nullptr);
		}

		::FlatData::StoreType* get_StoreType()
		{
			return (return (::FlatData::StoreType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_GET_STORETYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_Price()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_GET_PRICE_OFFSET))(nullptr);
		}

		::System::Int64 get_PurchaseCountLimit()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_GET_PURCHASECOUNTLIMIT_OFFSET))(nullptr);
		}

		::System::Int64 get_BattlePassProductGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_GET_BATTLEPASSPRODUCTGROUPID_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* ParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_PARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_GET_PARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_GETPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ParcelId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_PARCELID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ParcelIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_GET_PARCELIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetParcelIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_GETPARCELIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ParcelAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_PARCELAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ParcelAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_GET_PARCELAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetParcelAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_GETPARCELAMOUNTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateProductBattlePassExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatData::StoreType* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatData::StoreType*, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_CREATEPRODUCTBATTLEPASSEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartProductBattlePassExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_STARTPRODUCTBATTLEPASSEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProductId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_ADDPRODUCTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTeenProductId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_ADDTEENPRODUCTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStoreType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::StoreType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::StoreType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_ADDSTORETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPrice(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_ADDPRICE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPurchaseCountLimit(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_ADDPURCHASECOUNTLIMIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBattlePassProductGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_ADDBATTLEPASSPRODUCTGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_ADDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_CREATEPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_STARTPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_ADDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_CREATEPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_STARTPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_ADDPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_CREATEPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_STARTPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndProductBattlePassExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_ENDPRODUCTBATTLEPASSEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishProductBattlePassExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_FINISHPRODUCTBATTLEPASSEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedProductBattlePassExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCEL_FINISHSIZEPREFIXEDPRODUCTBATTLEPASSEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


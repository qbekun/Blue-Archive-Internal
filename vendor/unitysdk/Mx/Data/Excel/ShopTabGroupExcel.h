#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ShopTabGroupExcel; }
namespace FlatData { class ShopGroupType; }
namespace FlatData { class ShopCategoryType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_SHOPTABGROUPEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C844A0)
#define MX_DATA_EXCEL_SHOPTABGROUPEXCEL_GETROOTASSHOPTABGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C844B0)
#define MX_DATA_EXCEL_SHOPTABGROUPEXCEL_GETROOTASSHOPTABGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C84510)
#define MX_DATA_EXCEL_SHOPTABGROUPEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C845A0)
#define MX_DATA_EXCEL_SHOPTABGROUPEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C84570)
#define MX_DATA_EXCEL_SHOPTABGROUPEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C845C0)
#define MX_DATA_EXCEL_SHOPTABGROUPEXCEL_GET_SHOPGROUPTYPE_OFFSET UNITYSDK_OFFSET(0x1C84610)
#define MX_DATA_EXCEL_SHOPTABGROUPEXCEL_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1C84660)
#define MX_DATA_EXCEL_SHOPTABGROUPEXCEL_SHOPCATEGORYTYPES_OFFSET UNITYSDK_OFFSET(0x1C846B0)
#define MX_DATA_EXCEL_SHOPTABGROUPEXCEL_GET_SHOPCATEGORYTYPESLENGTH_OFFSET UNITYSDK_OFFSET(0x1C84710)
#define MX_DATA_EXCEL_SHOPTABGROUPEXCEL_GETSHOPCATEGORYTYPESBYTES_OFFSET UNITYSDK_OFFSET(0x1C84750)
#define MX_DATA_EXCEL_SHOPTABGROUPEXCEL_CREATESHOPTABGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C84770)
#define MX_DATA_EXCEL_SHOPTABGROUPEXCEL_STARTSHOPTABGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C84960)
#define MX_DATA_EXCEL_SHOPTABGROUPEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1C84850)
#define MX_DATA_EXCEL_SHOPTABGROUPEXCEL_ADDSHOPGROUPTYPE_OFFSET UNITYSDK_OFFSET(0x1C848E0)
#define MX_DATA_EXCEL_SHOPTABGROUPEXCEL_ADDDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1C848B0)
#define MX_DATA_EXCEL_SHOPTABGROUPEXCEL_ADDSHOPCATEGORYTYPES_OFFSET UNITYSDK_OFFSET(0x1C84880)
#define MX_DATA_EXCEL_SHOPTABGROUPEXCEL_CREATESHOPCATEGORYTYPESVECTOR_OFFSET UNITYSDK_OFFSET(0x1C84980)
#define MX_DATA_EXCEL_SHOPTABGROUPEXCEL_STARTSHOPCATEGORYTYPESVECTOR_OFFSET UNITYSDK_OFFSET(0x1C84A10)
#define MX_DATA_EXCEL_SHOPTABGROUPEXCEL_ENDSHOPTABGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C84910)
#define MX_DATA_EXCEL_SHOPTABGROUPEXCEL_FINISHSHOPTABGROUPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C84A50)
#define MX_DATA_EXCEL_SHOPTABGROUPEXCEL_FINISHSIZEPREFIXEDSHOPTABGROUPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C84A70)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ShopTabGroupExcel_TypeDefinitionIndex = 19450;

	class ShopTabGroupExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPTABGROUPEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ShopTabGroupExcel* GetRootAsShopTabGroupExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ShopTabGroupExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPTABGROUPEXCEL_GETROOTASSHOPTABGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ShopTabGroupExcel* GetRootAsShopTabGroupExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ShopTabGroupExcel* arg)
		{
			return (return (::MX::Data::Excel::ShopTabGroupExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ShopTabGroupExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPTABGROUPEXCEL_GETROOTASSHOPTABGROUPEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPTABGROUPEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ShopTabGroupExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ShopTabGroupExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPTABGROUPEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPTABGROUPEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::FlatData::ShopGroupType* get_ShopGroupType()
		{
			return (return (::FlatData::ShopGroupType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPTABGROUPEXCEL_GET_SHOPGROUPTYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_DisplayOrder()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPTABGROUPEXCEL_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::FlatData::ShopCategoryType* ShopCategoryTypes(::System::Int32 arg)
		{
			return (return (::FlatData::ShopCategoryType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPTABGROUPEXCEL_SHOPCATEGORYTYPES_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ShopCategoryTypesLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPTABGROUPEXCEL_GET_SHOPCATEGORYTYPESLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetShopCategoryTypesBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPTABGROUPEXCEL_GETSHOPCATEGORYTYPESBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateShopTabGroupExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::ShopGroupType* arg, ::System::Int32 arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::ShopGroupType*, ::System::Int32, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPTABGROUPEXCEL_CREATESHOPTABGROUPEXCEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartShopTabGroupExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPTABGROUPEXCEL_STARTSHOPTABGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPTABGROUPEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShopGroupType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ShopGroupType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ShopGroupType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPTABGROUPEXCEL_ADDSHOPGROUPTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPTABGROUPEXCEL_ADDDISPLAYORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShopCategoryTypes(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPTABGROUPEXCEL_ADDSHOPCATEGORYTYPES_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateShopCategoryTypesVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPTABGROUPEXCEL_CREATESHOPCATEGORYTYPESVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartShopCategoryTypesVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPTABGROUPEXCEL_STARTSHOPCATEGORYTYPESVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndShopTabGroupExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPTABGROUPEXCEL_ENDSHOPTABGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishShopTabGroupExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPTABGROUPEXCEL_FINISHSHOPTABGROUPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedShopTabGroupExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPTABGROUPEXCEL_FINISHSIZEPREFIXEDSHOPTABGROUPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


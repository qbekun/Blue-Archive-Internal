#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ShopFilterClassifiedExcel; }
namespace FlatData { class ShopCategoryType; }
namespace FlatData { class ParcelType; }
namespace FlatData { class ShopFilterType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C76D70)
#define MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCEL_GETROOTASSHOPFILTERCLASSIFIEDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C76D80)
#define MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCEL_GETROOTASSHOPFILTERCLASSIFIEDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C76DE0)
#define MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C76E70)
#define MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C76E40)
#define MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C76E90)
#define MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCEL_GET_CATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x1C76EE0)
#define MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCEL_GET_CONSUMEPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C76F30)
#define MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCEL_GET_CONSUMEPARCELID_OFFSET UNITYSDK_OFFSET(0x1C76F80)
#define MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCEL_GET_SHOPFILTERTYPE_OFFSET UNITYSDK_OFFSET(0x1C76FD0)
#define MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCEL_GET_GOODSID_OFFSET UNITYSDK_OFFSET(0x1C77020)
#define MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCEL_CREATESHOPFILTERCLASSIFIEDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C77070)
#define MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCEL_STARTSHOPFILTERCLASSIFIEDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C77310)
#define MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1C77200)
#define MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCEL_ADDCATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x1C77290)
#define MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCEL_ADDCONSUMEPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C77260)
#define MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCEL_ADDCONSUMEPARCELID_OFFSET UNITYSDK_OFFSET(0x1C771D0)
#define MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCEL_ADDSHOPFILTERTYPE_OFFSET UNITYSDK_OFFSET(0x1C77230)
#define MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCEL_ADDGOODSID_OFFSET UNITYSDK_OFFSET(0x1C771A0)
#define MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCEL_ENDSHOPFILTERCLASSIFIEDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C772C0)
#define MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCEL_FINISHSHOPFILTERCLASSIFIEDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C77330)
#define MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCEL_FINISHSIZEPREFIXEDSHOPFILTERCLASSIFIEDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C77350)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ShopFilterClassifiedExcel_TypeDefinitionIndex = 19391;

	class ShopFilterClassifiedExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ShopFilterClassifiedExcel* GetRootAsShopFilterClassifiedExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ShopFilterClassifiedExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCEL_GETROOTASSHOPFILTERCLASSIFIEDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ShopFilterClassifiedExcel* GetRootAsShopFilterClassifiedExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ShopFilterClassifiedExcel* arg)
		{
			return (return (::MX::Data::Excel::ShopFilterClassifiedExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ShopFilterClassifiedExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCEL_GETROOTASSHOPFILTERCLASSIFIEDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ShopFilterClassifiedExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ShopFilterClassifiedExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::FlatData::ShopCategoryType* get_CategoryType()
		{
			return (return (::FlatData::ShopCategoryType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCEL_GET_CATEGORYTYPE_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_ConsumeParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCEL_GET_CONSUMEPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ConsumeParcelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCEL_GET_CONSUMEPARCELID_OFFSET))(nullptr);
		}

		::FlatData::ShopFilterType* get_ShopFilterType()
		{
			return (return (::FlatData::ShopFilterType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCEL_GET_SHOPFILTERTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_GoodsId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCEL_GET_GOODSID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateShopFilterClassifiedExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::ShopCategoryType* arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::FlatData::ShopFilterType* arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::ShopCategoryType*, ::FlatData::ParcelType*, ::System::Int64, ::FlatData::ShopFilterType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCEL_CREATESHOPFILTERCLASSIFIEDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartShopFilterClassifiedExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCEL_STARTSHOPFILTERCLASSIFIEDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCategoryType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ShopCategoryType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCEL_ADDCATEGORYTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConsumeParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCEL_ADDCONSUMEPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConsumeParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCEL_ADDCONSUMEPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShopFilterType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ShopFilterType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ShopFilterType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCEL_ADDSHOPFILTERTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGoodsId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCEL_ADDGOODSID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndShopFilterClassifiedExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCEL_ENDSHOPFILTERCLASSIFIEDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishShopFilterClassifiedExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCEL_FINISHSHOPFILTERCLASSIFIEDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedShopFilterClassifiedExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCEL_FINISHSIZEPREFIXEDSHOPFILTERCLASSIFIEDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


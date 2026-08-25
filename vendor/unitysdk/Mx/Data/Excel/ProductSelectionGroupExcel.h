#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ProductSelectionGroupExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C3FE40)
#define MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_GETROOTASPRODUCTSELECTIONGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C3FE50)
#define MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_GETROOTASPRODUCTSELECTIONGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C3FEB0)
#define MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C3FF40)
#define MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C3FF10)
#define MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_GET_PRODUCTSELECTIONGROUPID_OFFSET UNITYSDK_OFFSET(0x1C3FF60)
#define MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_GET_PRODUCTSELECTIONGROUPCOMPONENTID_OFFSET UNITYSDK_OFFSET(0x1C3FFB0)
#define MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1C40000)
#define MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_GET_PARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C40050)
#define MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_GET_PARCELID_OFFSET UNITYSDK_OFFSET(0x1C400A0)
#define MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_GET_RESULTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C400F0)
#define MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_GET_CONDITIONPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C40140)
#define MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_GET_CONDITIONPARCELID_OFFSET UNITYSDK_OFFSET(0x1C40190)
#define MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_CREATEPRODUCTSELECTIONGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C401E0)
#define MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_STARTPRODUCTSELECTIONGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C40530)
#define MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_ADDPRODUCTSELECTIONGROUPID_OFFSET UNITYSDK_OFFSET(0x1C40450)
#define MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_ADDPRODUCTSELECTIONGROUPCOMPONENTID_OFFSET UNITYSDK_OFFSET(0x1C40420)
#define MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_ADDDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1C403F0)
#define MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_ADDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C404B0)
#define MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_ADDPARCELID_OFFSET UNITYSDK_OFFSET(0x1C403C0)
#define MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_ADDRESULTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C40390)
#define MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_ADDCONDITIONPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C40480)
#define MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_ADDCONDITIONPARCELID_OFFSET UNITYSDK_OFFSET(0x1C40360)
#define MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_ENDPRODUCTSELECTIONGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C404E0)
#define MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_FINISHPRODUCTSELECTIONGROUPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C40550)
#define MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_FINISHSIZEPREFIXEDPRODUCTSELECTIONGROUPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C40570)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ProductSelectionGroupExcel_TypeDefinitionIndex = 19144;

	class ProductSelectionGroupExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ProductSelectionGroupExcel* GetRootAsProductSelectionGroupExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ProductSelectionGroupExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_GETROOTASPRODUCTSELECTIONGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ProductSelectionGroupExcel* GetRootAsProductSelectionGroupExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ProductSelectionGroupExcel* arg)
		{
			return (return (::MX::Data::Excel::ProductSelectionGroupExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ProductSelectionGroupExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_GETROOTASPRODUCTSELECTIONGROUPEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ProductSelectionGroupExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ProductSelectionGroupExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_ProductSelectionGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_GET_PRODUCTSELECTIONGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_ProductSelectionGroupComponentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_GET_PRODUCTSELECTIONGROUPCOMPONENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_DisplayOrder()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_ParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_GET_PARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ParcelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_GET_PARCELID_OFFSET))(nullptr);
		}

		::System::Int64 get_ResultAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_GET_RESULTAMOUNT_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_ConditionParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_GET_CONDITIONPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ConditionParcelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_GET_CONDITIONPARCELID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateProductSelectionGroupExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_CREATEPRODUCTSELECTIONGROUPEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartProductSelectionGroupExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_STARTPRODUCTSELECTIONGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddProductSelectionGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_ADDPRODUCTSELECTIONGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProductSelectionGroupComponentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_ADDPRODUCTSELECTIONGROUPCOMPONENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_ADDDISPLAYORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_ADDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_ADDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddResultAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_ADDRESULTAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConditionParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_ADDCONDITIONPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConditionParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_ADDCONDITIONPARCELID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndProductSelectionGroupExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_ENDPRODUCTSELECTIONGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishProductSelectionGroupExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_FINISHPRODUCTSELECTIONGROUPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedProductSelectionGroupExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTSELECTIONGROUPEXCEL_FINISHSIZEPREFIXEDPRODUCTSELECTIONGROUPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


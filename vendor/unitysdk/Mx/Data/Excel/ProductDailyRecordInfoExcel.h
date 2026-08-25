#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ProductDailyRecordInfoExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_PRODUCTDAILYRECORDINFOEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C36E20)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDINFOEXCEL_GETROOTASPRODUCTDAILYRECORDINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1C36E30)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDINFOEXCEL_GETROOTASPRODUCTDAILYRECORDINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1C36E90)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDINFOEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C36F20)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDINFOEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C36EF0)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDINFOEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C36F40)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDINFOEXCEL_GET_DAYSIZE_OFFSET UNITYSDK_OFFSET(0x1C36F90)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDINFOEXCEL_GET_EXPIRATIONDATE_OFFSET UNITYSDK_OFFSET(0x1C36FE0)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDINFOEXCEL_GETEXPIRATIONDATEBYTES_OFFSET UNITYSDK_OFFSET(0x1C37020)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDINFOEXCEL_CREATEPRODUCTDAILYRECORDINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1C37040)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDINFOEXCEL_STARTPRODUCTDAILYRECORDINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1C371E0)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDINFOEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1C37100)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDINFOEXCEL_ADDDAYSIZE_OFFSET UNITYSDK_OFFSET(0x1C37160)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDINFOEXCEL_ADDEXPIRATIONDATE_OFFSET UNITYSDK_OFFSET(0x1C37130)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDINFOEXCEL_ENDPRODUCTDAILYRECORDINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1C37190)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDINFOEXCEL_FINISHPRODUCTDAILYRECORDINFOEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C37200)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDINFOEXCEL_FINISHSIZEPREFIXEDPRODUCTDAILYRECORDINFOEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C37220)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ProductDailyRecordInfoExcel_TypeDefinitionIndex = 19106;

	class ProductDailyRecordInfoExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDINFOEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ProductDailyRecordInfoExcel* GetRootAsProductDailyRecordInfoExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ProductDailyRecordInfoExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDINFOEXCEL_GETROOTASPRODUCTDAILYRECORDINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ProductDailyRecordInfoExcel* GetRootAsProductDailyRecordInfoExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ProductDailyRecordInfoExcel* arg)
		{
			return (return (::MX::Data::Excel::ProductDailyRecordInfoExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ProductDailyRecordInfoExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDINFOEXCEL_GETROOTASPRODUCTDAILYRECORDINFOEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDINFOEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ProductDailyRecordInfoExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ProductDailyRecordInfoExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDINFOEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDINFOEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int32 get_DaySize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDINFOEXCEL_GET_DAYSIZE_OFFSET))(nullptr);
		}

		::System::String* get_ExpirationDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDINFOEXCEL_GET_EXPIRATIONDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetExpirationDateBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDINFOEXCEL_GETEXPIRATIONDATEBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateProductDailyRecordInfoExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int32 arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int32, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDINFOEXCEL_CREATEPRODUCTDAILYRECORDINFOEXCEL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void StartProductDailyRecordInfoExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDINFOEXCEL_STARTPRODUCTDAILYRECORDINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDINFOEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDaySize(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDINFOEXCEL_ADDDAYSIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExpirationDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDINFOEXCEL_ADDEXPIRATIONDATE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndProductDailyRecordInfoExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDINFOEXCEL_ENDPRODUCTDAILYRECORDINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishProductDailyRecordInfoExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDINFOEXCEL_FINISHPRODUCTDAILYRECORDINFOEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedProductDailyRecordInfoExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDINFOEXCEL_FINISHSIZEPREFIXEDPRODUCTDAILYRECORDINFOEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


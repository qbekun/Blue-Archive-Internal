#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ContentEnterCostReduceExcel; }
namespace FlatData { class ContentType; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A6DCE0)
#define MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCEL_GETROOTASCONTENTENTERCOSTREDUCEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A6DCF0)
#define MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCEL_GETROOTASCONTENTENTERCOSTREDUCEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A6DD50)
#define MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A6DDE0)
#define MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A6DDB0)
#define MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCEL_GET_ENTERCOSTREDUCEGROUPID_OFFSET UNITYSDK_OFFSET(0x1A6DE00)
#define MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCEL_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1A6DE50)
#define MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCEL_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0x1A6DEA0)
#define MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCEL_GET_REDUCEENTERCOSTTYPE_OFFSET UNITYSDK_OFFSET(0x1A6DEF0)
#define MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCEL_GET_REDUCEENTERCOSTID_OFFSET UNITYSDK_OFFSET(0x1A6DF40)
#define MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCEL_GET_REDUCEAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A6DF90)
#define MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCEL_CREATECONTENTENTERCOSTREDUCEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A6DFE0)
#define MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCEL_STARTCONTENTENTERCOSTREDUCEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A6E280)
#define MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCEL_ADDENTERCOSTREDUCEGROUPID_OFFSET UNITYSDK_OFFSET(0x1A6E1A0)
#define MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCEL_ADDCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1A6E200)
#define MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCEL_ADDSTAGEID_OFFSET UNITYSDK_OFFSET(0x1A6E170)
#define MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCEL_ADDREDUCEENTERCOSTTYPE_OFFSET UNITYSDK_OFFSET(0x1A6E1D0)
#define MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCEL_ADDREDUCEENTERCOSTID_OFFSET UNITYSDK_OFFSET(0x1A6E140)
#define MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCEL_ADDREDUCEAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A6E110)
#define MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCEL_ENDCONTENTENTERCOSTREDUCEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A6E230)
#define MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCEL_FINISHCONTENTENTERCOSTREDUCEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A6E2A0)
#define MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCEL_FINISHSIZEPREFIXEDCONTENTENTERCOSTREDUCEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A6E2C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ContentEnterCostReduceExcel_TypeDefinitionIndex = 17309;

	class ContentEnterCostReduceExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ContentEnterCostReduceExcel* GetRootAsContentEnterCostReduceExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ContentEnterCostReduceExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCEL_GETROOTASCONTENTENTERCOSTREDUCEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ContentEnterCostReduceExcel* GetRootAsContentEnterCostReduceExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ContentEnterCostReduceExcel* arg)
		{
			return (return (::MX::Data::Excel::ContentEnterCostReduceExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ContentEnterCostReduceExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCEL_GETROOTASCONTENTENTERCOSTREDUCEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ContentEnterCostReduceExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ContentEnterCostReduceExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EnterCostReduceGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCEL_GET_ENTERCOSTREDUCEGROUPID_OFFSET))(nullptr);
		}

		::FlatData::ContentType* get_ContentType()
		{
			return (return (::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCEL_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_StageId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCEL_GET_STAGEID_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_ReduceEnterCostType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCEL_GET_REDUCEENTERCOSTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ReduceEnterCostId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCEL_GET_REDUCEENTERCOSTID_OFFSET))(nullptr);
		}

		::System::Int64 get_ReduceAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCEL_GET_REDUCEAMOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateContentEnterCostReduceExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::ContentType* arg, ::System::Int64 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::ContentType*, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCEL_CREATECONTENTENTERCOSTREDUCEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartContentEnterCostReduceExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCEL_STARTCONTENTENTERCOSTREDUCEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEnterCostReduceGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCEL_ADDENTERCOSTREDUCEGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddContentType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCEL_ADDCONTENTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCEL_ADDSTAGEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddReduceEnterCostType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCEL_ADDREDUCEENTERCOSTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddReduceEnterCostId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCEL_ADDREDUCEENTERCOSTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddReduceAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCEL_ADDREDUCEAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndContentEnterCostReduceExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCEL_ENDCONTENTENTERCOSTREDUCEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishContentEnterCostReduceExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCEL_FINISHCONTENTENTERCOSTREDUCEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedContentEnterCostReduceExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTENTERCOSTREDUCEEXCEL_FINISHSIZEPREFIXEDCONTENTENTERCOSTREDUCEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


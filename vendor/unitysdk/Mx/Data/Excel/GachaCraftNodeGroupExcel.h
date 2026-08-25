#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class GachaCraftNodeGroupExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_GACHACRAFTNODEGROUPEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B327D0)
#define MX_DATA_EXCEL_GACHACRAFTNODEGROUPEXCEL_GETROOTASGACHACRAFTNODEGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B327E0)
#define MX_DATA_EXCEL_GACHACRAFTNODEGROUPEXCEL_GETROOTASGACHACRAFTNODEGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B32840)
#define MX_DATA_EXCEL_GACHACRAFTNODEGROUPEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B328D0)
#define MX_DATA_EXCEL_GACHACRAFTNODEGROUPEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B328A0)
#define MX_DATA_EXCEL_GACHACRAFTNODEGROUPEXCEL_GET_NODEID_OFFSET UNITYSDK_OFFSET(0x1B328F0)
#define MX_DATA_EXCEL_GACHACRAFTNODEGROUPEXCEL_GET_GACHAGROUPID_OFFSET UNITYSDK_OFFSET(0x1B32940)
#define MX_DATA_EXCEL_GACHACRAFTNODEGROUPEXCEL_GET_PROBWEIGHT_OFFSET UNITYSDK_OFFSET(0x1B32990)
#define MX_DATA_EXCEL_GACHACRAFTNODEGROUPEXCEL_CREATEGACHACRAFTNODEGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B329E0)
#define MX_DATA_EXCEL_GACHACRAFTNODEGROUPEXCEL_STARTGACHACRAFTNODEGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B32B80)
#define MX_DATA_EXCEL_GACHACRAFTNODEGROUPEXCEL_ADDNODEID_OFFSET UNITYSDK_OFFSET(0x1B32B00)
#define MX_DATA_EXCEL_GACHACRAFTNODEGROUPEXCEL_ADDGACHAGROUPID_OFFSET UNITYSDK_OFFSET(0x1B32AD0)
#define MX_DATA_EXCEL_GACHACRAFTNODEGROUPEXCEL_ADDPROBWEIGHT_OFFSET UNITYSDK_OFFSET(0x1B32AA0)
#define MX_DATA_EXCEL_GACHACRAFTNODEGROUPEXCEL_ENDGACHACRAFTNODEGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B32B30)
#define MX_DATA_EXCEL_GACHACRAFTNODEGROUPEXCEL_FINISHGACHACRAFTNODEGROUPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B32BA0)
#define MX_DATA_EXCEL_GACHACRAFTNODEGROUPEXCEL_FINISHSIZEPREFIXEDGACHACRAFTNODEGROUPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B32BC0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int GachaCraftNodeGroupExcel_TypeDefinitionIndex = 18059;

	class GachaCraftNodeGroupExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEGROUPEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::GachaCraftNodeGroupExcel* GetRootAsGachaCraftNodeGroupExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::GachaCraftNodeGroupExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEGROUPEXCEL_GETROOTASGACHACRAFTNODEGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::GachaCraftNodeGroupExcel* GetRootAsGachaCraftNodeGroupExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::GachaCraftNodeGroupExcel* arg)
		{
			return (return (::MX::Data::Excel::GachaCraftNodeGroupExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::GachaCraftNodeGroupExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEGROUPEXCEL_GETROOTASGACHACRAFTNODEGROUPEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEGROUPEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::GachaCraftNodeGroupExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::GachaCraftNodeGroupExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEGROUPEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_NodeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEGROUPEXCEL_GET_NODEID_OFFSET))(nullptr);
		}

		::System::Int64 get_GachaGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEGROUPEXCEL_GET_GACHAGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_ProbWeight()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEGROUPEXCEL_GET_PROBWEIGHT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateGachaCraftNodeGroupExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEGROUPEXCEL_CREATEGACHACRAFTNODEGROUPEXCEL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void StartGachaCraftNodeGroupExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEGROUPEXCEL_STARTGACHACRAFTNODEGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddNodeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEGROUPEXCEL_ADDNODEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGachaGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEGROUPEXCEL_ADDGACHAGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProbWeight(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEGROUPEXCEL_ADDPROBWEIGHT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndGachaCraftNodeGroupExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEGROUPEXCEL_ENDGACHACRAFTNODEGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishGachaCraftNodeGroupExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEGROUPEXCEL_FINISHGACHACRAFTNODEGROUPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedGachaCraftNodeGroupExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEGROUPEXCEL_FINISHSIZEPREFIXEDGACHACRAFTNODEGROUPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


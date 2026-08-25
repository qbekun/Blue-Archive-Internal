#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class GachaCraftOpenTagExcel; }
namespace FlatData { class CraftNodeTier; }
namespace FlatData { class Tag; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_GACHACRAFTOPENTAGEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B338F0)
#define MX_DATA_EXCEL_GACHACRAFTOPENTAGEXCEL_GETROOTASGACHACRAFTOPENTAGEXCEL_OFFSET UNITYSDK_OFFSET(0x1B33900)
#define MX_DATA_EXCEL_GACHACRAFTOPENTAGEXCEL_GETROOTASGACHACRAFTOPENTAGEXCEL_OFFSET UNITYSDK_OFFSET(0x1B33960)
#define MX_DATA_EXCEL_GACHACRAFTOPENTAGEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B339F0)
#define MX_DATA_EXCEL_GACHACRAFTOPENTAGEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B339C0)
#define MX_DATA_EXCEL_GACHACRAFTOPENTAGEXCEL_GET_NODETIER_OFFSET UNITYSDK_OFFSET(0x1B33A10)
#define MX_DATA_EXCEL_GACHACRAFTOPENTAGEXCEL_TAG_OFFSET UNITYSDK_OFFSET(0x1B33A60)
#define MX_DATA_EXCEL_GACHACRAFTOPENTAGEXCEL_GET_TAGLENGTH_OFFSET UNITYSDK_OFFSET(0x1B33AC0)
#define MX_DATA_EXCEL_GACHACRAFTOPENTAGEXCEL_GETTAGBYTES_OFFSET UNITYSDK_OFFSET(0x1B33B00)
#define MX_DATA_EXCEL_GACHACRAFTOPENTAGEXCEL_CREATEGACHACRAFTOPENTAGEXCEL_OFFSET UNITYSDK_OFFSET(0x1B33B20)
#define MX_DATA_EXCEL_GACHACRAFTOPENTAGEXCEL_STARTGACHACRAFTOPENTAGEXCEL_OFFSET UNITYSDK_OFFSET(0x1B33C60)
#define MX_DATA_EXCEL_GACHACRAFTOPENTAGEXCEL_ADDNODETIER_OFFSET UNITYSDK_OFFSET(0x1B33BE0)
#define MX_DATA_EXCEL_GACHACRAFTOPENTAGEXCEL_ADDTAG_OFFSET UNITYSDK_OFFSET(0x1B33BB0)
#define MX_DATA_EXCEL_GACHACRAFTOPENTAGEXCEL_CREATETAGVECTOR_OFFSET UNITYSDK_OFFSET(0x1B33C80)
#define MX_DATA_EXCEL_GACHACRAFTOPENTAGEXCEL_STARTTAGVECTOR_OFFSET UNITYSDK_OFFSET(0x1B33D10)
#define MX_DATA_EXCEL_GACHACRAFTOPENTAGEXCEL_ENDGACHACRAFTOPENTAGEXCEL_OFFSET UNITYSDK_OFFSET(0x1B33C10)
#define MX_DATA_EXCEL_GACHACRAFTOPENTAGEXCEL_FINISHGACHACRAFTOPENTAGEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B33D50)
#define MX_DATA_EXCEL_GACHACRAFTOPENTAGEXCEL_FINISHSIZEPREFIXEDGACHACRAFTOPENTAGEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B33D70)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int GachaCraftOpenTagExcel_TypeDefinitionIndex = 18066;

	class GachaCraftOpenTagExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTOPENTAGEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::GachaCraftOpenTagExcel* GetRootAsGachaCraftOpenTagExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::GachaCraftOpenTagExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTOPENTAGEXCEL_GETROOTASGACHACRAFTOPENTAGEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::GachaCraftOpenTagExcel* GetRootAsGachaCraftOpenTagExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::GachaCraftOpenTagExcel* arg)
		{
			return (return (::MX::Data::Excel::GachaCraftOpenTagExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::GachaCraftOpenTagExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTOPENTAGEXCEL_GETROOTASGACHACRAFTOPENTAGEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTOPENTAGEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::GachaCraftOpenTagExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::GachaCraftOpenTagExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTOPENTAGEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::FlatData::CraftNodeTier* get_NodeTier()
		{
			return (return (::FlatData::CraftNodeTier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTOPENTAGEXCEL_GET_NODETIER_OFFSET))(nullptr);
		}

		::FlatData::Tag* Tag(::System::Int32 arg)
		{
			return (return (::FlatData::Tag*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTOPENTAGEXCEL_TAG_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TagLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTOPENTAGEXCEL_GET_TAGLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetTagBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTOPENTAGEXCEL_GETTAGBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateGachaCraftOpenTagExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::CraftNodeTier* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::CraftNodeTier*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTOPENTAGEXCEL_CREATEGACHACRAFTOPENTAGEXCEL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void StartGachaCraftOpenTagExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTOPENTAGEXCEL_STARTGACHACRAFTOPENTAGEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddNodeTier(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::CraftNodeTier* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::CraftNodeTier*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTOPENTAGEXCEL_ADDNODETIER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTag(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTOPENTAGEXCEL_ADDTAG_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateTagVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTOPENTAGEXCEL_CREATETAGVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartTagVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTOPENTAGEXCEL_STARTTAGVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndGachaCraftOpenTagExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTOPENTAGEXCEL_ENDGACHACRAFTOPENTAGEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishGachaCraftOpenTagExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTOPENTAGEXCEL_FINISHGACHACRAFTOPENTAGEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedGachaCraftOpenTagExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTOPENTAGEXCEL_FINISHSIZEPREFIXEDGACHACRAFTOPENTAGEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


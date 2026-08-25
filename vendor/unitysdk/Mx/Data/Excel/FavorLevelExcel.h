#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class FavorLevelExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_FAVORLEVELEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B19760)
#define MX_DATA_EXCEL_FAVORLEVELEXCEL_GETROOTASFAVORLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0x1B19770)
#define MX_DATA_EXCEL_FAVORLEVELEXCEL_GETROOTASFAVORLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0x1B197D0)
#define MX_DATA_EXCEL_FAVORLEVELEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B19860)
#define MX_DATA_EXCEL_FAVORLEVELEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B19830)
#define MX_DATA_EXCEL_FAVORLEVELEXCEL_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1B19880)
#define MX_DATA_EXCEL_FAVORLEVELEXCEL_EXPTYPE_OFFSET UNITYSDK_OFFSET(0x1B198D0)
#define MX_DATA_EXCEL_FAVORLEVELEXCEL_GET_EXPTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1B19930)
#define MX_DATA_EXCEL_FAVORLEVELEXCEL_GETEXPTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1B19970)
#define MX_DATA_EXCEL_FAVORLEVELEXCEL_CREATEFAVORLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0x1B19990)
#define MX_DATA_EXCEL_FAVORLEVELEXCEL_STARTFAVORLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0x1B19AD0)
#define MX_DATA_EXCEL_FAVORLEVELEXCEL_ADDLEVEL_OFFSET UNITYSDK_OFFSET(0x1B19A20)
#define MX_DATA_EXCEL_FAVORLEVELEXCEL_ADDEXPTYPE_OFFSET UNITYSDK_OFFSET(0x1B19A50)
#define MX_DATA_EXCEL_FAVORLEVELEXCEL_CREATEEXPTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1B19AF0)
#define MX_DATA_EXCEL_FAVORLEVELEXCEL_STARTEXPTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1B19B80)
#define MX_DATA_EXCEL_FAVORLEVELEXCEL_ENDFAVORLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0x1B19A80)
#define MX_DATA_EXCEL_FAVORLEVELEXCEL_FINISHFAVORLEVELEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B19BC0)
#define MX_DATA_EXCEL_FAVORLEVELEXCEL_FINISHSIZEPREFIXEDFAVORLEVELEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B19BE0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int FavorLevelExcel_TypeDefinitionIndex = 17947;

	class FavorLevelExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::FavorLevelExcel* GetRootAsFavorLevelExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::FavorLevelExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELEXCEL_GETROOTASFAVORLEVELEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::FavorLevelExcel* GetRootAsFavorLevelExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::FavorLevelExcel* arg)
		{
			return (return (::MX::Data::Excel::FavorLevelExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::FavorLevelExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELEXCEL_GETROOTASFAVORLEVELEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::FavorLevelExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::FavorLevelExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Level()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELEXCEL_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Int64 ExpType(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELEXCEL_EXPTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ExpTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELEXCEL_GET_EXPTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetExpTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELEXCEL_GETEXPTYPEBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFavorLevelExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELEXCEL_CREATEFAVORLEVELEXCEL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void StartFavorLevelExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELEXCEL_STARTFAVORLEVELEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELEXCEL_ADDLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExpType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELEXCEL_ADDEXPTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateExpTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELEXCEL_CREATEEXPTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartExpTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELEXCEL_STARTEXPTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndFavorLevelExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELEXCEL_ENDFAVORLEVELEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishFavorLevelExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELEXCEL_FINISHFAVORLEVELEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedFavorLevelExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELEXCEL_FINISHSIZEPREFIXEDFAVORLEVELEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


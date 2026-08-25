#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class TacticSkipExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_TACTICSKIPEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C9D140)
#define MX_DATA_EXCEL_TACTICSKIPEXCEL_GETROOTASTACTICSKIPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C9D150)
#define MX_DATA_EXCEL_TACTICSKIPEXCEL_GETROOTASTACTICSKIPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C9D1B0)
#define MX_DATA_EXCEL_TACTICSKIPEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C9D240)
#define MX_DATA_EXCEL_TACTICSKIPEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C9D210)
#define MX_DATA_EXCEL_TACTICSKIPEXCEL_GET_LEVELDIFF_OFFSET UNITYSDK_OFFSET(0x1C9D260)
#define MX_DATA_EXCEL_TACTICSKIPEXCEL_GET_HPRESULT_OFFSET UNITYSDK_OFFSET(0x1C9D2B0)
#define MX_DATA_EXCEL_TACTICSKIPEXCEL_CREATETACTICSKIPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C9D300)
#define MX_DATA_EXCEL_TACTICSKIPEXCEL_STARTTACTICSKIPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C9D440)
#define MX_DATA_EXCEL_TACTICSKIPEXCEL_ADDLEVELDIFF_OFFSET UNITYSDK_OFFSET(0x1C9D3C0)
#define MX_DATA_EXCEL_TACTICSKIPEXCEL_ADDHPRESULT_OFFSET UNITYSDK_OFFSET(0x1C9D390)
#define MX_DATA_EXCEL_TACTICSKIPEXCEL_ENDTACTICSKIPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C9D3F0)
#define MX_DATA_EXCEL_TACTICSKIPEXCEL_FINISHTACTICSKIPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C9D460)
#define MX_DATA_EXCEL_TACTICSKIPEXCEL_FINISHSIZEPREFIXEDTACTICSKIPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C9D480)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int TacticSkipExcel_TypeDefinitionIndex = 19579;

	class TacticSkipExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICSKIPEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::TacticSkipExcel* GetRootAsTacticSkipExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::TacticSkipExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICSKIPEXCEL_GETROOTASTACTICSKIPEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::TacticSkipExcel* GetRootAsTacticSkipExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::TacticSkipExcel* arg)
		{
			return (return (::MX::Data::Excel::TacticSkipExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::TacticSkipExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICSKIPEXCEL_GETROOTASTACTICSKIPEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICSKIPEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::TacticSkipExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::TacticSkipExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICSKIPEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_LevelDiff()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICSKIPEXCEL_GET_LEVELDIFF_OFFSET))(nullptr);
		}

		::System::Int64 get_HPResult()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICSKIPEXCEL_GET_HPRESULT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateTacticSkipExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICSKIPEXCEL_CREATETACTICSKIPEXCEL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void StartTacticSkipExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICSKIPEXCEL_STARTTACTICSKIPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddLevelDiff(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICSKIPEXCEL_ADDLEVELDIFF_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddHPResult(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICSKIPEXCEL_ADDHPRESULT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndTacticSkipExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICSKIPEXCEL_ENDTACTICSKIPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishTacticSkipExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICSKIPEXCEL_FINISHTACTICSKIPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedTacticSkipExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICSKIPEXCEL_FINISHSIZEPREFIXEDTACTICSKIPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


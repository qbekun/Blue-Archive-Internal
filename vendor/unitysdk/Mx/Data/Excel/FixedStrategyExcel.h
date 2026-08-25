#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class FixedStrategyExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B25620)
#define MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_GETROOTASFIXEDSTRATEGYEXCEL_OFFSET UNITYSDK_OFFSET(0x1B25630)
#define MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_GETROOTASFIXEDSTRATEGYEXCEL_OFFSET UNITYSDK_OFFSET(0x1B25690)
#define MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B25720)
#define MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B256F0)
#define MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B25740)
#define MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_GET_STAGEENTERECHELON01FIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0x1B25790)
#define MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_GET_STAGEENTERECHELON01STARTTILE_OFFSET UNITYSDK_OFFSET(0x1B257E0)
#define MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_GET_STAGEENTERECHELON02FIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0x1B25830)
#define MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_GET_STAGEENTERECHELON02STARTTILE_OFFSET UNITYSDK_OFFSET(0x1B25880)
#define MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_GET_STAGEENTERECHELON03FIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0x1B258D0)
#define MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_GET_STAGEENTERECHELON03STARTTILE_OFFSET UNITYSDK_OFFSET(0x1B25920)
#define MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_GET_STAGEENTERECHELON04FIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0x1B25970)
#define MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_GET_STAGEENTERECHELON04STARTTILE_OFFSET UNITYSDK_OFFSET(0x1B259C0)
#define MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_CREATEFIXEDSTRATEGYEXCEL_OFFSET UNITYSDK_OFFSET(0x1B25A10)
#define MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_STARTFIXEDSTRATEGYEXCEL_OFFSET UNITYSDK_OFFSET(0x1B25DB0)
#define MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1B25D30)
#define MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_ADDSTAGEENTERECHELON01FIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0x1B25D00)
#define MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_ADDSTAGEENTERECHELON01STARTTILE_OFFSET UNITYSDK_OFFSET(0x1B25CD0)
#define MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_ADDSTAGEENTERECHELON02FIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0x1B25CA0)
#define MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_ADDSTAGEENTERECHELON02STARTTILE_OFFSET UNITYSDK_OFFSET(0x1B25C70)
#define MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_ADDSTAGEENTERECHELON03FIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0x1B25C40)
#define MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_ADDSTAGEENTERECHELON03STARTTILE_OFFSET UNITYSDK_OFFSET(0x1B25C10)
#define MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_ADDSTAGEENTERECHELON04FIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0x1B25BE0)
#define MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_ADDSTAGEENTERECHELON04STARTTILE_OFFSET UNITYSDK_OFFSET(0x1B25BB0)
#define MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_ENDFIXEDSTRATEGYEXCEL_OFFSET UNITYSDK_OFFSET(0x1B25D60)
#define MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_FINISHFIXEDSTRATEGYEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B25DD0)
#define MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_FINISHSIZEPREFIXEDFIXEDSTRATEGYEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B25DF0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int FixedStrategyExcel_TypeDefinitionIndex = 17996;

	class FixedStrategyExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::FixedStrategyExcel* GetRootAsFixedStrategyExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::FixedStrategyExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_GETROOTASFIXEDSTRATEGYEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::FixedStrategyExcel* GetRootAsFixedStrategyExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::FixedStrategyExcel* arg)
		{
			return (return (::MX::Data::Excel::FixedStrategyExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::FixedStrategyExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_GETROOTASFIXEDSTRATEGYEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::FixedStrategyExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::FixedStrategyExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_StageEnterEchelon01FixedEchelonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_GET_STAGEENTERECHELON01FIXEDECHELONID_OFFSET))(nullptr);
		}

		::System::Int64 get_StageEnterEchelon01Starttile()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_GET_STAGEENTERECHELON01STARTTILE_OFFSET))(nullptr);
		}

		::System::Int64 get_StageEnterEchelon02FixedEchelonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_GET_STAGEENTERECHELON02FIXEDECHELONID_OFFSET))(nullptr);
		}

		::System::Int64 get_StageEnterEchelon02Starttile()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_GET_STAGEENTERECHELON02STARTTILE_OFFSET))(nullptr);
		}

		::System::Int64 get_StageEnterEchelon03FixedEchelonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_GET_STAGEENTERECHELON03FIXEDECHELONID_OFFSET))(nullptr);
		}

		::System::Int64 get_StageEnterEchelon03Starttile()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_GET_STAGEENTERECHELON03STARTTILE_OFFSET))(nullptr);
		}

		::System::Int64 get_StageEnterEchelon04FixedEchelonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_GET_STAGEENTERECHELON04FIXEDECHELONID_OFFSET))(nullptr);
		}

		::System::Int64 get_StageEnterEchelon04Starttile()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_GET_STAGEENTERECHELON04STARTTILE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFixedStrategyExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_CREATEFIXEDSTRATEGYEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartFixedStrategyExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_STARTFIXEDSTRATEGYEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageEnterEchelon01FixedEchelonId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_ADDSTAGEENTERECHELON01FIXEDECHELONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageEnterEchelon01Starttile(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_ADDSTAGEENTERECHELON01STARTTILE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageEnterEchelon02FixedEchelonId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_ADDSTAGEENTERECHELON02FIXEDECHELONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageEnterEchelon02Starttile(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_ADDSTAGEENTERECHELON02STARTTILE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageEnterEchelon03FixedEchelonId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_ADDSTAGEENTERECHELON03FIXEDECHELONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageEnterEchelon03Starttile(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_ADDSTAGEENTERECHELON03STARTTILE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageEnterEchelon04FixedEchelonId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_ADDSTAGEENTERECHELON04FIXEDECHELONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageEnterEchelon04Starttile(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_ADDSTAGEENTERECHELON04STARTTILE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndFixedStrategyExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_ENDFIXEDSTRATEGYEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishFixedStrategyExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_FINISHFIXEDSTRATEGYEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedFixedStrategyExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIXEDSTRATEGYEXCEL_FINISHSIZEPREFIXEDFIXEDSTRATEGYEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


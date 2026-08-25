#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class AcademyLocationRankExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_ACADEMYLOCATIONRANKEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x198A4C0)
#define MX_DATA_EXCEL_ACADEMYLOCATIONRANKEXCEL_GETROOTASACADEMYLOCATIONRANKEXCEL_OFFSET UNITYSDK_OFFSET(0x198A4D0)
#define MX_DATA_EXCEL_ACADEMYLOCATIONRANKEXCEL_GETROOTASACADEMYLOCATIONRANKEXCEL_OFFSET UNITYSDK_OFFSET(0x198A530)
#define MX_DATA_EXCEL_ACADEMYLOCATIONRANKEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x198A5C0)
#define MX_DATA_EXCEL_ACADEMYLOCATIONRANKEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x198A590)
#define MX_DATA_EXCEL_ACADEMYLOCATIONRANKEXCEL_GET_RANK_OFFSET UNITYSDK_OFFSET(0x198A5E0)
#define MX_DATA_EXCEL_ACADEMYLOCATIONRANKEXCEL_GET_RANKEXP_OFFSET UNITYSDK_OFFSET(0x198A630)
#define MX_DATA_EXCEL_ACADEMYLOCATIONRANKEXCEL_GET_TOTALEXP_OFFSET UNITYSDK_OFFSET(0x198A680)
#define MX_DATA_EXCEL_ACADEMYLOCATIONRANKEXCEL_CREATEACADEMYLOCATIONRANKEXCEL_OFFSET UNITYSDK_OFFSET(0x198A6D0)
#define MX_DATA_EXCEL_ACADEMYLOCATIONRANKEXCEL_STARTACADEMYLOCATIONRANKEXCEL_OFFSET UNITYSDK_OFFSET(0x198A870)
#define MX_DATA_EXCEL_ACADEMYLOCATIONRANKEXCEL_ADDRANK_OFFSET UNITYSDK_OFFSET(0x198A7F0)
#define MX_DATA_EXCEL_ACADEMYLOCATIONRANKEXCEL_ADDRANKEXP_OFFSET UNITYSDK_OFFSET(0x198A7C0)
#define MX_DATA_EXCEL_ACADEMYLOCATIONRANKEXCEL_ADDTOTALEXP_OFFSET UNITYSDK_OFFSET(0x198A790)
#define MX_DATA_EXCEL_ACADEMYLOCATIONRANKEXCEL_ENDACADEMYLOCATIONRANKEXCEL_OFFSET UNITYSDK_OFFSET(0x198A820)
#define MX_DATA_EXCEL_ACADEMYLOCATIONRANKEXCEL_FINISHACADEMYLOCATIONRANKEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x198A890)
#define MX_DATA_EXCEL_ACADEMYLOCATIONRANKEXCEL_FINISHSIZEPREFIXEDACADEMYLOCATIONRANKEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x198A8B0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int AcademyLocationRankExcel_TypeDefinitionIndex = 16572;

	class AcademyLocationRankExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONRANKEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::AcademyLocationRankExcel* GetRootAsAcademyLocationRankExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::AcademyLocationRankExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONRANKEXCEL_GETROOTASACADEMYLOCATIONRANKEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::AcademyLocationRankExcel* GetRootAsAcademyLocationRankExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::AcademyLocationRankExcel* arg)
		{
			return (return (::MX::Data::Excel::AcademyLocationRankExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::AcademyLocationRankExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONRANKEXCEL_GETROOTASACADEMYLOCATIONRANKEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONRANKEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::AcademyLocationRankExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::AcademyLocationRankExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONRANKEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Rank()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONRANKEXCEL_GET_RANK_OFFSET))(nullptr);
		}

		::System::Int64 get_RankExp()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONRANKEXCEL_GET_RANKEXP_OFFSET))(nullptr);
		}

		::System::Int64 get_TotalExp()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONRANKEXCEL_GET_TOTALEXP_OFFSET))(nullptr);
		}

		Il2CppObject* CreateAcademyLocationRankExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONRANKEXCEL_CREATEACADEMYLOCATIONRANKEXCEL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void StartAcademyLocationRankExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONRANKEXCEL_STARTACADEMYLOCATIONRANKEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddRank(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONRANKEXCEL_ADDRANK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRankExp(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONRANKEXCEL_ADDRANKEXP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTotalExp(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONRANKEXCEL_ADDTOTALEXP_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndAcademyLocationRankExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONRANKEXCEL_ENDACADEMYLOCATIONRANKEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishAcademyLocationRankExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONRANKEXCEL_FINISHACADEMYLOCATIONRANKEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedAcademyLocationRankExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONRANKEXCEL_FINISHSIZEPREFIXEDACADEMYLOCATIONRANKEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


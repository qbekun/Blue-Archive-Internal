#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class AcademyTicketExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_ACADEMYTICKETEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x19C7FA0)
#define MX_DATA_EXCEL_ACADEMYTICKETEXCEL_GETROOTASACADEMYTICKETEXCEL_OFFSET UNITYSDK_OFFSET(0x19C7FB0)
#define MX_DATA_EXCEL_ACADEMYTICKETEXCEL_GETROOTASACADEMYTICKETEXCEL_OFFSET UNITYSDK_OFFSET(0x19C8010)
#define MX_DATA_EXCEL_ACADEMYTICKETEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x19C80A0)
#define MX_DATA_EXCEL_ACADEMYTICKETEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x19C8070)
#define MX_DATA_EXCEL_ACADEMYTICKETEXCEL_GET_LOCATIONRANKSUM_OFFSET UNITYSDK_OFFSET(0x19C80C0)
#define MX_DATA_EXCEL_ACADEMYTICKETEXCEL_GET_SCHEDULETICKTETMAX_OFFSET UNITYSDK_OFFSET(0x19C8110)
#define MX_DATA_EXCEL_ACADEMYTICKETEXCEL_CREATEACADEMYTICKETEXCEL_OFFSET UNITYSDK_OFFSET(0x19C8160)
#define MX_DATA_EXCEL_ACADEMYTICKETEXCEL_STARTACADEMYTICKETEXCEL_OFFSET UNITYSDK_OFFSET(0x19C82A0)
#define MX_DATA_EXCEL_ACADEMYTICKETEXCEL_ADDLOCATIONRANKSUM_OFFSET UNITYSDK_OFFSET(0x19C8220)
#define MX_DATA_EXCEL_ACADEMYTICKETEXCEL_ADDSCHEDULETICKTETMAX_OFFSET UNITYSDK_OFFSET(0x19C81F0)
#define MX_DATA_EXCEL_ACADEMYTICKETEXCEL_ENDACADEMYTICKETEXCEL_OFFSET UNITYSDK_OFFSET(0x19C8250)
#define MX_DATA_EXCEL_ACADEMYTICKETEXCEL_FINISHACADEMYTICKETEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19C82C0)
#define MX_DATA_EXCEL_ACADEMYTICKETEXCEL_FINISHSIZEPREFIXEDACADEMYTICKETEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19C82E0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int AcademyTicketExcel_TypeDefinitionIndex = 16599;

	class AcademyTicketExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYTICKETEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::AcademyTicketExcel* GetRootAsAcademyTicketExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::AcademyTicketExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYTICKETEXCEL_GETROOTASACADEMYTICKETEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::AcademyTicketExcel* GetRootAsAcademyTicketExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::AcademyTicketExcel* arg)
		{
			return (return (::MX::Data::Excel::AcademyTicketExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::AcademyTicketExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYTICKETEXCEL_GETROOTASACADEMYTICKETEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYTICKETEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::AcademyTicketExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::AcademyTicketExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYTICKETEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_LocationRankSum()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYTICKETEXCEL_GET_LOCATIONRANKSUM_OFFSET))(nullptr);
		}

		::System::Int64 get_ScheduleTicktetMax()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYTICKETEXCEL_GET_SCHEDULETICKTETMAX_OFFSET))(nullptr);
		}

		Il2CppObject* CreateAcademyTicketExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYTICKETEXCEL_CREATEACADEMYTICKETEXCEL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void StartAcademyTicketExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYTICKETEXCEL_STARTACADEMYTICKETEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddLocationRankSum(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYTICKETEXCEL_ADDLOCATIONRANKSUM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddScheduleTicktetMax(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYTICKETEXCEL_ADDSCHEDULETICKTETMAX_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndAcademyTicketExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYTICKETEXCEL_ENDACADEMYTICKETEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishAcademyTicketExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYTICKETEXCEL_FINISHACADEMYTICKETEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedAcademyTicketExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYTICKETEXCEL_FINISHSIZEPREFIXEDACADEMYTICKETEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


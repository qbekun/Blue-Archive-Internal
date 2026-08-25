#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class WeekDungeonOpenScheduleExcel; }
namespace FlatData { class WeekDay; }
namespace FlatData { class WeekDungeonType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1CBDB50)
#define MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEEXCEL_GETROOTASWEEKDUNGEONOPENSCHEDULEEXCEL_OFFSET UNITYSDK_OFFSET(0x1CBDB60)
#define MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEEXCEL_GETROOTASWEEKDUNGEONOPENSCHEDULEEXCEL_OFFSET UNITYSDK_OFFSET(0x1CBDBC0)
#define MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1CBDC50)
#define MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1CBDC20)
#define MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEEXCEL_GET_WEEKDAY_OFFSET UNITYSDK_OFFSET(0x1CBDC70)
#define MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEEXCEL_OPEN_OFFSET UNITYSDK_OFFSET(0x1CBDCC0)
#define MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEEXCEL_GET_OPENLENGTH_OFFSET UNITYSDK_OFFSET(0x1CBDD20)
#define MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEEXCEL_GETOPENBYTES_OFFSET UNITYSDK_OFFSET(0x1CBDD60)
#define MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEEXCEL_CREATEWEEKDUNGEONOPENSCHEDULEEXCEL_OFFSET UNITYSDK_OFFSET(0x1CBDD80)
#define MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEEXCEL_STARTWEEKDUNGEONOPENSCHEDULEEXCEL_OFFSET UNITYSDK_OFFSET(0x1CBDEC0)
#define MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEEXCEL_ADDWEEKDAY_OFFSET UNITYSDK_OFFSET(0x1CBDE40)
#define MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEEXCEL_ADDOPEN_OFFSET UNITYSDK_OFFSET(0x1CBDE10)
#define MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEEXCEL_CREATEOPENVECTOR_OFFSET UNITYSDK_OFFSET(0x1CBDEE0)
#define MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEEXCEL_STARTOPENVECTOR_OFFSET UNITYSDK_OFFSET(0x1CBDF70)
#define MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEEXCEL_ENDWEEKDUNGEONOPENSCHEDULEEXCEL_OFFSET UNITYSDK_OFFSET(0x1CBDE70)
#define MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEEXCEL_FINISHWEEKDUNGEONOPENSCHEDULEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CBDFB0)
#define MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEEXCEL_FINISHSIZEPREFIXEDWEEKDUNGEONOPENSCHEDULEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CBDFD0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int WeekDungeonOpenScheduleExcel_TypeDefinitionIndex = 19743;

	class WeekDungeonOpenScheduleExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::WeekDungeonOpenScheduleExcel* GetRootAsWeekDungeonOpenScheduleExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::WeekDungeonOpenScheduleExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEEXCEL_GETROOTASWEEKDUNGEONOPENSCHEDULEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::WeekDungeonOpenScheduleExcel* GetRootAsWeekDungeonOpenScheduleExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::WeekDungeonOpenScheduleExcel* arg)
		{
			return (return (::MX::Data::Excel::WeekDungeonOpenScheduleExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::WeekDungeonOpenScheduleExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEEXCEL_GETROOTASWEEKDUNGEONOPENSCHEDULEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::WeekDungeonOpenScheduleExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::WeekDungeonOpenScheduleExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::FlatData::WeekDay* get_WeekDay()
		{
			return (return (::FlatData::WeekDay*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEEXCEL_GET_WEEKDAY_OFFSET))(nullptr);
		}

		::FlatData::WeekDungeonType* Open(::System::Int32 arg)
		{
			return (return (::FlatData::WeekDungeonType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEEXCEL_OPEN_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_OpenLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEEXCEL_GET_OPENLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetOpenBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEEXCEL_GETOPENBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateWeekDungeonOpenScheduleExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::WeekDay* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::WeekDay*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEEXCEL_CREATEWEEKDUNGEONOPENSCHEDULEEXCEL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void StartWeekDungeonOpenScheduleExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEEXCEL_STARTWEEKDUNGEONOPENSCHEDULEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddWeekDay(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::WeekDay* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::WeekDay*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEEXCEL_ADDWEEKDAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOpen(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEEXCEL_ADDOPEN_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateOpenVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEEXCEL_CREATEOPENVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartOpenVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEEXCEL_STARTOPENVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndWeekDungeonOpenScheduleExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEEXCEL_ENDWEEKDUNGEONOPENSCHEDULEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishWeekDungeonOpenScheduleExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEEXCEL_FINISHWEEKDUNGEONOPENSCHEDULEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedWeekDungeonOpenScheduleExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEEXCEL_FINISHSIZEPREFIXEDWEEKDUNGEONOPENSCHEDULEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


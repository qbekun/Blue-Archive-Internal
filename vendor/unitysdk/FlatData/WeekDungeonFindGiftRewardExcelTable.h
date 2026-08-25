#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class WeekDungeonFindGiftRewardExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD632B0)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCELTABLE_GETROOTASWEEKDUNGEONFINDGIFTREWARDEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD632C0)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCELTABLE_GETROOTASWEEKDUNGEONFINDGIFTREWARDEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD63320)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD633B0)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD63380)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD633D0)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD634D0)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCELTABLE_CREATEWEEKDUNGEONFINDGIFTREWARDEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD63510)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCELTABLE_STARTWEEKDUNGEONFINDGIFTREWARDEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD63600)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD63580)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD63620)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD636B0)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCELTABLE_ENDWEEKDUNGEONFINDGIFTREWARDEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD635B0)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCELTABLE_FINISHWEEKDUNGEONFINDGIFTREWARDEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD636F0)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCELTABLE_FINISHSIZEPREFIXEDWEEKDUNGEONFINDGIFTREWARDEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD63710)

namespace FlatData
{
	inline static constexpr unsigned int WeekDungeonFindGiftRewardExcelTable_TypeDefinitionIndex = 9350;

	class WeekDungeonFindGiftRewardExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::WeekDungeonFindGiftRewardExcelTable* GetRootAsWeekDungeonFindGiftRewardExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::WeekDungeonFindGiftRewardExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCELTABLE_GETROOTASWEEKDUNGEONFINDGIFTREWARDEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::WeekDungeonFindGiftRewardExcelTable* GetRootAsWeekDungeonFindGiftRewardExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::WeekDungeonFindGiftRewardExcelTable* arg2)
		{
			return ((::FlatData::WeekDungeonFindGiftRewardExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::WeekDungeonFindGiftRewardExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCELTABLE_GETROOTASWEEKDUNGEONFINDGIFTREWARDEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::WeekDungeonFindGiftRewardExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::WeekDungeonFindGiftRewardExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateWeekDungeonFindGiftRewardExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCELTABLE_CREATEWEEKDUNGEONFINDGIFTREWARDEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartWeekDungeonFindGiftRewardExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCELTABLE_STARTWEEKDUNGEONFINDGIFTREWARDEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndWeekDungeonFindGiftRewardExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCELTABLE_ENDWEEKDUNGEONFINDGIFTREWARDEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishWeekDungeonFindGiftRewardExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCELTABLE_FINISHWEEKDUNGEONFINDGIFTREWARDEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedWeekDungeonFindGiftRewardExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCELTABLE_FINISHSIZEPREFIXEDWEEKDUNGEONFINDGIFTREWARDEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}


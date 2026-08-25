#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class EventContentBoxGachaElementExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD34530)
#define FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCELTABLE_GETROOTASEVENTCONTENTBOXGACHAELEMENTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD34540)
#define FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCELTABLE_GETROOTASEVENTCONTENTBOXGACHAELEMENTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD345A0)
#define FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD34630)
#define FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD34600)
#define FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD34650)
#define FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD34750)
#define FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD347A0)
#define FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCELTABLE_CREATEEVENTCONTENTBOXGACHAELEMENTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD347E0)
#define FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCELTABLE_STARTEVENTCONTENTBOXGACHAELEMENTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD348D0)
#define FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD34850)
#define FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD348F0)
#define FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD34980)
#define FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCELTABLE_ENDEVENTCONTENTBOXGACHAELEMENTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD34880)
#define FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCELTABLE_FINISHEVENTCONTENTBOXGACHAELEMENTEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD349C0)
#define FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCELTABLE_FINISHSIZEPREFIXEDEVENTCONTENTBOXGACHAELEMENTEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD349E0)

namespace FlatData
{
	inline static constexpr unsigned int EventContentBoxGachaElementExcelTable_TypeDefinitionIndex = 9254;

	class EventContentBoxGachaElementExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::EventContentBoxGachaElementExcelTable* GetRootAsEventContentBoxGachaElementExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::EventContentBoxGachaElementExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCELTABLE_GETROOTASEVENTCONTENTBOXGACHAELEMENTEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::EventContentBoxGachaElementExcelTable* GetRootAsEventContentBoxGachaElementExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::EventContentBoxGachaElementExcelTable* arg2)
		{
			return ((::FlatData::EventContentBoxGachaElementExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::EventContentBoxGachaElementExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCELTABLE_GETROOTASEVENTCONTENTBOXGACHAELEMENTEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::EventContentBoxGachaElementExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::EventContentBoxGachaElementExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentBoxGachaElementExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCELTABLE_CREATEEVENTCONTENTBOXGACHAELEMENTEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartEventContentBoxGachaElementExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCELTABLE_STARTEVENTCONTENTBOXGACHAELEMENTEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndEventContentBoxGachaElementExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCELTABLE_ENDEVENTCONTENTBOXGACHAELEMENTEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentBoxGachaElementExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCELTABLE_FINISHEVENTCONTENTBOXGACHAELEMENTEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentBoxGachaElementExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCELTABLE_FINISHSIZEPREFIXEDEVENTCONTENTBOXGACHAELEMENTEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}


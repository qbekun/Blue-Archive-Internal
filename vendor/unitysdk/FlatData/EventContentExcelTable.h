#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class EventContentExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_EVENTCONTENTEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD35040)
#define FLATDATA_EVENTCONTENTEXCELTABLE_GETROOTASEVENTCONTENTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD35050)
#define FLATDATA_EVENTCONTENTEXCELTABLE_GETROOTASEVENTCONTENTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD350B0)
#define FLATDATA_EVENTCONTENTEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD35140)
#define FLATDATA_EVENTCONTENTEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD35110)
#define FLATDATA_EVENTCONTENTEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD35160)
#define FLATDATA_EVENTCONTENTEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD35260)
#define FLATDATA_EVENTCONTENTEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD352B0)
#define FLATDATA_EVENTCONTENTEXCELTABLE_CREATEEVENTCONTENTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD352F0)
#define FLATDATA_EVENTCONTENTEXCELTABLE_STARTEVENTCONTENTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD353E0)
#define FLATDATA_EVENTCONTENTEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD35360)
#define FLATDATA_EVENTCONTENTEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD35400)
#define FLATDATA_EVENTCONTENTEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD35490)
#define FLATDATA_EVENTCONTENTEXCELTABLE_ENDEVENTCONTENTEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD35390)
#define FLATDATA_EVENTCONTENTEXCELTABLE_FINISHEVENTCONTENTEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD354D0)
#define FLATDATA_EVENTCONTENTEXCELTABLE_FINISHSIZEPREFIXEDEVENTCONTENTEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD354F0)

namespace FlatData
{
	inline static constexpr unsigned int EventContentExcelTable_TypeDefinitionIndex = 9256;

	class EventContentExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::EventContentExcelTable* GetRootAsEventContentExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::EventContentExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTEXCELTABLE_GETROOTASEVENTCONTENTEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::EventContentExcelTable* GetRootAsEventContentExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::EventContentExcelTable* arg2)
		{
			return ((::FlatData::EventContentExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::EventContentExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTEXCELTABLE_GETROOTASEVENTCONTENTEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::EventContentExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::EventContentExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTEXCELTABLE_CREATEEVENTCONTENTEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartEventContentExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTEXCELTABLE_STARTEVENTCONTENTEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndEventContentExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTEXCELTABLE_ENDEVENTCONTENTEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTEXCELTABLE_FINISHEVENTCONTENTEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTEXCELTABLE_FINISHSIZEPREFIXEDEVENTCONTENTEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}


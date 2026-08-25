#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentChangeScenarioExcel; }
namespace FlatData { class EventChangeType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_EVENTCONTENTCHANGESCENARIOEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1AA2EF0)
#define MX_DATA_EXCEL_EVENTCONTENTCHANGESCENARIOEXCEL_GETROOTASEVENTCONTENTCHANGESCENARIOEXCEL_OFFSET UNITYSDK_OFFSET(0x1AA2F00)
#define MX_DATA_EXCEL_EVENTCONTENTCHANGESCENARIOEXCEL_GETROOTASEVENTCONTENTCHANGESCENARIOEXCEL_OFFSET UNITYSDK_OFFSET(0x1AA2F60)
#define MX_DATA_EXCEL_EVENTCONTENTCHANGESCENARIOEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1AA2FF0)
#define MX_DATA_EXCEL_EVENTCONTENTCHANGESCENARIOEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1AA2FC0)
#define MX_DATA_EXCEL_EVENTCONTENTCHANGESCENARIOEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AA3010)
#define MX_DATA_EXCEL_EVENTCONTENTCHANGESCENARIOEXCEL_GET_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x1AA3060)
#define MX_DATA_EXCEL_EVENTCONTENTCHANGESCENARIOEXCEL_GET_CHANGECOUNT_OFFSET UNITYSDK_OFFSET(0x1AA30B0)
#define MX_DATA_EXCEL_EVENTCONTENTCHANGESCENARIOEXCEL_GET_SCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1AA3100)
#define MX_DATA_EXCEL_EVENTCONTENTCHANGESCENARIOEXCEL_CREATEEVENTCONTENTCHANGESCENARIOEXCEL_OFFSET UNITYSDK_OFFSET(0x1AA3150)
#define MX_DATA_EXCEL_EVENTCONTENTCHANGESCENARIOEXCEL_STARTEVENTCONTENTCHANGESCENARIOEXCEL_OFFSET UNITYSDK_OFFSET(0x1AA3340)
#define MX_DATA_EXCEL_EVENTCONTENTCHANGESCENARIOEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AA3290)
#define MX_DATA_EXCEL_EVENTCONTENTCHANGESCENARIOEXCEL_ADDCHANGETYPE_OFFSET UNITYSDK_OFFSET(0x1AA32C0)
#define MX_DATA_EXCEL_EVENTCONTENTCHANGESCENARIOEXCEL_ADDCHANGECOUNT_OFFSET UNITYSDK_OFFSET(0x1AA3260)
#define MX_DATA_EXCEL_EVENTCONTENTCHANGESCENARIOEXCEL_ADDSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1AA3230)
#define MX_DATA_EXCEL_EVENTCONTENTCHANGESCENARIOEXCEL_ENDEVENTCONTENTCHANGESCENARIOEXCEL_OFFSET UNITYSDK_OFFSET(0x1AA32F0)
#define MX_DATA_EXCEL_EVENTCONTENTCHANGESCENARIOEXCEL_FINISHEVENTCONTENTCHANGESCENARIOEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AA3360)
#define MX_DATA_EXCEL_EVENTCONTENTCHANGESCENARIOEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTCHANGESCENARIOEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AA3380)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentChangeScenarioExcel_TypeDefinitionIndex = 17543;

	class EventContentChangeScenarioExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHANGESCENARIOEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentChangeScenarioExcel* GetRootAsEventContentChangeScenarioExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentChangeScenarioExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHANGESCENARIOEXCEL_GETROOTASEVENTCONTENTCHANGESCENARIOEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentChangeScenarioExcel* GetRootAsEventContentChangeScenarioExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentChangeScenarioExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentChangeScenarioExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentChangeScenarioExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHANGESCENARIOEXCEL_GETROOTASEVENTCONTENTCHANGESCENARIOEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHANGESCENARIOEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentChangeScenarioExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentChangeScenarioExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHANGESCENARIOEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHANGESCENARIOEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::FlatData::EventChangeType* get_ChangeType()
		{
			return (return (::FlatData::EventChangeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHANGESCENARIOEXCEL_GET_CHANGETYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ChangeCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHANGESCENARIOEXCEL_GET_CHANGECOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_ScenarioGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHANGESCENARIOEXCEL_GET_SCENARIOGROUPID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentChangeScenarioExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::EventChangeType* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::EventChangeType*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHANGESCENARIOEXCEL_CREATEEVENTCONTENTCHANGESCENARIOEXCEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentChangeScenarioExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHANGESCENARIOEXCEL_STARTEVENTCONTENTCHANGESCENARIOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHANGESCENARIOEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddChangeType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EventChangeType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EventChangeType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHANGESCENARIOEXCEL_ADDCHANGETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddChangeCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHANGESCENARIOEXCEL_ADDCHANGECOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddScenarioGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHANGESCENARIOEXCEL_ADDSCENARIOGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentChangeScenarioExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHANGESCENARIOEXCEL_ENDEVENTCONTENTCHANGESCENARIOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentChangeScenarioExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHANGESCENARIOEXCEL_FINISHEVENTCONTENTCHANGESCENARIOEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentChangeScenarioExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCHANGESCENARIOEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTCHANGESCENARIOEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


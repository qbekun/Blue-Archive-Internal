#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentSpecialOperationsExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_EVENTCONTENTSPECIALOPERATIONSEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B025A0)
#define MX_DATA_EXCEL_EVENTCONTENTSPECIALOPERATIONSEXCEL_GETROOTASEVENTCONTENTSPECIALOPERATIONSEXCEL_OFFSET UNITYSDK_OFFSET(0x1B025B0)
#define MX_DATA_EXCEL_EVENTCONTENTSPECIALOPERATIONSEXCEL_GETROOTASEVENTCONTENTSPECIALOPERATIONSEXCEL_OFFSET UNITYSDK_OFFSET(0x1B02610)
#define MX_DATA_EXCEL_EVENTCONTENTSPECIALOPERATIONSEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B026A0)
#define MX_DATA_EXCEL_EVENTCONTENTSPECIALOPERATIONSEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B02670)
#define MX_DATA_EXCEL_EVENTCONTENTSPECIALOPERATIONSEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B026C0)
#define MX_DATA_EXCEL_EVENTCONTENTSPECIALOPERATIONSEXCEL_GET_POINTITEMID_OFFSET UNITYSDK_OFFSET(0x1B02710)
#define MX_DATA_EXCEL_EVENTCONTENTSPECIALOPERATIONSEXCEL_CREATEEVENTCONTENTSPECIALOPERATIONSEXCEL_OFFSET UNITYSDK_OFFSET(0x1B02760)
#define MX_DATA_EXCEL_EVENTCONTENTSPECIALOPERATIONSEXCEL_STARTEVENTCONTENTSPECIALOPERATIONSEXCEL_OFFSET UNITYSDK_OFFSET(0x1B028A0)
#define MX_DATA_EXCEL_EVENTCONTENTSPECIALOPERATIONSEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B02820)
#define MX_DATA_EXCEL_EVENTCONTENTSPECIALOPERATIONSEXCEL_ADDPOINTITEMID_OFFSET UNITYSDK_OFFSET(0x1B027F0)
#define MX_DATA_EXCEL_EVENTCONTENTSPECIALOPERATIONSEXCEL_ENDEVENTCONTENTSPECIALOPERATIONSEXCEL_OFFSET UNITYSDK_OFFSET(0x1B02850)
#define MX_DATA_EXCEL_EVENTCONTENTSPECIALOPERATIONSEXCEL_FINISHEVENTCONTENTSPECIALOPERATIONSEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B028C0)
#define MX_DATA_EXCEL_EVENTCONTENTSPECIALOPERATIONSEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTSPECIALOPERATIONSEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B028E0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentSpecialOperationsExcel_TypeDefinitionIndex = 17843;

	class EventContentSpecialOperationsExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPECIALOPERATIONSEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentSpecialOperationsExcel* GetRootAsEventContentSpecialOperationsExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentSpecialOperationsExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPECIALOPERATIONSEXCEL_GETROOTASEVENTCONTENTSPECIALOPERATIONSEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentSpecialOperationsExcel* GetRootAsEventContentSpecialOperationsExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentSpecialOperationsExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentSpecialOperationsExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentSpecialOperationsExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPECIALOPERATIONSEXCEL_GETROOTASEVENTCONTENTSPECIALOPERATIONSEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPECIALOPERATIONSEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentSpecialOperationsExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentSpecialOperationsExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPECIALOPERATIONSEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPECIALOPERATIONSEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_PointItemId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPECIALOPERATIONSEXCEL_GET_POINTITEMID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentSpecialOperationsExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPECIALOPERATIONSEXCEL_CREATEEVENTCONTENTSPECIALOPERATIONSEXCEL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentSpecialOperationsExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPECIALOPERATIONSEXCEL_STARTEVENTCONTENTSPECIALOPERATIONSEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPECIALOPERATIONSEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPointItemId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPECIALOPERATIONSEXCEL_ADDPOINTITEMID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentSpecialOperationsExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPECIALOPERATIONSEXCEL_ENDEVENTCONTENTSPECIALOPERATIONSEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentSpecialOperationsExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPECIALOPERATIONSEXCEL_FINISHEVENTCONTENTSPECIALOPERATIONSEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentSpecialOperationsExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPECIALOPERATIONSEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTSPECIALOPERATIONSEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


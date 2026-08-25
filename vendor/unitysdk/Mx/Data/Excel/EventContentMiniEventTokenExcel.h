#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentMiniEventTokenExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1AEED30)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCEL_GETROOTASEVENTCONTENTMINIEVENTTOKENEXCEL_OFFSET UNITYSDK_OFFSET(0x1AEED40)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCEL_GETROOTASEVENTCONTENTMINIEVENTTOKENEXCEL_OFFSET UNITYSDK_OFFSET(0x1AEEDA0)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1AEEE30)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1AEEE00)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AEEE50)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCEL_GET_ITEMUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1AEEEA0)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCEL_GET_MAXIMUMAMOUNT_OFFSET UNITYSDK_OFFSET(0x1AEEEF0)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCEL_CREATEEVENTCONTENTMINIEVENTTOKENEXCEL_OFFSET UNITYSDK_OFFSET(0x1AEEF40)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCEL_STARTEVENTCONTENTMINIEVENTTOKENEXCEL_OFFSET UNITYSDK_OFFSET(0x1AEF0E0)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AEF060)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCEL_ADDITEMUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1AEF030)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCEL_ADDMAXIMUMAMOUNT_OFFSET UNITYSDK_OFFSET(0x1AEF000)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCEL_ENDEVENTCONTENTMINIEVENTTOKENEXCEL_OFFSET UNITYSDK_OFFSET(0x1AEF090)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCEL_FINISHEVENTCONTENTMINIEVENTTOKENEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AEF100)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTMINIEVENTTOKENEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AEF120)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentMiniEventTokenExcel_TypeDefinitionIndex = 17768;

	class EventContentMiniEventTokenExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentMiniEventTokenExcel* GetRootAsEventContentMiniEventTokenExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentMiniEventTokenExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCEL_GETROOTASEVENTCONTENTMINIEVENTTOKENEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentMiniEventTokenExcel* GetRootAsEventContentMiniEventTokenExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentMiniEventTokenExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentMiniEventTokenExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentMiniEventTokenExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCEL_GETROOTASEVENTCONTENTMINIEVENTTOKENEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentMiniEventTokenExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentMiniEventTokenExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_ItemUniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCEL_GET_ITEMUNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_MaximumAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCEL_GET_MAXIMUMAMOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentMiniEventTokenExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCEL_CREATEEVENTCONTENTMINIEVENTTOKENEXCEL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentMiniEventTokenExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCEL_STARTEVENTCONTENTMINIEVENTTOKENEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddItemUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCEL_ADDITEMUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMaximumAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCEL_ADDMAXIMUMAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentMiniEventTokenExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCEL_ENDEVENTCONTENTMINIEVENTTOKENEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentMiniEventTokenExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCEL_FINISHEVENTCONTENTMINIEVENTTOKENEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentMiniEventTokenExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTMINIEVENTTOKENEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


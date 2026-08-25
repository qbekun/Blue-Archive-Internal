#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentMeetupInfoExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_EVENTCONTENTMEETUPINFOEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1AEC9A0)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPINFOEXCEL_GETROOTASEVENTCONTENTMEETUPINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1AEC9B0)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPINFOEXCEL_GETROOTASEVENTCONTENTMEETUPINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1AECA10)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPINFOEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1AECAA0)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPINFOEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1AECA70)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPINFOEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AECAC0)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPINFOEXCEL_GET_COSTPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1AECB10)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPINFOEXCEL_GET_COSTID_OFFSET UNITYSDK_OFFSET(0x1AECB60)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPINFOEXCEL_GET_COSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1AECBB0)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPINFOEXCEL_CREATEEVENTCONTENTMEETUPINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1AECC00)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPINFOEXCEL_STARTEVENTCONTENTMEETUPINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1AECDF0)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPINFOEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AECD10)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPINFOEXCEL_ADDCOSTPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1AECD70)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPINFOEXCEL_ADDCOSTID_OFFSET UNITYSDK_OFFSET(0x1AECCE0)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPINFOEXCEL_ADDCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1AECD40)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPINFOEXCEL_ENDEVENTCONTENTMEETUPINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1AECDA0)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPINFOEXCEL_FINISHEVENTCONTENTMEETUPINFOEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AECE10)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPINFOEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTMEETUPINFOEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AECE30)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentMeetupInfoExcel_TypeDefinitionIndex = 17754;

	class EventContentMeetupInfoExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPINFOEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentMeetupInfoExcel* GetRootAsEventContentMeetupInfoExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentMeetupInfoExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPINFOEXCEL_GETROOTASEVENTCONTENTMEETUPINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentMeetupInfoExcel* GetRootAsEventContentMeetupInfoExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentMeetupInfoExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentMeetupInfoExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentMeetupInfoExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPINFOEXCEL_GETROOTASEVENTCONTENTMEETUPINFOEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPINFOEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentMeetupInfoExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentMeetupInfoExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPINFOEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPINFOEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_CostParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPINFOEXCEL_GET_COSTPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_CostId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPINFOEXCEL_GET_COSTID_OFFSET))(nullptr);
		}

		::System::Int32 get_CostAmount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPINFOEXCEL_GET_COSTAMOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentMeetupInfoExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPINFOEXCEL_CREATEEVENTCONTENTMEETUPINFOEXCEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentMeetupInfoExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPINFOEXCEL_STARTEVENTCONTENTMEETUPINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPINFOEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCostParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPINFOEXCEL_ADDCOSTPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCostId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPINFOEXCEL_ADDCOSTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCostAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPINFOEXCEL_ADDCOSTAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentMeetupInfoExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPINFOEXCEL_ENDEVENTCONTENTMEETUPINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentMeetupInfoExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPINFOEXCEL_FINISHEVENTCONTENTMEETUPINFOEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentMeetupInfoExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPINFOEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTMEETUPINFOEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


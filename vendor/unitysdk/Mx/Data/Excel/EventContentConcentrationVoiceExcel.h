#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentConcentrationVoiceExcel; }
namespace FlatData { class ConcentrationVoiceCondition; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1AB7240)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCEL_GETROOTASEVENTCONTENTCONCENTRATIONVOICEEXCEL_OFFSET UNITYSDK_OFFSET(0x1AB7250)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCEL_GETROOTASEVENTCONTENTCONCENTRATIONVOICEEXCEL_OFFSET UNITYSDK_OFFSET(0x1AB72B0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1AB7340)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1AB7310)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AB7360)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1AB73B0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCEL_GET_VOICECONDITION_OFFSET UNITYSDK_OFFSET(0x1AB7400)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCEL_GET_VOICECLIP_OFFSET UNITYSDK_OFFSET(0x1AB7450)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCEL_CREATEEVENTCONTENTCONCENTRATIONVOICEEXCEL_OFFSET UNITYSDK_OFFSET(0x1AB74A0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCEL_STARTEVENTCONTENTCONCENTRATIONVOICEEXCEL_OFFSET UNITYSDK_OFFSET(0x1AB7690)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AB75B0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1AB7580)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCEL_ADDVOICECONDITION_OFFSET UNITYSDK_OFFSET(0x1AB7610)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCEL_ADDVOICECLIP_OFFSET UNITYSDK_OFFSET(0x1AB75E0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCEL_ENDEVENTCONTENTCONCENTRATIONVOICEEXCEL_OFFSET UNITYSDK_OFFSET(0x1AB7640)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCEL_FINISHEVENTCONTENTCONCENTRATIONVOICEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AB76B0)
#define MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTCONCENTRATIONVOICEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AB76D0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentConcentrationVoiceExcel_TypeDefinitionIndex = 17634;

	class EventContentConcentrationVoiceExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentConcentrationVoiceExcel* GetRootAsEventContentConcentrationVoiceExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentConcentrationVoiceExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCEL_GETROOTASEVENTCONTENTCONCENTRATIONVOICEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentConcentrationVoiceExcel* GetRootAsEventContentConcentrationVoiceExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentConcentrationVoiceExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentConcentrationVoiceExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentConcentrationVoiceExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCEL_GETROOTASEVENTCONTENTCONCENTRATIONVOICEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentConcentrationVoiceExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentConcentrationVoiceExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::FlatData::ConcentrationVoiceCondition* get_VoiceCondition()
		{
			return (return (::FlatData::ConcentrationVoiceCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCEL_GET_VOICECONDITION_OFFSET))(nullptr);
		}

		::System::UInt32 get_VoiceClip()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCEL_GET_VOICECLIP_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentConcentrationVoiceExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::ConcentrationVoiceCondition* arg, ::System::UInt32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatData::ConcentrationVoiceCondition*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCEL_CREATEEVENTCONTENTCONCENTRATIONVOICEEXCEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentConcentrationVoiceExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCEL_STARTEVENTCONTENTCONCENTRATIONVOICEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCEL_ADDUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVoiceCondition(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ConcentrationVoiceCondition* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ConcentrationVoiceCondition*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCEL_ADDVOICECONDITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVoiceClip(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCEL_ADDVOICECLIP_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentConcentrationVoiceExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCEL_ENDEVENTCONTENTCONCENTRATIONVOICEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentConcentrationVoiceExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCEL_FINISHEVENTCONTENTCONCENTRATIONVOICEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentConcentrationVoiceExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCONCENTRATIONVOICEEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTCONCENTRATIONVOICEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentMeetupExcel; }
namespace FlatData { class MeetupConditionType; }
namespace FlatData { class MeetupConditionPrintType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1AE9D00)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_GETROOTASEVENTCONTENTMEETUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1AE9D10)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_GETROOTASEVENTCONTENTMEETUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1AE9D70)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1AE9E00)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1AE9DD0)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1AE9E20)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AE9E70)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1AE9EC0)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_GET_CONDITIONSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1AE9F10)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_GET_CONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1AE9F60)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_CONDITIONPARAMETER_OFFSET UNITYSDK_OFFSET(0x1AE9FB0)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_GET_CONDITIONPARAMETERLENGTH_OFFSET UNITYSDK_OFFSET(0x1AEA010)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_GETCONDITIONPARAMETERBYTES_OFFSET UNITYSDK_OFFSET(0x1AEA050)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_GET_CONDITIONPRINTTYPE_OFFSET UNITYSDK_OFFSET(0x1AEA070)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_CREATEEVENTCONTENTMEETUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1AEA0C0)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_STARTEVENTCONTENTMEETUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1AEA3B0)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1AEA2A0)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AEA270)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_ADDCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1AEA240)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_ADDCONDITIONSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1AEA210)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_ADDCONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1AEA330)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_ADDCONDITIONPARAMETER_OFFSET UNITYSDK_OFFSET(0x1AEA300)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_CREATECONDITIONPARAMETERVECTOR_OFFSET UNITYSDK_OFFSET(0x1AEA3D0)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_STARTCONDITIONPARAMETERVECTOR_OFFSET UNITYSDK_OFFSET(0x1AEA460)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_ADDCONDITIONPRINTTYPE_OFFSET UNITYSDK_OFFSET(0x1AEA2D0)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_ENDEVENTCONTENTMEETUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1AEA360)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_FINISHEVENTCONTENTMEETUPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AEA4A0)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTMEETUPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AEA4C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentMeetupExcel_TypeDefinitionIndex = 17741;

	class EventContentMeetupExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentMeetupExcel* GetRootAsEventContentMeetupExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentMeetupExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_GETROOTASEVENTCONTENTMEETUPEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentMeetupExcel* GetRootAsEventContentMeetupExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentMeetupExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentMeetupExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentMeetupExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_GETROOTASEVENTCONTENTMEETUPEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentMeetupExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentMeetupExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Int64 get_ConditionScenarioGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_GET_CONDITIONSCENARIOGROUPID_OFFSET))(nullptr);
		}

		::FlatData::MeetupConditionType* get_ConditionType()
		{
			return (return (::FlatData::MeetupConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_GET_CONDITIONTYPE_OFFSET))(nullptr);
		}

		::System::Int64 ConditionParameter(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_CONDITIONPARAMETER_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ConditionParameterLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_GET_CONDITIONPARAMETERLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetConditionParameterBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_GETCONDITIONPARAMETERBYTES_OFFSET))(nullptr);
		}

		::FlatData::MeetupConditionPrintType* get_ConditionPrintType()
		{
			return (return (::FlatData::MeetupConditionPrintType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_GET_CONDITIONPRINTTYPE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentMeetupExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::MeetupConditionType* arg, ::FlatBuffers::VectorOffset* arg, ::FlatData::MeetupConditionPrintType* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatData::MeetupConditionType*, ::FlatBuffers::VectorOffset*, ::FlatData::MeetupConditionPrintType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_CREATEEVENTCONTENTMEETUPEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentMeetupExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_STARTEVENTCONTENTMEETUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_ADDCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConditionScenarioGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_ADDCONDITIONSCENARIOGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConditionType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::MeetupConditionType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::MeetupConditionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_ADDCONDITIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConditionParameter(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_ADDCONDITIONPARAMETER_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateConditionParameterVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_CREATECONDITIONPARAMETERVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartConditionParameterVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_STARTCONDITIONPARAMETERVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConditionPrintType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::MeetupConditionPrintType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::MeetupConditionPrintType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_ADDCONDITIONPRINTTYPE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentMeetupExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_ENDEVENTCONTENTMEETUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentMeetupExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_FINISHEVENTCONTENTMEETUPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentMeetupExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTMEETUPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentDiceRaceEffectExcel; }
namespace FlatData { class EventContentDiceRaceResultType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1ABD1E0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL_GETROOTASEVENTCONTENTDICERACEEFFECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1ABD1F0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL_GETROOTASEVENTCONTENTDICERACEEFFECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1ABD250)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1ABD2E0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1ABD2B0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1ABD300)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL_GET_EVENTCONTENTDICERACERESULTTYPE_OFFSET UNITYSDK_OFFSET(0x1ABD350)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL_GET_ISDICERESULT_OFFSET UNITYSDK_OFFSET(0x1ABD3A0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL_GET_ANICLIP_OFFSET UNITYSDK_OFFSET(0x1ABD3F0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL_GETANICLIPBYTES_OFFSET UNITYSDK_OFFSET(0x1ABD430)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL_VOICEID_OFFSET UNITYSDK_OFFSET(0x1ABD450)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL_GET_VOICEIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1ABD4B0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL_GETVOICEIDBYTES_OFFSET UNITYSDK_OFFSET(0x1ABD4F0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL_CREATEEVENTCONTENTDICERACEEFFECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1ABD510)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL_STARTEVENTCONTENTDICERACEEFFECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1ABD750)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1ABD610)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL_ADDEVENTCONTENTDICERACERESULTTYPE_OFFSET UNITYSDK_OFFSET(0x1ABD6A0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL_ADDISDICERESULT_OFFSET UNITYSDK_OFFSET(0x1ABD6D0)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL_ADDANICLIP_OFFSET UNITYSDK_OFFSET(0x1ABD670)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL_ADDVOICEID_OFFSET UNITYSDK_OFFSET(0x1ABD640)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL_CREATEVOICEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1ABD770)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL_STARTVOICEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1ABD800)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL_ENDEVENTCONTENTDICERACEEFFECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1ABD700)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL_FINISHEVENTCONTENTDICERACEEFFECTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1ABD840)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTDICERACEEFFECTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1ABD860)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentDiceRaceEffectExcel_TypeDefinitionIndex = 17664;

	class EventContentDiceRaceEffectExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentDiceRaceEffectExcel* GetRootAsEventContentDiceRaceEffectExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentDiceRaceEffectExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL_GETROOTASEVENTCONTENTDICERACEEFFECTEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentDiceRaceEffectExcel* GetRootAsEventContentDiceRaceEffectExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentDiceRaceEffectExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentDiceRaceEffectExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentDiceRaceEffectExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL_GETROOTASEVENTCONTENTDICERACEEFFECTEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentDiceRaceEffectExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentDiceRaceEffectExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::FlatData::EventContentDiceRaceResultType* get_EventContentDiceRaceResultType()
		{
			return (return (::FlatData::EventContentDiceRaceResultType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL_GET_EVENTCONTENTDICERACERESULTTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDiceResult()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL_GET_ISDICERESULT_OFFSET))(nullptr);
		}

		::System::String* get_AniClip()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL_GET_ANICLIP_OFFSET))(nullptr);
		}

		Il2CppObject* GetAniClipBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL_GETANICLIPBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 VoiceId(::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL_VOICEID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_VoiceIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL_GET_VOICEIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetVoiceIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL_GETVOICEIDBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentDiceRaceEffectExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::EventContentDiceRaceResultType* arg, ::System::Boolean arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::EventContentDiceRaceResultType*, ::System::Boolean, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL_CREATEEVENTCONTENTDICERACEEFFECTEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentDiceRaceEffectExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL_STARTEVENTCONTENTDICERACEEFFECTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentDiceRaceResultType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EventContentDiceRaceResultType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EventContentDiceRaceResultType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL_ADDEVENTCONTENTDICERACERESULTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsDiceResult(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL_ADDISDICERESULT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAniClip(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL_ADDANICLIP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVoiceId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL_ADDVOICEID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateVoiceIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL_CREATEVOICEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartVoiceIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL_STARTVOICEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentDiceRaceEffectExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL_ENDEVENTCONTENTDICERACEEFFECTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentDiceRaceEffectExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL_FINISHEVENTCONTENTDICERACEEFFECTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentDiceRaceEffectExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEEFFECTEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTDICERACEEFFECTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


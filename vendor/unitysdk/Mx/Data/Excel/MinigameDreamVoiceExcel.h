#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MinigameDreamVoiceExcel; }
namespace FlatData { class DreamMakerVoiceCondition; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_MINIGAMEDREAMVOICEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1BBFBA0)
#define MX_DATA_EXCEL_MINIGAMEDREAMVOICEEXCEL_GETROOTASMINIGAMEDREAMVOICEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BBFBB0)
#define MX_DATA_EXCEL_MINIGAMEDREAMVOICEEXCEL_GETROOTASMINIGAMEDREAMVOICEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BBFC10)
#define MX_DATA_EXCEL_MINIGAMEDREAMVOICEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1BBFCA0)
#define MX_DATA_EXCEL_MINIGAMEDREAMVOICEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1BBFC70)
#define MX_DATA_EXCEL_MINIGAMEDREAMVOICEEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BBFCC0)
#define MX_DATA_EXCEL_MINIGAMEDREAMVOICEEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BBFD10)
#define MX_DATA_EXCEL_MINIGAMEDREAMVOICEEXCEL_GET_VOICECONDITION_OFFSET UNITYSDK_OFFSET(0x1BBFD60)
#define MX_DATA_EXCEL_MINIGAMEDREAMVOICEEXCEL_GET_VOICECLIP_OFFSET UNITYSDK_OFFSET(0x1BBFDB0)
#define MX_DATA_EXCEL_MINIGAMEDREAMVOICEEXCEL_CREATEMINIGAMEDREAMVOICEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BBFE00)
#define MX_DATA_EXCEL_MINIGAMEDREAMVOICEEXCEL_STARTMINIGAMEDREAMVOICEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BBFFF0)
#define MX_DATA_EXCEL_MINIGAMEDREAMVOICEEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BBFF10)
#define MX_DATA_EXCEL_MINIGAMEDREAMVOICEEXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BBFEE0)
#define MX_DATA_EXCEL_MINIGAMEDREAMVOICEEXCEL_ADDVOICECONDITION_OFFSET UNITYSDK_OFFSET(0x1BBFF70)
#define MX_DATA_EXCEL_MINIGAMEDREAMVOICEEXCEL_ADDVOICECLIP_OFFSET UNITYSDK_OFFSET(0x1BBFF40)
#define MX_DATA_EXCEL_MINIGAMEDREAMVOICEEXCEL_ENDMINIGAMEDREAMVOICEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BBFFA0)
#define MX_DATA_EXCEL_MINIGAMEDREAMVOICEEXCEL_FINISHMINIGAMEDREAMVOICEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BC0010)
#define MX_DATA_EXCEL_MINIGAMEDREAMVOICEEXCEL_FINISHSIZEPREFIXEDMINIGAMEDREAMVOICEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BC0030)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameDreamVoiceExcel_TypeDefinitionIndex = 18688;

	class MinigameDreamVoiceExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMVOICEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MinigameDreamVoiceExcel* GetRootAsMinigameDreamVoiceExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameDreamVoiceExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMVOICEEXCEL_GETROOTASMINIGAMEDREAMVOICEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MinigameDreamVoiceExcel* GetRootAsMinigameDreamVoiceExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MinigameDreamVoiceExcel* arg)
		{
			return (return (::MX::Data::Excel::MinigameDreamVoiceExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MinigameDreamVoiceExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMVOICEEXCEL_GETROOTASMINIGAMEDREAMVOICEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMVOICEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MinigameDreamVoiceExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameDreamVoiceExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMVOICEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMVOICEEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMVOICEEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::FlatData::DreamMakerVoiceCondition* get_VoiceCondition()
		{
			return (return (::FlatData::DreamMakerVoiceCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMVOICEEXCEL_GET_VOICECONDITION_OFFSET))(nullptr);
		}

		::System::UInt32 get_VoiceClip()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMVOICEEXCEL_GET_VOICECLIP_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMinigameDreamVoiceExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::DreamMakerVoiceCondition* arg, ::System::UInt32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatData::DreamMakerVoiceCondition*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMVOICEEXCEL_CREATEMINIGAMEDREAMVOICEEXCEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMinigameDreamVoiceExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMVOICEEXCEL_STARTMINIGAMEDREAMVOICEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMVOICEEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMVOICEEXCEL_ADDUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVoiceCondition(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::DreamMakerVoiceCondition* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::DreamMakerVoiceCondition*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMVOICEEXCEL_ADDVOICECONDITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVoiceClip(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMVOICEEXCEL_ADDVOICECLIP_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMinigameDreamVoiceExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMVOICEEXCEL_ENDMINIGAMEDREAMVOICEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMinigameDreamVoiceExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMVOICEEXCEL_FINISHMINIGAMEDREAMVOICEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMinigameDreamVoiceExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMVOICEEXCEL_FINISHSIZEPREFIXEDMINIGAMEDREAMVOICEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MinigameTBGVoiceExcel; }
namespace FlatData { class TBGVoiceCondition; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_MINIGAMETBGVOICEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C0F350)
#define MX_DATA_EXCEL_MINIGAMETBGVOICEEXCEL_GETROOTASMINIGAMETBGVOICEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C0F360)
#define MX_DATA_EXCEL_MINIGAMETBGVOICEEXCEL_GETROOTASMINIGAMETBGVOICEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C0F3C0)
#define MX_DATA_EXCEL_MINIGAMETBGVOICEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C0F450)
#define MX_DATA_EXCEL_MINIGAMETBGVOICEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C0F420)
#define MX_DATA_EXCEL_MINIGAMETBGVOICEEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1C0F470)
#define MX_DATA_EXCEL_MINIGAMETBGVOICEEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C0F4C0)
#define MX_DATA_EXCEL_MINIGAMETBGVOICEEXCEL_GET_VOICECONDITION_OFFSET UNITYSDK_OFFSET(0x1C0F510)
#define MX_DATA_EXCEL_MINIGAMETBGVOICEEXCEL_GET_VOICEID_OFFSET UNITYSDK_OFFSET(0x1C0F560)
#define MX_DATA_EXCEL_MINIGAMETBGVOICEEXCEL_CREATEMINIGAMETBGVOICEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C0F5B0)
#define MX_DATA_EXCEL_MINIGAMETBGVOICEEXCEL_STARTMINIGAMETBGVOICEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C0F7A0)
#define MX_DATA_EXCEL_MINIGAMETBGVOICEEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1C0F6C0)
#define MX_DATA_EXCEL_MINIGAMETBGVOICEEXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C0F690)
#define MX_DATA_EXCEL_MINIGAMETBGVOICEEXCEL_ADDVOICECONDITION_OFFSET UNITYSDK_OFFSET(0x1C0F720)
#define MX_DATA_EXCEL_MINIGAMETBGVOICEEXCEL_ADDVOICEID_OFFSET UNITYSDK_OFFSET(0x1C0F6F0)
#define MX_DATA_EXCEL_MINIGAMETBGVOICEEXCEL_ENDMINIGAMETBGVOICEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C0F750)
#define MX_DATA_EXCEL_MINIGAMETBGVOICEEXCEL_FINISHMINIGAMETBGVOICEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C0F7C0)
#define MX_DATA_EXCEL_MINIGAMETBGVOICEEXCEL_FINISHSIZEPREFIXEDMINIGAMETBGVOICEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C0F7E0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameTBGVoiceExcel_TypeDefinitionIndex = 18922;

	class MinigameTBGVoiceExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGVOICEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MinigameTBGVoiceExcel* GetRootAsMinigameTBGVoiceExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameTBGVoiceExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGVOICEEXCEL_GETROOTASMINIGAMETBGVOICEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MinigameTBGVoiceExcel* GetRootAsMinigameTBGVoiceExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MinigameTBGVoiceExcel* arg)
		{
			return (return (::MX::Data::Excel::MinigameTBGVoiceExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MinigameTBGVoiceExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGVOICEEXCEL_GETROOTASMINIGAMETBGVOICEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGVOICEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MinigameTBGVoiceExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameTBGVoiceExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGVOICEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGVOICEEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGVOICEEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::FlatData::TBGVoiceCondition* get_VoiceCondition()
		{
			return (return (::FlatData::TBGVoiceCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGVOICEEXCEL_GET_VOICECONDITION_OFFSET))(nullptr);
		}

		::System::UInt32 get_VoiceId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGVOICEEXCEL_GET_VOICEID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMinigameTBGVoiceExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::TBGVoiceCondition* arg, ::System::UInt32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatData::TBGVoiceCondition*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGVOICEEXCEL_CREATEMINIGAMETBGVOICEEXCEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMinigameTBGVoiceExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGVOICEEXCEL_STARTMINIGAMETBGVOICEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGVOICEEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGVOICEEXCEL_ADDUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVoiceCondition(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::TBGVoiceCondition* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::TBGVoiceCondition*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGVOICEEXCEL_ADDVOICECONDITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVoiceId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGVOICEEXCEL_ADDVOICEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMinigameTBGVoiceExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGVOICEEXCEL_ENDMINIGAMETBGVOICEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMinigameTBGVoiceExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGVOICEEXCEL_FINISHMINIGAMETBGVOICEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMinigameTBGVoiceExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGVOICEEXCEL_FINISHSIZEPREFIXEDMINIGAMETBGVOICEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


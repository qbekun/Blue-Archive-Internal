#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class VoiceCommonExcel; }
namespace FlatData { class VoiceEvent; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_VOICECOMMONEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1CB13E0)
#define MX_DATA_EXCEL_VOICECOMMONEXCEL_GETROOTASVOICECOMMONEXCEL_OFFSET UNITYSDK_OFFSET(0x1CB13F0)
#define MX_DATA_EXCEL_VOICECOMMONEXCEL_GETROOTASVOICECOMMONEXCEL_OFFSET UNITYSDK_OFFSET(0x1CB1450)
#define MX_DATA_EXCEL_VOICECOMMONEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1CB14E0)
#define MX_DATA_EXCEL_VOICECOMMONEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1CB14B0)
#define MX_DATA_EXCEL_VOICECOMMONEXCEL_GET_VOICEEVENT_OFFSET UNITYSDK_OFFSET(0x1CB1500)
#define MX_DATA_EXCEL_VOICECOMMONEXCEL_GET_RATE_OFFSET UNITYSDK_OFFSET(0x1CB1550)
#define MX_DATA_EXCEL_VOICECOMMONEXCEL_VOICEHASH_OFFSET UNITYSDK_OFFSET(0x1CB15A0)
#define MX_DATA_EXCEL_VOICECOMMONEXCEL_GET_VOICEHASHLENGTH_OFFSET UNITYSDK_OFFSET(0x1CB1600)
#define MX_DATA_EXCEL_VOICECOMMONEXCEL_GETVOICEHASHBYTES_OFFSET UNITYSDK_OFFSET(0x1CB1640)
#define MX_DATA_EXCEL_VOICECOMMONEXCEL_CREATEVOICECOMMONEXCEL_OFFSET UNITYSDK_OFFSET(0x1CB1660)
#define MX_DATA_EXCEL_VOICECOMMONEXCEL_STARTVOICECOMMONEXCEL_OFFSET UNITYSDK_OFFSET(0x1CB17F0)
#define MX_DATA_EXCEL_VOICECOMMONEXCEL_ADDVOICEEVENT_OFFSET UNITYSDK_OFFSET(0x1CB1770)
#define MX_DATA_EXCEL_VOICECOMMONEXCEL_ADDRATE_OFFSET UNITYSDK_OFFSET(0x1CB1710)
#define MX_DATA_EXCEL_VOICECOMMONEXCEL_ADDVOICEHASH_OFFSET UNITYSDK_OFFSET(0x1CB1740)
#define MX_DATA_EXCEL_VOICECOMMONEXCEL_CREATEVOICEHASHVECTOR_OFFSET UNITYSDK_OFFSET(0x1CB1810)
#define MX_DATA_EXCEL_VOICECOMMONEXCEL_STARTVOICEHASHVECTOR_OFFSET UNITYSDK_OFFSET(0x1CB18A0)
#define MX_DATA_EXCEL_VOICECOMMONEXCEL_ENDVOICECOMMONEXCEL_OFFSET UNITYSDK_OFFSET(0x1CB17A0)
#define MX_DATA_EXCEL_VOICECOMMONEXCEL_FINISHVOICECOMMONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CB18E0)
#define MX_DATA_EXCEL_VOICECOMMONEXCEL_FINISHSIZEPREFIXEDVOICECOMMONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CB1900)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int VoiceCommonExcel_TypeDefinitionIndex = 19680;

	class VoiceCommonExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICECOMMONEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::VoiceCommonExcel* GetRootAsVoiceCommonExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::VoiceCommonExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICECOMMONEXCEL_GETROOTASVOICECOMMONEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::VoiceCommonExcel* GetRootAsVoiceCommonExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::VoiceCommonExcel* arg)
		{
			return (return (::MX::Data::Excel::VoiceCommonExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::VoiceCommonExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICECOMMONEXCEL_GETROOTASVOICECOMMONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICECOMMONEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::VoiceCommonExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::VoiceCommonExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICECOMMONEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::FlatData::VoiceEvent* get_VoiceEvent()
		{
			return (return (::FlatData::VoiceEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICECOMMONEXCEL_GET_VOICEEVENT_OFFSET))(nullptr);
		}

		::System::Int64 get_Rate()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICECOMMONEXCEL_GET_RATE_OFFSET))(nullptr);
		}

		::System::UInt32 VoiceHash(::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICECOMMONEXCEL_VOICEHASH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_VoiceHashLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICECOMMONEXCEL_GET_VOICEHASHLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetVoiceHashBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICECOMMONEXCEL_GETVOICEHASHBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateVoiceCommonExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::VoiceEvent* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::VoiceEvent*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICECOMMONEXCEL_CREATEVOICECOMMONEXCEL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void StartVoiceCommonExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICECOMMONEXCEL_STARTVOICECOMMONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddVoiceEvent(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::VoiceEvent* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::VoiceEvent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICECOMMONEXCEL_ADDVOICEEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICECOMMONEXCEL_ADDRATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVoiceHash(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICECOMMONEXCEL_ADDVOICEHASH_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateVoiceHashVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICECOMMONEXCEL_CREATEVOICEHASHVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartVoiceHashVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICECOMMONEXCEL_STARTVOICEHASHVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndVoiceCommonExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICECOMMONEXCEL_ENDVOICECOMMONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishVoiceCommonExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICECOMMONEXCEL_FINISHVOICECOMMONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedVoiceCommonExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICECOMMONEXCEL_FINISHSIZEPREFIXEDVOICECOMMONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


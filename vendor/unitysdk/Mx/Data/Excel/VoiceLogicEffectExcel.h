#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class VoiceLogicEffectExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1CB3CB0)
#define MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL_GETROOTASVOICELOGICEFFECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1CB3CC0)
#define MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL_GETROOTASVOICELOGICEFFECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1CB3D20)
#define MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1CB3DB0)
#define MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1CB3D80)
#define MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL_GET_LOGICEFFECTNAMEHASH_OFFSET UNITYSDK_OFFSET(0x1CB3DD0)
#define MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL_GET_SELF_OFFSET UNITYSDK_OFFSET(0x1CB3E20)
#define MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1CB3E70)
#define MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL_VOICEHASH_OFFSET UNITYSDK_OFFSET(0x1CB3EC0)
#define MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL_GET_VOICEHASHLENGTH_OFFSET UNITYSDK_OFFSET(0x1CB3F20)
#define MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL_GETVOICEHASHBYTES_OFFSET UNITYSDK_OFFSET(0x1CB3F60)
#define MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL_GET_VOICEID_OFFSET UNITYSDK_OFFSET(0x1CB3F80)
#define MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL_CREATEVOICELOGICEFFECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1CB3FD0)
#define MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL_STARTVOICELOGICEFFECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1CB4210)
#define MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL_ADDLOGICEFFECTNAMEHASH_OFFSET UNITYSDK_OFFSET(0x1CB4160)
#define MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL_ADDSELF_OFFSET UNITYSDK_OFFSET(0x1CB4190)
#define MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL_ADDPRIORITY_OFFSET UNITYSDK_OFFSET(0x1CB4130)
#define MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL_ADDVOICEHASH_OFFSET UNITYSDK_OFFSET(0x1CB4100)
#define MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL_CREATEVOICEHASHVECTOR_OFFSET UNITYSDK_OFFSET(0x1CB4230)
#define MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL_STARTVOICEHASHVECTOR_OFFSET UNITYSDK_OFFSET(0x1CB42C0)
#define MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL_ADDVOICEID_OFFSET UNITYSDK_OFFSET(0x1CB40D0)
#define MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL_ENDVOICELOGICEFFECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1CB41C0)
#define MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL_FINISHVOICELOGICEFFECTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CB4300)
#define MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL_FINISHSIZEPREFIXEDVOICELOGICEFFECTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CB4320)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int VoiceLogicEffectExcel_TypeDefinitionIndex = 19694;

	class VoiceLogicEffectExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::VoiceLogicEffectExcel* GetRootAsVoiceLogicEffectExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::VoiceLogicEffectExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL_GETROOTASVOICELOGICEFFECTEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::VoiceLogicEffectExcel* GetRootAsVoiceLogicEffectExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::VoiceLogicEffectExcel* arg)
		{
			return (return (::MX::Data::Excel::VoiceLogicEffectExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::VoiceLogicEffectExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL_GETROOTASVOICELOGICEFFECTEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::VoiceLogicEffectExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::VoiceLogicEffectExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 get_LogicEffectNameHash()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL_GET_LOGICEFFECTNAMEHASH_OFFSET))(nullptr);
		}

		::System::Boolean get_Self()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL_GET_SELF_OFFSET))(nullptr);
		}

		::System::Int32 get_Priority()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL_GET_PRIORITY_OFFSET))(nullptr);
		}

		::System::UInt32 VoiceHash(::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL_VOICEHASH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_VoiceHashLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL_GET_VOICEHASHLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetVoiceHashBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL_GETVOICEHASHBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 get_VoiceId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL_GET_VOICEID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateVoiceLogicEffectExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg, ::System::Boolean arg, ::System::Int32 arg, ::FlatBuffers::VectorOffset* arg, ::System::UInt32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::System::Boolean, ::System::Int32, ::FlatBuffers::VectorOffset*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL_CREATEVOICELOGICEFFECTEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartVoiceLogicEffectExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL_STARTVOICELOGICEFFECTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddLogicEffectNameHash(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL_ADDLOGICEFFECTNAMEHASH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSelf(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL_ADDSELF_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPriority(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL_ADDPRIORITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVoiceHash(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL_ADDVOICEHASH_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateVoiceHashVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL_CREATEVOICEHASHVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartVoiceHashVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL_STARTVOICEHASHVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVoiceId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL_ADDVOICEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndVoiceLogicEffectExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL_ENDVOICELOGICEFFECTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishVoiceLogicEffectExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL_FINISHVOICELOGICEFFECTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedVoiceLogicEffectExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICELOGICEFFECTEXCEL_FINISHSIZEPREFIXEDVOICELOGICEFFECTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


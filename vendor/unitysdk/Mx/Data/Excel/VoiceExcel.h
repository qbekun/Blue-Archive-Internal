#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class VoiceExcel; }
namespace FlatData { class Nation; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_VOICEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1CB26C0)
#define MX_DATA_EXCEL_VOICEEXCEL_GETROOTASVOICEEXCEL_OFFSET UNITYSDK_OFFSET(0x1CB26D0)
#define MX_DATA_EXCEL_VOICEEXCEL_GETROOTASVOICEEXCEL_OFFSET UNITYSDK_OFFSET(0x1CB2730)
#define MX_DATA_EXCEL_VOICEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1CB27C0)
#define MX_DATA_EXCEL_VOICEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1CB2790)
#define MX_DATA_EXCEL_VOICEEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1CB27E0)
#define MX_DATA_EXCEL_VOICEEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1CB2830)
#define MX_DATA_EXCEL_VOICEEXCEL_NATION_OFFSET UNITYSDK_OFFSET(0x1CB2880)
#define MX_DATA_EXCEL_VOICEEXCEL_GET_NATIONLENGTH_OFFSET UNITYSDK_OFFSET(0x1CB28E0)
#define MX_DATA_EXCEL_VOICEEXCEL_GETNATIONBYTES_OFFSET UNITYSDK_OFFSET(0x1CB2920)
#define MX_DATA_EXCEL_VOICEEXCEL_PATH_OFFSET UNITYSDK_OFFSET(0x1CB2940)
#define MX_DATA_EXCEL_VOICEEXCEL_GET_PATHLENGTH_OFFSET UNITYSDK_OFFSET(0x1CB2990)
#define MX_DATA_EXCEL_VOICEEXCEL_VOLUME_OFFSET UNITYSDK_OFFSET(0x1CB29D0)
#define MX_DATA_EXCEL_VOICEEXCEL_GET_VOLUMELENGTH_OFFSET UNITYSDK_OFFSET(0x1CB2A30)
#define MX_DATA_EXCEL_VOICEEXCEL_GETVOLUMEBYTES_OFFSET UNITYSDK_OFFSET(0x1CB2A70)
#define MX_DATA_EXCEL_VOICEEXCEL_CREATEVOICEEXCEL_OFFSET UNITYSDK_OFFSET(0x1CB2A90)
#define MX_DATA_EXCEL_VOICEEXCEL_STARTVOICEEXCEL_OFFSET UNITYSDK_OFFSET(0x1CB2CD0)
#define MX_DATA_EXCEL_VOICEEXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1CB2B90)
#define MX_DATA_EXCEL_VOICEEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1CB2C50)
#define MX_DATA_EXCEL_VOICEEXCEL_ADDNATION_OFFSET UNITYSDK_OFFSET(0x1CB2C20)
#define MX_DATA_EXCEL_VOICEEXCEL_CREATENATIONVECTOR_OFFSET UNITYSDK_OFFSET(0x1CB2CF0)
#define MX_DATA_EXCEL_VOICEEXCEL_STARTNATIONVECTOR_OFFSET UNITYSDK_OFFSET(0x1CB2D80)
#define MX_DATA_EXCEL_VOICEEXCEL_ADDPATH_OFFSET UNITYSDK_OFFSET(0x1CB2BF0)
#define MX_DATA_EXCEL_VOICEEXCEL_CREATEPATHVECTOR_OFFSET UNITYSDK_OFFSET(0x1CB2DC0)
#define MX_DATA_EXCEL_VOICEEXCEL_STARTPATHVECTOR_OFFSET UNITYSDK_OFFSET(0x1CB2E50)
#define MX_DATA_EXCEL_VOICEEXCEL_ADDVOLUME_OFFSET UNITYSDK_OFFSET(0x1CB2BC0)
#define MX_DATA_EXCEL_VOICEEXCEL_CREATEVOLUMEVECTOR_OFFSET UNITYSDK_OFFSET(0x1CB2E90)
#define MX_DATA_EXCEL_VOICEEXCEL_STARTVOLUMEVECTOR_OFFSET UNITYSDK_OFFSET(0x1CB2F20)
#define MX_DATA_EXCEL_VOICEEXCEL_ENDVOICEEXCEL_OFFSET UNITYSDK_OFFSET(0x1CB2C80)
#define MX_DATA_EXCEL_VOICEEXCEL_FINISHVOICEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CB2F60)
#define MX_DATA_EXCEL_VOICEEXCEL_FINISHSIZEPREFIXEDVOICEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CB2F80)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int VoiceExcel_TypeDefinitionIndex = 19687;

	class VoiceExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::VoiceExcel* GetRootAsVoiceExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::VoiceExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEEXCEL_GETROOTASVOICEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::VoiceExcel* GetRootAsVoiceExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::VoiceExcel* arg)
		{
			return (return (::MX::Data::Excel::VoiceExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::VoiceExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEEXCEL_GETROOTASVOICEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::VoiceExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::VoiceExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::UInt32 get_Id()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::FlatData::Nation* Nation(::System::Int32 arg)
		{
			return (return (::FlatData::Nation*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEEXCEL_NATION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_NationLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEEXCEL_GET_NATIONLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetNationBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEEXCEL_GETNATIONBYTES_OFFSET))(nullptr);
		}

		::System::String* Path(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEEXCEL_PATH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PathLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEEXCEL_GET_PATHLENGTH_OFFSET))(nullptr);
		}

		::System::Single Volume(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEEXCEL_VOLUME_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_VolumeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEEXCEL_GET_VOLUMELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetVolumeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEEXCEL_GETVOLUMEBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateVoiceExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::UInt32 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::UInt32, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEEXCEL_CREATEVOICEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartVoiceExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEEXCEL_STARTVOICEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEEXCEL_ADDUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNation(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEEXCEL_ADDNATION_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateNationVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEEXCEL_CREATENATIONVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartNationVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEEXCEL_STARTNATIONVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEEXCEL_ADDPATH_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreatePathVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEEXCEL_CREATEPATHVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartPathVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEEXCEL_STARTPATHVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVolume(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEEXCEL_ADDVOLUME_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateVolumeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEEXCEL_CREATEVOLUMEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartVolumeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEEXCEL_STARTVOLUMEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndVoiceExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEEXCEL_ENDVOICEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishVoiceExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEEXCEL_FINISHVOICEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedVoiceExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEEXCEL_FINISHSIZEPREFIXEDVOICEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


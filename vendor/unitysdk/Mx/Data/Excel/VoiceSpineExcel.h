#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class VoiceSpineExcel; }
namespace FlatData { class Nation; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_VOICESPINEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1CB6170)
#define MX_DATA_EXCEL_VOICESPINEEXCEL_GETROOTASVOICESPINEEXCEL_OFFSET UNITYSDK_OFFSET(0x1CB6180)
#define MX_DATA_EXCEL_VOICESPINEEXCEL_GETROOTASVOICESPINEEXCEL_OFFSET UNITYSDK_OFFSET(0x1CB61E0)
#define MX_DATA_EXCEL_VOICESPINEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1CB6270)
#define MX_DATA_EXCEL_VOICESPINEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1CB6240)
#define MX_DATA_EXCEL_VOICESPINEEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1CB6290)
#define MX_DATA_EXCEL_VOICESPINEEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1CB62E0)
#define MX_DATA_EXCEL_VOICESPINEEXCEL_NATION_OFFSET UNITYSDK_OFFSET(0x1CB6330)
#define MX_DATA_EXCEL_VOICESPINEEXCEL_GET_NATIONLENGTH_OFFSET UNITYSDK_OFFSET(0x1CB6390)
#define MX_DATA_EXCEL_VOICESPINEEXCEL_GETNATIONBYTES_OFFSET UNITYSDK_OFFSET(0x1CB63D0)
#define MX_DATA_EXCEL_VOICESPINEEXCEL_PATH_OFFSET UNITYSDK_OFFSET(0x1CB63F0)
#define MX_DATA_EXCEL_VOICESPINEEXCEL_GET_PATHLENGTH_OFFSET UNITYSDK_OFFSET(0x1CB6440)
#define MX_DATA_EXCEL_VOICESPINEEXCEL_SOUNDVOLUME_OFFSET UNITYSDK_OFFSET(0x1CB6480)
#define MX_DATA_EXCEL_VOICESPINEEXCEL_GET_SOUNDVOLUMELENGTH_OFFSET UNITYSDK_OFFSET(0x1CB64E0)
#define MX_DATA_EXCEL_VOICESPINEEXCEL_GETSOUNDVOLUMEBYTES_OFFSET UNITYSDK_OFFSET(0x1CB6520)
#define MX_DATA_EXCEL_VOICESPINEEXCEL_CREATEVOICESPINEEXCEL_OFFSET UNITYSDK_OFFSET(0x1CB6540)
#define MX_DATA_EXCEL_VOICESPINEEXCEL_STARTVOICESPINEEXCEL_OFFSET UNITYSDK_OFFSET(0x1CB6780)
#define MX_DATA_EXCEL_VOICESPINEEXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1CB6640)
#define MX_DATA_EXCEL_VOICESPINEEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1CB6700)
#define MX_DATA_EXCEL_VOICESPINEEXCEL_ADDNATION_OFFSET UNITYSDK_OFFSET(0x1CB66D0)
#define MX_DATA_EXCEL_VOICESPINEEXCEL_CREATENATIONVECTOR_OFFSET UNITYSDK_OFFSET(0x1CB67A0)
#define MX_DATA_EXCEL_VOICESPINEEXCEL_STARTNATIONVECTOR_OFFSET UNITYSDK_OFFSET(0x1CB6830)
#define MX_DATA_EXCEL_VOICESPINEEXCEL_ADDPATH_OFFSET UNITYSDK_OFFSET(0x1CB66A0)
#define MX_DATA_EXCEL_VOICESPINEEXCEL_CREATEPATHVECTOR_OFFSET UNITYSDK_OFFSET(0x1CB6870)
#define MX_DATA_EXCEL_VOICESPINEEXCEL_STARTPATHVECTOR_OFFSET UNITYSDK_OFFSET(0x1CB6900)
#define MX_DATA_EXCEL_VOICESPINEEXCEL_ADDSOUNDVOLUME_OFFSET UNITYSDK_OFFSET(0x1CB6670)
#define MX_DATA_EXCEL_VOICESPINEEXCEL_CREATESOUNDVOLUMEVECTOR_OFFSET UNITYSDK_OFFSET(0x1CB6940)
#define MX_DATA_EXCEL_VOICESPINEEXCEL_STARTSOUNDVOLUMEVECTOR_OFFSET UNITYSDK_OFFSET(0x1CB69D0)
#define MX_DATA_EXCEL_VOICESPINEEXCEL_ENDVOICESPINEEXCEL_OFFSET UNITYSDK_OFFSET(0x1CB6730)
#define MX_DATA_EXCEL_VOICESPINEEXCEL_FINISHVOICESPINEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CB6A10)
#define MX_DATA_EXCEL_VOICESPINEEXCEL_FINISHSIZEPREFIXEDVOICESPINEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CB6A30)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int VoiceSpineExcel_TypeDefinitionIndex = 19708;

	class VoiceSpineExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICESPINEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::VoiceSpineExcel* GetRootAsVoiceSpineExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::VoiceSpineExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICESPINEEXCEL_GETROOTASVOICESPINEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::VoiceSpineExcel* GetRootAsVoiceSpineExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::VoiceSpineExcel* arg)
		{
			return (return (::MX::Data::Excel::VoiceSpineExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::VoiceSpineExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICESPINEEXCEL_GETROOTASVOICESPINEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICESPINEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::VoiceSpineExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::VoiceSpineExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICESPINEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICESPINEEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::UInt32 get_Id()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICESPINEEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::FlatData::Nation* Nation(::System::Int32 arg)
		{
			return (return (::FlatData::Nation*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICESPINEEXCEL_NATION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_NationLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICESPINEEXCEL_GET_NATIONLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetNationBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICESPINEEXCEL_GETNATIONBYTES_OFFSET))(nullptr);
		}

		::System::String* Path(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICESPINEEXCEL_PATH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PathLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICESPINEEXCEL_GET_PATHLENGTH_OFFSET))(nullptr);
		}

		::System::Single SoundVolume(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICESPINEEXCEL_SOUNDVOLUME_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SoundVolumeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICESPINEEXCEL_GET_SOUNDVOLUMELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetSoundVolumeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICESPINEEXCEL_GETSOUNDVOLUMEBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateVoiceSpineExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::UInt32 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::UInt32, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICESPINEEXCEL_CREATEVOICESPINEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartVoiceSpineExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICESPINEEXCEL_STARTVOICESPINEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICESPINEEXCEL_ADDUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICESPINEEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNation(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICESPINEEXCEL_ADDNATION_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateNationVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICESPINEEXCEL_CREATENATIONVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartNationVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICESPINEEXCEL_STARTNATIONVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICESPINEEXCEL_ADDPATH_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreatePathVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICESPINEEXCEL_CREATEPATHVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartPathVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICESPINEEXCEL_STARTPATHVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSoundVolume(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICESPINEEXCEL_ADDSOUNDVOLUME_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateSoundVolumeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICESPINEEXCEL_CREATESOUNDVOLUMEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartSoundVolumeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICESPINEEXCEL_STARTSOUNDVOLUMEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndVoiceSpineExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICESPINEEXCEL_ENDVOICESPINEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishVoiceSpineExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICESPINEEXCEL_FINISHVOICESPINEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedVoiceSpineExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICESPINEEXCEL_FINISHSIZEPREFIXEDVOICESPINEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


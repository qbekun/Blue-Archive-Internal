#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class VideoExcel; }
namespace FlatData { class Nation; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_VIDEOEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1CAE5A0)
#define MX_DATA_EXCEL_VIDEOEXCEL_GETROOTASVIDEOEXCEL_OFFSET UNITYSDK_OFFSET(0x1CAE5B0)
#define MX_DATA_EXCEL_VIDEOEXCEL_GETROOTASVIDEOEXCEL_OFFSET UNITYSDK_OFFSET(0x1CAE610)
#define MX_DATA_EXCEL_VIDEOEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1CAE6A0)
#define MX_DATA_EXCEL_VIDEOEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1CAE670)
#define MX_DATA_EXCEL_VIDEOEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1CAE6C0)
#define MX_DATA_EXCEL_VIDEOEXCEL_NATION_OFFSET UNITYSDK_OFFSET(0x1CAE710)
#define MX_DATA_EXCEL_VIDEOEXCEL_GET_NATIONLENGTH_OFFSET UNITYSDK_OFFSET(0x1CAE770)
#define MX_DATA_EXCEL_VIDEOEXCEL_GETNATIONBYTES_OFFSET UNITYSDK_OFFSET(0x1CAE7B0)
#define MX_DATA_EXCEL_VIDEOEXCEL_VIDEOPATH_OFFSET UNITYSDK_OFFSET(0x1CAE7D0)
#define MX_DATA_EXCEL_VIDEOEXCEL_GET_VIDEOPATHLENGTH_OFFSET UNITYSDK_OFFSET(0x1CAE820)
#define MX_DATA_EXCEL_VIDEOEXCEL_VIDEOTEENPATH_OFFSET UNITYSDK_OFFSET(0x1CAE860)
#define MX_DATA_EXCEL_VIDEOEXCEL_GET_VIDEOTEENPATHLENGTH_OFFSET UNITYSDK_OFFSET(0x1CAE8B0)
#define MX_DATA_EXCEL_VIDEOEXCEL_SOUNDPATH_OFFSET UNITYSDK_OFFSET(0x1CAE8F0)
#define MX_DATA_EXCEL_VIDEOEXCEL_GET_SOUNDPATHLENGTH_OFFSET UNITYSDK_OFFSET(0x1CAE940)
#define MX_DATA_EXCEL_VIDEOEXCEL_SOUNDVOLUME_OFFSET UNITYSDK_OFFSET(0x1CAE980)
#define MX_DATA_EXCEL_VIDEOEXCEL_GET_SOUNDVOLUMELENGTH_OFFSET UNITYSDK_OFFSET(0x1CAE9E0)
#define MX_DATA_EXCEL_VIDEOEXCEL_GETSOUNDVOLUMEBYTES_OFFSET UNITYSDK_OFFSET(0x1CAEA20)
#define MX_DATA_EXCEL_VIDEOEXCEL_CREATEVIDEOEXCEL_OFFSET UNITYSDK_OFFSET(0x1CAEA40)
#define MX_DATA_EXCEL_VIDEOEXCEL_STARTVIDEOEXCEL_OFFSET UNITYSDK_OFFSET(0x1CAECE0)
#define MX_DATA_EXCEL_VIDEOEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1CAEB70)
#define MX_DATA_EXCEL_VIDEOEXCEL_ADDNATION_OFFSET UNITYSDK_OFFSET(0x1CAEC60)
#define MX_DATA_EXCEL_VIDEOEXCEL_CREATENATIONVECTOR_OFFSET UNITYSDK_OFFSET(0x1CAED00)
#define MX_DATA_EXCEL_VIDEOEXCEL_STARTNATIONVECTOR_OFFSET UNITYSDK_OFFSET(0x1CAED90)
#define MX_DATA_EXCEL_VIDEOEXCEL_ADDVIDEOPATH_OFFSET UNITYSDK_OFFSET(0x1CAEC30)
#define MX_DATA_EXCEL_VIDEOEXCEL_CREATEVIDEOPATHVECTOR_OFFSET UNITYSDK_OFFSET(0x1CAEDD0)
#define MX_DATA_EXCEL_VIDEOEXCEL_STARTVIDEOPATHVECTOR_OFFSET UNITYSDK_OFFSET(0x1CAEE60)
#define MX_DATA_EXCEL_VIDEOEXCEL_ADDVIDEOTEENPATH_OFFSET UNITYSDK_OFFSET(0x1CAEC00)
#define MX_DATA_EXCEL_VIDEOEXCEL_CREATEVIDEOTEENPATHVECTOR_OFFSET UNITYSDK_OFFSET(0x1CAEEA0)
#define MX_DATA_EXCEL_VIDEOEXCEL_STARTVIDEOTEENPATHVECTOR_OFFSET UNITYSDK_OFFSET(0x1CAEF30)
#define MX_DATA_EXCEL_VIDEOEXCEL_ADDSOUNDPATH_OFFSET UNITYSDK_OFFSET(0x1CAEBD0)
#define MX_DATA_EXCEL_VIDEOEXCEL_CREATESOUNDPATHVECTOR_OFFSET UNITYSDK_OFFSET(0x1CAEF70)
#define MX_DATA_EXCEL_VIDEOEXCEL_STARTSOUNDPATHVECTOR_OFFSET UNITYSDK_OFFSET(0x1CAF000)
#define MX_DATA_EXCEL_VIDEOEXCEL_ADDSOUNDVOLUME_OFFSET UNITYSDK_OFFSET(0x1CAEBA0)
#define MX_DATA_EXCEL_VIDEOEXCEL_CREATESOUNDVOLUMEVECTOR_OFFSET UNITYSDK_OFFSET(0x1CAF040)
#define MX_DATA_EXCEL_VIDEOEXCEL_STARTSOUNDVOLUMEVECTOR_OFFSET UNITYSDK_OFFSET(0x1CAF0D0)
#define MX_DATA_EXCEL_VIDEOEXCEL_ENDVIDEOEXCEL_OFFSET UNITYSDK_OFFSET(0x1CAEC90)
#define MX_DATA_EXCEL_VIDEOEXCEL_FINISHVIDEOEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CAF110)
#define MX_DATA_EXCEL_VIDEOEXCEL_FINISHSIZEPREFIXEDVIDEOEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CAF130)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int VideoExcel_TypeDefinitionIndex = 19666;

	class VideoExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEOEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::VideoExcel* GetRootAsVideoExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::VideoExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEOEXCEL_GETROOTASVIDEOEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::VideoExcel* GetRootAsVideoExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::VideoExcel* arg)
		{
			return (return (::MX::Data::Excel::VideoExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::VideoExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEOEXCEL_GETROOTASVIDEOEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEOEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::VideoExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::VideoExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEOEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEOEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::FlatData::Nation* Nation(::System::Int32 arg)
		{
			return (return (::FlatData::Nation*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEOEXCEL_NATION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_NationLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEOEXCEL_GET_NATIONLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetNationBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEOEXCEL_GETNATIONBYTES_OFFSET))(nullptr);
		}

		::System::String* VideoPath(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEOEXCEL_VIDEOPATH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_VideoPathLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEOEXCEL_GET_VIDEOPATHLENGTH_OFFSET))(nullptr);
		}

		::System::String* VideoTeenPath(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEOEXCEL_VIDEOTEENPATH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_VideoTeenPathLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEOEXCEL_GET_VIDEOTEENPATHLENGTH_OFFSET))(nullptr);
		}

		::System::String* SoundPath(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEOEXCEL_SOUNDPATH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SoundPathLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEOEXCEL_GET_SOUNDPATHLENGTH_OFFSET))(nullptr);
		}

		::System::Single SoundVolume(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEOEXCEL_SOUNDVOLUME_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SoundVolumeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEOEXCEL_GET_SOUNDVOLUMELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetSoundVolumeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEOEXCEL_GETSOUNDVOLUMEBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateVideoExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEOEXCEL_CREATEVIDEOEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartVideoExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEOEXCEL_STARTVIDEOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEOEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNation(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEOEXCEL_ADDNATION_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateNationVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEOEXCEL_CREATENATIONVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartNationVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEOEXCEL_STARTNATIONVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVideoPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEOEXCEL_ADDVIDEOPATH_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateVideoPathVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEOEXCEL_CREATEVIDEOPATHVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartVideoPathVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEOEXCEL_STARTVIDEOPATHVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVideoTeenPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEOEXCEL_ADDVIDEOTEENPATH_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateVideoTeenPathVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEOEXCEL_CREATEVIDEOTEENPATHVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartVideoTeenPathVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEOEXCEL_STARTVIDEOTEENPATHVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSoundPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEOEXCEL_ADDSOUNDPATH_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateSoundPathVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEOEXCEL_CREATESOUNDPATHVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartSoundPathVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEOEXCEL_STARTSOUNDPATHVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSoundVolume(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEOEXCEL_ADDSOUNDVOLUME_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateSoundVolumeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEOEXCEL_CREATESOUNDVOLUMEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartSoundVolumeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEOEXCEL_STARTSOUNDVOLUMEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndVideoExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEOEXCEL_ENDVIDEOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishVideoExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEOEXCEL_FINISHVIDEOEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedVideoExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEOEXCEL_FINISHSIZEPREFIXEDVIDEOEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


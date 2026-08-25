#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class Video_GlobalExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1CAFE60)
#define MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_GETROOTASVIDEO_GLOBALEXCEL_OFFSET UNITYSDK_OFFSET(0x1CAFE70)
#define MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_GETROOTASVIDEO_GLOBALEXCEL_OFFSET UNITYSDK_OFFSET(0x1CAFED0)
#define MX_DATA_EXCEL_VIDEO_GLOBALEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1CAFF60)
#define MX_DATA_EXCEL_VIDEO_GLOBALEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1CAFF30)
#define MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_GET_VIDEOID_OFFSET UNITYSDK_OFFSET(0x1CAFF80)
#define MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_GET_VIDEOPATHKR_OFFSET UNITYSDK_OFFSET(0x1CAFFD0)
#define MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_GETVIDEOPATHKRBYTES_OFFSET UNITYSDK_OFFSET(0x1CB0010)
#define MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_GET_VIDEOTEENPATHKR_OFFSET UNITYSDK_OFFSET(0x1CB0030)
#define MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_GETVIDEOTEENPATHKRBYTES_OFFSET UNITYSDK_OFFSET(0x1CB0070)
#define MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_GET_VIDEOPATHTH_OFFSET UNITYSDK_OFFSET(0x1CB0090)
#define MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_GETVIDEOPATHTHBYTES_OFFSET UNITYSDK_OFFSET(0x1CB00D0)
#define MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_GET_VIDEOTEENPATHTH_OFFSET UNITYSDK_OFFSET(0x1CB00F0)
#define MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_GETVIDEOTEENPATHTHBYTES_OFFSET UNITYSDK_OFFSET(0x1CB0130)
#define MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_GET_VIDEOPATHTW_OFFSET UNITYSDK_OFFSET(0x1CB0150)
#define MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_GETVIDEOPATHTWBYTES_OFFSET UNITYSDK_OFFSET(0x1CB0190)
#define MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_GET_VIDEOTEENPATHTW_OFFSET UNITYSDK_OFFSET(0x1CB01B0)
#define MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_GETVIDEOTEENPATHTWBYTES_OFFSET UNITYSDK_OFFSET(0x1CB01F0)
#define MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_GET_VIDEOPATHEN_OFFSET UNITYSDK_OFFSET(0x1CB0210)
#define MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_GETVIDEOPATHENBYTES_OFFSET UNITYSDK_OFFSET(0x1CB0250)
#define MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_GET_VIDEOTEENPATHEN_OFFSET UNITYSDK_OFFSET(0x1CB0270)
#define MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_GETVIDEOTEENPATHENBYTES_OFFSET UNITYSDK_OFFSET(0x1CB02B0)
#define MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_CREATEVIDEO_GLOBALEXCEL_OFFSET UNITYSDK_OFFSET(0x1CB02D0)
#define MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_STARTVIDEO_GLOBALEXCEL_OFFSET UNITYSDK_OFFSET(0x1CB0670)
#define MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_ADDVIDEOID_OFFSET UNITYSDK_OFFSET(0x1CB0470)
#define MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_ADDVIDEOPATHKR_OFFSET UNITYSDK_OFFSET(0x1CB05F0)
#define MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_ADDVIDEOTEENPATHKR_OFFSET UNITYSDK_OFFSET(0x1CB05C0)
#define MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_ADDVIDEOPATHTH_OFFSET UNITYSDK_OFFSET(0x1CB0590)
#define MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_ADDVIDEOTEENPATHTH_OFFSET UNITYSDK_OFFSET(0x1CB0560)
#define MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_ADDVIDEOPATHTW_OFFSET UNITYSDK_OFFSET(0x1CB0530)
#define MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_ADDVIDEOTEENPATHTW_OFFSET UNITYSDK_OFFSET(0x1CB0500)
#define MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_ADDVIDEOPATHEN_OFFSET UNITYSDK_OFFSET(0x1CB04D0)
#define MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_ADDVIDEOTEENPATHEN_OFFSET UNITYSDK_OFFSET(0x1CB04A0)
#define MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_ENDVIDEO_GLOBALEXCEL_OFFSET UNITYSDK_OFFSET(0x1CB0620)
#define MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_FINISHVIDEO_GLOBALEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CB0690)
#define MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_FINISHSIZEPREFIXEDVIDEO_GLOBALEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CB06B0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int Video_GlobalExcel_TypeDefinitionIndex = 19673;

	class Video_GlobalExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::Video_GlobalExcel* GetRootAsVideo_GlobalExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::Video_GlobalExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_GETROOTASVIDEO_GLOBALEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::Video_GlobalExcel* GetRootAsVideo_GlobalExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::Video_GlobalExcel* arg)
		{
			return (return (::MX::Data::Excel::Video_GlobalExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::Video_GlobalExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_GETROOTASVIDEO_GLOBALEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEO_GLOBALEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::Video_GlobalExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::Video_GlobalExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEO_GLOBALEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_VideoId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_GET_VIDEOID_OFFSET))(nullptr);
		}

		::System::String* get_VideoPathKr()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_GET_VIDEOPATHKR_OFFSET))(nullptr);
		}

		Il2CppObject* GetVideoPathKrBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_GETVIDEOPATHKRBYTES_OFFSET))(nullptr);
		}

		::System::String* get_VideoTeenPathKr()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_GET_VIDEOTEENPATHKR_OFFSET))(nullptr);
		}

		Il2CppObject* GetVideoTeenPathKrBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_GETVIDEOTEENPATHKRBYTES_OFFSET))(nullptr);
		}

		::System::String* get_VideoPathTh()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_GET_VIDEOPATHTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetVideoPathThBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_GETVIDEOPATHTHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_VideoTeenPathTh()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_GET_VIDEOTEENPATHTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetVideoTeenPathThBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_GETVIDEOTEENPATHTHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_VideoPathTw()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_GET_VIDEOPATHTW_OFFSET))(nullptr);
		}

		Il2CppObject* GetVideoPathTwBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_GETVIDEOPATHTWBYTES_OFFSET))(nullptr);
		}

		::System::String* get_VideoTeenPathTw()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_GET_VIDEOTEENPATHTW_OFFSET))(nullptr);
		}

		Il2CppObject* GetVideoTeenPathTwBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_GETVIDEOTEENPATHTWBYTES_OFFSET))(nullptr);
		}

		::System::String* get_VideoPathEn()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_GET_VIDEOPATHEN_OFFSET))(nullptr);
		}

		Il2CppObject* GetVideoPathEnBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_GETVIDEOPATHENBYTES_OFFSET))(nullptr);
		}

		::System::String* get_VideoTeenPathEn()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_GET_VIDEOTEENPATHEN_OFFSET))(nullptr);
		}

		Il2CppObject* GetVideoTeenPathEnBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_GETVIDEOTEENPATHENBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateVideo_GlobalExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_CREATEVIDEO_GLOBALEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartVideo_GlobalExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_STARTVIDEO_GLOBALEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddVideoId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_ADDVIDEOID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVideoPathKr(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_ADDVIDEOPATHKR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVideoTeenPathKr(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_ADDVIDEOTEENPATHKR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVideoPathTh(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_ADDVIDEOPATHTH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVideoTeenPathTh(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_ADDVIDEOTEENPATHTH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVideoPathTw(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_ADDVIDEOPATHTW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVideoTeenPathTw(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_ADDVIDEOTEENPATHTW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVideoPathEn(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_ADDVIDEOPATHEN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVideoTeenPathEn(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_ADDVIDEOTEENPATHEN_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndVideo_GlobalExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_ENDVIDEO_GLOBALEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishVideo_GlobalExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_FINISHVIDEO_GLOBALEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedVideo_GlobalExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEO_GLOBALEXCEL_FINISHSIZEPREFIXEDVIDEO_GLOBALEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


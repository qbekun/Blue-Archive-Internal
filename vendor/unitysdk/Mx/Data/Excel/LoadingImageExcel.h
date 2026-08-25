#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class LoadingImageExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_LOADINGIMAGEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B755B0)
#define MX_DATA_EXCEL_LOADINGIMAGEEXCEL_GETROOTASLOADINGIMAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B755C0)
#define MX_DATA_EXCEL_LOADINGIMAGEEXCEL_GETROOTASLOADINGIMAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B75620)
#define MX_DATA_EXCEL_LOADINGIMAGEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B756B0)
#define MX_DATA_EXCEL_LOADINGIMAGEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B75680)
#define MX_DATA_EXCEL_LOADINGIMAGEEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B756D0)
#define MX_DATA_EXCEL_LOADINGIMAGEEXCEL_GET_IMAGEPATHKR_OFFSET UNITYSDK_OFFSET(0x1B75720)
#define MX_DATA_EXCEL_LOADINGIMAGEEXCEL_GETIMAGEPATHKRBYTES_OFFSET UNITYSDK_OFFSET(0x1B75760)
#define MX_DATA_EXCEL_LOADINGIMAGEEXCEL_GET_IMAGEPATHJP_OFFSET UNITYSDK_OFFSET(0x1B75780)
#define MX_DATA_EXCEL_LOADINGIMAGEEXCEL_GETIMAGEPATHJPBYTES_OFFSET UNITYSDK_OFFSET(0x1B757C0)
#define MX_DATA_EXCEL_LOADINGIMAGEEXCEL_GET_DISPLAYWEIGHT_OFFSET UNITYSDK_OFFSET(0x1B757E0)
#define MX_DATA_EXCEL_LOADINGIMAGEEXCEL_GET_IMAGEPATHTH_OFFSET UNITYSDK_OFFSET(0x1B75830)
#define MX_DATA_EXCEL_LOADINGIMAGEEXCEL_GETIMAGEPATHTHBYTES_OFFSET UNITYSDK_OFFSET(0x1B75870)
#define MX_DATA_EXCEL_LOADINGIMAGEEXCEL_GET_IMAGEPATHTW_OFFSET UNITYSDK_OFFSET(0x1B75890)
#define MX_DATA_EXCEL_LOADINGIMAGEEXCEL_GETIMAGEPATHTWBYTES_OFFSET UNITYSDK_OFFSET(0x1B758D0)
#define MX_DATA_EXCEL_LOADINGIMAGEEXCEL_GET_IMAGEPATHEN_OFFSET UNITYSDK_OFFSET(0x1B758F0)
#define MX_DATA_EXCEL_LOADINGIMAGEEXCEL_GETIMAGEPATHENBYTES_OFFSET UNITYSDK_OFFSET(0x1B75930)
#define MX_DATA_EXCEL_LOADINGIMAGEEXCEL_CREATELOADINGIMAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B75950)
#define MX_DATA_EXCEL_LOADINGIMAGEEXCEL_STARTLOADINGIMAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B75C40)
#define MX_DATA_EXCEL_LOADINGIMAGEEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1B75AA0)
#define MX_DATA_EXCEL_LOADINGIMAGEEXCEL_ADDIMAGEPATHKR_OFFSET UNITYSDK_OFFSET(0x1B75BC0)
#define MX_DATA_EXCEL_LOADINGIMAGEEXCEL_ADDIMAGEPATHJP_OFFSET UNITYSDK_OFFSET(0x1B75B90)
#define MX_DATA_EXCEL_LOADINGIMAGEEXCEL_ADDDISPLAYWEIGHT_OFFSET UNITYSDK_OFFSET(0x1B75B60)
#define MX_DATA_EXCEL_LOADINGIMAGEEXCEL_ADDIMAGEPATHTH_OFFSET UNITYSDK_OFFSET(0x1B75B30)
#define MX_DATA_EXCEL_LOADINGIMAGEEXCEL_ADDIMAGEPATHTW_OFFSET UNITYSDK_OFFSET(0x1B75B00)
#define MX_DATA_EXCEL_LOADINGIMAGEEXCEL_ADDIMAGEPATHEN_OFFSET UNITYSDK_OFFSET(0x1B75AD0)
#define MX_DATA_EXCEL_LOADINGIMAGEEXCEL_ENDLOADINGIMAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B75BF0)
#define MX_DATA_EXCEL_LOADINGIMAGEEXCEL_FINISHLOADINGIMAGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B75C60)
#define MX_DATA_EXCEL_LOADINGIMAGEEXCEL_FINISHSIZEPREFIXEDLOADINGIMAGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B75C80)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int LoadingImageExcel_TypeDefinitionIndex = 18346;

	class LoadingImageExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOADINGIMAGEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::LoadingImageExcel* GetRootAsLoadingImageExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::LoadingImageExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOADINGIMAGEEXCEL_GETROOTASLOADINGIMAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::LoadingImageExcel* GetRootAsLoadingImageExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::LoadingImageExcel* arg)
		{
			return (return (::MX::Data::Excel::LoadingImageExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::LoadingImageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOADINGIMAGEEXCEL_GETROOTASLOADINGIMAGEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOADINGIMAGEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::LoadingImageExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::LoadingImageExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOADINGIMAGEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_ID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOADINGIMAGEEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::String* get_ImagePathKr()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOADINGIMAGEEXCEL_GET_IMAGEPATHKR_OFFSET))(nullptr);
		}

		Il2CppObject* GetImagePathKrBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOADINGIMAGEEXCEL_GETIMAGEPATHKRBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ImagePathJp()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOADINGIMAGEEXCEL_GET_IMAGEPATHJP_OFFSET))(nullptr);
		}

		Il2CppObject* GetImagePathJpBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOADINGIMAGEEXCEL_GETIMAGEPATHJPBYTES_OFFSET))(nullptr);
		}

		::System::Int32 get_DisplayWeight()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOADINGIMAGEEXCEL_GET_DISPLAYWEIGHT_OFFSET))(nullptr);
		}

		::System::String* get_ImagePathTh()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOADINGIMAGEEXCEL_GET_IMAGEPATHTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetImagePathThBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOADINGIMAGEEXCEL_GETIMAGEPATHTHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ImagePathTw()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOADINGIMAGEEXCEL_GET_IMAGEPATHTW_OFFSET))(nullptr);
		}

		Il2CppObject* GetImagePathTwBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOADINGIMAGEEXCEL_GETIMAGEPATHTWBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ImagePathEn()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOADINGIMAGEEXCEL_GET_IMAGEPATHEN_OFFSET))(nullptr);
		}

		Il2CppObject* GetImagePathEnBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOADINGIMAGEEXCEL_GETIMAGEPATHENBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateLoadingImageExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOADINGIMAGEEXCEL_CREATELOADINGIMAGEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartLoadingImageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOADINGIMAGEEXCEL_STARTLOADINGIMAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddID(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOADINGIMAGEEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddImagePathKr(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOADINGIMAGEEXCEL_ADDIMAGEPATHKR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddImagePathJp(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOADINGIMAGEEXCEL_ADDIMAGEPATHJP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayWeight(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOADINGIMAGEEXCEL_ADDDISPLAYWEIGHT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddImagePathTh(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOADINGIMAGEEXCEL_ADDIMAGEPATHTH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddImagePathTw(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOADINGIMAGEEXCEL_ADDIMAGEPATHTW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddImagePathEn(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOADINGIMAGEEXCEL_ADDIMAGEPATHEN_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndLoadingImageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOADINGIMAGEEXCEL_ENDLOADINGIMAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishLoadingImageExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOADINGIMAGEEXCEL_FINISHLOADINGIMAGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedLoadingImageExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOADINGIMAGEEXCEL_FINISHSIZEPREFIXEDLOADINGIMAGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


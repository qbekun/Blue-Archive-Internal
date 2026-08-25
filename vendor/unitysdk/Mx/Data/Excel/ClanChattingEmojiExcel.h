#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ClanChattingEmojiExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A4D6E0)
#define MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_GETROOTASCLANCHATTINGEMOJIEXCEL_OFFSET UNITYSDK_OFFSET(0x1A4D6F0)
#define MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_GETROOTASCLANCHATTINGEMOJIEXCEL_OFFSET UNITYSDK_OFFSET(0x1A4D750)
#define MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A4D7E0)
#define MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A4D7B0)
#define MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A4D800)
#define MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_GET_TABGROUPID_OFFSET UNITYSDK_OFFSET(0x1A4D850)
#define MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1A4D8A0)
#define MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_GET_IMAGEPATHKR_OFFSET UNITYSDK_OFFSET(0x1A4D8F0)
#define MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_GETIMAGEPATHKRBYTES_OFFSET UNITYSDK_OFFSET(0x1A4D930)
#define MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_GET_IMAGEPATHJP_OFFSET UNITYSDK_OFFSET(0x1A4D950)
#define MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_GETIMAGEPATHJPBYTES_OFFSET UNITYSDK_OFFSET(0x1A4D990)
#define MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_GET_IMAGEPATHTH_OFFSET UNITYSDK_OFFSET(0x1A4D9B0)
#define MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_GETIMAGEPATHTHBYTES_OFFSET UNITYSDK_OFFSET(0x1A4D9F0)
#define MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_GET_IMAGEPATHTW_OFFSET UNITYSDK_OFFSET(0x1A4DA10)
#define MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_GETIMAGEPATHTWBYTES_OFFSET UNITYSDK_OFFSET(0x1A4DA50)
#define MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_GET_IMAGEPATHEN_OFFSET UNITYSDK_OFFSET(0x1A4DA70)
#define MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_GETIMAGEPATHENBYTES_OFFSET UNITYSDK_OFFSET(0x1A4DAB0)
#define MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_CREATECLANCHATTINGEMOJIEXCEL_OFFSET UNITYSDK_OFFSET(0x1A4DAD0)
#define MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_STARTCLANCHATTINGEMOJIEXCEL_OFFSET UNITYSDK_OFFSET(0x1A4DE20)
#define MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1A4DC50)
#define MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_ADDTABGROUPID_OFFSET UNITYSDK_OFFSET(0x1A4DDA0)
#define MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_ADDDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1A4DD70)
#define MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_ADDIMAGEPATHKR_OFFSET UNITYSDK_OFFSET(0x1A4DD40)
#define MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_ADDIMAGEPATHJP_OFFSET UNITYSDK_OFFSET(0x1A4DD10)
#define MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_ADDIMAGEPATHTH_OFFSET UNITYSDK_OFFSET(0x1A4DCE0)
#define MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_ADDIMAGEPATHTW_OFFSET UNITYSDK_OFFSET(0x1A4DCB0)
#define MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_ADDIMAGEPATHEN_OFFSET UNITYSDK_OFFSET(0x1A4DC80)
#define MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_ENDCLANCHATTINGEMOJIEXCEL_OFFSET UNITYSDK_OFFSET(0x1A4DDD0)
#define MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_FINISHCLANCHATTINGEMOJIEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A4DE40)
#define MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_FINISHSIZEPREFIXEDCLANCHATTINGEMOJIEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A4DE60)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ClanChattingEmojiExcel_TypeDefinitionIndex = 17168;

	class ClanChattingEmojiExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ClanChattingEmojiExcel* GetRootAsClanChattingEmojiExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ClanChattingEmojiExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_GETROOTASCLANCHATTINGEMOJIEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ClanChattingEmojiExcel* GetRootAsClanChattingEmojiExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ClanChattingEmojiExcel* arg)
		{
			return (return (::MX::Data::Excel::ClanChattingEmojiExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ClanChattingEmojiExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_GETROOTASCLANCHATTINGEMOJIEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ClanChattingEmojiExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ClanChattingEmojiExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int32 get_TabGroupId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_GET_TABGROUPID_OFFSET))(nullptr);
		}

		::System::Int32 get_DisplayOrder()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::System::String* get_ImagePathKr()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_GET_IMAGEPATHKR_OFFSET))(nullptr);
		}

		Il2CppObject* GetImagePathKrBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_GETIMAGEPATHKRBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ImagePathJp()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_GET_IMAGEPATHJP_OFFSET))(nullptr);
		}

		Il2CppObject* GetImagePathJpBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_GETIMAGEPATHJPBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ImagePathTh()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_GET_IMAGEPATHTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetImagePathThBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_GETIMAGEPATHTHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ImagePathTw()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_GET_IMAGEPATHTW_OFFSET))(nullptr);
		}

		Il2CppObject* GetImagePathTwBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_GETIMAGEPATHTWBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ImagePathEn()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_GET_IMAGEPATHEN_OFFSET))(nullptr);
		}

		Il2CppObject* GetImagePathEnBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_GETIMAGEPATHENBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateClanChattingEmojiExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Int32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int32, ::System::Int32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_CREATECLANCHATTINGEMOJIEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartClanChattingEmojiExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_STARTCLANCHATTINGEMOJIEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTabGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_ADDTABGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_ADDDISPLAYORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddImagePathKr(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_ADDIMAGEPATHKR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddImagePathJp(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_ADDIMAGEPATHJP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddImagePathTh(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_ADDIMAGEPATHTH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddImagePathTw(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_ADDIMAGEPATHTW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddImagePathEn(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_ADDIMAGEPATHEN_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndClanChattingEmojiExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_ENDCLANCHATTINGEMOJIEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishClanChattingEmojiExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_FINISHCLANCHATTINGEMOJIEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedClanChattingEmojiExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANCHATTINGEMOJIEXCEL_FINISHSIZEPREFIXEDCLANCHATTINGEMOJIEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


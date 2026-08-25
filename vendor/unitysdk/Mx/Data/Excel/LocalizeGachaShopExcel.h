#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class LocalizeGachaShopExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B827A0)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GETROOTASLOCALIZEGACHASHOPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B827B0)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GETROOTASLOCALIZEGACHASHOPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B82810)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B828A0)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B82870)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GET_GACHASHOPID_OFFSET UNITYSDK_OFFSET(0x1B828C0)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GET_TABNAMEKR_OFFSET UNITYSDK_OFFSET(0x1B82910)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GETTABNAMEKRBYTES_OFFSET UNITYSDK_OFFSET(0x1B82950)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GET_TABNAMEJP_OFFSET UNITYSDK_OFFSET(0x1B82970)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GETTABNAMEJPBYTES_OFFSET UNITYSDK_OFFSET(0x1B829B0)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GET_TABNAMETH_OFFSET UNITYSDK_OFFSET(0x1B829D0)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GETTABNAMETHBYTES_OFFSET UNITYSDK_OFFSET(0x1B82A10)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GET_TABNAMETW_OFFSET UNITYSDK_OFFSET(0x1B82A30)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GETTABNAMETWBYTES_OFFSET UNITYSDK_OFFSET(0x1B82A70)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GET_TABNAMEEN_OFFSET UNITYSDK_OFFSET(0x1B82A90)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GETTABNAMEENBYTES_OFFSET UNITYSDK_OFFSET(0x1B82AD0)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GET_TITLENAMEKR_OFFSET UNITYSDK_OFFSET(0x1B82AF0)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GETTITLENAMEKRBYTES_OFFSET UNITYSDK_OFFSET(0x1B82B30)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GET_TITLENAMEJP_OFFSET UNITYSDK_OFFSET(0x1B82B50)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GETTITLENAMEJPBYTES_OFFSET UNITYSDK_OFFSET(0x1B82B90)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GET_TITLENAMETH_OFFSET UNITYSDK_OFFSET(0x1B82BB0)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GETTITLENAMETHBYTES_OFFSET UNITYSDK_OFFSET(0x1B82BF0)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GET_TITLENAMETW_OFFSET UNITYSDK_OFFSET(0x1B82C10)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GETTITLENAMETWBYTES_OFFSET UNITYSDK_OFFSET(0x1B82C50)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GET_TITLENAMEEN_OFFSET UNITYSDK_OFFSET(0x1B82C70)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GETTITLENAMEENBYTES_OFFSET UNITYSDK_OFFSET(0x1B82CB0)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GET_SUBTITLEKR_OFFSET UNITYSDK_OFFSET(0x1B82CD0)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GETSUBTITLEKRBYTES_OFFSET UNITYSDK_OFFSET(0x1B82D10)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GET_SUBTITLEJP_OFFSET UNITYSDK_OFFSET(0x1B82D30)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GETSUBTITLEJPBYTES_OFFSET UNITYSDK_OFFSET(0x1B82D70)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GET_SUBTITLETH_OFFSET UNITYSDK_OFFSET(0x1B82D90)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GETSUBTITLETHBYTES_OFFSET UNITYSDK_OFFSET(0x1B82DD0)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GET_SUBTITLETW_OFFSET UNITYSDK_OFFSET(0x1B82DF0)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GETSUBTITLETWBYTES_OFFSET UNITYSDK_OFFSET(0x1B82E30)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GET_SUBTITLEEN_OFFSET UNITYSDK_OFFSET(0x1B82E50)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GETSUBTITLEENBYTES_OFFSET UNITYSDK_OFFSET(0x1B82E90)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GET_GACHADESCRIPTIONKR_OFFSET UNITYSDK_OFFSET(0x1B82EB0)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GETGACHADESCRIPTIONKRBYTES_OFFSET UNITYSDK_OFFSET(0x1B82EF0)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GET_GACHADESCRIPTIONJP_OFFSET UNITYSDK_OFFSET(0x1B82F10)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GETGACHADESCRIPTIONJPBYTES_OFFSET UNITYSDK_OFFSET(0x1B82F50)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GET_GACHADESCRIPTIONTH_OFFSET UNITYSDK_OFFSET(0x1B82F70)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GETGACHADESCRIPTIONTHBYTES_OFFSET UNITYSDK_OFFSET(0x1B82FB0)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GET_GACHADESCRIPTIONTW_OFFSET UNITYSDK_OFFSET(0x1B82FD0)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GETGACHADESCRIPTIONTWBYTES_OFFSET UNITYSDK_OFFSET(0x1B83010)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GET_GACHADESCRIPTIONEN_OFFSET UNITYSDK_OFFSET(0x1B83030)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GETGACHADESCRIPTIONENBYTES_OFFSET UNITYSDK_OFFSET(0x1B83070)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_CREATELOCALIZEGACHASHOPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B83090)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_STARTLOCALIZEGACHASHOPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B83860)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_ADDGACHASHOPID_OFFSET UNITYSDK_OFFSET(0x1B83420)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_ADDTABNAMEKR_OFFSET UNITYSDK_OFFSET(0x1B837E0)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_ADDTABNAMEJP_OFFSET UNITYSDK_OFFSET(0x1B837B0)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_ADDTABNAMETH_OFFSET UNITYSDK_OFFSET(0x1B83780)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_ADDTABNAMETW_OFFSET UNITYSDK_OFFSET(0x1B83750)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_ADDTABNAMEEN_OFFSET UNITYSDK_OFFSET(0x1B83720)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_ADDTITLENAMEKR_OFFSET UNITYSDK_OFFSET(0x1B836F0)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_ADDTITLENAMEJP_OFFSET UNITYSDK_OFFSET(0x1B836C0)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_ADDTITLENAMETH_OFFSET UNITYSDK_OFFSET(0x1B83690)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_ADDTITLENAMETW_OFFSET UNITYSDK_OFFSET(0x1B83660)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_ADDTITLENAMEEN_OFFSET UNITYSDK_OFFSET(0x1B83630)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_ADDSUBTITLEKR_OFFSET UNITYSDK_OFFSET(0x1B83600)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_ADDSUBTITLEJP_OFFSET UNITYSDK_OFFSET(0x1B835D0)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_ADDSUBTITLETH_OFFSET UNITYSDK_OFFSET(0x1B835A0)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_ADDSUBTITLETW_OFFSET UNITYSDK_OFFSET(0x1B83570)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_ADDSUBTITLEEN_OFFSET UNITYSDK_OFFSET(0x1B83540)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_ADDGACHADESCRIPTIONKR_OFFSET UNITYSDK_OFFSET(0x1B83510)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_ADDGACHADESCRIPTIONJP_OFFSET UNITYSDK_OFFSET(0x1B834E0)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_ADDGACHADESCRIPTIONTH_OFFSET UNITYSDK_OFFSET(0x1B834B0)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_ADDGACHADESCRIPTIONTW_OFFSET UNITYSDK_OFFSET(0x1B83480)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_ADDGACHADESCRIPTIONEN_OFFSET UNITYSDK_OFFSET(0x1B83450)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_ENDLOCALIZEGACHASHOPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B83810)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_FINISHLOCALIZEGACHASHOPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B83880)
#define MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_FINISHSIZEPREFIXEDLOCALIZEGACHASHOPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B838A0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int LocalizeGachaShopExcel_TypeDefinitionIndex = 18395;

	class LocalizeGachaShopExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::LocalizeGachaShopExcel* GetRootAsLocalizeGachaShopExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::LocalizeGachaShopExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GETROOTASLOCALIZEGACHASHOPEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::LocalizeGachaShopExcel* GetRootAsLocalizeGachaShopExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::LocalizeGachaShopExcel* arg)
		{
			return (return (::MX::Data::Excel::LocalizeGachaShopExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::LocalizeGachaShopExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GETROOTASLOCALIZEGACHASHOPEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::LocalizeGachaShopExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::LocalizeGachaShopExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_GachaShopId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GET_GACHASHOPID_OFFSET))(nullptr);
		}

		::System::String* get_TabNameKr()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GET_TABNAMEKR_OFFSET))(nullptr);
		}

		Il2CppObject* GetTabNameKrBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GETTABNAMEKRBYTES_OFFSET))(nullptr);
		}

		::System::String* get_TabNameJp()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GET_TABNAMEJP_OFFSET))(nullptr);
		}

		Il2CppObject* GetTabNameJpBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GETTABNAMEJPBYTES_OFFSET))(nullptr);
		}

		::System::String* get_TabNameTh()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GET_TABNAMETH_OFFSET))(nullptr);
		}

		Il2CppObject* GetTabNameThBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GETTABNAMETHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_TabNameTw()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GET_TABNAMETW_OFFSET))(nullptr);
		}

		Il2CppObject* GetTabNameTwBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GETTABNAMETWBYTES_OFFSET))(nullptr);
		}

		::System::String* get_TabNameEn()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GET_TABNAMEEN_OFFSET))(nullptr);
		}

		Il2CppObject* GetTabNameEnBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GETTABNAMEENBYTES_OFFSET))(nullptr);
		}

		::System::String* get_TitleNameKr()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GET_TITLENAMEKR_OFFSET))(nullptr);
		}

		Il2CppObject* GetTitleNameKrBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GETTITLENAMEKRBYTES_OFFSET))(nullptr);
		}

		::System::String* get_TitleNameJp()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GET_TITLENAMEJP_OFFSET))(nullptr);
		}

		Il2CppObject* GetTitleNameJpBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GETTITLENAMEJPBYTES_OFFSET))(nullptr);
		}

		::System::String* get_TitleNameTh()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GET_TITLENAMETH_OFFSET))(nullptr);
		}

		Il2CppObject* GetTitleNameThBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GETTITLENAMETHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_TitleNameTw()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GET_TITLENAMETW_OFFSET))(nullptr);
		}

		Il2CppObject* GetTitleNameTwBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GETTITLENAMETWBYTES_OFFSET))(nullptr);
		}

		::System::String* get_TitleNameEn()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GET_TITLENAMEEN_OFFSET))(nullptr);
		}

		Il2CppObject* GetTitleNameEnBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GETTITLENAMEENBYTES_OFFSET))(nullptr);
		}

		::System::String* get_SubTitleKr()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GET_SUBTITLEKR_OFFSET))(nullptr);
		}

		Il2CppObject* GetSubTitleKrBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GETSUBTITLEKRBYTES_OFFSET))(nullptr);
		}

		::System::String* get_SubTitleJp()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GET_SUBTITLEJP_OFFSET))(nullptr);
		}

		Il2CppObject* GetSubTitleJpBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GETSUBTITLEJPBYTES_OFFSET))(nullptr);
		}

		::System::String* get_SubTitleTh()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GET_SUBTITLETH_OFFSET))(nullptr);
		}

		Il2CppObject* GetSubTitleThBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GETSUBTITLETHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_SubTitleTw()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GET_SUBTITLETW_OFFSET))(nullptr);
		}

		Il2CppObject* GetSubTitleTwBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GETSUBTITLETWBYTES_OFFSET))(nullptr);
		}

		::System::String* get_SubTitleEn()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GET_SUBTITLEEN_OFFSET))(nullptr);
		}

		Il2CppObject* GetSubTitleEnBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GETSUBTITLEENBYTES_OFFSET))(nullptr);
		}

		::System::String* get_GachaDescriptionKr()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GET_GACHADESCRIPTIONKR_OFFSET))(nullptr);
		}

		Il2CppObject* GetGachaDescriptionKrBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GETGACHADESCRIPTIONKRBYTES_OFFSET))(nullptr);
		}

		::System::String* get_GachaDescriptionJp()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GET_GACHADESCRIPTIONJP_OFFSET))(nullptr);
		}

		Il2CppObject* GetGachaDescriptionJpBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GETGACHADESCRIPTIONJPBYTES_OFFSET))(nullptr);
		}

		::System::String* get_GachaDescriptionTh()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GET_GACHADESCRIPTIONTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetGachaDescriptionThBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GETGACHADESCRIPTIONTHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_GachaDescriptionTw()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GET_GACHADESCRIPTIONTW_OFFSET))(nullptr);
		}

		Il2CppObject* GetGachaDescriptionTwBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GETGACHADESCRIPTIONTWBYTES_OFFSET))(nullptr);
		}

		::System::String* get_GachaDescriptionEn()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GET_GACHADESCRIPTIONEN_OFFSET))(nullptr);
		}

		Il2CppObject* GetGachaDescriptionEnBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_GETGACHADESCRIPTIONENBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateLocalizeGachaShopExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_CREATELOCALIZEGACHASHOPEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartLocalizeGachaShopExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_STARTLOCALIZEGACHASHOPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddGachaShopId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_ADDGACHASHOPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTabNameKr(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_ADDTABNAMEKR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTabNameJp(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_ADDTABNAMEJP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTabNameTh(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_ADDTABNAMETH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTabNameTw(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_ADDTABNAMETW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTabNameEn(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_ADDTABNAMEEN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTitleNameKr(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_ADDTITLENAMEKR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTitleNameJp(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_ADDTITLENAMEJP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTitleNameTh(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_ADDTITLENAMETH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTitleNameTw(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_ADDTITLENAMETW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTitleNameEn(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_ADDTITLENAMEEN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSubTitleKr(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_ADDSUBTITLEKR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSubTitleJp(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_ADDSUBTITLEJP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSubTitleTh(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_ADDSUBTITLETH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSubTitleTw(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_ADDSUBTITLETW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSubTitleEn(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_ADDSUBTITLEEN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGachaDescriptionKr(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_ADDGACHADESCRIPTIONKR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGachaDescriptionJp(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_ADDGACHADESCRIPTIONJP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGachaDescriptionTh(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_ADDGACHADESCRIPTIONTH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGachaDescriptionTw(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_ADDGACHADESCRIPTIONTW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGachaDescriptionEn(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_ADDGACHADESCRIPTIONEN_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndLocalizeGachaShopExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_ENDLOCALIZEGACHASHOPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishLocalizeGachaShopExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_FINISHLOCALIZEGACHASHOPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedLocalizeGachaShopExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEGACHASHOPEXCEL_FINISHSIZEPREFIXEDLOCALIZEGACHASHOPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


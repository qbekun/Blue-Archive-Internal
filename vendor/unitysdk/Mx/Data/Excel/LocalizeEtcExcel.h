#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class LocalizeEtcExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_LOCALIZEETCEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B7FD50)
#define MX_DATA_EXCEL_LOCALIZEETCEXCEL_GETROOTASLOCALIZEETCEXCEL_OFFSET UNITYSDK_OFFSET(0x1B7FD60)
#define MX_DATA_EXCEL_LOCALIZEETCEXCEL_GETROOTASLOCALIZEETCEXCEL_OFFSET UNITYSDK_OFFSET(0x1B7FDC0)
#define MX_DATA_EXCEL_LOCALIZEETCEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B7FE50)
#define MX_DATA_EXCEL_LOCALIZEETCEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B7FE20)
#define MX_DATA_EXCEL_LOCALIZEETCEXCEL_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1B7FE70)
#define MX_DATA_EXCEL_LOCALIZEETCEXCEL_GET_NAMEKR_OFFSET UNITYSDK_OFFSET(0x1B7FEC0)
#define MX_DATA_EXCEL_LOCALIZEETCEXCEL_GETNAMEKRBYTES_OFFSET UNITYSDK_OFFSET(0x1B7FF00)
#define MX_DATA_EXCEL_LOCALIZEETCEXCEL_GET_DESCRIPTIONKR_OFFSET UNITYSDK_OFFSET(0x1B7FF20)
#define MX_DATA_EXCEL_LOCALIZEETCEXCEL_GETDESCRIPTIONKRBYTES_OFFSET UNITYSDK_OFFSET(0x1B7FF60)
#define MX_DATA_EXCEL_LOCALIZEETCEXCEL_GET_NAMEJP_OFFSET UNITYSDK_OFFSET(0x1B7FF80)
#define MX_DATA_EXCEL_LOCALIZEETCEXCEL_GETNAMEJPBYTES_OFFSET UNITYSDK_OFFSET(0x1B7FFC0)
#define MX_DATA_EXCEL_LOCALIZEETCEXCEL_GET_DESCRIPTIONJP_OFFSET UNITYSDK_OFFSET(0x1B7FFE0)
#define MX_DATA_EXCEL_LOCALIZEETCEXCEL_GETDESCRIPTIONJPBYTES_OFFSET UNITYSDK_OFFSET(0x1B80020)
#define MX_DATA_EXCEL_LOCALIZEETCEXCEL_GET_NAMETH_OFFSET UNITYSDK_OFFSET(0x1B80040)
#define MX_DATA_EXCEL_LOCALIZEETCEXCEL_GETNAMETHBYTES_OFFSET UNITYSDK_OFFSET(0x1B80080)
#define MX_DATA_EXCEL_LOCALIZEETCEXCEL_GET_DESCRIPTIONTH_OFFSET UNITYSDK_OFFSET(0x1B800A0)
#define MX_DATA_EXCEL_LOCALIZEETCEXCEL_GETDESCRIPTIONTHBYTES_OFFSET UNITYSDK_OFFSET(0x1B800E0)
#define MX_DATA_EXCEL_LOCALIZEETCEXCEL_GET_NAMETW_OFFSET UNITYSDK_OFFSET(0x1B80100)
#define MX_DATA_EXCEL_LOCALIZEETCEXCEL_GETNAMETWBYTES_OFFSET UNITYSDK_OFFSET(0x1B80140)
#define MX_DATA_EXCEL_LOCALIZEETCEXCEL_GET_DESCRIPTIONTW_OFFSET UNITYSDK_OFFSET(0x1B80160)
#define MX_DATA_EXCEL_LOCALIZEETCEXCEL_GETDESCRIPTIONTWBYTES_OFFSET UNITYSDK_OFFSET(0x1B801A0)
#define MX_DATA_EXCEL_LOCALIZEETCEXCEL_GET_NAMEEN_OFFSET UNITYSDK_OFFSET(0x1B801C0)
#define MX_DATA_EXCEL_LOCALIZEETCEXCEL_GETNAMEENBYTES_OFFSET UNITYSDK_OFFSET(0x1B80200)
#define MX_DATA_EXCEL_LOCALIZEETCEXCEL_GET_DESCRIPTIONEN_OFFSET UNITYSDK_OFFSET(0x1B80220)
#define MX_DATA_EXCEL_LOCALIZEETCEXCEL_GETDESCRIPTIONENBYTES_OFFSET UNITYSDK_OFFSET(0x1B80260)
#define MX_DATA_EXCEL_LOCALIZEETCEXCEL_CREATELOCALIZEETCEXCEL_OFFSET UNITYSDK_OFFSET(0x1B80280)
#define MX_DATA_EXCEL_LOCALIZEETCEXCEL_STARTLOCALIZEETCEXCEL_OFFSET UNITYSDK_OFFSET(0x1B806D0)
#define MX_DATA_EXCEL_LOCALIZEETCEXCEL_ADDKEY_OFFSET UNITYSDK_OFFSET(0x1B80650)
#define MX_DATA_EXCEL_LOCALIZEETCEXCEL_ADDNAMEKR_OFFSET UNITYSDK_OFFSET(0x1B80620)
#define MX_DATA_EXCEL_LOCALIZEETCEXCEL_ADDDESCRIPTIONKR_OFFSET UNITYSDK_OFFSET(0x1B805F0)
#define MX_DATA_EXCEL_LOCALIZEETCEXCEL_ADDNAMEJP_OFFSET UNITYSDK_OFFSET(0x1B805C0)
#define MX_DATA_EXCEL_LOCALIZEETCEXCEL_ADDDESCRIPTIONJP_OFFSET UNITYSDK_OFFSET(0x1B80590)
#define MX_DATA_EXCEL_LOCALIZEETCEXCEL_ADDNAMETH_OFFSET UNITYSDK_OFFSET(0x1B80560)
#define MX_DATA_EXCEL_LOCALIZEETCEXCEL_ADDDESCRIPTIONTH_OFFSET UNITYSDK_OFFSET(0x1B80530)
#define MX_DATA_EXCEL_LOCALIZEETCEXCEL_ADDNAMETW_OFFSET UNITYSDK_OFFSET(0x1B80500)
#define MX_DATA_EXCEL_LOCALIZEETCEXCEL_ADDDESCRIPTIONTW_OFFSET UNITYSDK_OFFSET(0x1B804D0)
#define MX_DATA_EXCEL_LOCALIZEETCEXCEL_ADDNAMEEN_OFFSET UNITYSDK_OFFSET(0x1B804A0)
#define MX_DATA_EXCEL_LOCALIZEETCEXCEL_ADDDESCRIPTIONEN_OFFSET UNITYSDK_OFFSET(0x1B80470)
#define MX_DATA_EXCEL_LOCALIZEETCEXCEL_ENDLOCALIZEETCEXCEL_OFFSET UNITYSDK_OFFSET(0x1B80680)
#define MX_DATA_EXCEL_LOCALIZEETCEXCEL_FINISHLOCALIZEETCEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B806F0)
#define MX_DATA_EXCEL_LOCALIZEETCEXCEL_FINISHSIZEPREFIXEDLOCALIZEETCEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B80710)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int LocalizeEtcExcel_TypeDefinitionIndex = 18381;

	class LocalizeEtcExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::LocalizeEtcExcel* GetRootAsLocalizeEtcExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::LocalizeEtcExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCEXCEL_GETROOTASLOCALIZEETCEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::LocalizeEtcExcel* GetRootAsLocalizeEtcExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::LocalizeEtcExcel* arg)
		{
			return (return (::MX::Data::Excel::LocalizeEtcExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::LocalizeEtcExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCEXCEL_GETROOTASLOCALIZEETCEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::LocalizeEtcExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::LocalizeEtcExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 get_Key()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCEXCEL_GET_KEY_OFFSET))(nullptr);
		}

		::System::String* get_NameKr()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCEXCEL_GET_NAMEKR_OFFSET))(nullptr);
		}

		Il2CppObject* GetNameKrBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCEXCEL_GETNAMEKRBYTES_OFFSET))(nullptr);
		}

		::System::String* get_DescriptionKr()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCEXCEL_GET_DESCRIPTIONKR_OFFSET))(nullptr);
		}

		Il2CppObject* GetDescriptionKrBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCEXCEL_GETDESCRIPTIONKRBYTES_OFFSET))(nullptr);
		}

		::System::String* get_NameJp()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCEXCEL_GET_NAMEJP_OFFSET))(nullptr);
		}

		Il2CppObject* GetNameJpBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCEXCEL_GETNAMEJPBYTES_OFFSET))(nullptr);
		}

		::System::String* get_DescriptionJp()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCEXCEL_GET_DESCRIPTIONJP_OFFSET))(nullptr);
		}

		Il2CppObject* GetDescriptionJpBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCEXCEL_GETDESCRIPTIONJPBYTES_OFFSET))(nullptr);
		}

		::System::String* get_NameTh()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCEXCEL_GET_NAMETH_OFFSET))(nullptr);
		}

		Il2CppObject* GetNameThBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCEXCEL_GETNAMETHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_DescriptionTh()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCEXCEL_GET_DESCRIPTIONTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetDescriptionThBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCEXCEL_GETDESCRIPTIONTHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_NameTw()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCEXCEL_GET_NAMETW_OFFSET))(nullptr);
		}

		Il2CppObject* GetNameTwBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCEXCEL_GETNAMETWBYTES_OFFSET))(nullptr);
		}

		::System::String* get_DescriptionTw()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCEXCEL_GET_DESCRIPTIONTW_OFFSET))(nullptr);
		}

		Il2CppObject* GetDescriptionTwBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCEXCEL_GETDESCRIPTIONTWBYTES_OFFSET))(nullptr);
		}

		::System::String* get_NameEn()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCEXCEL_GET_NAMEEN_OFFSET))(nullptr);
		}

		Il2CppObject* GetNameEnBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCEXCEL_GETNAMEENBYTES_OFFSET))(nullptr);
		}

		::System::String* get_DescriptionEn()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCEXCEL_GET_DESCRIPTIONEN_OFFSET))(nullptr);
		}

		Il2CppObject* GetDescriptionEnBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCEXCEL_GETDESCRIPTIONENBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateLocalizeEtcExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCEXCEL_CREATELOCALIZEETCEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartLocalizeEtcExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCEXCEL_STARTLOCALIZEETCEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddKey(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCEXCEL_ADDKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNameKr(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCEXCEL_ADDNAMEKR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDescriptionKr(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCEXCEL_ADDDESCRIPTIONKR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNameJp(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCEXCEL_ADDNAMEJP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDescriptionJp(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCEXCEL_ADDDESCRIPTIONJP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNameTh(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCEXCEL_ADDNAMETH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDescriptionTh(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCEXCEL_ADDDESCRIPTIONTH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNameTw(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCEXCEL_ADDNAMETW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDescriptionTw(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCEXCEL_ADDDESCRIPTIONTW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNameEn(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCEXCEL_ADDNAMEEN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDescriptionEn(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCEXCEL_ADDDESCRIPTIONEN_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndLocalizeEtcExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCEXCEL_ENDLOCALIZEETCEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishLocalizeEtcExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCEXCEL_FINISHLOCALIZEETCEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedLocalizeEtcExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZEETCEXCEL_FINISHSIZEPREFIXEDLOCALIZEETCEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class CharacterDialogSubtitleExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A206F0)
#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_GETROOTASCHARACTERDIALOGSUBTITLEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A20700)
#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_GETROOTASCHARACTERDIALOGSUBTITLEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A20760)
#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A207F0)
#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A207C0)
#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_GET_LOCALIZECVGROUP_OFFSET UNITYSDK_OFFSET(0x1A20810)
#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_GETLOCALIZECVGROUPBYTES_OFFSET UNITYSDK_OFFSET(0x1A20850)
#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A20870)
#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_GET_TLMID_OFFSET UNITYSDK_OFFSET(0x1A208C0)
#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_GETTLMIDBYTES_OFFSET UNITYSDK_OFFSET(0x1A20900)
#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1A20920)
#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_GET_DURATIONKR_OFFSET UNITYSDK_OFFSET(0x1A20970)
#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_GET_SEPARATE_OFFSET UNITYSDK_OFFSET(0x1A209C0)
#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_GET_LOCALIZEKR_OFFSET UNITYSDK_OFFSET(0x1A20A10)
#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_GETLOCALIZEKRBYTES_OFFSET UNITYSDK_OFFSET(0x1A20A50)
#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_GET_LOCALIZEJP_OFFSET UNITYSDK_OFFSET(0x1A20A70)
#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_GETLOCALIZEJPBYTES_OFFSET UNITYSDK_OFFSET(0x1A20AB0)
#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_GET_LOCALIZETH_OFFSET UNITYSDK_OFFSET(0x1A20AD0)
#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_GETLOCALIZETHBYTES_OFFSET UNITYSDK_OFFSET(0x1A20B10)
#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_GET_LOCALIZETW_OFFSET UNITYSDK_OFFSET(0x1A20B30)
#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_GETLOCALIZETWBYTES_OFFSET UNITYSDK_OFFSET(0x1A20B70)
#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_GET_LOCALIZEEN_OFFSET UNITYSDK_OFFSET(0x1A20B90)
#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_GETLOCALIZEENBYTES_OFFSET UNITYSDK_OFFSET(0x1A20BD0)
#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_CREATECHARACTERDIALOGSUBTITLEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A20BF0)
#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_STARTCHARACTERDIALOGSUBTITLEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A21050)
#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_ADDLOCALIZECVGROUP_OFFSET UNITYSDK_OFFSET(0x1A20FA0)
#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_ADDCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A20E50)
#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_ADDTLMID_OFFSET UNITYSDK_OFFSET(0x1A20F70)
#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_ADDDURATION_OFFSET UNITYSDK_OFFSET(0x1A20E20)
#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_ADDDURATIONKR_OFFSET UNITYSDK_OFFSET(0x1A20DF0)
#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_ADDSEPARATE_OFFSET UNITYSDK_OFFSET(0x1A20FD0)
#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_ADDLOCALIZEKR_OFFSET UNITYSDK_OFFSET(0x1A20F40)
#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_ADDLOCALIZEJP_OFFSET UNITYSDK_OFFSET(0x1A20F10)
#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_ADDLOCALIZETH_OFFSET UNITYSDK_OFFSET(0x1A20EE0)
#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_ADDLOCALIZETW_OFFSET UNITYSDK_OFFSET(0x1A20EB0)
#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_ADDLOCALIZEEN_OFFSET UNITYSDK_OFFSET(0x1A20E80)
#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_ENDCHARACTERDIALOGSUBTITLEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A21000)
#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_FINISHCHARACTERDIALOGSUBTITLEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A21070)
#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_FINISHSIZEPREFIXEDCHARACTERDIALOGSUBTITLEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A21090)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterDialogSubtitleExcel_TypeDefinitionIndex = 16993;

	class CharacterDialogSubtitleExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CharacterDialogSubtitleExcel* GetRootAsCharacterDialogSubtitleExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterDialogSubtitleExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_GETROOTASCHARACTERDIALOGSUBTITLEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CharacterDialogSubtitleExcel* GetRootAsCharacterDialogSubtitleExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::CharacterDialogSubtitleExcel* arg)
		{
			return (return (::MX::Data::Excel::CharacterDialogSubtitleExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::CharacterDialogSubtitleExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_GETROOTASCHARACTERDIALOGSUBTITLEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::CharacterDialogSubtitleExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterDialogSubtitleExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_LocalizeCVGroup()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_GET_LOCALIZECVGROUP_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeCVGroupBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_GETLOCALIZECVGROUPBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::String* get_TLMID()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_GET_TLMID_OFFSET))(nullptr);
		}

		Il2CppObject* GetTLMIDBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_GETTLMIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_Duration()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Int64 get_DurationKr()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_GET_DURATIONKR_OFFSET))(nullptr);
		}

		::System::Boolean get_Separate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_GET_SEPARATE_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeKR()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_GET_LOCALIZEKR_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeKRBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_GETLOCALIZEKRBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeJP()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_GET_LOCALIZEJP_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeJPBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_GETLOCALIZEJPBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeTH()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_GET_LOCALIZETH_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeTHBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_GETLOCALIZETHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeTW()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_GET_LOCALIZETW_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeTWBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_GETLOCALIZETWBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeEN()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_GET_LOCALIZEEN_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeENBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_GETLOCALIZEENBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCharacterDialogSubtitleExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Int64, ::System::Boolean, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_CREATECHARACTERDIALOGSUBTITLEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartCharacterDialogSubtitleExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_STARTCHARACTERDIALOGSUBTITLEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddLocalizeCVGroup(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_ADDLOCALIZECVGROUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_ADDCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTLMID(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_ADDTLMID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDuration(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_ADDDURATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDurationKr(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_ADDDURATIONKR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSeparate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_ADDSEPARATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeKR(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_ADDLOCALIZEKR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeJP(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_ADDLOCALIZEJP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeTH(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_ADDLOCALIZETH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeTW(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_ADDLOCALIZETW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeEN(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_ADDLOCALIZEEN_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndCharacterDialogSubtitleExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_ENDCHARACTERDIALOGSUBTITLEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishCharacterDialogSubtitleExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_FINISHCHARACTERDIALOGSUBTITLEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedCharacterDialogSubtitleExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCEL_FINISHSIZEPREFIXEDCHARACTERDIALOGSUBTITLEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


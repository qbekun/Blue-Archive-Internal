#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class CharacterVoiceSubtitleExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A46870)
#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_GETROOTASCHARACTERVOICESUBTITLEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A46880)
#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_GETROOTASCHARACTERVOICESUBTITLEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A468E0)
#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A46970)
#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A46940)
#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_GET_LOCALIZECVGROUP_OFFSET UNITYSDK_OFFSET(0x1A46990)
#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_GETLOCALIZECVGROUPBYTES_OFFSET UNITYSDK_OFFSET(0x1A469D0)
#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_GET_CHARACTERVOICEGROUPID_OFFSET UNITYSDK_OFFSET(0x1A469F0)
#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_GET_TLMID_OFFSET UNITYSDK_OFFSET(0x1A46A40)
#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_GETTLMIDBYTES_OFFSET UNITYSDK_OFFSET(0x1A46A80)
#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1A46AA0)
#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_GET_DURATIONKR_OFFSET UNITYSDK_OFFSET(0x1A46AF0)
#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_GET_SEPARATE_OFFSET UNITYSDK_OFFSET(0x1A46B40)
#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_GET_LOCALIZEKR_OFFSET UNITYSDK_OFFSET(0x1A46B90)
#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_GETLOCALIZEKRBYTES_OFFSET UNITYSDK_OFFSET(0x1A46BD0)
#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_GET_LOCALIZEJP_OFFSET UNITYSDK_OFFSET(0x1A46BF0)
#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_GETLOCALIZEJPBYTES_OFFSET UNITYSDK_OFFSET(0x1A46C30)
#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_GET_LOCALIZETH_OFFSET UNITYSDK_OFFSET(0x1A46C50)
#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_GETLOCALIZETHBYTES_OFFSET UNITYSDK_OFFSET(0x1A46C90)
#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_GET_LOCALIZETW_OFFSET UNITYSDK_OFFSET(0x1A46CB0)
#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_GETLOCALIZETWBYTES_OFFSET UNITYSDK_OFFSET(0x1A46CF0)
#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_GET_LOCALIZEEN_OFFSET UNITYSDK_OFFSET(0x1A46D10)
#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_GETLOCALIZEENBYTES_OFFSET UNITYSDK_OFFSET(0x1A46D50)
#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_CREATECHARACTERVOICESUBTITLEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A46D70)
#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_STARTCHARACTERVOICESUBTITLEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A471D0)
#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_ADDLOCALIZECVGROUP_OFFSET UNITYSDK_OFFSET(0x1A47120)
#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_ADDCHARACTERVOICEGROUPID_OFFSET UNITYSDK_OFFSET(0x1A46FD0)
#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_ADDTLMID_OFFSET UNITYSDK_OFFSET(0x1A470F0)
#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_ADDDURATION_OFFSET UNITYSDK_OFFSET(0x1A46FA0)
#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_ADDDURATIONKR_OFFSET UNITYSDK_OFFSET(0x1A46F70)
#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_ADDSEPARATE_OFFSET UNITYSDK_OFFSET(0x1A47150)
#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_ADDLOCALIZEKR_OFFSET UNITYSDK_OFFSET(0x1A470C0)
#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_ADDLOCALIZEJP_OFFSET UNITYSDK_OFFSET(0x1A47090)
#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_ADDLOCALIZETH_OFFSET UNITYSDK_OFFSET(0x1A47060)
#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_ADDLOCALIZETW_OFFSET UNITYSDK_OFFSET(0x1A47030)
#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_ADDLOCALIZEEN_OFFSET UNITYSDK_OFFSET(0x1A47000)
#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_ENDCHARACTERVOICESUBTITLEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A47180)
#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_FINISHCHARACTERVOICESUBTITLEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A471F0)
#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_FINISHSIZEPREFIXEDCHARACTERVOICESUBTITLEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A47210)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterVoiceSubtitleExcel_TypeDefinitionIndex = 17134;

	class CharacterVoiceSubtitleExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CharacterVoiceSubtitleExcel* GetRootAsCharacterVoiceSubtitleExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterVoiceSubtitleExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_GETROOTASCHARACTERVOICESUBTITLEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CharacterVoiceSubtitleExcel* GetRootAsCharacterVoiceSubtitleExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::CharacterVoiceSubtitleExcel* arg)
		{
			return (return (::MX::Data::Excel::CharacterVoiceSubtitleExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::CharacterVoiceSubtitleExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_GETROOTASCHARACTERVOICESUBTITLEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::CharacterVoiceSubtitleExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterVoiceSubtitleExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_LocalizeCVGroup()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_GET_LOCALIZECVGROUP_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeCVGroupBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_GETLOCALIZECVGROUPBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterVoiceGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_GET_CHARACTERVOICEGROUPID_OFFSET))(nullptr);
		}

		::System::String* get_TLMID()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_GET_TLMID_OFFSET))(nullptr);
		}

		Il2CppObject* GetTLMIDBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_GETTLMIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_Duration()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Int64 get_DurationKr()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_GET_DURATIONKR_OFFSET))(nullptr);
		}

		::System::Boolean get_Separate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_GET_SEPARATE_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeKR()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_GET_LOCALIZEKR_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeKRBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_GETLOCALIZEKRBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeJP()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_GET_LOCALIZEJP_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeJPBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_GETLOCALIZEJPBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeTH()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_GET_LOCALIZETH_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeTHBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_GETLOCALIZETHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeTW()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_GET_LOCALIZETW_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeTWBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_GETLOCALIZETWBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeEN()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_GET_LOCALIZEEN_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeENBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_GETLOCALIZEENBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCharacterVoiceSubtitleExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Int64, ::System::Boolean, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_CREATECHARACTERVOICESUBTITLEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartCharacterVoiceSubtitleExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_STARTCHARACTERVOICESUBTITLEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddLocalizeCVGroup(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_ADDLOCALIZECVGROUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCharacterVoiceGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_ADDCHARACTERVOICEGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTLMID(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_ADDTLMID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDuration(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_ADDDURATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDurationKr(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_ADDDURATIONKR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSeparate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_ADDSEPARATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeKR(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_ADDLOCALIZEKR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeJP(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_ADDLOCALIZEJP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeTH(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_ADDLOCALIZETH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeTW(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_ADDLOCALIZETW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeEN(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_ADDLOCALIZEEN_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndCharacterVoiceSubtitleExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_ENDCHARACTERVOICESUBTITLEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishCharacterVoiceSubtitleExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_FINISHCHARACTERVOICESUBTITLEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedCharacterVoiceSubtitleExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCEL_FINISHSIZEPREFIXEDCHARACTERVOICESUBTITLEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


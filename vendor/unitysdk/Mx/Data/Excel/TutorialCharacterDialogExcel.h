#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class TutorialCharacterDialogExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1CA9090)
#define MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_GETROOTASTUTORIALCHARACTERDIALOGEXCEL_OFFSET UNITYSDK_OFFSET(0x1CA90A0)
#define MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_GETROOTASTUTORIALCHARACTERDIALOGEXCEL_OFFSET UNITYSDK_OFFSET(0x1CA9100)
#define MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1CA9190)
#define MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1CA9160)
#define MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_GET_TALKID_OFFSET UNITYSDK_OFFSET(0x1CA91B0)
#define MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_GET_ANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0x1CA9200)
#define MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_GETANIMATIONNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1CA9240)
#define MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_GET_LOCALIZEKR_OFFSET UNITYSDK_OFFSET(0x1CA9260)
#define MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_GETLOCALIZEKRBYTES_OFFSET UNITYSDK_OFFSET(0x1CA92A0)
#define MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_GET_LOCALIZEJP_OFFSET UNITYSDK_OFFSET(0x1CA92C0)
#define MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_GETLOCALIZEJPBYTES_OFFSET UNITYSDK_OFFSET(0x1CA9300)
#define MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_GET_LOCALIZETH_OFFSET UNITYSDK_OFFSET(0x1CA9320)
#define MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_GETLOCALIZETHBYTES_OFFSET UNITYSDK_OFFSET(0x1CA9360)
#define MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_GET_LOCALIZETW_OFFSET UNITYSDK_OFFSET(0x1CA9380)
#define MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_GETLOCALIZETWBYTES_OFFSET UNITYSDK_OFFSET(0x1CA93C0)
#define MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_GET_LOCALIZEEN_OFFSET UNITYSDK_OFFSET(0x1CA93E0)
#define MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_GETLOCALIZEENBYTES_OFFSET UNITYSDK_OFFSET(0x1CA9420)
#define MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_GET_VOICEID_OFFSET UNITYSDK_OFFSET(0x1CA9440)
#define MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_CREATETUTORIALCHARACTERDIALOGEXCEL_OFFSET UNITYSDK_OFFSET(0x1CA9490)
#define MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_STARTTUTORIALCHARACTERDIALOGEXCEL_OFFSET UNITYSDK_OFFSET(0x1CA97E0)
#define MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_ADDTALKID_OFFSET UNITYSDK_OFFSET(0x1CA9610)
#define MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_ADDANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0x1CA9760)
#define MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_ADDLOCALIZEKR_OFFSET UNITYSDK_OFFSET(0x1CA9730)
#define MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_ADDLOCALIZEJP_OFFSET UNITYSDK_OFFSET(0x1CA9700)
#define MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_ADDLOCALIZETH_OFFSET UNITYSDK_OFFSET(0x1CA96D0)
#define MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_ADDLOCALIZETW_OFFSET UNITYSDK_OFFSET(0x1CA96A0)
#define MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_ADDLOCALIZEEN_OFFSET UNITYSDK_OFFSET(0x1CA9670)
#define MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_ADDVOICEID_OFFSET UNITYSDK_OFFSET(0x1CA9640)
#define MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_ENDTUTORIALCHARACTERDIALOGEXCEL_OFFSET UNITYSDK_OFFSET(0x1CA9790)
#define MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_FINISHTUTORIALCHARACTERDIALOGEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CA9800)
#define MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_FINISHSIZEPREFIXEDTUTORIALCHARACTERDIALOGEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CA9820)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int TutorialCharacterDialogExcel_TypeDefinitionIndex = 19638;

	class TutorialCharacterDialogExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::TutorialCharacterDialogExcel* GetRootAsTutorialCharacterDialogExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::TutorialCharacterDialogExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_GETROOTASTUTORIALCHARACTERDIALOGEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::TutorialCharacterDialogExcel* GetRootAsTutorialCharacterDialogExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::TutorialCharacterDialogExcel* arg)
		{
			return (return (::MX::Data::Excel::TutorialCharacterDialogExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::TutorialCharacterDialogExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_GETROOTASTUTORIALCHARACTERDIALOGEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::TutorialCharacterDialogExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::TutorialCharacterDialogExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_TalkId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_GET_TALKID_OFFSET))(nullptr);
		}

		::System::String* get_AnimationName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_GET_ANIMATIONNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetAnimationNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_GETANIMATIONNAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeKR()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_GET_LOCALIZEKR_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeKRBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_GETLOCALIZEKRBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeJP()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_GET_LOCALIZEJP_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeJPBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_GETLOCALIZEJPBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeTH()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_GET_LOCALIZETH_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeTHBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_GETLOCALIZETHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeTW()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_GET_LOCALIZETW_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeTWBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_GETLOCALIZETWBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeEN()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_GET_LOCALIZEEN_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeENBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_GETLOCALIZEENBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 get_VoiceId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_GET_VOICEID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateTutorialCharacterDialogExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::UInt32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_CREATETUTORIALCHARACTERDIALOGEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartTutorialCharacterDialogExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_STARTTUTORIALCHARACTERDIALOGEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddTalkId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_ADDTALKID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAnimationName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_ADDANIMATIONNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeKR(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_ADDLOCALIZEKR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeJP(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_ADDLOCALIZEJP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeTH(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_ADDLOCALIZETH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeTW(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_ADDLOCALIZETW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeEN(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_ADDLOCALIZEEN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVoiceId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_ADDVOICEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndTutorialCharacterDialogExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_ENDTUTORIALCHARACTERDIALOGEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishTutorialCharacterDialogExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_FINISHTUTORIALCHARACTERDIALOGEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedTutorialCharacterDialogExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCEL_FINISHSIZEPREFIXEDTUTORIALCHARACTERDIALOGEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


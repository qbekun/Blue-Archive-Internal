#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MiniGameRhythmBgmExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1BC5200)
#define MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_GETROOTASMINIGAMERHYTHMBGMEXCEL_OFFSET UNITYSDK_OFFSET(0x1BC5210)
#define MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_GETROOTASMINIGAMERHYTHMBGMEXCEL_OFFSET UNITYSDK_OFFSET(0x1BC5270)
#define MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1BC5300)
#define MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1BC52D0)
#define MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_GET_RHYTHMBGMID_OFFSET UNITYSDK_OFFSET(0x1BC5320)
#define MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BC5370)
#define MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_GET_STAGESELECTIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1BC53C0)
#define MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_GETSTAGESELECTIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1BC5400)
#define MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_GET_BPM_OFFSET UNITYSDK_OFFSET(0x1BC5420)
#define MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_GET_BGM_OFFSET UNITYSDK_OFFSET(0x1BC5470)
#define MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_GET_BGMNAMETEXT_OFFSET UNITYSDK_OFFSET(0x1BC54C0)
#define MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_GETBGMNAMETEXTBYTES_OFFSET UNITYSDK_OFFSET(0x1BC5500)
#define MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_GET_BGMARTISTTEXT_OFFSET UNITYSDK_OFFSET(0x1BC5520)
#define MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_GETBGMARTISTTEXTBYTES_OFFSET UNITYSDK_OFFSET(0x1BC5560)
#define MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_GET_HASLYRICIST_OFFSET UNITYSDK_OFFSET(0x1BC5580)
#define MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_GET_BGMCOMPOSERTEXT_OFFSET UNITYSDK_OFFSET(0x1BC55D0)
#define MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_GETBGMCOMPOSERTEXTBYTES_OFFSET UNITYSDK_OFFSET(0x1BC5610)
#define MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_GET_BGMLENGTH_OFFSET UNITYSDK_OFFSET(0x1BC5630)
#define MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_CREATEMINIGAMERHYTHMBGMEXCEL_OFFSET UNITYSDK_OFFSET(0x1BC5680)
#define MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_STARTMINIGAMERHYTHMBGMEXCEL_OFFSET UNITYSDK_OFFSET(0x1BC5A80)
#define MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_ADDRHYTHMBGMID_OFFSET UNITYSDK_OFFSET(0x1BC58E0)
#define MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BC58B0)
#define MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_ADDSTAGESELECTIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1BC59D0)
#define MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_ADDBPM_OFFSET UNITYSDK_OFFSET(0x1BC5880)
#define MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_ADDBGM_OFFSET UNITYSDK_OFFSET(0x1BC5850)
#define MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_ADDBGMNAMETEXT_OFFSET UNITYSDK_OFFSET(0x1BC59A0)
#define MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_ADDBGMARTISTTEXT_OFFSET UNITYSDK_OFFSET(0x1BC5970)
#define MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_ADDHASLYRICIST_OFFSET UNITYSDK_OFFSET(0x1BC5A00)
#define MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_ADDBGMCOMPOSERTEXT_OFFSET UNITYSDK_OFFSET(0x1BC5940)
#define MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_ADDBGMLENGTH_OFFSET UNITYSDK_OFFSET(0x1BC5910)
#define MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_ENDMINIGAMERHYTHMBGMEXCEL_OFFSET UNITYSDK_OFFSET(0x1BC5A30)
#define MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_FINISHMINIGAMERHYTHMBGMEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BC5AA0)
#define MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_FINISHSIZEPREFIXEDMINIGAMERHYTHMBGMEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BC5AC0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameRhythmBgmExcel_TypeDefinitionIndex = 18709;

	class MiniGameRhythmBgmExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MiniGameRhythmBgmExcel* GetRootAsMiniGameRhythmBgmExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameRhythmBgmExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_GETROOTASMINIGAMERHYTHMBGMEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MiniGameRhythmBgmExcel* GetRootAsMiniGameRhythmBgmExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MiniGameRhythmBgmExcel* arg)
		{
			return (return (::MX::Data::Excel::MiniGameRhythmBgmExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MiniGameRhythmBgmExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_GETROOTASMINIGAMERHYTHMBGMEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MiniGameRhythmBgmExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameRhythmBgmExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_RhythmBgmId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_GET_RHYTHMBGMID_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::String* get_StageSelectImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_GET_STAGESELECTIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetStageSelectImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_GETSTAGESELECTIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_Bpm()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_GET_BPM_OFFSET))(nullptr);
		}

		::System::Int64 get_Bgm()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_GET_BGM_OFFSET))(nullptr);
		}

		::System::String* get_BgmNameText()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_GET_BGMNAMETEXT_OFFSET))(nullptr);
		}

		Il2CppObject* GetBgmNameTextBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_GETBGMNAMETEXTBYTES_OFFSET))(nullptr);
		}

		::System::String* get_BgmArtistText()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_GET_BGMARTISTTEXT_OFFSET))(nullptr);
		}

		Il2CppObject* GetBgmArtistTextBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_GETBGMARTISTTEXTBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_HasLyricist()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_GET_HASLYRICIST_OFFSET))(nullptr);
		}

		::System::String* get_BgmComposerText()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_GET_BGMCOMPOSERTEXT_OFFSET))(nullptr);
		}

		Il2CppObject* GetBgmComposerTextBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_GETBGMCOMPOSERTEXTBYTES_OFFSET))(nullptr);
		}

		::System::Int32 get_BgmLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_GET_BGMLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMiniGameRhythmBgmExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Boolean arg, ::FlatBuffers::StringOffset* arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Boolean, ::FlatBuffers::StringOffset*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_CREATEMINIGAMERHYTHMBGMEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMiniGameRhythmBgmExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_STARTMINIGAMERHYTHMBGMEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddRhythmBgmId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_ADDRHYTHMBGMID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStageSelectImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_ADDSTAGESELECTIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBpm(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_ADDBPM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBgm(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_ADDBGM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBgmNameText(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_ADDBGMNAMETEXT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBgmArtistText(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_ADDBGMARTISTTEXT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddHasLyricist(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_ADDHASLYRICIST_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBgmComposerText(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_ADDBGMCOMPOSERTEXT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBgmLength(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_ADDBGMLENGTH_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMiniGameRhythmBgmExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_ENDMINIGAMERHYTHMBGMEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMiniGameRhythmBgmExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_FINISHMINIGAMERHYTHMBGMEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMiniGameRhythmBgmExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMBGMEXCEL_FINISHSIZEPREFIXEDMINIGAMERHYTHMBGMEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


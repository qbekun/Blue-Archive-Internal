#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ScenarioScriptExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C670C0)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GETROOTASSCENARIOSCRIPTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C670D0)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GETROOTASSCENARIOSCRIPTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C67130)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C671C0)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C67190)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1C671E0)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GET_SELECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x1C67230)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GET_BGMID_OFFSET UNITYSDK_OFFSET(0x1C67280)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GET_SOUND_OFFSET UNITYSDK_OFFSET(0x1C672D0)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GETSOUNDBYTES_OFFSET UNITYSDK_OFFSET(0x1C67310)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GET_TRANSITION_OFFSET UNITYSDK_OFFSET(0x1C67330)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GET_BGNAME_OFFSET UNITYSDK_OFFSET(0x1C67380)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GET_BGEFFECT_OFFSET UNITYSDK_OFFSET(0x1C673D0)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GET_POPUPFILENAME_OFFSET UNITYSDK_OFFSET(0x1C67420)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GETPOPUPFILENAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1C67460)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GET_SCRIPTKR_OFFSET UNITYSDK_OFFSET(0x1C67480)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GETSCRIPTKRBYTES_OFFSET UNITYSDK_OFFSET(0x1C674C0)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GET_TEXTJP_OFFSET UNITYSDK_OFFSET(0x1C674E0)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GETTEXTJPBYTES_OFFSET UNITYSDK_OFFSET(0x1C67520)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GET_TEXTTH_OFFSET UNITYSDK_OFFSET(0x1C67540)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GETTEXTTHBYTES_OFFSET UNITYSDK_OFFSET(0x1C67580)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GET_TEXTTW_OFFSET UNITYSDK_OFFSET(0x1C675A0)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GETTEXTTWBYTES_OFFSET UNITYSDK_OFFSET(0x1C675E0)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GET_TEXTEN_OFFSET UNITYSDK_OFFSET(0x1C67600)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GETTEXTENBYTES_OFFSET UNITYSDK_OFFSET(0x1C67640)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GET_VOICEID_OFFSET UNITYSDK_OFFSET(0x1C67660)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GET_TEENMODE_OFFSET UNITYSDK_OFFSET(0x1C676B0)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_CREATESCENARIOSCRIPTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C67700)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_STARTSCENARIOSCRIPTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C67CC0)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0x1C67A00)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_ADDSELECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x1C679D0)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_ADDBGMID_OFFSET UNITYSDK_OFFSET(0x1C679A0)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_ADDSOUND_OFFSET UNITYSDK_OFFSET(0x1C67C10)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_ADDTRANSITION_OFFSET UNITYSDK_OFFSET(0x1C67BE0)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_ADDBGNAME_OFFSET UNITYSDK_OFFSET(0x1C67BB0)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_ADDBGEFFECT_OFFSET UNITYSDK_OFFSET(0x1C67B80)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_ADDPOPUPFILENAME_OFFSET UNITYSDK_OFFSET(0x1C67B50)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_ADDSCRIPTKR_OFFSET UNITYSDK_OFFSET(0x1C67B20)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_ADDTEXTJP_OFFSET UNITYSDK_OFFSET(0x1C67AF0)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_ADDTEXTTH_OFFSET UNITYSDK_OFFSET(0x1C67AC0)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_ADDTEXTTW_OFFSET UNITYSDK_OFFSET(0x1C67A90)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_ADDTEXTEN_OFFSET UNITYSDK_OFFSET(0x1C67A60)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_ADDVOICEID_OFFSET UNITYSDK_OFFSET(0x1C67A30)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_ADDTEENMODE_OFFSET UNITYSDK_OFFSET(0x1C67C40)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_ENDSCENARIOSCRIPTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C67C70)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_FINISHSCENARIOSCRIPTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C67CE0)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_FINISHSIZEPREFIXEDSCENARIOSCRIPTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C67D00)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ScenarioScriptExcel_TypeDefinitionIndex = 19318;

	class ScenarioScriptExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ScenarioScriptExcel* GetRootAsScenarioScriptExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ScenarioScriptExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GETROOTASSCENARIOSCRIPTEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ScenarioScriptExcel* GetRootAsScenarioScriptExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ScenarioScriptExcel* arg)
		{
			return (return (::MX::Data::Excel::ScenarioScriptExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ScenarioScriptExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GETROOTASSCENARIOSCRIPTEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ScenarioScriptExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ScenarioScriptExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_SelectionGroup()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GET_SELECTIONGROUP_OFFSET))(nullptr);
		}

		::System::Int64 get_BGMId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GET_BGMID_OFFSET))(nullptr);
		}

		::System::String* get_Sound()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GET_SOUND_OFFSET))(nullptr);
		}

		Il2CppObject* GetSoundBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GETSOUNDBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 get_Transition()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GET_TRANSITION_OFFSET))(nullptr);
		}

		::System::UInt32 get_BGName()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GET_BGNAME_OFFSET))(nullptr);
		}

		::System::UInt32 get_BGEffect()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GET_BGEFFECT_OFFSET))(nullptr);
		}

		::System::String* get_PopupFileName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GET_POPUPFILENAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetPopupFileNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GETPOPUPFILENAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ScriptKr()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GET_SCRIPTKR_OFFSET))(nullptr);
		}

		Il2CppObject* GetScriptKrBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GETSCRIPTKRBYTES_OFFSET))(nullptr);
		}

		::System::String* get_TextJp()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GET_TEXTJP_OFFSET))(nullptr);
		}

		Il2CppObject* GetTextJpBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GETTEXTJPBYTES_OFFSET))(nullptr);
		}

		::System::String* get_TextTh()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GET_TEXTTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetTextThBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GETTEXTTHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_TextTw()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GET_TEXTTW_OFFSET))(nullptr);
		}

		Il2CppObject* GetTextTwBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GETTEXTTWBYTES_OFFSET))(nullptr);
		}

		::System::String* get_TextEn()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GET_TEXTEN_OFFSET))(nullptr);
		}

		Il2CppObject* GetTextEnBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GETTEXTENBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 get_VoiceId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GET_VOICEID_OFFSET))(nullptr);
		}

		::System::Boolean get_TeenMode()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_GET_TEENMODE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateScenarioScriptExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_CREATESCENARIOSCRIPTEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartScenarioScriptExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_STARTSCENARIOSCRIPTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_ADDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSelectionGroup(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_ADDSELECTIONGROUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBGMId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_ADDBGMID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSound(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_ADDSOUND_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTransition(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_ADDTRANSITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBGName(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_ADDBGNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBGEffect(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_ADDBGEFFECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPopupFileName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_ADDPOPUPFILENAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddScriptKr(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_ADDSCRIPTKR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTextJp(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_ADDTEXTJP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTextTh(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_ADDTEXTTH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTextTw(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_ADDTEXTTW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTextEn(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_ADDTEXTEN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVoiceId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_ADDVOICEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTeenMode(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_ADDTEENMODE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndScenarioScriptExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_ENDSCENARIOSCRIPTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishScenarioScriptExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_FINISHSCENARIOSCRIPTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedScenarioScriptExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCEL_FINISHSIZEPREFIXEDSCENARIOSCRIPTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


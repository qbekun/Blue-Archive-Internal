#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ContentsShortcutExcel; }
namespace FlatData { class ContentType; }
namespace FlatData { class ScenarioModeTypes; }
namespace FlatData { class ScenarioModeSubTypes; }
namespace FlatData { class StageDifficulty; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A72970)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_GETROOTASCONTENTSSHORTCUTEXCEL_OFFSET UNITYSDK_OFFSET(0x1A72980)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_GETROOTASCONTENTSSHORTCUTEXCEL_OFFSET UNITYSDK_OFFSET(0x1A729E0)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A72A70)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A72A40)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1A72A90)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1A72AE0)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A72B30)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_GET_SCENARIOMODETYPE_OFFSET UNITYSDK_OFFSET(0x1A72B80)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_GET_SCENARIOMODESUBTYPE_OFFSET UNITYSDK_OFFSET(0x1A72BD0)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_GET_SCENARIOMODEVOLUME_OFFSET UNITYSDK_OFFSET(0x1A72C20)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_GET_SCENARIOMODECHAPTER_OFFSET UNITYSDK_OFFSET(0x1A72C70)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_GET_SHORTCUTOPENTIME_OFFSET UNITYSDK_OFFSET(0x1A72CC0)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_GETSHORTCUTOPENTIMEBYTES_OFFSET UNITYSDK_OFFSET(0x1A72D00)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_GET_SHORTCUTCLOSETIME_OFFSET UNITYSDK_OFFSET(0x1A72D20)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_GETSHORTCUTCLOSETIMEBYTES_OFFSET UNITYSDK_OFFSET(0x1A72D60)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_GET_CONDITIONCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A72D80)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_GET_CONQUESTMAPDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1A72DD0)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_GET_CONQUESTSTEPINDEX_OFFSET UNITYSDK_OFFSET(0x1A72E20)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_GET_SHORTCUTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A72E70)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_SHORTCUTUINAME_OFFSET UNITYSDK_OFFSET(0x1A72EC0)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_GET_SHORTCUTUINAMELENGTH_OFFSET UNITYSDK_OFFSET(0x1A72F10)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_GET_LOCALIZE_OFFSET UNITYSDK_OFFSET(0x1A72F50)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_GETLOCALIZEBYTES_OFFSET UNITYSDK_OFFSET(0x1A72F90)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_CREATECONTENTSSHORTCUTEXCEL_OFFSET UNITYSDK_OFFSET(0x1A72FB0)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_STARTCONTENTSSHORTCUTEXCEL_OFFSET UNITYSDK_OFFSET(0x1A73570)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1A73340)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_ADDCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1A734F0)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A73310)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_ADDSCENARIOMODETYPE_OFFSET UNITYSDK_OFFSET(0x1A734C0)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_ADDSCENARIOMODESUBTYPE_OFFSET UNITYSDK_OFFSET(0x1A73490)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_ADDSCENARIOMODEVOLUME_OFFSET UNITYSDK_OFFSET(0x1A732E0)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_ADDSCENARIOMODECHAPTER_OFFSET UNITYSDK_OFFSET(0x1A732B0)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_ADDSHORTCUTOPENTIME_OFFSET UNITYSDK_OFFSET(0x1A73460)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_ADDSHORTCUTCLOSETIME_OFFSET UNITYSDK_OFFSET(0x1A73430)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_ADDCONDITIONCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A73280)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_ADDCONQUESTMAPDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1A73400)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_ADDCONQUESTSTEPINDEX_OFFSET UNITYSDK_OFFSET(0x1A733D0)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_ADDSHORTCUTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A73250)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_ADDSHORTCUTUINAME_OFFSET UNITYSDK_OFFSET(0x1A733A0)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_CREATESHORTCUTUINAMEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A73590)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_STARTSHORTCUTUINAMEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A73620)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_ADDLOCALIZE_OFFSET UNITYSDK_OFFSET(0x1A73370)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_ENDCONTENTSSHORTCUTEXCEL_OFFSET UNITYSDK_OFFSET(0x1A73520)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_FINISHCONTENTSSHORTCUTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A73660)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_FINISHSIZEPREFIXEDCONTENTSSHORTCUTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A73680)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ContentsShortcutExcel_TypeDefinitionIndex = 17337;

	class ContentsShortcutExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ContentsShortcutExcel* GetRootAsContentsShortcutExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ContentsShortcutExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_GETROOTASCONTENTSSHORTCUTEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ContentsShortcutExcel* GetRootAsContentsShortcutExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ContentsShortcutExcel* arg)
		{
			return (return (::MX::Data::Excel::ContentsShortcutExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ContentsShortcutExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_GETROOTASCONTENTSSHORTCUTEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ContentsShortcutExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ContentsShortcutExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::FlatData::ContentType* get_ContentType()
		{
			return (return (::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::FlatData::ScenarioModeTypes* get_ScenarioModeType()
		{
			return (return (::FlatData::ScenarioModeTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_GET_SCENARIOMODETYPE_OFFSET))(nullptr);
		}

		::FlatData::ScenarioModeSubTypes* get_ScenarioModeSubType()
		{
			return (return (::FlatData::ScenarioModeSubTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_GET_SCENARIOMODESUBTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ScenarioModeVolume()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_GET_SCENARIOMODEVOLUME_OFFSET))(nullptr);
		}

		::System::Int64 get_ScenarioModeChapter()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_GET_SCENARIOMODECHAPTER_OFFSET))(nullptr);
		}

		::System::String* get_ShortcutOpenTime()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_GET_SHORTCUTOPENTIME_OFFSET))(nullptr);
		}

		Il2CppObject* GetShortcutOpenTimeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_GETSHORTCUTOPENTIMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ShortcutCloseTime()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_GET_SHORTCUTCLOSETIME_OFFSET))(nullptr);
		}

		Il2CppObject* GetShortcutCloseTimeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_GETSHORTCUTCLOSETIMEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_ConditionContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_GET_CONDITIONCONTENTID_OFFSET))(nullptr);
		}

		::FlatData::StageDifficulty* get_ConquestMapDifficulty()
		{
			return (return (::FlatData::StageDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_GET_CONQUESTMAPDIFFICULTY_OFFSET))(nullptr);
		}

		::System::Int32 get_ConquestStepIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_GET_CONQUESTSTEPINDEX_OFFSET))(nullptr);
		}

		::System::Int64 get_ShortcutContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_GET_SHORTCUTCONTENTID_OFFSET))(nullptr);
		}

		::System::String* ShortcutUIName(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_SHORTCUTUINAME_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ShortcutUINameLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_GET_SHORTCUTUINAMELENGTH_OFFSET))(nullptr);
		}

		::System::String* get_Localize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_GET_LOCALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_GETLOCALIZEBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateContentsShortcutExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::ContentType* arg, ::System::Int64 arg, ::FlatData::ScenarioModeTypes* arg, ::FlatData::ScenarioModeSubTypes* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::FlatData::StageDifficulty* arg, ::System::Int32 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::ContentType*, ::System::Int64, ::FlatData::ScenarioModeTypes*, ::FlatData::ScenarioModeSubTypes*, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::FlatData::StageDifficulty*, ::System::Int32, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_CREATECONTENTSSHORTCUTEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartContentsShortcutExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_STARTCONTENTSSHORTCUTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_ADDUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddContentType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_ADDCONTENTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddScenarioModeType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ScenarioModeTypes* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ScenarioModeTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_ADDSCENARIOMODETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddScenarioModeSubType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ScenarioModeSubTypes* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ScenarioModeSubTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_ADDSCENARIOMODESUBTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddScenarioModeVolume(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_ADDSCENARIOMODEVOLUME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddScenarioModeChapter(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_ADDSCENARIOMODECHAPTER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShortcutOpenTime(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_ADDSHORTCUTOPENTIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShortcutCloseTime(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_ADDSHORTCUTCLOSETIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConditionContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_ADDCONDITIONCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConquestMapDifficulty(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::StageDifficulty* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_ADDCONQUESTMAPDIFFICULTY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConquestStepIndex(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_ADDCONQUESTSTEPINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShortcutContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_ADDSHORTCUTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShortcutUIName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_ADDSHORTCUTUINAME_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateShortcutUINameVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_CREATESHORTCUTUINAMEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartShortcutUINameVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_STARTSHORTCUTUINAMEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalize(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_ADDLOCALIZE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndContentsShortcutExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_ENDCONTENTSSHORTCUTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishContentsShortcutExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_FINISHCONTENTSSHORTCUTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedContentsShortcutExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCEL_FINISHSIZEPREFIXEDCONTENTSSHORTCUTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}


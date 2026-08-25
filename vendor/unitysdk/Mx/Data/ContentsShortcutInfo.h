#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ContentType; }
namespace FlatData { class ScenarioModeTypes; }
namespace FlatData { class ScenarioModeSubTypes; }
namespace FlatData { class StageDifficulty; }
namespace MX::Data::Excel { class ContentsShortcutExcel; }

#define MX_DATA_CONTENTSSHORTCUTINFO_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x183C2B0)
#define MX_DATA_CONTENTSSHORTCUTINFO_SET_CONDITIONCONTENTID_OFFSET UNITYSDK_OFFSET(0x183C2C0)
#define MX_DATA_CONTENTSSHORTCUTINFO_SET_SCENARIOMODEVOLUME_OFFSET UNITYSDK_OFFSET(0x183C2D0)
#define MX_DATA_CONTENTSSHORTCUTINFO_SET_SCENARIOMODECHAPTER_OFFSET UNITYSDK_OFFSET(0x183C2E0)
#define MX_DATA_CONTENTSSHORTCUTINFO_GET_CONQUESTSTEPINDEX_OFFSET UNITYSDK_OFFSET(0x183C2F0)
#define MX_DATA_CONTENTSSHORTCUTINFO_SET_CONQUESTSTEPINDEX_OFFSET UNITYSDK_OFFSET(0x183C300)
#define MX_DATA_CONTENTSSHORTCUTINFO_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x183C310)
#define MX_DATA_CONTENTSSHORTCUTINFO_GET_SCENARIOMODECHAPTER_OFFSET UNITYSDK_OFFSET(0x183C320)
#define MX_DATA_CONTENTSSHORTCUTINFO_GET_SHORTCUTOPENDATE_OFFSET UNITYSDK_OFFSET(0x183C330)
#define MX_DATA_CONTENTSSHORTCUTINFO_SET_SHORTCUTUINAMES_OFFSET UNITYSDK_OFFSET(0x183C340)
#define MX_DATA_CONTENTSSHORTCUTINFO_GET_CONDITIONCONTENTID_OFFSET UNITYSDK_OFFSET(0x183C350)
#define MX_DATA_CONTENTSSHORTCUTINFO_SET_SCENARIOMODETYPE_OFFSET UNITYSDK_OFFSET(0x183C360)
#define MX_DATA_CONTENTSSHORTCUTINFO_GET_SCENARIOMODEVOLUME_OFFSET UNITYSDK_OFFSET(0x183C370)
#define MX_DATA_CONTENTSSHORTCUTINFO_GET_CONQUESTMAPDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x183C380)
#define MX_DATA_CONTENTSSHORTCUTINFO_GET_LOCALIZE_OFFSET UNITYSDK_OFFSET(0x183C390)
#define MX_DATA_CONTENTSSHORTCUTINFO_GET_SHORTCUTCONTENTID_OFFSET UNITYSDK_OFFSET(0x183C3A0)
#define MX_DATA_CONTENTSSHORTCUTINFO_GET_SCENARIOMODETYPE_OFFSET UNITYSDK_OFFSET(0x183C3B0)
#define MX_DATA_CONTENTSSHORTCUTINFO_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x183C3C0)
#define MX_DATA_CONTENTSSHORTCUTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x183C3D0)
#define MX_DATA_CONTENTSSHORTCUTINFO_SET_SHORTCUTCONTENTID_OFFSET UNITYSDK_OFFSET(0x183C6C0)
#define MX_DATA_CONTENTSSHORTCUTINFO_GET_SCENARIOMODESUBTYPE_OFFSET UNITYSDK_OFFSET(0x183C6D0)
#define MX_DATA_CONTENTSSHORTCUTINFO_SET_SHORTCUTCLOSEDATA_OFFSET UNITYSDK_OFFSET(0x183C6E0)
#define MX_DATA_CONTENTSSHORTCUTINFO_SET_CONQUESTMAPDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x183C6F0)
#define MX_DATA_CONTENTSSHORTCUTINFO_SET_SCENARIOMODESUBTYPE_OFFSET UNITYSDK_OFFSET(0x183C700)
#define MX_DATA_CONTENTSSHORTCUTINFO_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x183C710)
#define MX_DATA_CONTENTSSHORTCUTINFO_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x183C720)
#define MX_DATA_CONTENTSSHORTCUTINFO_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x183C730)
#define MX_DATA_CONTENTSSHORTCUTINFO_SET_SHORTCUTOPENDATE_OFFSET UNITYSDK_OFFSET(0x183C740)
#define MX_DATA_CONTENTSSHORTCUTINFO_GET_SHORTCUTUINAMES_OFFSET UNITYSDK_OFFSET(0x183C750)
#define MX_DATA_CONTENTSSHORTCUTINFO_GET_SHORTCUTCLOSEDATA_OFFSET UNITYSDK_OFFSET(0x183C760)
#define MX_DATA_CONTENTSSHORTCUTINFO_SET_LOCALIZE_OFFSET UNITYSDK_OFFSET(0x183C770)

namespace MX::Data
{
	inline static constexpr unsigned int ContentsShortcutInfo_TypeDefinitionIndex = 15771;

	class ContentsShortcutInfo : public Il2CppObject
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x10
		::FlatData::ContentType* _ContentType_k__BackingField; // 0x18
		::System::Int64 _EventContentId_k__BackingField; // 0x20
		::System::DateTime* _ShortcutOpenDate_k__BackingField; // 0x28
		::System::DateTime* _ShortcutCloseData_k__BackingField; // 0x30
		::System::Int64 _ConditionContentId_k__BackingField; // 0x38
		::System::Int64 _ShortcutContentId_k__BackingField; // 0x40
		Il2CppObject* _ShortcutUINames_k__BackingField; // 0x48
		::System::String* _Localize_k__BackingField; // 0x50
		::FlatData::ScenarioModeTypes* _ScenarioModeType_k__BackingField; // 0x58
		::FlatData::ScenarioModeSubTypes* _ScenarioModeSubType_k__BackingField; // 0x5C
		::System::Int64 _ScenarioModeVolume_k__BackingField; // 0x60
		::System::Int64 _ScenarioModeChapter_k__BackingField; // 0x68
		::FlatData::StageDifficulty* _ConquestMapDifficulty_k__BackingField; // 0x70
		::System::Int32 _ConquestStepIndex_k__BackingField; // 0x74

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTSSHORTCUTINFO_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_ConditionContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTSSHORTCUTINFO_SET_CONDITIONCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_ScenarioModeVolume(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTSSHORTCUTINFO_SET_SCENARIOMODEVOLUME_OFFSET))(arg, nullptr);
		}

		::System::Void set_ScenarioModeChapter(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTSSHORTCUTINFO_SET_SCENARIOMODECHAPTER_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ConquestStepIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTSSHORTCUTINFO_GET_CONQUESTSTEPINDEX_OFFSET))(nullptr);
		}

		::System::Void set_ConquestStepIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTSSHORTCUTINFO_SET_CONQUESTSTEPINDEX_OFFSET))(arg, nullptr);
		}

		::FlatData::ContentType* get_ContentType()
		{
			return (return (::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTSSHORTCUTINFO_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ScenarioModeChapter()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTSSHORTCUTINFO_GET_SCENARIOMODECHAPTER_OFFSET))(nullptr);
		}

		::System::DateTime* get_ShortcutOpenDate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTSSHORTCUTINFO_GET_SHORTCUTOPENDATE_OFFSET))(nullptr);
		}

		::System::Void set_ShortcutUINames(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTSSHORTCUTINFO_SET_SHORTCUTUINAMES_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ConditionContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTSSHORTCUTINFO_GET_CONDITIONCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_ScenarioModeType(::FlatData::ScenarioModeTypes* arg)
		{
			((::System::Void(*)(::FlatData::ScenarioModeTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTSSHORTCUTINFO_SET_SCENARIOMODETYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ScenarioModeVolume()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTSSHORTCUTINFO_GET_SCENARIOMODEVOLUME_OFFSET))(nullptr);
		}

		::FlatData::StageDifficulty* get_ConquestMapDifficulty()
		{
			return (return (::FlatData::StageDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTSSHORTCUTINFO_GET_CONQUESTMAPDIFFICULTY_OFFSET))(nullptr);
		}

		::System::String* get_Localize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTSSHORTCUTINFO_GET_LOCALIZE_OFFSET))(nullptr);
		}

		::System::Int64 get_ShortcutContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTSSHORTCUTINFO_GET_SHORTCUTCONTENTID_OFFSET))(nullptr);
		}

		::FlatData::ScenarioModeTypes* get_ScenarioModeType()
		{
			return (return (::FlatData::ScenarioModeTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTSSHORTCUTINFO_GET_SCENARIOMODETYPE_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTSSHORTCUTINFO_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::ContentsShortcutExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ContentsShortcutExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTSSHORTCUTINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_ShortcutContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTSSHORTCUTINFO_SET_SHORTCUTCONTENTID_OFFSET))(arg, nullptr);
		}

		::FlatData::ScenarioModeSubTypes* get_ScenarioModeSubType()
		{
			return (return (::FlatData::ScenarioModeSubTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTSSHORTCUTINFO_GET_SCENARIOMODESUBTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ShortcutCloseData(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTSSHORTCUTINFO_SET_SHORTCUTCLOSEDATA_OFFSET))(arg, nullptr);
		}

		::System::Void set_ConquestMapDifficulty(::FlatData::StageDifficulty* arg)
		{
			((::System::Void(*)(::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTSSHORTCUTINFO_SET_CONQUESTMAPDIFFICULTY_OFFSET))(arg, nullptr);
		}

		::System::Void set_ScenarioModeSubType(::FlatData::ScenarioModeSubTypes* arg)
		{
			((::System::Void(*)(::FlatData::ScenarioModeSubTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTSSHORTCUTINFO_SET_SCENARIOMODESUBTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTSSHORTCUTINFO_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTSSHORTCUTINFO_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_ContentType(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTSSHORTCUTINFO_SET_CONTENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_ShortcutOpenDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTSSHORTCUTINFO_SET_SHORTCUTOPENDATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ShortcutUINames()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTSSHORTCUTINFO_GET_SHORTCUTUINAMES_OFFSET))(nullptr);
		}

		::System::DateTime* get_ShortcutCloseData()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTSSHORTCUTINFO_GET_SHORTCUTCLOSEDATA_OFFSET))(nullptr);
		}

		::System::Void set_Localize(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTSSHORTCUTINFO_SET_LOCALIZE_OFFSET))(str, nullptr);
		}

	};
}


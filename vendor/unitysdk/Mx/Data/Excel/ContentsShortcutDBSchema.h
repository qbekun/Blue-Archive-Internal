#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ContentType; }
namespace FlatData { class ScenarioModeTypes; }

#define MX_DATA_EXCEL_CONTENTSSHORTCUTDBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A736A0)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A736B0)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTDBSCHEMA_SET_SCENARIOMODECHAPTER_OFFSET UNITYSDK_OFFSET(0x1A736C0)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTDBSCHEMA_GET_SCENARIOMODETYPE_OFFSET UNITYSDK_OFFSET(0x1A736D0)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTDBSCHEMA_SET_SCENARIOMODETYPE_OFFSET UNITYSDK_OFFSET(0x1A736E0)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTDBSCHEMA_SET_SCENARIOMODEVOLUME_OFFSET UNITYSDK_OFFSET(0x1A736F0)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTDBSCHEMA_GET_SCENARIOMODECHAPTER_OFFSET UNITYSDK_OFFSET(0x1A73700)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTDBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A73710)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTDBSCHEMA_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1A73720)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTDBSCHEMA_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1A73730)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTDBSCHEMA_GET_SCENARIOMODEVOLUME_OFFSET UNITYSDK_OFFSET(0x1A73740)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ContentsShortcutDBSchema_TypeDefinitionIndex = 17338;

	class ContentsShortcutDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::FlatData::ContentType* _ContentType_k__BackingField; // 0x20
		::System::Int64 _EventContentId_k__BackingField; // 0x28
		::FlatData::ScenarioModeTypes* _ScenarioModeType_k__BackingField; // 0x30
		::System::Int64 _ScenarioModeVolume_k__BackingField; // 0x38
		::System::Int64 _ScenarioModeChapter_k__BackingField; // 0x40

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTDBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ScenarioModeChapter(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTDBSCHEMA_SET_SCENARIOMODECHAPTER_OFFSET))(arg, nullptr);
		}

		::FlatData::ScenarioModeTypes* get_ScenarioModeType()
		{
			return (return (::FlatData::ScenarioModeTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTDBSCHEMA_GET_SCENARIOMODETYPE_OFFSET))(nullptr);
		}

		::System::Void set_ScenarioModeType(::FlatData::ScenarioModeTypes* arg)
		{
			((::System::Void(*)(::FlatData::ScenarioModeTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTDBSCHEMA_SET_SCENARIOMODETYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_ScenarioModeVolume(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTDBSCHEMA_SET_SCENARIOMODEVOLUME_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ScenarioModeChapter()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTDBSCHEMA_GET_SCENARIOMODECHAPTER_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTDBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_ContentType(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTDBSCHEMA_SET_CONTENTTYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::ContentType* get_ContentType()
		{
			return (return (::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTDBSCHEMA_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ScenarioModeVolume()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTDBSCHEMA_GET_SCENARIOMODEVOLUME_OFFSET))(nullptr);
		}

	};
}


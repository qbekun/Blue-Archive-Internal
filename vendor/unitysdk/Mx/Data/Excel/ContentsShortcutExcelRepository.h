#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ContentType; }
namespace FlatData { class ScenarioModeTypes; }

#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A73750)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCELREPOSITORY_SELECTFIRST_CONTENTTYPE_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A739B0)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCELREPOSITORY_SELECT_CONTENTTYPE_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A73DE0)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCELREPOSITORY_SELECT_CONTENTTYPE_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A74200)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCELREPOSITORY_SELECTFIRST_CONTENTTYPE_SCENARIOMODETYPE_SCENARIOMODEVOLUME_SCENARIOMODECHAPTER_OFFSET UNITYSDK_OFFSET(0x1A74790)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCELREPOSITORY_SELECT_CONTENTTYPE_SCENARIOMODETYPE_SCENARIOMODEVOLUME_SCENARIOMODECHAPTER_OFFSET UNITYSDK_OFFSET(0x1A74DD0)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCELREPOSITORY_SELECT_CONTENTTYPE_SCENARIOMODETYPE_SCENARIOMODEVOLUME_SCENARIOMODECHAPTER_OFFSET UNITYSDK_OFFSET(0x1A753F0)
#define MX_DATA_EXCEL_CONTENTSSHORTCUTEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A75AC0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ContentsShortcutExcelRepository_TypeDefinitionIndex = 17346;

	class ContentsShortcutExcelRepository : public ::FlatData::GachaDisplayTag
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_ContentType_EventContentId(::FlatData::ContentType* arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ContentType*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCELREPOSITORY_SELECTFIRST_CONTENTTYPE_EVENTCONTENTID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_ContentType_EventContentId(::FlatData::ContentType* arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ContentType*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCELREPOSITORY_SELECT_CONTENTTYPE_EVENTCONTENTID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_ContentType_EventContentId(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCELREPOSITORY_SELECT_CONTENTTYPE_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_ContentType_ScenarioModeType_ScenarioModeVolume_ScenarioModeChapter(::FlatData::ContentType* arg, ::FlatData::ScenarioModeTypes* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ContentType*, ::FlatData::ScenarioModeTypes*, ::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCELREPOSITORY_SELECTFIRST_CONTENTTYPE_SCENARIOMODETYPE_SCENARIOMODEVOLUME_SCENARIOMODECHAPTER_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_ContentType_ScenarioModeType_ScenarioModeVolume_ScenarioModeChapter(::FlatData::ContentType* arg, ::FlatData::ScenarioModeTypes* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ContentType*, ::FlatData::ScenarioModeTypes*, ::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCELREPOSITORY_SELECT_CONTENTTYPE_SCENARIOMODETYPE_SCENARIOMODEVOLUME_SCENARIOMODECHAPTER_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_ContentType_ScenarioModeType_ScenarioModeVolume_ScenarioModeChapter(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCELREPOSITORY_SELECT_CONTENTTYPE_SCENARIOMODETYPE_SCENARIOMODEVOLUME_SCENARIOMODECHAPTER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSSHORTCUTEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}


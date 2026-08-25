#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ScenarioModeTypes; }

#define MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C641A0)
#define MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCELREPOSITORY_SELECTFIRST_MODETYPE_VOLUMEID_CHAPTERID_OFFSET UNITYSDK_OFFSET(0x1C64310)
#define MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCELREPOSITORY_SELECT_MODETYPE_VOLUMEID_CHAPTERID_OFFSET UNITYSDK_OFFSET(0x1C64830)
#define MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCELREPOSITORY_SELECT_MODETYPE_VOLUMEID_CHAPTERID_OFFSET UNITYSDK_OFFSET(0x1C64D40)
#define MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C65380)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ScenarioModeSpoilerPopupExcelRepository_TypeDefinitionIndex = 19310;

	class ScenarioModeSpoilerPopupExcelRepository : public <>c__DisplayClass16_0
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_ModeType_VolumeId_ChapterId(::FlatData::ScenarioModeTypes* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ScenarioModeTypes*, ::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCELREPOSITORY_SELECTFIRST_MODETYPE_VOLUMEID_CHAPTERID_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_ModeType_VolumeId_ChapterId(::FlatData::ScenarioModeTypes* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ScenarioModeTypes*, ::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCELREPOSITORY_SELECT_MODETYPE_VOLUMEID_CHAPTERID_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_ModeType_VolumeId_ChapterId(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCELREPOSITORY_SELECT_MODETYPE_VOLUMEID_CHAPTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}


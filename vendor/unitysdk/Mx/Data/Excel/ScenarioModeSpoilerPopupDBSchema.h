#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ScenarioModeTypes; }

#define MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPDBSCHEMA_SET_CHAPTERID_OFFSET UNITYSDK_OFFSET(0x1C64130)
#define MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPDBSCHEMA_SET_MODETYPE_OFFSET UNITYSDK_OFFSET(0x1C64140)
#define MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPDBSCHEMA_SET_VOLUMEID_OFFSET UNITYSDK_OFFSET(0x1C64150)
#define MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C64160)
#define MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPDBSCHEMA_GET_VOLUMEID_OFFSET UNITYSDK_OFFSET(0x1C64170)
#define MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPDBSCHEMA_GET_CHAPTERID_OFFSET UNITYSDK_OFFSET(0x1C64180)
#define MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPDBSCHEMA_GET_MODETYPE_OFFSET UNITYSDK_OFFSET(0x1C64190)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ScenarioModeSpoilerPopupDBSchema_TypeDefinitionIndex = 19305;

	class ScenarioModeSpoilerPopupDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::FlatData::ScenarioModeTypes* _ModeType_k__BackingField; // 0x20
		::System::Int64 _VolumeId_k__BackingField; // 0x28
		::System::Int64 _ChapterId_k__BackingField; // 0x30

		::System::Void set_ChapterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPDBSCHEMA_SET_CHAPTERID_OFFSET))(arg, nullptr);
		}

		::System::Void set_ModeType(::FlatData::ScenarioModeTypes* arg)
		{
			((::System::Void(*)(::FlatData::ScenarioModeTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPDBSCHEMA_SET_MODETYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_VolumeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPDBSCHEMA_SET_VOLUMEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_VolumeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPDBSCHEMA_GET_VOLUMEID_OFFSET))(nullptr);
		}

		::System::Int64 get_ChapterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPDBSCHEMA_GET_CHAPTERID_OFFSET))(nullptr);
		}

		::FlatData::ScenarioModeTypes* get_ModeType()
		{
			return (return (::FlatData::ScenarioModeTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODESPOILERPOPUPDBSCHEMA_GET_MODETYPE_OFFSET))(nullptr);
		}

	};
}


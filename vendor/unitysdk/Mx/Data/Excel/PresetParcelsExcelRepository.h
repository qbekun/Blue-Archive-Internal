#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_PRESETPARCELSEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C31240)
#define MX_DATA_EXCEL_PRESETPARCELSEXCELREPOSITORY_SELECT_PRESETGROUPIDS_OFFSET UNITYSDK_OFFSET(0x1C31280)
#define MX_DATA_EXCEL_PRESETPARCELSEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C31680)
#define MX_DATA_EXCEL_PRESETPARCELSEXCELREPOSITORY_SELECTFIRST_PRESETGROUPID_OFFSET UNITYSDK_OFFSET(0x1C317F0)
#define MX_DATA_EXCEL_PRESETPARCELSEXCELREPOSITORY_SELECT_PRESETGROUPID_OFFSET UNITYSDK_OFFSET(0x1C31B10)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int PresetParcelsExcelRepository_TypeDefinitionIndex = 19084;

	class PresetParcelsExcelRepository : public <PlayTransitionAni>d__50
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETPARCELSEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_PresetGroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETPARCELSEXCELREPOSITORY_SELECT_PRESETGROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETPARCELSEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_PresetGroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETPARCELSEXCELREPOSITORY_SELECTFIRST_PRESETGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_PresetGroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETPARCELSEXCELREPOSITORY_SELECT_PRESETGROUPID_OFFSET))(arg, arg, nullptr);
		}

	};
}


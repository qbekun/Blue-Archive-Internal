#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SKILLSELECTEXTOOLTIPEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C8B2F0)
#define MX_DATA_EXCEL_SKILLSELECTEXTOOLTIPEXCELREPOSITORY_SELECT_GROUPID_OFFSET UNITYSDK_OFFSET(0x1C8B330)
#define MX_DATA_EXCEL_SKILLSELECTEXTOOLTIPEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET UNITYSDK_OFFSET(0x1C8B630)
#define MX_DATA_EXCEL_SKILLSELECTEXTOOLTIPEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET UNITYSDK_OFFSET(0x1C8B950)
#define MX_DATA_EXCEL_SKILLSELECTEXTOOLTIPEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C8BD50)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int SkillSelectExTooltipExcelRepository_TypeDefinitionIndex = 19487;

	class SkillSelectExTooltipExcelRepository : public <>c__DisplayClass18_0
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLSELECTEXTOOLTIPEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_GroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLSELECTEXTOOLTIPEXCELREPOSITORY_SELECT_GROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_GroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLSELECTEXTOOLTIPEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_GroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLSELECTEXTOOLTIPEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLSELECTEXTOOLTIPEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}


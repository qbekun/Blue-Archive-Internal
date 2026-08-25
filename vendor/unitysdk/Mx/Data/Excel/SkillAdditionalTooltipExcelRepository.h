#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCELREPOSITORY_SELECT_GROUPID_OFFSET UNITYSDK_OFFSET(0x1C86F60)
#define MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C87260)
#define MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET UNITYSDK_OFFSET(0x1C872A0)
#define MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C876A0)
#define MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET UNITYSDK_OFFSET(0x1C87810)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int SkillAdditionalTooltipExcelRepository_TypeDefinitionIndex = 19470;

	class SkillAdditionalTooltipExcelRepository : public <>c__DisplayClass16_0
	{
	public:
		Il2CppObject* Select_GroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCELREPOSITORY_SELECT_GROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_GroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_GroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLADDITIONALTOOLTIPEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET))(arg, arg, nullptr);
		}

	};
}


#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET UNITYSDK_OFFSET(0x1C67D50)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C68150)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET UNITYSDK_OFFSET(0x1C68190)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C684B0)
#define MX_DATA_EXCEL_SCENARIOSCRIPTEXCELREPOSITORY_SELECT_GROUPID_OFFSET UNITYSDK_OFFSET(0x1C68620)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ScenarioScriptExcelRepository_TypeDefinitionIndex = 19324;

	class ScenarioScriptExcelRepository : public ::MXUnderCover::UCInventoryModel
	{
	public:
		Il2CppObject* Select_GroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_GroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_GroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTEXCELREPOSITORY_SELECT_GROUPID_OFFSET))(arg, arg, nullptr);
		}

	};
}


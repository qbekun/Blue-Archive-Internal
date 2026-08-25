#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SCENARIOSCRIPTFUNNELEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C68E80)
#define MX_DATA_EXCEL_SCENARIOSCRIPTFUNNELEXCELREPOSITORY_SELECT_GROUPID_OFFSET UNITYSDK_OFFSET(0x1C68FF0)
#define MX_DATA_EXCEL_SCENARIOSCRIPTFUNNELEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET UNITYSDK_OFFSET(0x1C692F0)
#define MX_DATA_EXCEL_SCENARIOSCRIPTFUNNELEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET UNITYSDK_OFFSET(0x1C696F0)
#define MX_DATA_EXCEL_SCENARIOSCRIPTFUNNELEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C69A10)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ScenarioScriptFunnelExcelRepository_TypeDefinitionIndex = 19331;

	class ScenarioScriptFunnelExcelRepository : public SaveDataInternal
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTFUNNELEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_GroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTFUNNELEXCELREPOSITORY_SELECT_GROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_GroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTFUNNELEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_GroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTFUNNELEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTFUNNELEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}


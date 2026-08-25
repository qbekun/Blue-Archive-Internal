#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SCENARIOMODEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C61950)
#define MX_DATA_EXCEL_SCENARIOMODEEXCELREPOSITORY_SELECT_MODEIDS_OFFSET UNITYSDK_OFFSET(0x1C61990)
#define MX_DATA_EXCEL_SCENARIOMODEEXCELREPOSITORY_SELECT_MODEID_OFFSET UNITYSDK_OFFSET(0x1C61D90)
#define MX_DATA_EXCEL_SCENARIOMODEEXCELREPOSITORY_SELECTFIRST_MODEID_OFFSET UNITYSDK_OFFSET(0x1C62090)
#define MX_DATA_EXCEL_SCENARIOMODEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C623B0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ScenarioModeExcelRepository_TypeDefinitionIndex = 19296;

	class ScenarioModeExcelRepository : public <>c
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_ModeIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCELREPOSITORY_SELECT_MODEIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_ModeId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCELREPOSITORY_SELECT_MODEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_ModeId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCELREPOSITORY_SELECTFIRST_MODEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}


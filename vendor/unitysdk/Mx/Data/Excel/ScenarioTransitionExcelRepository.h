#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SCENARIOTRANSITIONEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C6A270)
#define MX_DATA_EXCEL_SCENARIOTRANSITIONEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C6A3E0)
#define MX_DATA_EXCEL_SCENARIOTRANSITIONEXCELREPOSITORY_SELECTFIRST_NAME_OFFSET UNITYSDK_OFFSET(0x1C6A420)
#define MX_DATA_EXCEL_SCENARIOTRANSITIONEXCELREPOSITORY_SELECT_NAMES_OFFSET UNITYSDK_OFFSET(0x1C6A740)
#define MX_DATA_EXCEL_SCENARIOTRANSITIONEXCELREPOSITORY_SELECT_NAME_OFFSET UNITYSDK_OFFSET(0x1C6AB40)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ScenarioTransitionExcelRepository_TypeDefinitionIndex = 19338;

	class ScenarioTransitionExcelRepository : public <co_CoolTimer>d__32
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOTRANSITIONEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOTRANSITIONEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_Name(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOTRANSITIONEXCELREPOSITORY_SELECTFIRST_NAME_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Names(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOTRANSITIONEXCELREPOSITORY_SELECT_NAMES_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Name(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOTRANSITIONEXCELREPOSITORY_SELECT_NAME_OFFSET))(arg, arg, nullptr);
		}

	};
}


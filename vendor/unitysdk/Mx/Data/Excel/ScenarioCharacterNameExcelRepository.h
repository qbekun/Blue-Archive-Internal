#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C5A990)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C5AB00)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCELREPOSITORY_SELECT_CHARACTERNAMES_OFFSET UNITYSDK_OFFSET(0x1C5AB40)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCELREPOSITORY_SELECT_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x1C5AF40)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCELREPOSITORY_SELECTFIRST_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x1C5B240)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ScenarioCharacterNameExcelRepository_TypeDefinitionIndex = 19268;

	class ScenarioCharacterNameExcelRepository : public SaveDataInternal
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_CharacterNames(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCELREPOSITORY_SELECT_CHARACTERNAMES_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_CharacterName(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCELREPOSITORY_SELECT_CHARACTERNAME_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_CharacterName(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCELREPOSITORY_SELECTFIRST_CHARACTERNAME_OFFSET))(arg, arg, nullptr);
		}

	};
}


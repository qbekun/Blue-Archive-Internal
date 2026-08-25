#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCELREPOSITORY_SELECT_LEVEL_OFFSET UNITYSDK_OFFSET(0x1A2D440)
#define MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCELREPOSITORY_SELECTFIRST_LEVEL_OFFSET UNITYSDK_OFFSET(0x1A2D740)
#define MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCELREPOSITORY_SELECT_LEVELS_OFFSET UNITYSDK_OFFSET(0x1A2DA60)
#define MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A2DE60)
#define MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A2DEA0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterLevelStatFactorExcelRepository_TypeDefinitionIndex = 17047;

	class CharacterLevelStatFactorExcelRepository : public ::FlatData::ConsumeCondition
	{
	public:
		Il2CppObject* Select_Level(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCELREPOSITORY_SELECT_LEVEL_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Level(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCELREPOSITORY_SELECTFIRST_LEVEL_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Levels(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCELREPOSITORY_SELECT_LEVELS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELSTATFACTOREXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}


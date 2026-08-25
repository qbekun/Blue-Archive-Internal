#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CHARACTERGEARLEVELEXCELREPOSITORY_SELECTFIRST_LEVEL_OFFSET UNITYSDK_OFFSET(0x1A29DB0)
#define MX_DATA_EXCEL_CHARACTERGEARLEVELEXCELREPOSITORY_SELECT_LEVELS_OFFSET UNITYSDK_OFFSET(0x1A2A0D0)
#define MX_DATA_EXCEL_CHARACTERGEARLEVELEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A2A4D0)
#define MX_DATA_EXCEL_CHARACTERGEARLEVELEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A2A510)
#define MX_DATA_EXCEL_CHARACTERGEARLEVELEXCELREPOSITORY_SELECT_LEVEL_OFFSET UNITYSDK_OFFSET(0x1A2A680)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterGearLevelExcelRepository_TypeDefinitionIndex = 17026;

	class CharacterGearLevelExcelRepository : public ::FlatData::RecipeType
	{
	public:
		Il2CppObject* SelectFirst_Level(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEARLEVELEXCELREPOSITORY_SELECTFIRST_LEVEL_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Levels(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEARLEVELEXCELREPOSITORY_SELECT_LEVELS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEARLEVELEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEARLEVELEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_Level(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEARLEVELEXCELREPOSITORY_SELECT_LEVEL_OFFSET))(arg, arg, nullptr);
		}

	};
}


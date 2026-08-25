#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CHARACTERLEVELEXCELREPOSITORY_SELECT_LEVEL_OFFSET UNITYSDK_OFFSET(0x1A2C1D0)
#define MX_DATA_EXCEL_CHARACTERLEVELEXCELREPOSITORY_SELECT_LEVELS_OFFSET UNITYSDK_OFFSET(0x1A2C4D0)
#define MX_DATA_EXCEL_CHARACTERLEVELEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A2C8D0)
#define MX_DATA_EXCEL_CHARACTERLEVELEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A2CA40)
#define MX_DATA_EXCEL_CHARACTERLEVELEXCELREPOSITORY_SELECTFIRST_LEVEL_OFFSET UNITYSDK_OFFSET(0x1A2CA80)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterLevelExcelRepository_TypeDefinitionIndex = 17040;

	class CharacterLevelExcelRepository : public ::FlatData::ParcelChangeReason
	{
	public:
		Il2CppObject* Select_Level(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELEXCELREPOSITORY_SELECT_LEVEL_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Levels(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELEXCELREPOSITORY_SELECT_LEVELS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_Level(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERLEVELEXCELREPOSITORY_SELECTFIRST_LEVEL_OFFSET))(arg, arg, nullptr);
		}

	};
}


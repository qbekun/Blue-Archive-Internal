#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_BATTLELEVELFACTOREXCELREPOSITORY_SELECTFIRST_LEVELDIFF_OFFSET UNITYSDK_OFFSET(0x19E1770)
#define MX_DATA_EXCEL_BATTLELEVELFACTOREXCELREPOSITORY_SELECT_LEVELDIFF_OFFSET UNITYSDK_OFFSET(0x19E1A90)
#define MX_DATA_EXCEL_BATTLELEVELFACTOREXCELREPOSITORY_SELECT_LEVELDIFFS_OFFSET UNITYSDK_OFFSET(0x19E1D90)
#define MX_DATA_EXCEL_BATTLELEVELFACTOREXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x19E2190)
#define MX_DATA_EXCEL_BATTLELEVELFACTOREXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x19E21D0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int BattleLevelFactorExcelRepository_TypeDefinitionIndex = 16733;

	class BattleLevelFactorExcelRepository : public ::FlatData::RoadPuzzleVoiceCondition
	{
	public:
		Il2CppObject* SelectFirst_LevelDiff(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLELEVELFACTOREXCELREPOSITORY_SELECTFIRST_LEVELDIFF_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_LevelDiff(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLELEVELFACTOREXCELREPOSITORY_SELECT_LEVELDIFF_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_LevelDiffs(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLELEVELFACTOREXCELREPOSITORY_SELECT_LEVELDIFFS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLELEVELFACTOREXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLELEVELFACTOREXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}


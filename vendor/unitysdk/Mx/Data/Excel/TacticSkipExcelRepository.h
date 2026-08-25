#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_TACTICSKIPEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C9D4D0)
#define MX_DATA_EXCEL_TACTICSKIPEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C9D510)
#define MX_DATA_EXCEL_TACTICSKIPEXCELREPOSITORY_SELECT_LEVELDIFFS_OFFSET UNITYSDK_OFFSET(0x1C9D680)
#define MX_DATA_EXCEL_TACTICSKIPEXCELREPOSITORY_SELECTFIRST_LEVELDIFF_OFFSET UNITYSDK_OFFSET(0x1C9DA80)
#define MX_DATA_EXCEL_TACTICSKIPEXCELREPOSITORY_SELECT_LEVELDIFF_OFFSET UNITYSDK_OFFSET(0x1C9DDA0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int TacticSkipExcelRepository_TypeDefinitionIndex = 19585;

	class TacticSkipExcelRepository : public ::MXUnderCover::UCCountingBool
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICSKIPEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICSKIPEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_LevelDiffs(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICSKIPEXCELREPOSITORY_SELECT_LEVELDIFFS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_LevelDiff(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICSKIPEXCELREPOSITORY_SELECTFIRST_LEVELDIFF_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_LevelDiff(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICSKIPEXCELREPOSITORY_SELECT_LEVELDIFF_OFFSET))(arg, arg, nullptr);
		}

	};
}


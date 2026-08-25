#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_STATLEVELINTERPOLATIONEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C93570)
#define MX_DATA_EXCEL_STATLEVELINTERPOLATIONEXCELREPOSITORY_SELECT_LEVELS_OFFSET UNITYSDK_OFFSET(0x1C935B0)
#define MX_DATA_EXCEL_STATLEVELINTERPOLATIONEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C939B0)
#define MX_DATA_EXCEL_STATLEVELINTERPOLATIONEXCELREPOSITORY_SELECTFIRST_LEVEL_OFFSET UNITYSDK_OFFSET(0x1C93B20)
#define MX_DATA_EXCEL_STATLEVELINTERPOLATIONEXCELREPOSITORY_SELECT_LEVEL_OFFSET UNITYSDK_OFFSET(0x1C93E40)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int StatLevelInterpolationExcelRepository_TypeDefinitionIndex = 19536;

	class StatLevelInterpolationExcelRepository : public <co_LoadArtLevel>d__19
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STATLEVELINTERPOLATIONEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_Levels(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STATLEVELINTERPOLATIONEXCELREPOSITORY_SELECT_LEVELS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STATLEVELINTERPOLATIONEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_Level(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STATLEVELINTERPOLATIONEXCELREPOSITORY_SELECTFIRST_LEVEL_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Level(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STATLEVELINTERPOLATIONEXCELREPOSITORY_SELECT_LEVEL_OFFSET))(arg, arg, nullptr);
		}

	};
}


#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_FAVORLEVELEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B19C30)
#define MX_DATA_EXCEL_FAVORLEVELEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B19DA0)
#define MX_DATA_EXCEL_FAVORLEVELEXCELREPOSITORY_SELECTFIRST_LEVEL_OFFSET UNITYSDK_OFFSET(0x1B19DE0)
#define MX_DATA_EXCEL_FAVORLEVELEXCELREPOSITORY_SELECT_LEVELS_OFFSET UNITYSDK_OFFSET(0x1B1A100)
#define MX_DATA_EXCEL_FAVORLEVELEXCELREPOSITORY_SELECT_LEVEL_OFFSET UNITYSDK_OFFSET(0x1B1A500)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int FavorLevelExcelRepository_TypeDefinitionIndex = 17953;

	class FavorLevelExcelRepository : public <>c__37`1
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_Level(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELEXCELREPOSITORY_SELECTFIRST_LEVEL_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Levels(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELEXCELREPOSITORY_SELECT_LEVELS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Level(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELEXCELREPOSITORY_SELECT_LEVEL_OFFSET))(arg, arg, nullptr);
		}

	};
}


#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCELREPOSITORY_SELECT_STRATEGYOBJECTBUFFIDS_OFFSET UNITYSDK_OFFSET(0x1C99220)
#define MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCELREPOSITORY_SELECT_STRATEGYOBJECTBUFFID_OFFSET UNITYSDK_OFFSET(0x1C99620)
#define MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C99920)
#define MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCELREPOSITORY_SELECTFIRST_STRATEGYOBJECTBUFFID_OFFSET UNITYSDK_OFFSET(0x1C99A90)
#define MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C99DB0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int StrategyObjectBuffDefineExcelRepository_TypeDefinitionIndex = 19564;

	class StrategyObjectBuffDefineExcelRepository : public <>c__DisplayClass26_1
	{
	public:
		Il2CppObject* Select_StrategyObjectBuffIDs(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCELREPOSITORY_SELECT_STRATEGYOBJECTBUFFIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_StrategyObjectBuffID(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCELREPOSITORY_SELECT_STRATEGYOBJECTBUFFID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_StrategyObjectBuffID(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCELREPOSITORY_SELECTFIRST_STRATEGYOBJECTBUFFID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STRATEGYOBJECTBUFFDEFINEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}


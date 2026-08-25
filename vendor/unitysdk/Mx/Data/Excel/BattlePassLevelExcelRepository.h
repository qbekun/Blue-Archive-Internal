#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_BATTLEPASSLEVELEXCELREPOSITORY_SELECTFIRST_BATTLEPASSID_OFFSET UNITYSDK_OFFSET(0x19E69F0)
#define MX_DATA_EXCEL_BATTLEPASSLEVELEXCELREPOSITORY_SELECT_BATTLEPASSIDS_OFFSET UNITYSDK_OFFSET(0x19E6D10)
#define MX_DATA_EXCEL_BATTLEPASSLEVELEXCELREPOSITORY_SELECT_LEVELS_OFFSET UNITYSDK_OFFSET(0x19E7110)
#define MX_DATA_EXCEL_BATTLEPASSLEVELEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x19E7520)
#define MX_DATA_EXCEL_BATTLEPASSLEVELEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x19E7780)
#define MX_DATA_EXCEL_BATTLEPASSLEVELEXCELREPOSITORY_SELECT_LEVEL_OFFSET UNITYSDK_OFFSET(0x19E77C0)
#define MX_DATA_EXCEL_BATTLEPASSLEVELEXCELREPOSITORY_SELECT_BATTLEPASSID_OFFSET UNITYSDK_OFFSET(0x19E7AD0)
#define MX_DATA_EXCEL_BATTLEPASSLEVELEXCELREPOSITORY_SELECTFIRST_LEVEL_OFFSET UNITYSDK_OFFSET(0x19E7DD0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int BattlePassLevelExcelRepository_TypeDefinitionIndex = 16764;

	class BattlePassLevelExcelRepository : public ::FlatData::TBGItemType
	{
	public:
		Il2CppObject* SelectFirst_BattlePassId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSLEVELEXCELREPOSITORY_SELECTFIRST_BATTLEPASSID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_BattlePassIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSLEVELEXCELREPOSITORY_SELECT_BATTLEPASSIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Levels(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSLEVELEXCELREPOSITORY_SELECT_LEVELS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSLEVELEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSLEVELEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_Level(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSLEVELEXCELREPOSITORY_SELECT_LEVEL_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_BattlePassId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSLEVELEXCELREPOSITORY_SELECT_BATTLEPASSID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Level(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BATTLEPASSLEVELEXCELREPOSITORY_SELECTFIRST_LEVEL_OFFSET))(arg, arg, nullptr);
		}

	};
}


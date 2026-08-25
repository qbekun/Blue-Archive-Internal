#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCELREPOSITORY_SELECTFIRST_SEASONREWARDID_OFFSET UNITYSDK_OFFSET(0x1A892B0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A895D0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A89740)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCELREPOSITORY_SELECT_SEASONREWARDID_OFFSET UNITYSDK_OFFSET(0x1A89780)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCELREPOSITORY_SELECT_SEASONREWARDIDS_OFFSET UNITYSDK_OFFSET(0x1A89A80)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EliminateRaidStageSeasonRewardExcelRepository_TypeDefinitionIndex = 17426;

	class EliminateRaidStageSeasonRewardExcelRepository : public ::FlatData::MessagePopupLayout
	{
	public:
		Il2CppObject* SelectFirst_SeasonRewardId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCELREPOSITORY_SELECTFIRST_SEASONREWARDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_SeasonRewardId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCELREPOSITORY_SELECT_SEASONREWARDID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_SeasonRewardIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDEXCELREPOSITORY_SELECT_SEASONREWARDIDS_OFFSET))(arg, arg, nullptr);
		}

	};
}


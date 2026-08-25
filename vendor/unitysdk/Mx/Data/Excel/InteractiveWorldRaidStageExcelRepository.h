#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTAGEEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1B65E90)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTAGEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B66290)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTAGEEXCELREPOSITORY_SELECT_WORLDRAIDBOSSGROUPID_OFFSET UNITYSDK_OFFSET(0x1B664F0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTAGEEXCELREPOSITORY_SELECT_WORLDRAIDBOSSGROUPIDS_OFFSET UNITYSDK_OFFSET(0x1B66800)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTAGEEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1B66C10)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTAGEEXCELREPOSITORY_SELECTFIRST_WORLDRAIDBOSSGROUPID_OFFSET UNITYSDK_OFFSET(0x1B66F30)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTAGEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B67250)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTAGEEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1B67290)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int InteractiveWorldRaidStageExcelRepository_TypeDefinitionIndex = 18275;

	class InteractiveWorldRaidStageExcelRepository : public <co_Invoke>d__3
	{
	public:
		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTAGEEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTAGEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_WorldRaidBossGroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTAGEEXCELREPOSITORY_SELECT_WORLDRAIDBOSSGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_WorldRaidBossGroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTAGEEXCELREPOSITORY_SELECT_WORLDRAIDBOSSGROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTAGEEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_WorldRaidBossGroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTAGEEXCELREPOSITORY_SELECTFIRST_WORLDRAIDBOSSGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTAGEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDSTAGEEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

	};
}


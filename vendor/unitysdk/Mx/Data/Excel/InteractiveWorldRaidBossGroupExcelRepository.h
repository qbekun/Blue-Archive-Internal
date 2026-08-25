#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDBOSSGROUPEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1B541D0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDBOSSGROUPEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1B545D0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDBOSSGROUPEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B548F0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDBOSSGROUPEXCELREPOSITORY_SELECT_WORLDRAIDBOSSGROUPIDS_OFFSET UNITYSDK_OFFSET(0x1B54930)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDBOSSGROUPEXCELREPOSITORY_SELECT_WORLDRAIDBOSSGROUPID_OFFSET UNITYSDK_OFFSET(0x1B54D40)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDBOSSGROUPEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1B55050)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDBOSSGROUPEXCELREPOSITORY_SELECTFIRST_WORLDRAIDBOSSGROUPID_OFFSET UNITYSDK_OFFSET(0x1B55350)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDBOSSGROUPEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B55670)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int InteractiveWorldRaidBossGroupExcelRepository_TypeDefinitionIndex = 18214;

	class InteractiveWorldRaidBossGroupExcelRepository : public ::MXUnderCover::UCTrigger
	{
	public:
		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDBOSSGROUPEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDBOSSGROUPEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDBOSSGROUPEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_WorldRaidBossGroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDBOSSGROUPEXCELREPOSITORY_SELECT_WORLDRAIDBOSSGROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_WorldRaidBossGroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDBOSSGROUPEXCELREPOSITORY_SELECT_WORLDRAIDBOSSGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDBOSSGROUPEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_WorldRaidBossGroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDBOSSGROUPEXCELREPOSITORY_SELECTFIRST_WORLDRAIDBOSSGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDBOSSGROUPEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}


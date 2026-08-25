#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1CD2320)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCELREPOSITORY_SELECT_WORLDRAIDBOSSGROUPIDS_OFFSET UNITYSDK_OFFSET(0x1CD2580)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCELREPOSITORY_SELECT_WORLDRAIDBOSSGROUPID_OFFSET UNITYSDK_OFFSET(0x1CD2990)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1CD2CA0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1CD2FA0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CD32C0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCELREPOSITORY_SELECTFIRST_WORLDRAIDBOSSGROUPID_OFFSET UNITYSDK_OFFSET(0x1CD3300)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1CD3620)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int WorldRaidStageExcelRepository_TypeDefinitionIndex = 19835;

	class WorldRaidStageExcelRepository : public ::MXUnderCover::UCParticleSpawnInfo
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_WorldRaidBossGroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCELREPOSITORY_SELECT_WORLDRAIDBOSSGROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_WorldRaidBossGroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCELREPOSITORY_SELECT_WORLDRAIDBOSSGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_WorldRaidBossGroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCELREPOSITORY_SELECTFIRST_WORLDRAIDBOSSGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

	};
}


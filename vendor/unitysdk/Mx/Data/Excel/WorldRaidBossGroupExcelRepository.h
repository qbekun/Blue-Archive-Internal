#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1CC9AB0)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCELREPOSITORY_SELECTFIRST_WORLDRAIDBOSSGROUPID_OFFSET UNITYSDK_OFFSET(0x1CC9DD0)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCELREPOSITORY_SELECT_WORLDRAIDBOSSGROUPID_OFFSET UNITYSDK_OFFSET(0x1CCA0F0)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1CCA400)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CCA800)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCELREPOSITORY_SELECT_WORLDRAIDBOSSGROUPIDS_OFFSET UNITYSDK_OFFSET(0x1CCA840)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1CCAC50)
#define MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1CCAF50)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int WorldRaidBossGroupExcelRepository_TypeDefinitionIndex = 19804;

	class WorldRaidBossGroupExcelRepository : public ::MXUnderCover::StartLoadInvenMessage
	{
	public:
		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_WorldRaidBossGroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCELREPOSITORY_SELECTFIRST_WORLDRAIDBOSSGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_WorldRaidBossGroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCELREPOSITORY_SELECT_WORLDRAIDBOSSGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_WorldRaidBossGroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCELREPOSITORY_SELECT_WORLDRAIDBOSSGROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDBOSSGROUPEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}


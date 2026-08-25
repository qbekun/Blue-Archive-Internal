#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class RaidBossGroupType; }

#define MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C25E50)
#define MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCELREPOSITORY_SELECT_TYPE_OFFSET UNITYSDK_OFFSET(0x1C25FC0)
#define MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCELREPOSITORY_SELECT_TYPES_OFFSET UNITYSDK_OFFSET(0x1C26310)
#define MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C26710)
#define MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCELREPOSITORY_SELECTFIRST_TYPE_OFFSET UNITYSDK_OFFSET(0x1C26750)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int PermanentRaidManageExcelRepository_TypeDefinitionIndex = 19025;

	class PermanentRaidManageExcelRepository : public <co_InternalInvoke>d__0
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_Type(::FlatData::RaidBossGroupType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::RaidBossGroupType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCELREPOSITORY_SELECT_TYPE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Types(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCELREPOSITORY_SELECT_TYPES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_Type(::FlatData::RaidBossGroupType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::RaidBossGroupType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PERMANENTRAIDMANAGEEXCELREPOSITORY_SELECTFIRST_TYPE_OFFSET))(arg, arg, nullptr);
		}

	};
}


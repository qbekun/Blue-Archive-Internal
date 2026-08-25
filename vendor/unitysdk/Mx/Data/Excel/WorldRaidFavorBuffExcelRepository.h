#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_WORLDRAIDFAVORBUFFEXCELREPOSITORY_SELECT_WORLDRAIDFAVORRANK_OFFSET UNITYSDK_OFFSET(0x1CCD0B0)
#define MX_DATA_EXCEL_WORLDRAIDFAVORBUFFEXCELREPOSITORY_SELECTFIRST_WORLDRAIDFAVORRANK_OFFSET UNITYSDK_OFFSET(0x1CCD3B0)
#define MX_DATA_EXCEL_WORLDRAIDFAVORBUFFEXCELREPOSITORY_SELECT_WORLDRAIDFAVORRANKS_OFFSET UNITYSDK_OFFSET(0x1CCD6D0)
#define MX_DATA_EXCEL_WORLDRAIDFAVORBUFFEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1CCDAD0)
#define MX_DATA_EXCEL_WORLDRAIDFAVORBUFFEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CCDC40)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int WorldRaidFavorBuffExcelRepository_TypeDefinitionIndex = 19818;

	class WorldRaidFavorBuffExcelRepository : public ::MXUnderCover::HealMessage
	{
	public:
		Il2CppObject* Select_WorldRaidFavorRank(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDFAVORBUFFEXCELREPOSITORY_SELECT_WORLDRAIDFAVORRANK_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_WorldRaidFavorRank(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDFAVORBUFFEXCELREPOSITORY_SELECTFIRST_WORLDRAIDFAVORRANK_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_WorldRaidFavorRanks(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDFAVORBUFFEXCELREPOSITORY_SELECT_WORLDRAIDFAVORRANKS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDFAVORBUFFEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDFAVORBUFFEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}


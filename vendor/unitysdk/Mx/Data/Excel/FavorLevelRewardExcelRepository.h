#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_FAVORLEVELREWARDEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B1B070)
#define MX_DATA_EXCEL_FAVORLEVELREWARDEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B1B1E0)
#define MX_DATA_EXCEL_FAVORLEVELREWARDEXCELREPOSITORY_SELECTFIRST_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1B1B220)
#define MX_DATA_EXCEL_FAVORLEVELREWARDEXCELREPOSITORY_SELECT_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1B1B540)
#define MX_DATA_EXCEL_FAVORLEVELREWARDEXCELREPOSITORY_SELECT_CHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x1B1B840)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int FavorLevelRewardExcelRepository_TypeDefinitionIndex = 17960;

	class FavorLevelRewardExcelRepository : public <>c__38`1
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELREWARDEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELREWARDEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_CharacterId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELREWARDEXCELREPOSITORY_SELECTFIRST_CHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_CharacterId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELREWARDEXCELREPOSITORY_SELECT_CHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_CharacterIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELREWARDEXCELREPOSITORY_SELECT_CHARACTERIDS_OFFSET))(arg, arg, nullptr);
		}

	};
}


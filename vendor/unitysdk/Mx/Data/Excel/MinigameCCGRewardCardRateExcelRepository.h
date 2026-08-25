#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BA0790)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEEXCELREPOSITORY_SELECTFIRST_RARITYGROUPID_OFFSET UNITYSDK_OFFSET(0x1BA07D0)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1BA0AF0)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEEXCELREPOSITORY_SELECT_RARITYGROUPIDS_OFFSET UNITYSDK_OFFSET(0x1BA0C60)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEEXCELREPOSITORY_SELECT_RARITYGROUPID_OFFSET UNITYSDK_OFFSET(0x1BA1060)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameCCGRewardCardRateExcelRepository_TypeDefinitionIndex = 18543;

	class MinigameCCGRewardCardRateExcelRepository : public <>c__DisplayClass0_0
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_RarityGroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEEXCELREPOSITORY_SELECTFIRST_RARITYGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_RarityGroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEEXCELREPOSITORY_SELECT_RARITYGROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_RarityGroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDCARDRATEEXCELREPOSITORY_SELECT_RARITYGROUPID_OFFSET))(arg, arg, nullptr);
		}

	};
}


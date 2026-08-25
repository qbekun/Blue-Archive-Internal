#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ClanRewardType; }

#define MX_DATA_EXCEL_CLANREWARDEXCELREPOSITORY_SELECTFIRST_CLANREWARDTYPE_OFFSET UNITYSDK_OFFSET(0x1A4F110)
#define MX_DATA_EXCEL_CLANREWARDEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A4F470)
#define MX_DATA_EXCEL_CLANREWARDEXCELREPOSITORY_SELECT_CLANREWARDTYPE_OFFSET UNITYSDK_OFFSET(0x1A4F5E0)
#define MX_DATA_EXCEL_CLANREWARDEXCELREPOSITORY_SELECT_CLANREWARDTYPES_OFFSET UNITYSDK_OFFSET(0x1A4F930)
#define MX_DATA_EXCEL_CLANREWARDEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A4FD30)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ClanRewardExcelRepository_TypeDefinitionIndex = 17181;

	class ClanRewardExcelRepository : public ::FlatData::ScenarioModeTypes
	{
	public:
		Il2CppObject* SelectFirst_ClanRewardType(::FlatData::ClanRewardType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ClanRewardType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANREWARDEXCELREPOSITORY_SELECTFIRST_CLANREWARDTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANREWARDEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_ClanRewardType(::FlatData::ClanRewardType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ClanRewardType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANREWARDEXCELREPOSITORY_SELECT_CLANREWARDTYPE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_ClanRewardTypes(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANREWARDEXCELREPOSITORY_SELECT_CLANREWARDTYPES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CLANREWARDEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}


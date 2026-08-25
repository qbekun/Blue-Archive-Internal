#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET UNITYSDK_OFFSET(0x1C6B6D0)
#define MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C6B9F0)
#define MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C6BA30)
#define MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCELREPOSITORY_SELECT_GROUPID_OFFSET UNITYSDK_OFFSET(0x1C6BBA0)
#define MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET UNITYSDK_OFFSET(0x1C6BEA0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int SchoolDungeonRewardExcelRepository_TypeDefinitionIndex = 19345;

	class SchoolDungeonRewardExcelRepository : public ::MXUnderCover::UCItemModel
	{
	public:
		Il2CppObject* SelectFirst_GroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_GroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCELREPOSITORY_SELECT_GROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_GroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONREWARDEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET))(arg, arg, nullptr);
		}

	};
}


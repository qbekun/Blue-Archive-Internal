#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CBF520)
#define MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1CBF560)
#define MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCELREPOSITORY_SELECT_GROUPID_OFFSET UNITYSDK_OFFSET(0x1CBF6D0)
#define MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET UNITYSDK_OFFSET(0x1CBF9D0)
#define MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET UNITYSDK_OFFSET(0x1CBFCF0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int WeekDungeonRewardExcelRepository_TypeDefinitionIndex = 19756;

	class WeekDungeonRewardExcelRepository : public ::MXUnderCover::RefreshMainUIButtonsMessage
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_GroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCELREPOSITORY_SELECT_GROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_GroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_GroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONREWARDEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET))(arg, arg, nullptr);
		}

	};
}


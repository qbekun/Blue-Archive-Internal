#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class WeekDay; }

#define MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEEXCELREPOSITORY_SELECT_WEEKDAYS_OFFSET UNITYSDK_OFFSET(0x1CBE020)
#define MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEEXCELREPOSITORY_SELECT_WEEKDAY_OFFSET UNITYSDK_OFFSET(0x1CBE420)
#define MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1CBE770)
#define MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CBE8E0)
#define MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEEXCELREPOSITORY_SELECTFIRST_WEEKDAY_OFFSET UNITYSDK_OFFSET(0x1CBE920)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int WeekDungeonOpenScheduleExcelRepository_TypeDefinitionIndex = 19749;

	class WeekDungeonOpenScheduleExcelRepository : public RefreshEventType
	{
	public:
		Il2CppObject* Select_WeekDays(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEEXCELREPOSITORY_SELECT_WEEKDAYS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_WeekDay(::FlatData::WeekDay* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::WeekDay*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEEXCELREPOSITORY_SELECT_WEEKDAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_WeekDay(::FlatData::WeekDay* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::WeekDay*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEEXCELREPOSITORY_SELECTFIRST_WEEKDAY_OFFSET))(arg, arg, nullptr);
		}

	};
}


#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class WeekDay; }

#define MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEDBSCHEMA_SET_WEEKDAY_OFFSET UNITYSDK_OFFSET(0x1CBDFF0)
#define MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CBE000)
#define MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEDBSCHEMA_GET_WEEKDAY_OFFSET UNITYSDK_OFFSET(0x1CBE010)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int WeekDungeonOpenScheduleDBSchema_TypeDefinitionIndex = 19744;

	class WeekDungeonOpenScheduleDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::FlatData::WeekDay* _WeekDay_k__BackingField; // 0x20

		::System::Void set_WeekDay(::FlatData::WeekDay* arg)
		{
			((::System::Void(*)(::FlatData::WeekDay*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEDBSCHEMA_SET_WEEKDAY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::WeekDay* get_WeekDay()
		{
			return (return (::FlatData::WeekDay*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONOPENSCHEDULEDBSCHEMA_GET_WEEKDAY_OFFSET))(nullptr);
		}

	};
}


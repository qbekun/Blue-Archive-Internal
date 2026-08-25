#pragma once
#include "../unitysdk.h"

#define NPA_NPNOTIFICATIONTIME_GET_YEAR_OFFSET UNITYSDK_OFFSET(0x9BCBAD0)
#define NPA_NPNOTIFICATIONTIME_SET_YEAR_OFFSET UNITYSDK_OFFSET(0x9BCBAE0)
#define NPA_NPNOTIFICATIONTIME_GET_MONTH_OFFSET UNITYSDK_OFFSET(0x9BCBAF0)
#define NPA_NPNOTIFICATIONTIME_SET_MONTH_OFFSET UNITYSDK_OFFSET(0x9BCBB00)
#define NPA_NPNOTIFICATIONTIME_GET_DAY_OFFSET UNITYSDK_OFFSET(0x9BCBB10)
#define NPA_NPNOTIFICATIONTIME_SET_DAY_OFFSET UNITYSDK_OFFSET(0x9BCBB20)
#define NPA_NPNOTIFICATIONTIME_GET_HOUR_OFFSET UNITYSDK_OFFSET(0x9BCBB30)
#define NPA_NPNOTIFICATIONTIME_SET_HOUR_OFFSET UNITYSDK_OFFSET(0x9BCBB40)
#define NPA_NPNOTIFICATIONTIME_GET_MINUTE_OFFSET UNITYSDK_OFFSET(0x9BCBB50)
#define NPA_NPNOTIFICATIONTIME_SET_MINUTE_OFFSET UNITYSDK_OFFSET(0x9BCBB60)
#define NPA_NPNOTIFICATIONTIME_GET_SEC_OFFSET UNITYSDK_OFFSET(0x9BCBB70)
#define NPA_NPNOTIFICATIONTIME_SET_SEC_OFFSET UNITYSDK_OFFSET(0x9BCBB80)
#define NPA_NPNOTIFICATIONTIME_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BCB990)

namespace NPA
{
	inline static constexpr unsigned int NPNotificationTime_TypeDefinitionIndex = 25648;

	class NPNotificationTime : public Il2CppObject
	{
	public:
		::System::Int32 _year_k__BackingField; // 0x10
		::System::Int32 _month_k__BackingField; // 0x14
		::System::Int32 _day_k__BackingField; // 0x18
		::System::Int32 _hour_k__BackingField; // 0x1C
		::System::Int32 _minute_k__BackingField; // 0x20
		::System::Int32 _sec_k__BackingField; // 0x24

		::System::Int32 get_year()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NPNOTIFICATIONTIME_GET_YEAR_OFFSET))(nullptr);
		}

		::System::Void set_year(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPNOTIFICATIONTIME_SET_YEAR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_month()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NPNOTIFICATIONTIME_GET_MONTH_OFFSET))(nullptr);
		}

		::System::Void set_month(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPNOTIFICATIONTIME_SET_MONTH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_day()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NPNOTIFICATIONTIME_GET_DAY_OFFSET))(nullptr);
		}

		::System::Void set_day(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPNOTIFICATIONTIME_SET_DAY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_hour()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NPNOTIFICATIONTIME_GET_HOUR_OFFSET))(nullptr);
		}

		::System::Void set_hour(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPNOTIFICATIONTIME_SET_HOUR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_minute()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NPNOTIFICATIONTIME_GET_MINUTE_OFFSET))(nullptr);
		}

		::System::Void set_minute(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPNOTIFICATIONTIME_SET_MINUTE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_sec()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NPNOTIFICATIONTIME_GET_SEC_OFFSET))(nullptr);
		}

		::System::Void set_sec(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPNOTIFICATIONTIME_SET_SEC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPNOTIFICATIONTIME_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

